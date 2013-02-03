/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIScrollView;

@interface UIScrollViewPinchGestureRecognizer : UIPinchGestureRecognizer {
    unsigned int _hasParentScrollView : 1;
    UIScrollView *_scrollView;
}

@property UIScrollView * scrollView;

- (float)_hysteresis;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
