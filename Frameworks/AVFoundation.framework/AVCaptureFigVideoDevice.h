/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSDictionary;

@interface AVCaptureFigVideoDevice : AVCaptureDevice <MCProfileConnectionObserver> {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    BOOL _adjustingExposure;
    BOOL _adjustingFocus;
    BOOL _adjustingWB;
    BOOL _automaticallyAdjustsImageControlMode;
    NSDictionary *_deviceProperties;
    int _exposureMode;
    } _exposurePointOfInterest;
    BOOL _flashActive;
    BOOL _flashAvailable;
    int _flashMode;
    int _focusInFlightCount;
    int _focusMode;
    } _focusPointOfInterest;
    int _imageControlMode;
    BOOL _isConnected;
    BOOL _torchAvailable;
    float _torchLevel;
    int _torchMode;
    int _wbMode;
}

+ (BOOL)_cameraAccessIsEnabled;
+ (id)_devices;
+ (void)initialize;

- (void)_applyPendingPropertiesToRecorder;
- (int)_flashMode;
- (void)_sessionDidStart;
- (void)_setAdjustingExposure:(BOOL)arg1;
- (void)_setAdjustingFocus:(BOOL)arg1;
- (void)_setAdjustingWhiteBalance:(BOOL)arg1;
- (BOOL)_setExposureWithMode:(int)arg1 pointOfInterest:(id)arg2;
- (void)_setFlashActive:(BOOL)arg1;
- (BOOL)_setFlashMode:(int)arg1;
- (BOOL)_setFocusWithMode:(int)arg1 pointOfInterest:(id)arg2;
- (BOOL)_setImageControlMode:(int)arg1;
- (BOOL)_setSubjectAreaChangeMonitoringEnabled:(BOOL)arg1;
- (BOOL)_setTorchMode:(int)arg1;
- (BOOL)_setWhiteBalanceMode:(int)arg1;
- (BOOL)_subjectAreaChangeMonitoringEnabled;
- (int)_torchMode;
- (void)_updateFlashAndTorchAvailability;
- (void)_updateImageControlMode;
- (int)_whiteBalanceMode;
- (BOOL)automaticallyAdjustsImageControlMode;
- (void)dealloc;
- (id)devicePropertiesDictionary;
- (BOOL)doesHandleNotification:(id)arg1;
- (int)exposureMode;
- (struct CGPoint { float x1; float x2; })exposurePointOfInterest;
- (int)flashMode;
- (int)focusMode;
- (struct CGPoint { float x1; float x2; })focusPointOfInterest;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (BOOL)hasFlash;
- (BOOL)hasMediaType:(id)arg1;
- (BOOL)hasTorch;
- (int)imageControlMode;
- (id)init;
- (id)initWithProperties:(id)arg1;
- (BOOL)isAdjustingExposure;
- (BOOL)isAdjustingFocus;
- (BOOL)isAdjustingWhiteBalance;
- (BOOL)isConnected;
- (BOOL)isExposureModeSupported:(int)arg1;
- (BOOL)isExposurePointOfInterestSupported;
- (BOOL)isFlashActive;
- (BOOL)isFlashAvailable;
- (BOOL)isFlashModeSupported:(int)arg1;
- (BOOL)isFocusModeSupported:(int)arg1;
- (BOOL)isFocusPointOfInterestSupported;
- (BOOL)isImageControlModeSupported:(int)arg1;
- (BOOL)isInUseByAnotherApplication;
- (BOOL)isTorchAvailable;
- (BOOL)isTorchModeSupported:(int)arg1;
- (BOOL)isWhiteBalanceModeSupported:(int)arg1;
- (id)localizedName;
- (id)modelID;
- (int)position;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)setAutomaticallyAdjustsImageControlMode:(BOOL)arg1;
- (void)setExposureMode:(int)arg1;
- (void)setExposurePointOfInterest:(struct CGPoint { float x1; float x2; })arg1;
- (void)setFlashMode:(int)arg1;
- (void)setFocusMode:(int)arg1;
- (void)setFocusPointOfInterest:(struct CGPoint { float x1; float x2; })arg1;
- (void)setImageControlMode:(int)arg1;
- (void)setSession:(id)arg1;
- (void)setSubjectAreaChangeMonitoringEnabled:(BOOL)arg1;
- (void)setTorchMode:(int)arg1;
- (void)setWhiteBalanceMode:(int)arg1;
- (BOOL)startUsingDevice:(id*)arg1;
- (void)stopUsingDevice;
- (BOOL)supportsAVCaptureSessionPreset:(id)arg1;
- (float)torchLevel;
- (int)torchMode;
- (id)uniqueID;
- (int)whiteBalanceMode;

@end
