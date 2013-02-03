/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class ADInterstitialView, <ADInterstitialAdDelegate>;

@interface ADInterstitialAd : NSObject {
    <ADInterstitialAdDelegate> *_delegate;
    ADInterstitialView *_interstitialView;
    BOOL _presentedInView;
}

@property(getter=isActionInProgress,readonly) BOOL actionInProgress;
@property <ADInterstitialAdDelegate> * delegate;
@property(retain) ADInterstitialView * interstitialView;
@property(getter=isLoaded,readonly) BOOL loaded;
@property BOOL presentedInView;

- (void)cancelAction;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)interstitialView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (id)interstitialView;
- (void)interstitialViewActionDidFinish:(id)arg1;
- (BOOL)interstitialViewActionShouldBegin:(id)arg1 willLeaveApplication:(BOOL)arg2;
- (void)interstitialViewDidLoadAd:(id)arg1;
- (void)interstitialViewDidUnloadAd:(id)arg1;
- (BOOL)isActionInProgress;
- (BOOL)isLoaded;
- (void)presentFromViewController:(id)arg1;
- (BOOL)presentInView:(id)arg1;
- (BOOL)presentedInView;
- (void)setAuthenticationUserName:(id)arg1;
- (void)setDebuggingDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInterstitialView:(id)arg1;
- (void)setLocalAd:(id)arg1;
- (void)setPresentedInView:(BOOL)arg1;
- (void)setSection:(id)arg1;

@end
