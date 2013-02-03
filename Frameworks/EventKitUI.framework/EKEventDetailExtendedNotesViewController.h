/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSString, UIWebView;

@interface EKEventDetailExtendedNotesViewController : UIViewController <UIWebViewDelegate> {
    NSString *_notes;
    UIWebView *_webView;
}

@property(copy) NSString * notes;

- (id)_webView;
- (void)dealloc;
- (id)init;
- (void)loadView;
- (id)notes;
- (void)setNotes:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(unsigned int)arg3;

@end
