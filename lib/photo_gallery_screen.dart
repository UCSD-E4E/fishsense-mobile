import 'dart:typed_data';
import 'package:fishsense_android/main.dart';
import 'package:flutter/material.dart';
import 'package:provider/provider.dart';
import 'models.dart';
import 'services.dart';
import 'database.dart';
import 'extensions.dart';

/// Photo gallery screen with grid display and photo management
/// Direct translation from Swift/FishSense/PhotoViewController.swift and ImageGallery.swift
class PhotoGalleryScreen extends StatefulWidget {
  const PhotoGalleryScreen({super.key});

  @override
  State<PhotoGalleryScreen> createState() => PhotoGalleryScreenState(); 
}


class PhotoGalleryScreenState extends State<PhotoGalleryScreen> {
  // Gallery state - equivalent to iOS PhotoViewController properties
  List<DataTemp> _savedPhotos = [];
  bool _isLoading = true;
  bool _isDeleting = false;
  bool _isUploading = false;
  DataTemp? _selectedPhoto;

  @override
  void initState() {
    super.initState();
    _loadSavedPhotos();
    _debugCheckDatabase();
  }

  /// Public method to refresh photos (called from MainTabView)
  /// Equivalent to iOS viewDidAppear functionality
  void refreshPhotos() {
    print(' PhotoGalleryScreen.refreshPhotos() called');
    _loadSavedPhotos();
  }

  /// Load saved photos - equivalent to iOS loadSavedPhotos()
  Future<void> _loadSavedPhotos() async {
    setState(() {
      _isLoading = true;
    });

    try {
      final photos = await DatabaseModel.getAllPhotosForGallery();
      final dataTempList = <DataTemp>[];

      // Convert PhotoModel to DataTemp for gallery display
      for (final photo in photos) {
        final imageBytes = await FileStorageService.loadImage(photo.rgbPath);

        if (imageBytes != null) {
          final dataTemp = DataTemp(
            image: imageBytes.toList(),
            creationDate:
                DateTime.fromMillisecondsSinceEpoch(photo.utcUnixTimestamp),
            fishLen: photo.fishLength, 
            deviceInfo: photo.deviceInfo, 
          );
          dataTempList.add(dataTemp);
        }
      }

      setState(() {
        _savedPhotos = dataTempList;
        _isLoading = false;
      });

      // Update photo count in app state
      context.read<AppStateProvider>().setPhotoCount(_savedPhotos.length);
      
      print(' Photos loaded: ${_savedPhotos.length} total');
    } catch (e) {
      print('Error loading saved photos: $e');
      setState(() {
        _isLoading = false;
      });
    }
  }

  /// Temporary debug method to check database contents
  Future<void> _debugCheckDatabase() async {
    try {
      final photos = await DatabaseModel.getAllPhotos();
      print('DEBUG: Total photos in database: ${photos.length}');

      for (int i = 0; i < photos.length; i++) {
        final photo = photos[i];
        print(
            'DEBUG: Photo $i - Device: ${photo.deviceInfo}, RGB: ${photo.rgbPath}');
      }
    } catch (e) {
      print('DEBUG: Error checking database: $e');
    }
  }

  /// Delete all photos - equivalent to iOS deleteAllSavedPhotos()
  Future<void> _deleteAllPhotos() async {
    // Show confirmation dialog first
    final confirmed = await _showDeleteConfirmationDialog();
    if (!confirmed) return;

    setState(() {
      _isDeleting = true;
    });

    try {
      print('Deleting all photos');

      // Delete from database
      final dbSuccess = await DatabaseModel.deleteAllPhotos();

      // Delete all image files
      final fileSuccess = await FileStorageService.deleteAllSavedPhotos();

      if (dbSuccess && fileSuccess) {
        setState(() {
          _savedPhotos.clear();
          _isDeleting = false;
        });

        // Update photo count
        context.read<AppStateProvider>().setPhotoCount(0);

        _showSuccessMessage('All photos deleted successfully');
      } else {
        _showErrorDialog('Delete Error', 'Failed to delete all photos');
      }
    } catch (e) {
      print('Error deleting all photos: $e');
      _showErrorDialog('Delete Error', 'Error deleting photos: $e');
    } finally {
      setState(() {
        _isDeleting = false;
      });
    }
  }

  /// Show delete confirmation dialog
  Future<bool> _showDeleteConfirmationDialog() async {
    return await showDialog<bool>(
          context: context,
          builder: (BuildContext context) {
            return AlertDialog(
              backgroundColor: Colors.grey[900],
              title: const Text(
                'Delete All Photos',
                style: TextStyle(color: Colors.white),
              ),
              content: Text(
                'Are you sure you want to delete all ${_savedPhotos.length} photos? This action cannot be undone.',
                style: const TextStyle(color: Colors.white),
              ),
              actions: [
                TextButton(
                  onPressed: () => Navigator.of(context).pop(false),
                  child: const Text(
                    'Cancel',
                    style: TextStyle(color: Colors.grey),
                  ),
                ),
                TextButton(
                  onPressed: () => Navigator.of(context).pop(true),
                  child: const Text(
                    'Delete',
                    style: TextStyle(color: Colors.red),
                  ),
                ),
              ],
            );
          },
        ) ??
        false;
  }

