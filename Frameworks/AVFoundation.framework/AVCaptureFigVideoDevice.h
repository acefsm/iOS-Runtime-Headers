/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureFigVideoDevice : AVCaptureDevice <MCProfileConnectionObserver> {
    float  _ISOKVO;
    long long  _activeColorSpace;
    AVCaptureDeviceFormat * _activeDepthDataFormat;
    AVCaptureDeviceFormat * _activeFormat;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _activeMaxFrameDuration;
    bool  _activeMaxFrameDurationSetByClient;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _activeMinFrameDuration;
    bool  _activeMinFrameDurationSetByClient;
    bool  _adjustingExposure;
    bool  _adjustingFocus;
    bool  _adjustingWB;
    long long  _autoFocusRangeRestriction;
    bool  _automaticallyAdjustsImageControlMode;
    bool  _automaticallyAdjustsVideoHDREnabled;
    bool  _automaticallyEnablesLowLightBoostWhenAvailable;
    NSArray * _availableBoxedMetadataFormatDescriptions;
    bool  _avcaptureDeviceAutoFlashEnabled;
    AVCaptureDeviceControlRequestQueue * _biasedExposureControlRequests;
    NSString * _bravoCameraSelectionBehavior;
    NSMutableDictionary * _cachedFigCaptureSourceProperties;
    bool  _cachesFigCaptureSourceConfigurationChanges;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cameraFaceResult29;
    bool  _cameraFaceResult30;
    bool  _cameraOption10;
    bool  _cameraOption9;
    NSMutableArray * _captureSourceSupportedMetadata;
    bool  _depthDataDeliveryEnabled;
    NSObject<OS_dispatch_queue> * _devicePropsQueue;
    struct { 
        float redGain; 
        float greenGain; 
        float blueGain; 
    }  _deviceWhiteBalanceGainsKVO;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _exposureDurationKVO;
    long long  _exposureMode;
    struct CGPoint { 
        double x; 
        double y; 
    }  _exposurePointOfInterest;
    float  _exposureTargetBias;
    float  _exposureTargetOffsetKVO;
    bool  _eyeClosedDetectionEnabled;
    bool  _eyeDetectionEnabled;
    bool  _faceDetectionDrivenImageProcessingEnabled;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _faceRectangle;
    int  _faceRectangleAngle;
    struct OpaqueFigCaptureSource { } * _fcs;
    NSDictionary * _fcsAttributes;
    NSObject<OS_dispatch_queue> * _fcsQueue;
    NSString * _fcsUID;
    bool  _flashActive;
    bool  _flashAvailable;
    long long  _flashMode;
    bool  _flashSceneDetectedForPhotoOutput;
    long long  _focusMode;
    struct CGPoint { 
        double x; 
        double y; 
    }  _focusPointOfInterest;
    NSArray * _formats;
    struct { 
        float redGain; 
        float greenGain; 
        float blueGain; 
    }  _grayWorldDeviceWhiteBalanceGainsKVO;
    NSDictionary * _h264EncoderLimitations;
    bool  _highDynamicRangeSceneDetectionEnabled;
    long long  _imageControlMode;
    bool  _isConnected;
    bool  _isStillImageStabilizationScene;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastCustomExposureDuration;
    float  _lastCustomExposureISO;
    float  _lensPositionKVO;
    NSString * _localizedName;
    bool  _lowLightBoostEnabled;
    AVCaptureDeviceControlRequestQueue * _manualExposureControlRequests;
    AVCaptureDeviceControlRequestQueue * _manualFocusControlRequests;
    AVCaptureDeviceControlRequestQueue * _manualWhiteBalanceControlRequests;
    double  _maxAvailableVideoZoomFactor;
    double  _minAvailableVideoZoomFactor;
    NSObject<OS_dispatch_queue> * _observedHighFrequencyPropertiesQueue;
    NSMutableDictionary * _observedHighFrequencyPropertyCounts;
    long long  _origin;
    bool  _photoOutputFlashSceneEnabled;
    long long  _position;
    NSMutableDictionary * _propertyToFigCaptureSourcePropertyMap;
    bool  _providesStortorgetMetadata;
    bool  _sceneIsHighDynamicRange;
    NSObject<OS_dispatch_semaphore> * _serverConnectionDiedSemaphore;
    NSDictionary * _sessionPresetCompressionSettings;
    long long  _shallowDepthOfFieldEffectStatus;
    bool  _smileDetectionEnabled;
    bool  _smoothAutoFocusEnabled;
    bool  _subjectMonitoringEnabled;
    NSDictionary * _supportedOptionalFaceDetectionFeatures;
    bool  _torchActive;
    bool  _torchAvailable;
    float  _torchLevel;
    long long  _torchMode;
    bool  _videoHDREnabled;
    long long  _videoZoomDownscaleStageHint;
    bool  _videoZoomDrawOverlay;
    float  _videoZoomFactor;
    float  _videoZoomRampAcceleration;
    int  _videoZoomRampCounter;
    float  _videoZoomRampTarget;
    long long  _videoZoomUpscaleStageHint;
    bool  _waitingForExposureAdjustmentBeforeLocking;
    unsigned long long  _wbCalibrationCount;
    double ** _wbCalibrationMatrices;
    struct { float x1; float x2; } * _wbCalibrationTemperatures;
    double  _wbLastPredictedTemp;
    long long  _wbMode;
    bool  _wbSeedEnabled;
    double  _wbSeedTemp;
    unsigned long long  _wbTemperatureIterations;
    AVWeakReference * _weakReference;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_cameraAccessIsEnabled;
+ (id)_devices;
+ (id)_newFigCaptureSources;
+ (void)_reconnectDevices:(id)arg1;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)initialize;

