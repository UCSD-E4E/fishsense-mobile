import 'package:logger/logger.dart';

/// App-wide logger. Use the level that matches the audience:
///   log.d() — debug (verbose, dev-only)
///   log.i() — info (normal operation milestones)
///   log.w() — warning (recoverable problems)
///   log.e() — error (failures that affect the user)
final log = Logger(
  printer: PrettyPrinter(
    methodCount: 1,
    errorMethodCount: 8,
    lineLength: 100,
    colors: true,
    printEmojis: true,
    dateTimeFormat: DateTimeFormat.onlyTimeAndSinceStart,
  ),
);
