/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class ADLayerHostWindow, ADSRVBannerView, ADServerAccessCoordinator, ADDistributedMessagingCenter, ADStoryboardController, NSTimer, NSMutableArray, <AdSheetSessionDelegate>, NSString, ADStoryboardTransitionWindow, CPDistributedMessagingCenter;

@interface ADSRVBannerController : NSObject <ADStoryboardTransitionWindowDelegate, AdSheetBannerViewDelegate, ADStoryboardControllerDelegate, ADCacheSubscriber, ADMessageProxyItem> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGPoint { 
        float x; 
        float y; 
    struct dispatch_source_s { } *_adEventDispatchTimer;
    NSMutableArray *_adEventQueue;
    NSString *_authenticationUserName;
    } _bannerFrame;
    ADSRVBannerView *_bannerView;
    ADLayerHostWindow *_bannerViewWindow;
    NSString *_bundleIdentifier;
    } _clickLocation;
    int _clientOrientation;
    double _createdAt;
    <AdSheetSessionDelegate> *_delegate;
    struct dispatch_queue_s { } *_ipcReplyQueue;
    BOOL _isOpen;
    BOOL _isPrivilegedClient;
    BOOL _isWaitingToRequestDataLoad;
    double _lastReachabilityUpdateTime;
    CPDistributedMessagingCenter *_localCenter;
    struct __SCNetworkReachability { } *_reachability;
    ADDistributedMessagingCenter *_remoteCenter;
    ADServerAccessCoordinator *_serverAccessCoordinator;
    BOOL _serverReachable;
    NSString *_serverURL;
    NSString *_sessionIdentifier;
    ADStoryboardController *_storyboard;
    ADStoryboardTransitionWindow *_storyboardWindow;
    NSTimer *_unloadStoryboardWatchdog;
    BOOL _userIsInStoryboard;
}

@property struct dispatch_source_s { }* adEventDispatchTimer;
@property(retain) NSMutableArray * adEventQueue;
@property(retain) NSString * authenticationUserName;
@property struct CGRect { struct CGPoint { float x; float y; } origin; struct CGSize { float width; float height; } size; } bannerFrame;
@property(retain) ADSRVBannerView * bannerView;
@property(retain) ADLayerHostWindow * bannerViewWindow;
@property(retain) NSString * bundleIdentifier;
@property struct CGPoint { float x; float y; } clickLocation;
@property int clientOrientation;
@property double createdAt;
@property <AdSheetSessionDelegate> * delegate;
@property struct dispatch_queue_s { }* ipcReplyQueue;
@property(readonly) BOOL isBusy;
@property(readonly) BOOL isOpen;
@property(readonly) BOOL isPrivilegedClient;
@property(readonly) BOOL isWaitingToRequestDataLoad;
@property double lastReachabilityUpdateTime;
@property(retain) CPDistributedMessagingCenter * localCenter;
@property(readonly) struct __SCNetworkReachability { }* reachability;
@property(retain) ADDistributedMessagingCenter * remoteCenter;
@property(retain) ADServerAccessCoordinator * serverAccessCoordinator;
@property(getter=isServerReachable) BOOL serverReachable;
@property(retain) NSString * serverURL;
@property(retain) NSString * sessionIdentifier;
@property(retain) ADStoryboardController * storyboard;
@property(retain) ADStoryboardTransitionWindow * storyboardWindow;
@property(retain) NSTimer * unloadStoryboardWatchdog;
@property BOOL userIsInStoryboard;

+ (id)serverMessagingCenterNameForClientName:(id)arg1;