- (id)AVVideoSettingsForSessionPreset:(id)arg1;
- (float)ISO;
- (float)ISODigitalThreshold;
- (void)_checkTCCAccess;
- (struct { float x1; float x2; })_chromaticityValuesForDeviceWhiteBalanceGains:(struct { float x1; float x2; float x3; })arg1 atMix:(double)arg2;
- (id)_copyFigCaptureSourceProperty:(struct __CFString { }*)arg1;
- (id)_copyFormatsArray;
- (void)_decrementObserverCountForHighFrequencyProperty:(id)arg1;
- (struct { float x1; float x2; float x3; })_deviceWhiteBalanceGainsForChromaticityValues:(struct { float x1; float x2; })arg1 temperature:(double)arg2;
- (void)_drainManualControlRequestQueue:(id)arg1;
- (void)_drainManualControlRequestQueues;
- (bool)_ensureWhiteBalanceCalibrationUnpacked;
- (id)_faceDetectionConfigurationDictionary;
- (void)_handleManualControlCompletionForRequestQueue:(id)arg1 withPayload:(id)arg2;
- (void)_handleNotification:(struct __CFString { }*)arg1 payload:(id)arg2;
- (bool)_hasKeyValueObserversForHighFrequencyProperty:(id)arg1;
- (void)_incrementObserverCountForHighFrequencyProperty:(id)arg1;
- (id)_initWithFigCaptureSource:(struct OpaqueFigCaptureSource { }*)arg1;
- (bool)_isDepthDataDeliveryEnabled;
- (bool)_isFlashScene;
- (bool)_isHighDynamicRangeScene;
- (bool)_isStillImageStabilizationScene;
- (bool)_isWBSeedEnabled;
- (int)_orderInDevicesArray;
- (void)_performBlockOnMainThread:(id /* block */)arg1;
- (double)_predictedTempForGains:(struct { float x1; float x2; float x3; })arg1;
- (void)_rampToVideoZoomFactor:(double)arg1 withRate:(float)arg2 duration:(double)arg3 rampType:(int)arg4;
- (void)_reconnectToFigCaptureSource:(struct OpaqueFigCaptureSource { }*)arg1;
- (void)_restoreFigCaptureSourceProperties;
- (void)_setActiveFormat:(id)arg1 resetVideoZoomFactorAndMinMaxFrameDurations:(bool)arg2;
- (void)_setActiveVideoMaxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (int)_setActiveVideoMaxFrameDurationInternal:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setActiveVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (int)_setActiveVideoMinFrameDurationInternal:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setAdjustingExposure:(bool)arg1;
- (void)_setAdjustingFocus:(bool)arg1;
- (void)_setAdjustingWhiteBalance:(bool)arg1;
- (void)_setBravoCameraSelectionBehavior:(id)arg1;
- (void)_setDepthDataDeliveryEnabled:(bool)arg1;
- (int)_setExposureWithMode:(long long)arg1 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 ISO:(float)arg3 requestID:(int)arg4 newMaxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg5;
- (int)_setFaceDetectionFeatureEnabled:(bool)arg1 enabledState:(bool*)arg2;
- (void)_setFigCaptureSource:(struct OpaqueFigCaptureSource { }*)arg1;
- (int)_setFigCaptureSourceProperty:(struct __CFString { }*)arg1 withValue:(id)arg2;
- (int)_setFigCaptureSourceProperty:(struct __CFString { }*)arg1 withValue:(id)arg2 cacheOnly:(bool)arg3;
- (void)_setFlashActive:(bool)arg1;
- (void)_setFlashAvailable:(bool)arg1;
- (void)_setFlashSceneDetectedForPhotoOutput:(bool)arg1;
- (int)_setFocusWithMode:(long long)arg1 lensPosition:(float)arg2 requestID:(int)arg3;
- (void)_setHighDynamicRangeScene:(bool)arg1;
- (void)_setImageControlMode:(long long)arg1;
- (void)_setIsStillImageStabilizationScene:(bool)arg1;
- (void)_setLowLightBoostEnabled:(bool)arg1;
- (void)_setMaxAvailableVideoZoomFactor:(double)arg1;
- (void)_setMinAvailableVideoZoomFactor:(double)arg1;
- (void)_setPhotoSettingsForSceneMonitoring:(id)arg1;
- (void)_setShallowDepthOfFieldEffectStatus:(long long)arg1;
- (void)_setStillImageStabilizationAutomaticallyEnabled:(bool)arg1;
- (void)_setTorchActive:(bool)arg1;
- (void)_setTorchAvailable:(bool)arg1;
- (void)_setTorchLevel:(float)arg1;
- (int)_setTorchMode:(long long)arg1 withLevel:(float)arg2;
- (void)_setVideoHDREnabled:(bool)arg1;
- (void)_setVideoZoomFactor:(double)arg1;
- (void)_setWBSeedEnabled:(bool)arg1;
- (int)_setWhiteBalanceWithMode:(long long)arg1 gains:(struct { float x1; float x2; float x3; })arg2 requestID:(int)arg3;
- (id)_supportedOptionalFaceDetectionFeaturesDictionary;
- (void)_updateFigCaptureSourceObserverCounts;
- (unsigned long long)_wbTemperatureIterations;
- (double)_whiteBalanceMixingFactorForTemperature:(double)arg1;
- (double)_whiteBalanceTemperatureForMixingFactor:(double)arg1;
- (long long)activeColorSpace;
- (id)activeDepthDataFormat;
- (id)activeFormat;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })activeVideoMaxFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })activeVideoMinFrameDuration;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (long long)autoFocusRangeRestriction;
- (bool)automaticallyAdjustsImageControlMode;
- (bool)automaticallyAdjustsVideoHDREnabled;
- (bool)automaticallyEnablesLowLightBoostWhenAvailable;
- (id)availableBoxedMetadataFormatDescriptions;
- (id)bravoCameraSelectionBehavior;
- (bool)cachesFigCaptureSourceConfigurationChanges;
- (void)cancelVideoZoomRamp;
- (struct { float x1; float x2; })chromaticityValuesForDeviceWhiteBalanceGains:(struct { float x1; float x2; float x3; })arg1;
- (void)dealloc;
- (struct OpaqueCMClock { }*)deviceClock;
- (id)deviceFormatForSessionPreset:(id)arg1 videoFormat:(unsigned int)arg2;
- (long long)deviceSourceOrigin;
- (id)deviceType;
- (struct { float x1; float x2; float x3; })deviceWhiteBalanceGains;
- (struct { float x1; float x2; float x3; })deviceWhiteBalanceGainsForChromaticityValues:(struct { float x1; float x2; })arg1;
- (struct { float x1; float x2; float x3; })deviceWhiteBalanceGainsForTemperatureAndTintValues:(struct { float x1; float x2; })arg1;
- (double)dualCameraSwitchOverVideoZoomFactor;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })exposureDuration;
- (long long)exposureMode;
- (struct CGPoint { double x1; double x2; })exposurePointOfInterest;
- (float)exposureTargetBias;
- (float)exposureTargetOffset;
- (bool)eyeClosedDetectionEnabled;
- (bool)eyeDetectionEnabled;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceRectangle;
- (int)faceRectangleAngle;
- (struct OpaqueFigCaptureSource { }*)figCaptureSource;
- (long long)flashMode;
- (long long)focusMode;
- (struct CGPoint { double x1; double x2; })focusPointOfInterest;
- (id)formats;
- (struct { float x1; float x2; float x3; })grayWorldDeviceWhiteBalanceGains;
- (bool)hasFlash;
- (bool)hasMediaType:(id)arg1;
- (bool)hasTorch;
- (long long)imageControlMode;
- (id)init;
- (bool)isActiveVideoMaxFrameDurationSet;
- (bool)isActiveVideoMinFrameDurationSet;
- (bool)isAdjustingExposure;
- (bool)isAdjustingFocus;
- (bool)isAdjustingWhiteBalance;
- (bool)isAutoFocusRangeRestrictionSupported;
- (bool)isCameraIntrinsicMatrixDeliverySupported;
- (bool)isConnected;
- (bool)isDiagnosticsTestSupported:(id)arg1;
- (bool)isExposureModeSupported:(long long)arg1;
- (bool)isExposurePointOfInterestSupported;
- (bool)isEyeClosedDetectionSupported;
- (bool)isEyeDetectionSupported;
- (bool)isFaceDetectionDrivenImageProcessingEnabled;
- (bool)isFaceDetectionDuringVideoPreviewSupported;
- (bool)isFaceDetectionSupported;
- (bool)isFlashActive;
- (bool)isFlashAvailable;
- (bool)isFlashModeSupported:(long long)arg1;
- (bool)isFlashSceneDetectedForPhotoOutput;
- (bool)isFocusModeSupported:(long long)arg1;
- (bool)isFocusPointOfInterestSupported;
- (bool)isHDRSupported;
- (bool)isHEIFSupported;
- (bool)isHEVCPreferred;
- (bool)isHEVCSupported;
- (bool)isHighDynamicRangeScene;
- (bool)isHighDynamicRangeSceneDetectionEnabled;
- (bool)isHighDynamicRangeSceneDetectionSupported;
- (bool)isImageControlModeSupported:(long long)arg1;
- (bool)isInUseByAnotherApplication;
- (bool)isLensStabilizationSupported;
- (bool)isLockedForConfiguration;
- (bool)isLockingFocusWithCustomLensPositionSupported;
- (bool)isLockingWhiteBalanceWithCustomDeviceGainsSupported;
- (bool)isLowLightBoostEnabled;
- (bool)isLowLightBoostSupported;
- (bool)isMachineReadableCodeDetectionSupported;
- (bool)isRampingVideoZoom;
- (bool)isRawStillImageCaptureSupported;
- (bool)isSISSupported;
- (bool)isSmileDetectionSupported;
- (bool)isSmoothAutoFocusEnabled;
- (bool)isSmoothAutoFocusSupported;
- (bool)isStillImageStabilizationScene;
- (bool)isSubjectAreaChangeMonitoringEnabled;
- (bool)isTorchActive;
- (bool)isTorchAvailable;
- (bool)isTorchModeSupported:(long long)arg1;
- (bool)isVideoHDREnabled;
- (bool)isVideoStabilizationSupported;
- (bool)isWhiteBalanceModeSupported:(long long)arg1;
- (bool)isWideColorSupported;
- (float)lensAperture;
- (float)lensPosition;
- (id)localizedName;
- (bool)lockForConfiguration:(id*)arg1;
- (double)maxAvailableVideoZoomFactor;
- (float)maxExposureTargetBias;
- (struct { int x1; int x2; })maxH264PhotoDimensions;
- (struct { int x1; int x2; })maxH264VideoDimensions;
- (float)maxWhiteBalanceGain;
- (double)minAvailableVideoZoomFactor;
- (float)minExposureTargetBias;
- (int)minMacroblocksForHighProfileAbove30fps;
- (int)minMacroblocksForHighProfileUpTo30fps;
- (id)modelID;
- (long long)position;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (bool)providesStortorgetMetadata;
- (void)rampExponentiallyToVideoZoomFactor:(float)arg1 withDuration:(double)arg2;
- (void)rampToVideoZoomFactor:(double)arg1 withRate:(float)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3;
- (id)runDiagnosticsWithTestType:(id)arg1;
- (void)setActiveColorSpace:(long long)arg1;
- (void)setActiveDepthDataFormat:(id)arg1;
- (void)setActiveFormat:(id)arg1;
- (void)setActiveVideoMaxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setActiveVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setAutoFocusRangeRestriction:(long long)arg1;
- (void)setAutomaticallyAdjustsImageControlMode:(bool)arg1;
- (void)setAutomaticallyAdjustsVideoHDREnabled:(bool)arg1;
- (void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(bool)arg1;
- (void)setCachesFigCaptureSourceConfigurationChanges:(bool)arg1;
- (void)setExposureMode:(long long)arg1;
- (void)setExposureModeCustomWithDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 ISO:(float)arg2 completionHandler:(id /* block */)arg3;
- (void)setExposurePointOfInterest:(struct CGPoint { double x1; double x2; })arg1;
- (void)setExposureTargetBias:(float)arg1 completionHandler:(id /* block */)arg2;
- (void)setEyeClosedDetectionEnabled:(bool)arg1;
- (void)setEyeDetectionEnabled:(bool)arg1;
- (void)setFaceDetectionDrivenImageProcessingEnabled:(bool)arg1;
- (void)setFlashMode:(long long)arg1;
- (void)setFocusMode:(long long)arg1;
- (void)setFocusModeLockedWithLensPosition:(float)arg1 completionHandler:(id /* block */)arg2;
- (void)setFocusPointOfInterest:(struct CGPoint { double x1; double x2; })arg1;
- (void)setHighDynamicRangeSceneDetectionEnabled:(bool)arg1;
- (void)setImageControlMode:(long long)arg1;
- (void)setProvidesStortorgetMetadata:(bool)arg1;
- (void)setSmileDetectionEnabled:(bool)arg1;
- (void)setSmoothAutoFocusEnabled:(bool)arg1;
- (void)setSubjectAreaChangeMonitoringEnabled:(bool)arg1;
- (void)setTorchMode:(long long)arg1;
- (bool)setTorchModeOnWithLevel:(float)arg1 error:(id*)arg2;
- (void)setVideoHDREnabled:(bool)arg1;
- (void)setVideoZoomDownscaleStageHint:(long long)arg1;
- (void)setVideoZoomDrawOverlay:(bool)arg1;
- (void)setVideoZoomFactor:(double)arg1;
- (void)setVideoZoomRampAcceleration:(float)arg1;
- (void)setVideoZoomUpscaleStageHint:(long long)arg1;
- (void)setWhiteBalanceMode:(long long)arg1;
- (void)setWhiteBalanceModeLockedWithDeviceWhiteBalanceGains:(struct { float x1; float x2; float x3; })arg1 completionHandler:(id /* block */)arg2;
- (long long)shallowDepthOfFieldEffectStatus;
- (bool)smileDetectionEnabled;
- (id)supportedMetadataObjectIdentifiers;
- (bool)supportsAVCaptureSessionPreset:(id)arg1;
- (struct { float x1; float x2; })temperatureAndTintValuesForDeviceWhiteBalanceGains:(struct { float x1; float x2; float x3; })arg1;
- (float)torchLevel;
- (long long)torchMode;
- (id)uniqueID;
- (void)unlockForConfiguration;
- (bool)usesQuantizationScalingMatrix_H264_Steep_16_48;
- (long long)videoZoomDownscaleStageHint;
- (bool)videoZoomDrawOverlay;
- (double)videoZoomFactor;
- (float)videoZoomRampAcceleration;
- (long long)videoZoomUpscaleStageHint;
- (long long)whiteBalanceMode;

@end
