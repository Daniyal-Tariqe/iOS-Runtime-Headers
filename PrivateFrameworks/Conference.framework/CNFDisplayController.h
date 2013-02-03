/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIImage, NSObject<CNFDisplayControllerDelegate>, CNFInterfaceOverlayView, <CNFDisplayControllerDelegate>, UILabel, UIControl, TPBottomButtonBar, TPBottomDualButtonBar, UIView, CNFHUDView, CNFAudioDeviceView, TPLCDView, NSString, CNFAlertView, UIImageView, NSTimer;

@interface CNFDisplayController : UIViewController {
    struct CGSize { 
        float width; 
        float height; 
    struct CGPoint { 
        float x; 
        float y; 
    BOOL _alwaysVisible;
    NSTimer *_autodismissRouteListTimer;
    TPBottomButtonBar *_bottomBar;
    CNFInterfaceOverlayView *_callBarOverlayView;
    BOOL _callBarsAdjustForOrientation;
    BOOL _callFailedWhileAnimatingFromVoiceControl;
    CNFHUDView *_callInfoHUDView;
    UIImage *_contactImage;
    NSString *_contactName;
    unsigned int _currentDisplaySetup;
    NSObject<CNFDisplayControllerDelegate> *_delegate;
    TPBottomDualButtonBar *_dualBottomBar;
    CNFAlertView *_errorAlert;
    TPBottomButtonBar *_fakeBottomBar;
    id _flipLocalCameraCompletionBlock;
    BOOL _hudAdjustsForOrientation;
    CNFInterfaceOverlayView *_hudOverlayView;
    CNFHUDView *_hudView;
    BOOL _isShowingFullConferenceDisplay;
    int _lastKnownOrientation;
    float _localAspectRatio;
    UIView *_localVideoBackView;
    UIView *_localVideoContainer;
    UIImageView *_localVideoFrameView;
    UIView *_localVideoMutedView;
    UIView *_localVideoOverlayView;
    UIView *_localVideoView;
    BOOL _managesStatusBar;
    } _minLocalViewSize;
    } _points[5];
    float _remoteAspectRatio;
    unsigned int _remoteCameraType;
    UIView *_remoteVideoBackView;
    UIView *_remoteVideoContainer;
    int _remoteVideoOrientation;
    UIView *_remoteVideoOverlayView;
    UIView *_remoteVideoPausedView;
    UIControl *_remoteVideoView;
    CNFAudioDeviceView *_routeList;
    int _routeListReloadPending;
    int _routeListVisible;
    UILabel *_statsHUDTextLabel;
    NSTimer *_statsHUDTimer;
    BOOL _stillAnimatingFromVoiceControl;
    int _style;
    UILabel *_textLabel;
    TPLCDView *_topBar;
    BOOL _useFourByThreePIPAspectRatio;
    BOOL _useLargeTextAndIcons;
    UIControl *_videoGroupView;
    int _voiceControlFailureError;
    unsigned int _voiceControlFailureReason;
    BOOL _waitingForLocalCameraFirstFrame;
    BOOL _waitingForLocalPreviewFirstFrame;
    BOOL _waitingForLocalPreviewResumeFrame;
    UIView *_zoomView;
}

@property BOOL alwaysVisible;
@property BOOL callBarsAdjustForOrientation;
@property(retain) UIImage * contactImage;
@property(retain) NSString * contactName;
@property <CNFDisplayControllerDelegate> * delegate;
@property(copy) id flipLocalCameraCompletionBlock;
@property BOOL hudAdjustsForOrientation;
@property BOOL managesStatusBar;
@property int remoteVideoOrientation;

+ (void)_initializeSafeCategory;
+ (void)loadImages;
+ (void)preinitialize;

