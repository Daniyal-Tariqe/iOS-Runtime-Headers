/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SURatingAlertView, ISReview, SUComposeReviewView;

@interface SUComposeReviewViewController : SUViewController <UIAlertViewDelegate> {
    SUComposeReviewView *_composeView;
    SURatingAlertView *_ratingAlert;
    ISReview *_review;
    int _state;
}

- (void)_cancel;
- (void)_fetchReviewInfo;
- (void)_setReviewByMergingWithReview:(id)arg1;
- (void)_submit;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)applicationDidEnterBackground;
- (void)composeReviewViewValidityChanged:(id)arg1;
- (id)copyReview;
- (id)copyScriptViewController;
- (void)dealloc;
- (id)init;
- (void)loadView;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operationFinished:(id)arg1;
- (void)setReview:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end
