package com.example.fishsense_android

import android.content.Context
import android.graphics.ImageFormat
import android.hardware.camera2.*
import android.media.Image
import android.media.ImageReader
import android.util.Log
import android.util.Size
import androidx.annotation.NonNull
import io.flutter.embedding.engine.plugins.FlutterPlugin
import io.flutter.plugin.common.MethodCall
import io.flutter.plugin.common.MethodChannel
import io.flutter.plugin.common.MethodChannel.MethodCallHandler
import io.flutter.plugin.common.MethodChannel.Result
import java.nio.ByteBuffer
import kotlin.random.Random
import android.os.Build

/// Handles platform channel communication between Flutter and native Android */
class FishSensePlugin: FlutterPlugin, MethodCallHandler {
  /// The MethodChannel that will the communication between Flutter and native Android
  /// This local reference serves to register the plugin with the Flutter Engine and unregister it
  /// when the Flutter Engine is detached from the Activity
  private lateinit var channel: MethodChannel
  private lateinit var context: Context

  companion object {
    private const val TAG = "FishSensePlugin"
    private const val CHANNEL = "fishsense_native"
    
    // Native Rust library loading is commented out for mock testing
    // init {
    //   try {
    //     System.loadLibrary("fishsense_android")
    //     Log.d(TAG, "Successfully loaded fishsense_android native library")
    //   } catch (e: UnsatisfiedLinkError) {
    //     Log.e(TAG, "Failed to load fishsense_android native library: ${e.message}")
    //   }
    // }
  }

  override fun onAttachedToEngine(@NonNull flutterPluginBinding: FlutterPlugin.FlutterPluginBinding) {
    channel = MethodChannel(flutterPluginBinding.binaryMessenger, CHANNEL)
    channel.setMethodCallHandler(this)
    context = flutterPluginBinding.applicationContext
    Log.d(TAG, "FishSensePlugin attached to engine")
  }

  override fun onMethodCall(@NonNull call: MethodCall, @NonNull result: Result) {
    Log.d(TAG, "Method called: ${call.method}")
    
   when (call.method) {
  "testConnection" -> {
    handleTestConnection(result)
  }
  "computeLength" -> {
    handleComputeLength(call, result)
  }
  "detectSpecies" -> {
    handleDetectSpecies(call, result)
  }
  "getDeviceInfo" -> {  // Add device info method
    handleGetDeviceInfo(result)
  }
  else -> {
    Log.w(TAG, "Unknown method: ${call.method}")
    result.notImplemented()
  }
}
  }

  override fun onDetachedFromEngine(@NonNull binding: FlutterPlugin.FlutterPluginBinding) {
    channel.setMethodCallHandler(null)
    Log.d(TAG, "FishSensePlugin detached from engine")
  }

  /** Handle test connection call from Flutter */
  private fun handleTestConnection(result: Result) {
    Log.d(TAG, "Testing platform channel connection...")
    try {
      result.success("success")
      Log.d(TAG, "Test connection successful")
    } catch (e: Exception) {
      Log.e(TAG, "Test connection failed: ${e.message}")
      result.error("TEST_FAILED", "Test connection failed", e.message)
    }
  }

  /** Handle fish length computation call from Flutter - NOW WITH MOCK DATA */
  private fun handleComputeLength(call: MethodCall, result: Result) {
    Log.d(TAG, "Computing fish length (MOCK MODE)...")
    
    try {
      // Extract arguments from Flutter call (for validation)
      val imageData = call.argument<ByteArray>("imageData")
      val imageWidth = call.argument<Int>("imageWidth")
      val imageHeight = call.argument<Int>("imageHeight")
      val depthData = call.argument<ByteArray>("depthData")
      val depthWidth = call.argument<Int>("depthWidth")
      val depthHeight = call.argument<Int>("depthHeight")
      val cameraIntrinsicsInverted = call.argument<List<Double>>("cameraIntrinsicsInverted")

      // Validate arguments
      if (imageData == null || imageWidth == null || imageHeight == null ||
          depthData == null || depthWidth == null || depthHeight == null ||
          cameraIntrinsicsInverted == null) {
        Log.e(TAG, "Missing required arguments for computeLength")
        result.error("INVALID_ARGUMENTS", "Missing required arguments", null)
        return
      }

      Log.d(TAG, "Processing image: ${imageWidth}x${imageHeight}, depth: ${depthWidth}x${depthHeight}")

      // MOCK RESPONSE - Simulate realistic fish measurement results
      val mockResult = createMockFishMeasurementResult(imageWidth, imageHeight)
      
      // Parse mock result and return to Flutter
      val resultMap = mapOf(
        "length" to mockResult.length,                    // length: Float
        "leftX" to mockResult.leftX,                     // leftX: Int
        "leftY" to mockResult.leftY,                     // leftY: Int
        "rightX" to mockResult.rightX,                   // rightX: Int
        "rightY" to mockResult.rightY,                   // rightY: Int
        "fishFound" to mockResult.fishFound,             // fishFound: Boolean
        "errorString" to mockResult.errorString          // errorString: String?
      )
      
      Log.d(TAG, "MOCK Fish computation successful: length=${mockResult.length}cm, fishFound=${mockResult.fishFound}")
      result.success(resultMap)

    } catch (e: Exception) {
      Log.e(TAG, "Error in computeLength: ${e.message}", e)
      result.error("COMPUTATION_ERROR", "Fish length computation failed", e.message)
    }
  }

