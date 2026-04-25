import 'package:flutter/material.dart';
import 'package:permission_handler/permission_handler.dart';
import '../services/onboarding_state.dart';
import '../services/permissions_service.dart';

/// OnboardingScreen - first-launch intro that explains the app and
/// pre-prompts for camera + location permissions.
///
/// Skippable: every page has a "Skip" in the app bar. After onboarding the
/// user won't be asked again, regardless of what they granted — capture
/// still works without location, and denied camera is handled by the
/// underlying ARKit session returning nothing.
class OnboardingScreen extends StatefulWidget {
  final VoidCallback onComplete;

  const OnboardingScreen({super.key, required this.onComplete});

  @override
  State<OnboardingScreen> createState() => _OnboardingScreenState();
}

class _OnboardingScreenState extends State<OnboardingScreen> {
  static const _accent = Color(0xFF00AAA5);

  final PageController _pageController = PageController();
  int _pageIndex = 0;

  PermissionStatus? _cameraStatus;
  PermissionStatus? _locationStatus;

  @override
  void initState() {
    super.initState();
    _refreshStatuses();
  }

  @override
  void dispose() {
    _pageController.dispose();
    super.dispose();
  }

  Future<void> _refreshStatuses() async {
    final camera = await PermissionsService.cameraStatus();
    final location = await PermissionsService.locationStatus();
    if (!mounted) return;
    setState(() {
      _cameraStatus = camera;
      _locationStatus = location;
    });
  }

  Future<void> _handleCameraRequest() async {
    final status = await PermissionsService.cameraStatus();
    if (status.isPermanentlyDenied) {
      await PermissionsService.openSettings();
    } else {
      await PermissionsService.requestCamera();
    }
    await _refreshStatuses();
  }

  Future<void> _handleLocationRequest() async {
    final status = await PermissionsService.locationStatus();
    if (status.isPermanentlyDenied) {
      await PermissionsService.openSettings();
    } else {
      await PermissionsService.requestLocation();
    }
    await _refreshStatuses();
  }

  void _next() {
    if (_pageIndex < 3) {
      _pageController.nextPage(
        duration: const Duration(milliseconds: 250),
        curve: Curves.easeOut,
      );
    } else {
      _finish();
    }
  }

  Future<void> _finish() async {
    await OnboardingState.markComplete();
    widget.onComplete();
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Colors.black,
      appBar: AppBar(
        backgroundColor: Colors.black,
        elevation: 0,
        actions: [
          TextButton(
            onPressed: _finish,
            child: const Text(
              'Skip',
              style: TextStyle(color: Colors.white70, fontSize: 16),
            ),
          ),
        ],
      ),
      body: SafeArea(
        child: Column(
          children: [
            Expanded(
              child: PageView(
                controller: _pageController,
                onPageChanged: (i) {
                  setState(() => _pageIndex = i);
                  _refreshStatuses();
                },
                children: [
                  _WelcomePage(),
                  _PermissionPage(
                    icon: Icons.camera_alt_outlined,
                    title: 'Camera & LiDAR',
                    body:
                        'FishSense uses your phone\'s camera and LiDAR sensor '
                        'to measure fish length. Without camera access the '
                        'app can\'t capture photos.',
                    status: _cameraStatus,
                    onGrant: _handleCameraRequest,
                  ),
                  _PermissionPage(
                    icon: Icons.location_on_outlined,
                    title: 'Location (optional)',
                    body:
                        'Tagging each catch with where it was taken lets you '
                        'see your measurements on a map later and correlate '
                        'fish size with location. You can skip this — '
                        'measurements still work without it.',
                    status: _locationStatus,
                    onGrant: _handleLocationRequest,
                  ),
                  _DonePage(onStart: _finish),
                ],
              ),
            ),
            _buildBottomBar(),
          ],
        ),
      ),
    );
  }

  Widget _buildBottomBar() {
    return Padding(
      padding: const EdgeInsets.fromLTRB(24, 8, 24, 24),
      child: Row(
        children: [
          Row(
            mainAxisSize: MainAxisSize.min,
            children: List.generate(
              4,
              (i) => Container(
                margin: const EdgeInsets.symmetric(horizontal: 4),
                width: 8,
                height: 8,
                decoration: BoxDecoration(
                  shape: BoxShape.circle,
                  color: i == _pageIndex ? _accent : Colors.grey[700],
                ),
              ),
            ),
          ),
          const Spacer(),
          if (_pageIndex < 3)
            ElevatedButton(
              onPressed: _next,
              style: ElevatedButton.styleFrom(
                backgroundColor: _accent,
                foregroundColor: Colors.black,
                padding: const EdgeInsets.symmetric(
                  horizontal: 24,
                  vertical: 12,
                ),
              ),
              child: const Text('Next', style: TextStyle(fontSize: 16)),
            ),
        ],
      ),
    );
  }
}

