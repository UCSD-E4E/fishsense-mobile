import 'package:flutter/material.dart';
import 'package:provider/provider.dart';

import '../logger.dart';
import '../services/auth_service.dart';
import '../services/preferences_service.dart';

/// User preferences panel: the optional account used to sync, and
/// display units. Future toggles (offline mode, debug logging, etc.)
/// belong here too.
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
          _SectionHeader('Account'),
          _AccountTile(),
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

/// Rounded card shared by the settings tiles.
class _Card extends StatelessWidget {
  final Widget child;
  const _Card({required this.child});

  @override
  Widget build(BuildContext context) {
    return Padding(
      padding: const EdgeInsets.symmetric(horizontal: 16),
      child: Container(
        padding: const EdgeInsets.symmetric(horizontal: 16, vertical: 12),
        decoration: BoxDecoration(
          color: Colors.grey[900],
          borderRadius: BorderRadius.circular(12),
          border: Border.all(color: Colors.grey[800]!),
        ),
        child: child,
      ),
    );
  }
}

/// Sign-in is optional: it's only needed to sync. Signed out, the app
/// captures as usual.
class _AccountTile extends StatelessWidget {
  const _AccountTile();

  static const _accent = Color(0xFF00AAA5);

  Future<void> _signIn(BuildContext context) async {
    final auth = context.read<AuthService>();
    final messenger = ScaffoldMessenger.of(context);
    try {
      await auth.signIn();
    } catch (e) {
      log.e('Sign-in failed', error: e);
      messenger.showSnackBar(
        const SnackBar(content: Text('Sign-in failed. Check your connection and try again.')),
      );
    }
  }

  Future<void> _signOut(BuildContext context) async {
    final auth = context.read<AuthService>();
    final confirmed = await showDialog<bool>(
      context: context,
      builder: (context) => AlertDialog(
        backgroundColor: Colors.grey[900],
        title: const Text('Sign out?', style: TextStyle(color: Colors.white)),
        content: Text(
          'Captures stay on this phone. Ones you took while signed in '
          'can only be synced by your account.',
          style: TextStyle(color: Colors.grey[300]),
        ),
        actions: [
          TextButton(
            onPressed: () => Navigator.of(context).pop(false),
            child: const Text('Cancel'),
          ),
          TextButton(
            onPressed: () => Navigator.of(context).pop(true),
            child: const Text('Sign out', style: TextStyle(color: Colors.redAccent)),
          ),
        ],
      ),
    );
    if (confirmed == true) await auth.signOut();
  }

  @override
  Widget build(BuildContext context) {
    final auth = context.watch<AuthService>();
    final caption = TextStyle(color: Colors.grey[400], fontSize: 12);
    const title = TextStyle(
      color: Colors.white,
      fontSize: 16,
      fontWeight: FontWeight.w600,
    );

    if (!auth.isSignedIn) {
      return _Card(
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            const Text('Not signed in', style: title),
            const SizedBox(height: 4),
            Text(
              'Sign in to sync your captures to FishSense. You can capture '
              'without an account.',
              style: caption,
            ),
            const SizedBox(height: 12),
            FilledButton.icon(
              onPressed: auth.busy ? null : () => _signIn(context),
              style: FilledButton.styleFrom(
                backgroundColor: _accent,
                foregroundColor: Colors.black,
              ),
              icon: auth.busy
                  ? const SizedBox(
                      width: 16,
                      height: 16,
                      child: CircularProgressIndicator(strokeWidth: 2),
                    )
                  : const Icon(Icons.login),
              label: const Text('Sign in'),
            ),
          ],
        ),
      );
    }

    final tenants = auth.tenants;
    return _Card(
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          Text(auth.displayName ?? 'Signed in', style: title),
          if (auth.needsSignInAgain) ...[
            const SizedBox(height: 8),
            Text(
              'Your sign-in has expired. Sign in again to sync.',
              style: TextStyle(color: Colors.orange[300], fontSize: 12),
            ),
            const SizedBox(height: 8),
            OutlinedButton(
              onPressed: auth.busy ? null : () => _signIn(context),
              child: const Text('Sign in again'),
            ),
          ],
          const SizedBox(height: 12),
          const Text('Organization', style: TextStyle(color: Colors.white)),
          const SizedBox(height: 4),
          if (tenants.isEmpty)
            Row(
              children: [
                Expanded(
                  child: Text(
                    'No organization found yet. Captures will sync once '
                    'your account belongs to one.',
                    style: caption,
                  ),
                ),
                IconButton(
                  tooltip: 'Check again',
                  onPressed: auth.busy ? null : auth.refreshMemberships,
                  icon: const Icon(Icons.refresh, color: Colors.white70),
                ),
              ],
            )
          else if (tenants.length == 1)
            Text(tenants.single.name, style: caption)
          else ...[
            DropdownButton<String>(
              value: auth.tenant?.slug,
              hint: Text('Choose where captures sync', style: caption),
              isExpanded: true,
              dropdownColor: Colors.grey[850],
              style: const TextStyle(color: Colors.white),
              items: [
                for (final t in tenants)
                  DropdownMenuItem(value: t.slug, child: Text(t.name)),
              ],
              onChanged: (slug) {
                if (slug != null) auth.selectTenant(slug);
              },
            ),
          ],
          const SizedBox(height: 12),
          TextButton.icon(
            onPressed: auth.busy ? null : () => _signOut(context),
            icon: const Icon(Icons.logout, color: Colors.redAccent),
            label: const Text('Sign out', style: TextStyle(color: Colors.redAccent)),
          ),
        ],
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