  /** Create realistic mock fish measurement data */
  private fun createMockFishMeasurementResult(imageWidth: Int, imageHeight: Int): ComputeLengthResult {
    // Simulate different fish detection scenarios
    val scenarios = listOf(
      // Scenario 1: Medium fish detected successfully
      ComputeLengthResult(
        length = Random.nextFloat() * 15 + 15, // 15-30cm fish
        leftX = imageWidth / 4,      // Head at 1/4 from left
        leftY = imageHeight / 2,     // Centered vertically
        rightX = (imageWidth * 3) / 4, // Tail at 3/4 from left
        rightY = imageHeight / 2,    // Centered vertically
        fishFound = true,
        errorString = null
      ),
      // Scenario 2: Large fish detected
      ComputeLengthResult(
        length = Random.nextFloat() * 20 + 30, // 30-50cm fish
        leftX = imageWidth / 6,      // Head closer to left
        leftY = imageHeight / 3,     // Upper third
        rightX = (imageWidth * 5) / 6, // Tail closer to right
        rightY = (imageHeight * 2) / 3, // Lower third
        fishFound = true,
        errorString = null
      ),
      // Scenario 3: Small fish detected
      ComputeLengthResult(
        length = Random.nextFloat() * 10 + 8, // 8-18cm fish
        leftX = imageWidth / 3,      // Head at 1/3
        leftY = (imageHeight * 2) / 3, // Lower portion
        rightX = (imageWidth * 2) / 3, // Tail at 2/3
        rightY = imageHeight / 3,    // Upper portion
        fishFound = true,
        errorString = null
      ),
      // Scenario 4: No fish found (10% chance)
      ComputeLengthResult(
        length = 0.0f,
        leftX = 0,
        leftY = 0,
        rightX = 0,
        rightY = 0,
        fishFound = false,
        errorString = null
      )
    )
    
    // 90% chance of finding fish, 10% chance of no fish
    return if (Random.nextFloat() < 0.9f) {
      scenarios[Random.nextInt(scenarios.size - 1)] // Exclude the "no fish" scenario most of the time
    } else {
      scenarios.last() // Return "no fish found" scenario
    }
  }

 

  /** Data class for mock computation results */
  data class ComputeLengthResult(
    val length: Float,
    val leftX: Int,
    val leftY: Int,
    val rightX: Int,
    val rightY: Int,
    val fishFound: Boolean,
    val errorString: String?
  )

  /** Native method declarations - COMMENTED OUT FOR MOCK TESTING */
  // private external fun computeLengthNative(
  //   imageData: ByteArray, imageWidth: Int, imageHeight: Int,
  //   depthData: ByteArray, depthWidth: Int, depthHeight: Int,
  //   cameraIntrinsicsInverted: FloatArray
  // ): ComputeLengthResult?
  
  // private external fun detectSpeciesNative(imageData: ByteArray): String?

  /** Handle device info request from Flutter */
private fun handleGetDeviceInfo(result: Result) {
  Log.d(TAG, "Getting device info...")
  
  try {
    val manufacturer = android.os.Build.MANUFACTURER
    val model = android.os.Build.MODEL
    val androidVersion = android.os.Build.VERSION.RELEASE
    
    val deviceInfo = "$manufacturer $model (Android $androidVersion)"
    
    Log.d(TAG, "Device info collected: $deviceInfo")
    result.success(deviceInfo)
    
  } catch (e: Exception) {
    Log.e(TAG, "Error getting device info: ${e.message}", e)
    result.error("DEVICE_INFO_ERROR", "Failed to get device info", e.message)
  }
}
}