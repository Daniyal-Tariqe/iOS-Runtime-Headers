/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class QLPreviewViewReserved, <QLPreviewItem>;

@interface QLPreviewView : UIView {
    QLPreviewViewReserved *_reserved;
}

@property id delegate;
@property(retain) <QLPreviewItem> * previewItem;

+ (void)_initializeSafeCategory;
+ (id)_passThroughUTIs;
+ (BOOL)_shouldPassThroughUTI:(id)arg1;
+ (BOOL)canPreviewMIMEType:(id)arg1;
+ (BOOL)canPreviewURL:(id)arg1;

- (void)_addProgressUI;
- (void)_commonInit;
- (BOOL)_hasProgressiveUI;
- (id)_newDisplayBundleForPreviewItem;
- (void)_removeProgressiveUI;
- (void)_startProgressiveUITimer;
- (void)_swapDisplay:(id)arg1 animated:(BOOL)arg2;
- (void)_swapDisplayBundleAnimationDidEnd;
- (BOOL)canPrint;
- (void)cancelPreview;
- (void)dealloc;
- (id)delegate;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (BOOL)displayBundle:(id)arg1 decidePolicyForNavigationType:(int)arg2 request:(id)arg3;
- (void)displayBundle:(id)arg1 didLoadItem:(id)arg2 withError:(id)arg3;
- (id)displayBundle:(id)arg1 willSendRequest:(id)arg2;
- (id)displayBundle;
- (void)displayBundleWasTapped:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isLoading;
- (id)pdfPreviewURL;
- (void)previewControllerDidReceiveMemoryWarning;
- (void)previewControllerDidZoomIn;
- (void)previewControllerDidZoomOut;
- (void)previewControllerWillZoomIn;
- (void)previewControllerWillZoomOut;
- (BOOL)previewIsReady;
- (id)previewItem;
- (id)printPageRenderer;
- (void)refreshPreviewItem;
- (void)setDelegate:(id)arg1;
- (void)setNavigationBarHeight:(float)arg1 animated:(BOOL)arg2;
- (void)setPreviewItem:(id)arg1;
- (BOOL)shouldAutoHideOverlay;
- (BOOL)shouldDisplayFullScreen;
- (void)viewDidLoad;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
