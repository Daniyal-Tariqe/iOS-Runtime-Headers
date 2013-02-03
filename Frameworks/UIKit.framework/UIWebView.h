/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSURLRequest, UIWebViewInternal, <UIWebViewDelegate>;

@interface UIWebView : UIView <NSCoding, UIScrollViewDelegate> {
    UIWebViewInternal *_internal;
}

@property BOOL allowsInlineMediaPlayback;
@property(getter=canGoBack,readonly) BOOL canGoBack;
@property(getter=canGoForward,readonly) BOOL canGoForward;
@property unsigned int dataDetectorTypes;
@property <UIWebViewDelegate> * delegate;
@property BOOL detectsPhoneNumbers;
@property(getter=isLoading,readonly) BOOL loading;
@property BOOL mediaPlaybackRequiresUserAction;
@property(retain,readonly) NSURLRequest * request;
@property BOOL scalesPageToFit;

+ (void)_initializeSafeCategory;

- (void)_adlib_loadBannerContentURL:(id)arg1;
- (void)_adlib_loadWebArchiveData:(id)arg1;
- (id)_browserView;
- (id)_documentView;
- (void)_frameOrBoundsChanged;
- (void)_populateArchivedSubviews:(id)arg1;
- (Class)_printFormatterClass;
- (void)_reportError:(id)arg1;
- (id)_scrollView;
- (void)_setDrawInWebThread:(BOOL)arg1;
- (void)_setDrawsCheckeredPattern:(BOOL)arg1;
- (void)_setRichTextReaderViewportSettings;
- (void)_setScalesPageToFitViewportSettings;
- (void)_setWebSelectionEnabled:(BOOL)arg1;
- (void)_updateCheckeredPattern;
- (void)_updateOpaqueAndBackgroundColor;
- (void)_updateRequest;
- (void)_updateScrollerViewForInputView:(id)arg1;
- (void)_updateViewSettings;
- (void)_webViewCommonInit:(BOOL)arg1;
- (BOOL)allowsInlineMediaPlayback;
- (BOOL)canGoBack;
- (BOOL)canGoForward;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copy:(id)arg1;
- (struct CGImage { }*)createSnapshotWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (unsigned int)dataDetectorTypes;
- (void)dealloc;
- (id)delegate;
- (BOOL)detectsPhoneNumbers;
- (void)encodeWithCoder:(id)arg1;
- (void)goBack;
- (void)goForward;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isLoading;
- (void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadRequest:(id)arg1;
- (BOOL)mediaPlaybackRequiresUserAction;
- (void)modalView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (struct CGImage { }*)newSnapshotWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)reload;
- (id)request;
- (void)saveGeolocation:(id)arg1;
- (float)scale;
- (BOOL)scalesPageToFit;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)select:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)setAllowsInlineMediaPlayback:(BOOL)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDataDetectorTypes:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetectsPhoneNumbers:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setMediaPlaybackRequiresUserAction:(BOOL)arg1;
- (void)setOpaque:(BOOL)arg1;
- (void)setScale:(float)arg1;
- (void)setScalesPageToFit:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)stopLoading;
- (id)stringByEvaluatingJavaScriptFromString:(id)arg1;
- (void)view:(id)arg1 didSetFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 oldFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (id)viewForZoomingInScrollView:(id)arg1;
- (id)webView:(id)arg1 connectionPropertiesForResource:(id)arg2 dataSource:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForGeolocationRequestFromOrigin:(id)arg2 frame:(id)arg3 listener:(id)arg4;
- (void)webView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)arg2;
- (void)webView:(id)arg1 frame:(id)arg2 exceededDatabaseQuotaForSecurityOrigin:(id)arg3 database:(id)arg4;
- (id)webView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
- (BOOL)webView:(id)arg1 resource:(id)arg2 canAuthenticateAgainstProtectionSpace:(id)arg3 forDataSource:(id)arg4;
- (void)webView:(id)arg1 resource:(id)arg2 didCancelAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (void)webView:(id)arg1 resource:(id)arg2 didReceiveAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;
- (id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (BOOL)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4;
- (void)webView:(id)arg1 unableToImplementPolicyWithError:(id)arg2 frame:(id)arg3;
- (void)webViewClose:(id)arg1;

@end
