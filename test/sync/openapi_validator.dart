import 'dart:convert';
import 'dart:io';

/// Checks JSON against a schema from fishsense-services' OpenAPI document
/// (test/fixtures/fishsense_services_openapi.json), for the JSON Schema
/// features that document uses. Returns the problems found, empty if none.
class OpenApi {
  OpenApi._(this._schemas);

  static OpenApi load() {
    final doc = jsonDecode(
            File('test/fixtures/fishsense_services_openapi.json').readAsStringSync())
        as Map<String, dynamic>;
    return OpenApi._((doc['components'] as Map)['schemas'] as Map<String, dynamic>);
  }

  final Map<String, dynamic> _schemas;

  List<String> validate(Object? value, String schemaName) {
    final errors = <String>[];
    _check(value, {r'$ref': '#/components/schemas/$schemaName'}, schemaName, errors);
    return errors;
  }

  void _check(Object? v, Map<String, dynamic> schema, String at, List<String> errors) {
    if (schema[r'$ref'] case final String ref) {
      _check(v, _schemas[ref.split('/').last] as Map<String, dynamic>, at, errors);
      return;
    }
    if (schema['anyOf'] case final List<dynamic> options) {
      final ok = options.any((o) {
        final e = <String>[];
        _check(v, o as Map<String, dynamic>, at, e);
        return e.isEmpty;
      });
      if (!ok) errors.add('$at: matches none of anyOf');
      return;
    }
    final type = schema['type'];
    bool isType(String t) => switch (t) {
          'null' => v == null,
          'string' => v is String,
          'integer' => v is int,
          'number' => v is num,
          'boolean' => v is bool,
          'array' => v is List,
          'object' => v is Map,
          _ => true,
        };
    if (type is String && !isType(type)) {
      errors.add('$at: expected $type, got ${v.runtimeType}');
      return;
    }
    if (schema['enum'] case final List<dynamic> values when !values.contains(v)) {
      errors.add('$at: $v not in $values');
    }
    if (v is String) {
      if (schema['pattern'] case final String pattern when !RegExp(pattern).hasMatch(v)) {
        errors.add('$at: "$v" does not match $pattern');
      }
      if (schema['minLength'] case final num min when v.length < min) {
        errors.add('$at: shorter than $min');
      }
      if (schema['format'] == 'date-time' && DateTime.tryParse(v) == null) {
        errors.add('$at: "$v" is not a date-time');
      }
      if (schema['format'] == 'uuid' &&
          !RegExp(r'^[0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12}$')
              .hasMatch(v)) {
        errors.add('$at: "$v" is not a UUID');
      }
    }
    if (v is num) {
      if (schema['minimum'] case final num min when v < min) errors.add('$at: < $min');
      if (schema['maximum'] case final num max when v > max) errors.add('$at: > $max');
      if (schema['exclusiveMinimum'] case final num min when v <= min) {
        errors.add('$at: <= $min');
      }
    }
    if (v is List) {
      if (schema['minItems'] case final num min when v.length < min) {
        errors.add('$at: fewer than $min items');
      }
      if (schema['maxItems'] case final num max when v.length > max) {
        errors.add('$at: more than $max items');
      }
      if (schema['items'] case final Map<String, dynamic> items) {
        for (var i = 0; i < v.length; i++) {
          _check(v[i], items, '$at[$i]', errors);
        }
      }
    }
    if (v is Map) {
      for (final name in (schema['required'] as List<dynamic>? ?? const [])) {
        if (!v.containsKey(name)) errors.add('$at: missing required "$name"');
      }
      final props = schema['properties'] as Map<String, dynamic>? ?? const {};
      v.forEach((key, value) {
        if (props[key] case final Map<String, dynamic> p) {
          _check(value, p, '$at.$key', errors);
        } else if (schema['additionalProperties'] == false) {
          errors.add('$at: unexpected "$key"');
        }
      });
    }
  }
}
