import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:provider/provider.dart';
import 'camera_screen.dart';
import 'photo_gallery_screen.dart';
import 'services.dart';
import 'database.dart';

/// Main app entry point
/// Translation from iOS AppDelegate.swift and Main.storyboard tab navigation
void main() async {
  WidgetsFlutterBinding.ensureInitialized();
  
  // Initialize services - equivalent to iOS didFinishLaunchingWithOptions
  await _initializeApp();
  
  // Set preferred orientations - equivalent to iOS orientation settings
  await SystemChrome.setPreferredOrientations([
    DeviceOrientation.portraitUp,
  ]);
  
  runApp(const FishSenseApp());
}

/// Initialize app services - equivalent to iOS app initialization
Future<void> _initializeApp() async {
  try {
    // Initialize database
    await DatabaseModel.database;
    print('Database initialized');
    
    // Initialize cameras
    final cameraSuccess = await CameraService.initializeCameras();
    print('Camera initialization: ${cameraSuccess ? 'Success' : 'Failed'}');
    
    // Check permissions
    final cameraPermission = await CameraService.checkCameraPermission();
    print('Camera permission: ${cameraPermission ? 'Granted' : 'Denied'}');
    
  } catch (e) {
    print('Error initializing app: $e');
  }
}

/// Main app widget
/// Translation from iOS app structure and tab navigation
class FishSenseApp extends StatelessWidget {
  const FishSenseApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MultiProvider(
      providers: [
        ChangeNotifierProvider(create: (_) => AppStateProvider()),
      ],
      child: MaterialApp(
        title: 'FishSense',
        debugShowCheckedModeBanner: false,
        theme: _buildTheme(),
        home: const MainTabView(),
      ),
    );
  }

  /// App theme - equivalent to iOS color scheme
  ThemeData _buildTheme() {
    return ThemeData(
      primarySwatch: Colors.cyan,
      primaryColor: const Color(0xFF00AAA5),
      scaffoldBackgroundColor: Colors.black,
      appBarTheme: const AppBarTheme(
        backgroundColor: Colors.black,
        foregroundColor: Colors.white,
        elevation: 0,
      ),
      bottomNavigationBarTheme: const BottomNavigationBarThemeData(
        backgroundColor: Colors.black,
        selectedItemColor: Color(0xFF00AAA5), 
        unselectedItemColor: Colors.grey,
        type: BottomNavigationBarType.fixed,
      ),
      textTheme: const TextTheme(
        bodyLarge: TextStyle(color: Colors.white),
        bodyMedium: TextStyle(color: Colors.white),
        titleLarge: TextStyle(color: Colors.white),
      ),
      iconTheme: const IconThemeData(color: Colors.white),
    );
  }
}

/// Main tab navigation view with auto-refresh for PhotoGalleryScreen
/// Direct translation from iOS Main.storyboard tab bar controller
class MainTabView extends StatefulWidget {
  const MainTabView({super.key});

  @override
  State<MainTabView> createState() => _MainTabViewState();
}

class _MainTabViewState extends State<MainTabView> {
  int _currentIndex = 0;
  
  // Tab screens - equivalent to iOS tab view controllers
  late final List<Widget> _screens;
  
  // Use GlobalKey with public PhotoGalleryScreenState
  final GlobalKey<PhotoGalleryScreenState> _photoGalleryKey = 
      GlobalKey<PhotoGalleryScreenState>();

  @override
  void initState() {
    super.initState();
    _screens = [
      const CameraScreen(),                                    // Camera tab (ViewController.swift)
      PhotoGalleryScreen(key: _photoGalleryKey),              // Photos tab (PhotoViewController.swift)
    ];
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: IndexedStack(
        index: _currentIndex,
        children: _screens,
      ),
      bottomNavigationBar: _buildBottomNavigationBar(),
    );
  }

  /// Bottom navigation bar - equivalent to iOS tab bar
  Widget _buildBottomNavigationBar() {
    return BottomNavigationBar(
      currentIndex: _currentIndex,
      onTap: (index) async {
        if (index == 1 && _currentIndex != 1) { // Switching TO Photos tab
          print('Switching to Photos tab - triggering auto-refresh');
          

          _photoGalleryKey.currentState?.refreshPhotos();
        }
        
        setState(() {
          _currentIndex = index;
        });
      },
      items: const [
        BottomNavigationBarItem(
          icon: Icon(Icons.camera_alt),
          label: 'Camera',
        ),
        BottomNavigationBarItem(
          icon: Icon(Icons.photo_library),
          label: 'Photos',
        ),
      ],
    );
  }
}

/// App state provider for global state management
/// Handles app-wide state like iOS app delegate
class AppStateProvider extends ChangeNotifier {
  bool _isProcessing = false;
  String _statusMessage = 'Ready';
  int _photoCount = 0;

  // Getters
  bool get isProcessing => _isProcessing;
  String get statusMessage => _statusMessage;
  int get photoCount => _photoCount;

  /// Set processing state
  void setProcessing(bool processing) {
    _isProcessing = processing;
    notifyListeners();
  }

  /// Update status message - equivalent to iOS status label updates
  void setStatusMessage(String message) {
    _statusMessage = message;
    notifyListeners();
  }

  /// Update photo count
  void setPhotoCount(int count) {
    _photoCount = count;
    notifyListeners();
  }

  /// Refresh photo count from database
  Future<void> refreshPhotoCount() async {
    try {
      final count = await DatabaseModel.getPhotoCount();
      setPhotoCount(count);
    } catch (e) {
      print('Error refreshing photo count: $e');
    }
  }

  /// Show error message - equivalent to iOS displayErrorMessage
  void showError(String title, String message) {
    setStatusMessage('Error: $message');
    // TODO: Show actual dialog when we have UI context
    print('Error - $title: $message');
  }

  /// Clear status
  void clearStatus() {
    setStatusMessage('Ready');
    setProcessing(false);
  }
}

/// Global app utilities
/// Helper functions for app-wide operations
class AppUtils {
  
  /// Show error dialog - equivalent to iOS displayErrorMessage
  static Future<void> showErrorDialog(
    BuildContext context, {
    required String title,
    required String message,
  }) async {
    return showDialog<void>(
      context: context,
      barrierDismissible: false,
      builder: (BuildContext context) {
        return AlertDialog(
          backgroundColor: Colors.grey[900],
          title: Text(
            title,
            style: const TextStyle(color: Colors.white),
          ),
          content: Text(
            message,
            style: const TextStyle(color: Colors.white),
          ),
          actions: <Widget>[
            TextButton(
              child: const Text(
                'OK',
                style: TextStyle(color: Color(0xFF00AAA5)),
              ),
              onPressed: () {
                Navigator.of(context).pop();
              },
            ),
          ],
        );
      },
    );
  }

  /// Show success dialog - for fish length results
  static Future<void> showSuccessDialog(
    BuildContext context, {
    required String title,
    required String message,
  }) async {
    return showDialog<void>(
      context: context,
      barrierDismissible: false,
      builder: (BuildContext context) {
        return AlertDialog(
          backgroundColor: Colors.grey[900],
          title: Text(
            title,
            style: const TextStyle(color: Colors.white),
          ),
          content: Text(
            message,
            style: const TextStyle(color: Colors.white, fontSize: 18),
          ),
          actions: <Widget>[
            TextButton(
              child: const Text(
                'OK',
                style: TextStyle(color: Color(0xFF00AAA5)),
              ),
              onPressed: () {
                Navigator.of(context).pop();
              },
            ),
          ],
        );
      },
    );
  }
}