  /// Show photo detail modal - equivalent to iOS photo detail view
  void _showPhotoDetail(DataTemp photo) {
    setState(() {
      _selectedPhoto = photo;
    });

    showDialog(
      context: context,
      builder: (context) => _PhotoDetailModal(
        photo: photo,
        onClose: () {
          setState(() {
            _selectedPhoto = null;
          });
          Navigator.of(context).pop();
        },
      ),
    );
  }

  /// Show success message
  void _showSuccessMessage(String message) {
    ScaffoldMessenger.of(context).showSnackBar(
      SnackBar(
        content: Text(message),
        backgroundColor: Colors.green,
        duration: const Duration(seconds: 2),
      ),
    );
  }

  /// Show error dialog
  void _showErrorDialog(String title, String message) {
    showDialog(
      context: context,
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
          actions: [
            TextButton(
              onPressed: () => Navigator.of(context).pop(),
              child: const Text(
                'OK',
                style: TextStyle(color: Color(0xFF00AAA5)),
              ),
            ),
          ],
        );
      },
    );
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Colors.black,
      appBar: _buildAppBar(),
      body: _buildBody(),
    );
  }

  /// Build app bar with upload and delete buttons
  PreferredSizeWidget _buildAppBar() {
    return AppBar(
      backgroundColor: Colors.black,
      title: Text(
        'Photos (${_savedPhotos.length})',
        style: const TextStyle(color: Colors.white),
      ),
      actions: [
        // Manual refresh button (can be removed after testing auto-refresh)
        IconButton(
          onPressed: () async {
            print('Manual refresh triggered');
            await _loadSavedPhotos();
            await _debugCheckDatabase();
          },
          icon: const Icon(Icons.refresh, color: Colors.yellow),
          tooltip: 'Debug Refresh',
        ),

        // Delete all button
        IconButton(
          onPressed: _isDeleting ? null : _deleteAllPhotos,
          icon: _isDeleting
              ? const SizedBox(
                  width: 20,
                  height: 20,
                  child: CircularProgressIndicator(
                    strokeWidth: 2,
                    color: Colors.red,
                  ),
                )
              : const Icon(Icons.delete_forever, color: Colors.red),
          tooltip: 'Delete All Photos',
        ),
      ],
    );
  }

  /// Build main body content
  Widget _buildBody() {
    if (_isLoading) {
      return const Center(
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            CircularProgressIndicator(color: Color(0xFF00AAA5)),
            SizedBox(height: 20),
            Text(
              'Loading photos...',
              style: TextStyle(color: Colors.white, fontSize: 16),
            ),
          ],
        ),
      );
    }

    if (_savedPhotos.isEmpty) {
      return Center(
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            Icon(
              Icons.photo_library_outlined,
              size: 80,
              color: Colors.grey[600],
            ),
            const SizedBox(height: 20),
            Text(
              'No photos yet',
              style: TextStyle(
                color: Colors.grey[400],
                fontSize: 24,
                fontWeight: FontWeight.bold,
              ),
            ),
            const SizedBox(height: 10),
            Text(
              'Take some fish photos using the camera',
              style: TextStyle(
                color: Colors.grey[600],
                fontSize: 16,
              ),
            ),
          ],
        ),
      );
    }

    return _buildPhotoGrid();
  }

  /// Build photo grid - equivalent to iOS LazyVGrid
  Widget _buildPhotoGrid() {
    return RefreshIndicator(
      onRefresh: _loadSavedPhotos,
      color: const Color(0xFF00AAA5),
      child: Padding(
        padding: const EdgeInsets.all(8.0),
        child: GridView.builder(
          gridDelegate: const SliverGridDelegateWithFixedCrossAxisCount(
            crossAxisCount: 2,
            crossAxisSpacing: 8,
            mainAxisSpacing: 8,
            childAspectRatio:
                0.75, // Slightly taller than square for device info
          ),
          itemCount: _savedPhotos.length,
          itemBuilder: (context, index) {
            final photo = _savedPhotos[index];
            return _PhotoGridItem(
              photo: photo,
              onTap: () => _showPhotoDetail(photo),
            );
          },
        ),
      ),
    );
  }
}

/// Individual photo grid item - equivalent to iOS photo grid cell
class _PhotoGridItem extends StatelessWidget {
  final DataTemp photo;
  final VoidCallback onTap;

  const _PhotoGridItem({
    required this.photo,
    required this.onTap,
  });