class _WelcomePage extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Padding(
      padding: const EdgeInsets.symmetric(horizontal: 32),
      child: Column(
        mainAxisAlignment: MainAxisAlignment.center,
        children: [
          const Icon(Icons.set_meal, color: Color(0xFF00AAA5), size: 96),
          const SizedBox(height: 32),
          const Text(
            'Welcome to FishSense',
            textAlign: TextAlign.center,
            style: TextStyle(
              color: Colors.white,
              fontSize: 28,
              fontWeight: FontWeight.bold,
            ),
          ),
          const SizedBox(height: 16),
          Text(
            'Measure fish length using your iPhone\'s camera and LiDAR '
            'depth sensor.',
            textAlign: TextAlign.center,
            style: TextStyle(color: Colors.grey[300], fontSize: 16, height: 1.4),
          ),
          const SizedBox(height: 24),
          Text(
            'The next two screens explain the permissions FishSense needs.',
            textAlign: TextAlign.center,
            style: TextStyle(color: Colors.grey[500], fontSize: 14),
          ),
        ],
      ),
    );
  }
}

class _PermissionPage extends StatelessWidget {
  final IconData icon;
  final String title;
  final String body;
  final PermissionStatus? status;
  final VoidCallback onGrant;

  const _PermissionPage({
    required this.icon,
    required this.title,
    required this.body,
    required this.status,
    required this.onGrant,
  });

  @override
  Widget build(BuildContext context) {
    final status = this.status;
    final granted = status?.isGranted ?? false;
    final permanentlyDenied = status?.isPermanentlyDenied ?? false;

    final String buttonLabel;
    if (granted) {
      buttonLabel = 'Granted';
    } else if (permanentlyDenied) {
      buttonLabel = 'Open Settings';
    } else {
      buttonLabel = 'Grant Permission';
    }

    final String? hint;
    if (granted) {
      hint = 'Thanks — you\'re all set.';
    } else if (permanentlyDenied) {
      hint =
          'You previously denied this permission. Open Settings to enable it.';
    } else {
      hint = null;
    }

    return Padding(
      padding: const EdgeInsets.symmetric(horizontal: 32),
      child: Column(
        mainAxisAlignment: MainAxisAlignment.center,
        children: [
          Icon(icon, color: const Color(0xFF00AAA5), size: 96),
          const SizedBox(height: 32),
          Text(
            title,
            textAlign: TextAlign.center,
            style: const TextStyle(
              color: Colors.white,
              fontSize: 26,
              fontWeight: FontWeight.bold,
            ),
          ),
          const SizedBox(height: 16),
          Text(
            body,
            textAlign: TextAlign.center,
            style: TextStyle(color: Colors.grey[300], fontSize: 16, height: 1.4),
          ),
          const SizedBox(height: 32),
          ElevatedButton.icon(
            onPressed: granted ? null : onGrant,
            icon: Icon(granted ? Icons.check : Icons.lock_open),
            label: Text(buttonLabel),
            style: ElevatedButton.styleFrom(
              backgroundColor: const Color(0xFF00AAA5),
              foregroundColor: Colors.black,
              disabledBackgroundColor: Colors.grey[800],
              disabledForegroundColor: Colors.grey[400],
              padding: const EdgeInsets.symmetric(
                horizontal: 24,
                vertical: 14,
              ),
              textStyle: const TextStyle(fontSize: 16),
            ),
          ),
          if (hint != null) ...[
            const SizedBox(height: 16),
            Text(
              hint,
              textAlign: TextAlign.center,
              style: TextStyle(color: Colors.grey[500], fontSize: 13),
            ),
          ],
        ],
      ),
    );
  }
}

class _DonePage extends StatelessWidget {
  final VoidCallback onStart;

  const _DonePage({required this.onStart});

  @override
  Widget build(BuildContext context) {
    return Padding(
      padding: const EdgeInsets.symmetric(horizontal: 32),
      child: Column(
        mainAxisAlignment: MainAxisAlignment.center,
        children: [
          const Icon(Icons.check_circle_outline,
              color: Color(0xFF00AAA5), size: 96),
          const SizedBox(height: 32),
          const Text(
            'You\'re ready to measure',
            textAlign: TextAlign.center,
            style: TextStyle(
              color: Colors.white,
              fontSize: 26,
              fontWeight: FontWeight.bold,
            ),
          ),
          const SizedBox(height: 16),
          Text(
            'Point the camera at your catch, tap the shutter, and FishSense '
            'will compute length from the LiDAR depth map.',
            textAlign: TextAlign.center,
            style: TextStyle(color: Colors.grey[300], fontSize: 16, height: 1.4),
          ),
          const SizedBox(height: 32),
          ElevatedButton(
            onPressed: onStart,
            style: ElevatedButton.styleFrom(
              backgroundColor: const Color(0xFF00AAA5),
              foregroundColor: Colors.black,
              padding: const EdgeInsets.symmetric(
                horizontal: 32,
                vertical: 14,
              ),
              textStyle: const TextStyle(fontSize: 16),
            ),
            child: const Text('Start measuring'),
          ),
        ],
      ),
    );
  }
}
