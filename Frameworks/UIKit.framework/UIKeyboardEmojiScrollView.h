/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIPageControl, UILabel, <UIKeyboardEmojiController>, UIScrollView, UIKeyboardEmojiCategory, NSMutableArray;

@interface UIKeyboardEmojiScrollView : UIView <UIScrollViewDelegate> {
    UIKeyboardEmojiCategory *_category;
    UILabel *_categoryLabel;
    <UIKeyboardEmojiController> *_controller;
    int _currentPage;
    UIPageControl *_pageControl;
    NSMutableArray *_pages;
    UIScrollView *_scrollView;
}

@property <UIKeyboardEmojiController> * controller;

+ (void)_initializeSafeCategory;

- (void)_accessibilityDelayedPost;
- (void)clearPages;
- (id)controller;
- (int)currentPage;
- (void)dealloc;
- (void)delayedLayout:(id)arg1;
- (void)doLayout;
- (void)ensureSurrounded:(int)arg1;
- (void)forceLayout;
- (void)goToFirstPage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)interruptScrolling;
- (void)layoutPages;
- (void)layoutRecents;
- (void)pageChanged;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setController:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setScrollDelay:(double)arg1;

@end
