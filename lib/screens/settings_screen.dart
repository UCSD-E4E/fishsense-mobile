import 'package:flutter/material.dart';
import 'package:provider/provider.dart';

import '../services/preferences_service.dart';

/// User preferences panel. Currently only exposes display units; future
/// toggles (offline mode, debug logging, etc.) belong here too.
class SettingsScreen extends StatelessWidget {
  const SettingsScreen({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Colors.black,
      appBar: AppBar(
        backgroundColor: Colors.black,
        title: const Text(
          'Settings',
          style: TextStyle(color: Colors.white),
        ),
      ),
      body: ListView(
        children: const [
          _SectionHeader('Measurements'),
          _UnitsTile(),
        ],
      ),
    );
  }
}

class _SectionHeader extends StatelessWidget {
  final String title;
  const _SectionHeader(this.title);

  @override
  Widget build(BuildContext context) {
    return Padding(
      padding: const EdgeInsets.fromLTRB(16, 24, 16, 8),
      child: Text(
        title.toUpperCase(),
        style: const TextStyle(
          color: Color(0xFF00AAA5),
          fontSize: 12,
          fontWeight: FontWeight.bold,
          letterSpacing: 1.2,
        ),
      ),
    );
  }
}

class _UnitsTile extends StatelessWidget {
  const _UnitsTile();

  @override
  Widget build(BuildContext context) {
    final prefs = context.watch<PreferencesService>();
    final preview = prefs.formatFishLength(0.452);

    return Padding(
      padding: const EdgeInsets.symmetric(horizontal: 16),
      child: Container(
        padding: const EdgeInsets.symmetric(horizontal: 16, vertical: 12),
        decoration: BoxDecoration(
          color: Colors.grey[900],
          borderRadius: BorderRadius.circular(12),
          border: Border.all(color: Colors.grey[800]!),
        ),
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            const Text(
              'Units',
              style: TextStyle(
                color: Colors.white,
                fontSize: 16,
                fontWeight: FontWeight.w600,
              ),
            ),
            const SizedBox(height: 4),
            Text(
              'Affects how fish length is displayed. Captures are always '
              'stored in metric.',
              style: TextStyle(color: Colors.grey[400], fontSize: 12),
            ),
            const SizedBox(height: 12),
            SegmentedButton<UnitsSystem>(
              segments: const [
                ButtonSegment(
                  value: UnitsSystem.metric,
                  label: Text('Metric'),
                  icon: Icon(Icons.straighten),
                ),
                ButtonSegment(
                  value: UnitsSystem.imperial,
                  label: Text('Imperial'),
                  icon: Icon(Icons.square_foot),
                ),
              ],
              selected: {prefs.units},
              onSelectionChanged: (selection) =>
                  prefs.setUnits(selection.first),
              style: ButtonStyle(
                backgroundColor: WidgetStateProperty.resolveWith((states) {
                  if (states.contains(WidgetState.selected)) {
                    return const Color(0xFF00AAA5);
                  }
                  return Colors.grey[850];
                }),
                foregroundColor: WidgetStateProperty.resolveWith((states) {
                  if (states.contains(WidgetState.selected)) {
                    return Colors.black;
                  }
                  return Colors.white70;
                }),
                side: WidgetStateProperty.all(
                  BorderSide(color: Colors.grey[700]!),
                ),
              ),
            ),
            const SizedBox(height: 12),
            Row(
              children: [
                Text(
                  'Example: ',
                  style: TextStyle(color: Colors.grey[500], fontSize: 12),
                ),
                Text(
                  preview,
                  style: const TextStyle(
                    color: Colors.white,
                    fontSize: 13,
                    fontWeight: FontWeight.w600,
                  ),
                ),
              ],
            ),
          ],
        ),
      ),
    );
  }
}