- (void)_flushAdEventQueue;
- (void)_logSysEvent:(int)arg1 forAd:(id)arg2 sequence:(unsigned int)arg3 overclick:(unsigned int)arg4 clickLocation:(id)arg5;
- (void)_setZoom:(BOOL)arg1 animated:(BOOL)arg2;
- (struct dispatch_source_s { }*)adEventDispatchTimer;
- (id)adEventQueue;
- (void)applicationMenuButtonUp:(id)arg1;
- (id)authenticationUserName;
- (void)authoredTransitionInComplete;
- (void)bannerBeginActionMessage:(id)arg1 userInfo:(id)arg2 auditToken:(struct { unsigned int x1[8]; }*)arg3;
- (void)bannerCancelBannerViewActionMessage:(id)arg1 userInfo:(id)arg2 auditToken:(struct { unsigned int x1[8]; }*)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bannerFrame;
- (void)bannerFrameDidChangeMessage:(id)arg1 userInfo:(id)arg2 auditToken:(struct { unsigned int x1[8]; }*)arg3;
- (void)bannerKeysDidChangeMessage:(id)arg1 userInfo:(id)arg2 auditToken:(struct { unsigned int x1[8]; }*)arg3;
- (void)bannerLogExternalActionMessage:(id)arg1 userInfo:(id)arg2 auditToken:(struct { unsigned int x1[8]; }*)arg3;
- (void)bannerOrientationDidChangeMessage:(id)arg1 userInfo:(id)arg2 auditToken:(struct { unsigned int x1[8]; }*)arg3;
- (void)bannerRefuseActionMessage:(id)arg1 userInfo:(id)arg2 auditToken:(struct { unsigned int x1[8]; }*)arg3;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)bannerView:(id)arg1 shouldLogClickForAd:(id)arg2 impressionSequence:(unsigned int)arg3 overclickCount:(unsigned int)arg4;
- (void)bannerView:(id)arg1 shouldLogImpressionForAd:(id)arg2 impressionSequence:(unsigned int)arg3;
- (id)bannerView;
- (void)bannerViewActionDidAbandon:(id)arg1;
- (void)bannerViewDidCancelDataLoad:(id)arg1;
- (void)bannerViewDidLoadAd:(id)arg1;
- (void)bannerViewDidRequestDataLoad:(id)arg1;
- (int)bannerViewRequestsHostInterfaceOrientation:(id)arg1;
- (id)bannerViewWindow;
- (void)bannerVisibilityHeartbeat:(id)arg1 userInfo:(id)arg2 auditToken:(struct { unsigned int x1[8]; }*)arg3;
- (id)bundleIdentifier;
- (void)cacheFailedToLoadBanner:(id)arg1 withError:(id)arg2;
- (void)cacheLoadedBannerData:(id)arg1;
- (struct CGPoint { float x1; float x2; })clickLocation;
- (void)clientApplicationDidBecomeActive;
- (void)clientApplicationDidEnterBackground;
- (void)clientApplicationDidResignActive;
- (void)clientApplicationWillEnterForeground;
- (int)clientOrientation;
- (void)close;
- (void)closeMessage:(id)arg1 userInfo:(id)arg2 auditToken:(struct { unsigned int x1[8]; }*)arg3;
- (void)controllerKeysDidChangeMessage:(id)arg1 userInfo:(id)arg2 auditToken:(struct { unsigned int x1[8]; }*)arg3;
- (double)createdAt;
- (void)dealloc;
- (id)delegate;
- (void)dismissStoryboardWithDelay:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hostBannerRect;
- (int)hostInterfaceOrientation;
- (id)init;
- (void)interstitialPresentedInViewMessage:(id)arg1 userInfo:(id)arg2 auditToken:(struct { unsigned int x1[8]; }*)arg3;
- (void)interstitialTouchDismissMessage:(id)arg1 userInfo:(id)arg2 auditToken:(struct { unsigned int x1[8]; }*)arg3;
- (void)interstitialView:(id)arg1 shouldLogSystemEvent:(int)arg2 forAd:(id)arg3 impressionSequence:(unsigned int)arg4 overclickCount:(unsigned int)arg5;
- (void)interstitialViewExpiredAndWasUnloaded:(id)arg1;
- (struct dispatch_queue_s { }*)ipcReplyQueue;
- (BOOL)isBusy;
- (BOOL)isOpen;
- (BOOL)isPrivilegedClient;
- (BOOL)isServerReachable;
- (BOOL)isValidAuditToken:(struct { unsigned int x1[8]; }*)arg1;
- (BOOL)isWaitingToRequestDataLoad;
- (double)lastReachabilityUpdateTime;
- (void)loadDebuggerMessage:(id)arg1 userInfo:(id)arg2 auditToken:(struct { unsigned int x1[8]; }*)arg3;
- (void)loadLocalAdMessage:(id)arg1 userInfo:(id)arg2 auditToken:(struct { unsigned int x1[8]; }*)arg3;
- (BOOL)loadStoryboardController;
- (void)loadStoryboardWindow;
- (id)localCenter;
- (void)open;
- (BOOL)openURL:(id)arg1;
- (id)proxyItemIdentifier;
- (struct __SCNetworkReachability { }*)reachability;
- (void)readyForAuthoredTransitionIn;
- (id)remoteCenter;
- (void)removedFromSuperviewMessage:(id)arg1 userInfo:(id)arg2 auditToken:(struct { unsigned int x1[8]; }*)arg3;
- (void)sendBannerUrlActionMessage:(BOOL)arg1;
- (void)sendMessageName:(id)arg1 userInfo:(id)arg2;
- (id)serverAccessCoordinator;
- (void)serverAccessCoordinatorAllowsRequestsNotification:(id)arg1;
- (id)serverURL;
- (id)sessionIdentifier;
- (void)setAdEventDispatchTimer:(struct dispatch_source_s { }*)arg1;
- (void)setAdEventQueue:(id)arg1;
- (void)setAuthenticationUserName:(id)arg1;
- (void)setBannerFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBannerView:(id)arg1;
- (void)setBannerViewWindow:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setClickLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)setClientOrientation:(int)arg1;
- (void)setCreatedAt:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIpcReplyQueue:(struct dispatch_queue_s { }*)arg1;
- (void)setLastReachabilityUpdateTime:(double)arg1;
- (void)setLocalCenter:(id)arg1;
- (void)setRemoteCenter:(id)arg1;
- (void)setServerAccessCoordinator:(id)arg1;
- (void)setServerReachable:(BOOL)arg1;
- (void)setServerURL:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setStoryboard:(id)arg1;
- (void)setStoryboardWindow:(id)arg1;
- (void)setUnloadStoryboardWatchdog:(id)arg1;
- (void)setUserIsInStoryboard:(BOOL)arg1;
- (void)startReachability;
- (void)statusBarHiddenDidChangeNotification:(id)arg1;
- (void)statusBarOrientationDidChangeNotification:(id)arg1;
- (void)stopReachability;
- (void)storyboard:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)storyboard:(id)arg1 didReportContentEventWithMessage:(id)arg2;
- (void)storyboard:(id)arg1 didReportSystemEventWithType:(int)arg2;
- (id)storyboard;
- (void)storyboardContentRequestsGeolocation:(id)arg1 approval:(id)arg2;
- (void)storyboardContentSignalsReady:(id)arg1;
- (void)storyboardDidChangeSupportedOrientations:(id)arg1;
- (void)storyboardDidFinishFirstSignificantDraw:(id)arg1;
- (id)storyboardHumanReadableContentName:(id)arg1;
- (void)storyboardOpenURLReply:(id)arg1 userInfo:(id)arg2 auditToken:(struct { unsigned int x1[8]; }*)arg3;
- (void)storyboardShouldDismiss:(id)arg1;
- (void)storyboardVideoPlayerExitedFullScreen:(id)arg1;
- (void)storyboardVideoPlayerWentFullScreen:(id)arg1;
- (id)storyboardWindow;
- (void)transitionFromAdDidFinish;
- (void)transitionFromAdWillBegin;
- (void)transitionToAdDidFinish;
- (void)transitionToAdWillBegin;
- (id)uniqueIdentifier;
- (id)unloadStoryboardWatchdog;
- (void)unloadStoryboardWindow;
- (void)updateSpecificationMessage:(id)arg1 userInfo:(id)arg2 auditToken:(struct { unsigned int x1[8]; }*)arg3;
- (void)updateZoomedAnimated:(BOOL)arg1;
- (BOOL)userIsInStoryboard;

@end