- (void)_addDeviceOrientationChangeObserver;
- (void)_adjustCallBarsForOrientation:(int)arg1;
- (void)_adjustForOrientationsWithAnimation:(BOOL)arg1 completion:(id)arg2;
- (void)_adjustForOrientationsWithAnimation:(BOOL)arg1;
- (void)_adjustHUDViewForOrientation:(int)arg1;
- (void)_adjustPIPImageForOrientation:(int)arg1;
- (float)_angleForLocalOrientation:(int)arg1 remoteOrientation:(int)arg2;
- (void)_animateEndCallUIForCallBars;
- (void)_animateFromVoiceControlWithName:(id)arg1 andSubtitle:(id)arg2;
- (void)_applicationResumed:(id)arg1;
- (void)_applicationSuspended:(id)arg1;
- (void)_autodismissAudioMenu:(id)arg1;
- (void)_avFirstPreviewFrameArrived:(id)arg1;
- (void)_avFirstRemoteFrameArrived:(id)arg1;
- (void)_avRemoteCameraDidChange:(id)arg1;
- (void)_avRemoteCameraWillChange:(id)arg1;
- (void)_avRemoteOrientationDidChange:(id)arg1;
- (float)_bounceValueForFraction:(float)arg1;
- (void)_callFailureRecoveryCancelAction:(id)arg1;
- (void)_callFailureRecoveryTryAgainAction:(id)arg1;
- (struct CGPoint { float x1; float x2; })_controlPointForTrackingPoints:(struct CGPoint { float x1; float x2; }*)arg1;
- (void)_createLocalVideoOverlayView;
- (void)_createRemoteVideoOverlayView;
- (void)_createStatsHUD;
- (id)_defaultStringForEndedReason:(unsigned int)arg1 error:(int)arg2;
- (void)_delayedEndConferenceDisplayAnimationOnCallBar;
- (void)_deselectEndVideoButton;
- (void)_deselectEndVideoButtonOnCallBar;
- (void)_deviceOrientationDidChange:(id)arg1;
- (int)_deviceOrientationForIMAVCameraOrientation:(unsigned int)arg1;
- (void)_didFinishAnimatingEndCall;
- (void)_disableBottomBarButtonAndAnimateOutCallBars;
- (void)_dissociateVideoLayers;
- (void)_endCallBarDisplayAnimation;
- (void)_endConferenceDisplayAnimation;
- (void)_endConferenceDisplayAnimationOnCallBar;
- (void)_endVideoAction:(id)arg1;
- (void)_fadeInPIPFrame;
- (void)_fakeRemoteOrientationChange:(id)arg1;
- (struct CGPoint { float x1; float x2; })_finalPointForPIPView:(id)arg1 inset:(float)arg2 isTop:(BOOL)arg3 isLeft:(BOOL)arg4;
- (void)_finishAnimationFromVoiceControl;
- (void)_finishedDraggingView:(id)arg1 forPoints:(struct CGPoint { float x1; float x2; }*)arg2;
- (void)_flipLocalCameraViewWithCompletion:(id)arg1;
- (void)_flipRemoteCameraView;
- (id)_flipTransitionForOrientation:(int)arg1;
- (void)_hideAudioRoutesAnimationDidStop;
- (void)_hideExistingUI;
- (struct CGPoint { float x1; float x2; })_hudViewCenterForHUDView:(id)arg1 style:(int)arg2 inView:(id)arg3;
- (unsigned int)_imAVCameraOrientationForDeviceOrientation:(int)arg1;
- (BOOL)_isInPhoneCall;
- (BOOL)_isOutgoingInvitation;
- (BOOL)_isShowingCallBar:(id)arg1;
- (BOOL)_isShowingHudView:(id)arg1;
- (BOOL)_isValidFaceTimeOrientation:(int)arg1;
- (void)_moveCallBarsOffscreen;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_offscreenTransformForView:(id)arg1 withLocationType:(int)arg2;
- (int)_pinView:(id)arg1 withTrackingPoints:(struct CGPoint { float x1; float x2; }*)arg2 toClosestCornerWithInset:(float)arg3;
- (void)_pinningAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_reloadRouteList;
- (void)_removeDeviceOrientationChangeObserver;
- (void)_removeOverlayViews;
- (void)_resetDisplayControllerForNewFaceTimeCall;
- (void)_resetPIPToFullScreen;
- (void)_selectEndVideoButton;
- (void)_selectEndVideoButtonOnCallBar;
- (void)_setBottomBarButtonEnabled:(BOOL)arg1;
- (void)_setLocalVideoOrientation:(BOOL)arg1;
- (void)_setupAutodismissRoutingTimer:(float)arg1;
- (void)_setupCallBars;
- (void)_setupDisplayController;
- (void)_setupHUDView;
- (void)_setupVideoLayers;
- (BOOL)_shouldChangeStatusBar;
- (void)_showAudioRoutesHidePIPAnimationDidStop;
- (void)_showErrorUIWithStatus:(id)arg1 showDualBottomBar:(BOOL)arg2 animateOut:(BOOL)arg3;
- (void)_showStatusBar;
- (void)_syncSublayerFrameSizeToParent:(id)arg1 animated:(BOOL)arg2;
- (void)_syncSublayersAnimated:(BOOL)arg1;
- (void)_updateStatsHUD;
- (void)_updateStatusAndAnimateOutCallBars;
- (void)_updateViewBounds;
- (BOOL)_useFloatingHUD;
- (BOOL)_useFourByThreePIPAspectRatio;
- (BOOL)_useLargeTextAndIcons;
- (id)_viewWithCenteredImage:(id)arg1 title:(id)arg2 inFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)addPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (BOOL)alwaysVisible;
- (void)animateOutWithAnimations:(id)arg1 completion:(id)arg2;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)applicationDidResume;
- (void)associateVideoLayers;
- (BOOL)callBarsAdjustForOrientation;
- (void)changeToFullConferenceDisplay;
- (id)contactImage;
- (id)contactName;
- (void)dealloc;
- (id)delegate;
- (void)didReceiveMemoryWarning;
- (void)endCall;
- (id)flipLocalCameraCompletionBlock;
- (void)handleDraggableViewLongPress:(id)arg1;
- (void)handleThreeFingerPress:(id)arg1;
- (void)hideAudioRoutingDeviceList;
- (BOOL)hudAdjustsForOrientation;
- (void)hudButtonTapped:(int)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1 options:(unsigned int)arg2;
- (id)initWithDelegate:(id)arg1;
- (BOOL)isShowingConferenceUI;
- (id)localVideoView;
- (BOOL)managesStatusBar;
- (void)postUserNotificationWithTitle:(id)arg1 message:(id)arg2;
- (void)refreshBottomBarButton;
- (void)reloadRouteList;
- (int)remoteVideoOrientation;
- (void)resetAutodismissTimer;
- (void)resetStatsHUDTimer;
- (void)resetToFullScreenPreview;
- (void)returnToFullScreenPreviewAnimated:(BOOL)arg1 actions:(id)arg2 completion:(id)arg3;
- (void)returnToFullScreenPreviewWithAnimations:(id)arg1 completion:(id)arg2;
- (void)setAlwaysVisible:(BOOL)arg1;
- (void)setAudioDevicesButtonSelected:(BOOL)arg1;
- (void)setCallBarsAdjustForOrientation:(BOOL)arg1;
- (void)setContactImage:(id)arg1;
- (void)setContactName:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFlipLocalCameraCompletionBlock:(id)arg1;
- (void)setHudAdjustsForOrientation:(BOOL)arg1;
- (void)setManagesStatusBar:(BOOL)arg1;
- (void)setMuteConferenceButtonEnabled:(BOOL)arg1;
- (void)setMuteConferenceButtonSelected:(BOOL)arg1;
- (void)setRemoteVideoOrientation:(int)arg1;
- (void)setStatus:(int)arg1 animated:(BOOL)arg2;
- (void)setStatusForState:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)setupAutodismissRoutingTimer;
- (void)setupStatsHUDTimer;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)showAcceptCallBarsAnimated:(BOOL)arg1 wasLocked:(BOOL)arg2;
- (void)showAudioRoutingDeviceList;
- (void)showCallBarsAnimated:(BOOL)arg1;
- (void)showCallFailedWithReason:(unsigned int)arg1 error:(int)arg2;
- (void)showErrorAlertWithTitle:(id)arg1 message:(id)arg2 alternateButton:(id)arg3 alternateButtonURL:(id)arg4;
- (void)showErrorAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)showLocalHangup;
- (void)showLocalViewAsMuted:(BOOL)arg1;
- (void)showLocationErrorAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)showRemoteHangUp;
- (void)showRemoteViewAsPaused:(BOOL)arg1;
- (void)showWifiErrorAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)startPreview;
- (void)stopPreview;
- (void)toggleLocalCameraType;
- (void)updateAudioButton:(BOOL)arg1;
- (void)updateCallBarStatusAndNameAnimated:(BOOL)arg1;
- (void)updateStatusAnimated:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
