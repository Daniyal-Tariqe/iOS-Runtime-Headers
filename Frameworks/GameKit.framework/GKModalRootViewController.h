/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIViewController;

@interface GKModalRootViewController : UIViewController {
    int _statusBarOrientation;
    BOOL callDismiss;
    id oldDelegate;
    UIViewController *oldRootViewController;
}

@property BOOL callDismiss;
@property(retain) id oldDelegate;
@property(retain) UIViewController * oldRootViewController;

- (BOOL)callDismiss;
- (void)dealloc;
- (id)init;
- (void)loadView;
- (id)oldDelegate;
- (id)oldRootViewController;
- (void)removeChildViewController:(id)arg1;
- (void)setCallDismiss:(BOOL)arg1;
- (void)setOldDelegate:(id)arg1;
- (void)setOldRootViewController:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;

@end