  @override
  Widget build(BuildContext context) {
    return GestureDetector(
      onTap: onTap,
      child: Container(
        decoration: BoxDecoration(
          borderRadius: BorderRadius.circular(12),
          border: Border.all(color: Colors.grey[700]!, width: 1),
        ),
        child: ClipRRect(
          borderRadius: BorderRadius.circular(12),
          child: Column(
            children: [
              // Photo image
              Expanded(
                flex: 3,
                child: Container(
                  width: double.infinity,
                  child: Image.memory(
                    Uint8List.fromList(photo.image),
                    fit: BoxFit.cover,
                  ),
                ),
              ),
              
              // Photo metadata
              Expanded(
                flex: 1,
                child: Container(
                  width: double.infinity,
                  padding: const EdgeInsets.all(8),
                  color: Colors.grey[900],
                  child: Column(
                    crossAxisAlignment: CrossAxisAlignment.start,
                    mainAxisAlignment: MainAxisAlignment.center,
                    children: [
                      // Date
                      Text(
                        photo.creationDate.toDisplayString(),
                        style: TextStyle(
                          color: Colors.grey[300],
                          fontSize: 10,
                          fontWeight: FontWeight.w500,
                        ),
                        maxLines: 1,
                        overflow: TextOverflow.ellipsis,
                      ),
                      const SizedBox(height: 2),
                      // Fish length
                      Text(
                        photo.fishLen != null
                            ? 'Fish Length: ${(photo.fishLen! * 100).toStringAsFixed(1)}cm'
                            : 'Fish Length: Unavailable',
                        style: TextStyle(
                          color: Colors.grey[400],
                          fontSize: 9,
                        ),
                        maxLines: 1,
                        overflow: TextOverflow.ellipsis,
                      ),
                      // Device info display
                      Text(
                        'Device: ${photo.deviceInfo ?? 'Unknown'}',
                        style: TextStyle(
                          color: Colors.grey[400],
                          fontSize: 8,
                        ),
                        maxLines: 1,
                        overflow: TextOverflow.ellipsis,
                      ),
                    ],
                  ),
                ),
              ),
            ],
          ),
        ),
      ),
    );
  }
}

/// Photo detail modal - equivalent to iOS photo detail view with gestures
class _PhotoDetailModal extends StatefulWidget {
  final DataTemp photo;
  final VoidCallback onClose;

  const _PhotoDetailModal({
    required this.photo,
    required this.onClose,
  });

  @override
  State<_PhotoDetailModal> createState() => _PhotoDetailModalState();
}

class _PhotoDetailModalState extends State<_PhotoDetailModal> {
  Offset _position = Offset.zero;

  @override
  Widget build(BuildContext context) {
    return Dialog.fullscreen(
      backgroundColor: Colors.black.withOpacity(0.9),
      child: GestureDetector(
        onTap: widget.onClose,
        onPanUpdate: (details) {
          setState(() {
            _position += details.delta;
          });
        },
        onPanEnd: (details) {
          // Close if dragged far enough
          if (_position.dy.abs() > 200) {
            widget.onClose();
          } else {
            setState(() {
              _position = Offset.zero;
            });
          }
        },
        child: Stack(
          children: [
            // Full screen image
            Center(
              child: Transform.translate(
                offset: _position,
                child: Hero(
                  tag: widget.photo.id,
                  child: Image.memory(
                    Uint8List.fromList(widget.photo.image),
                    fit: BoxFit.contain,
                  ),
                ),
              ),
            ),

            // Metadata overlay 
            Positioned(
              bottom: 50,
              left: 20,
              right: 20,
              child: Container(
                padding: const EdgeInsets.all(20),
                decoration: BoxDecoration(
                  color: Colors.black.withOpacity(0.8),
                  borderRadius: BorderRadius.circular(12),
                ),
                child: Column(
                  crossAxisAlignment: CrossAxisAlignment.start,
                  children: [
                    Text(
                      'Time: ${widget.photo.creationDate.toDisplayString()}',
                      style: const TextStyle(
                        color: Colors.white,
                        fontSize: 16,
                        fontWeight: FontWeight.bold,
                      ),
                    ),
                    const SizedBox(height: 10),
                    Text(
                      widget.photo.fishLen != null
                          ? 'Fish Length: ${(widget.photo.fishLen! * 100).toStringAsFixed(1)}cm'
                          : 'Fish Length: Unavailable',
                      style: const TextStyle(
                        color: Colors.white,
                        fontSize: 14,
                      ),
                    ),
                    const SizedBox(height: 8),
                    Text(
                      'Device: ${widget.photo.deviceInfo ?? 'Unknown'}',
                      style: const TextStyle(
                        color: Colors.grey,
                        fontSize: 12,
                      ),
                    ),
                  ],
                ),
              ),
            ),

            // Close button
            Positioned(
              top: 50,
              right: 20,
              child: GestureDetector(
                onTap: widget.onClose,
                child: Container(
                  padding: const EdgeInsets.all(8),
                  decoration: BoxDecoration(
                    color: Colors.black.withOpacity(0.6),
                    shape: BoxShape.circle,
                  ),
                  child: const Icon(
                    Icons.close,
                    color: Colors.white,
                    size: 24,
                  ),
                ),
              ),
            ),
          ],
        ),
      ),
    );
  }
}