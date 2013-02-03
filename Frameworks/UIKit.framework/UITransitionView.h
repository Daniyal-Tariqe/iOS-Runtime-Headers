/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIResponder, UIView, UIWindow, NSMutableArray;

@interface UITransitionView : UIView <NSCoding> {
    struct { 
        unsigned int animationInProgress : 1; 
        unsigned int ignoresInteractionEvents : 1; 
        unsigned int shouldNotifyDidCompleteImmediately : 1; 
        unsigned int shouldRestoreFromViewAlpha : 1; 
        unsigned int shouldRasterize : 1; 
        unsigned int reserved : 27; 
    id _delegate;
    UIResponder *_firstResponderToRemember;
    UIView *_fromView;
    NSMutableArray *_frozenSubviews;
    UIWindow *_originalWindow;
    UIView *_toView;
    } _transitionViewFlags;
}

@property BOOL shouldNotifyDidCompleteImmediately;

+ (void)_initializeSafeCategory;
+ (double)defaultDurationForTransition:(int)arg1;

- (void)_didCompleteTransition:(BOOL)arg1;
- (void)_didStartTransition;
- (BOOL)_isTransitioningFromFromView:(id)arg1;
- (void)_startTransition:(int)arg1 withDuration:(float)arg2;
- (void)_transitionDidStop:(id)arg1 finished:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (double)durationForTransition:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fromView;
- (BOOL)ignoresInteractionEvents;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isTransitioning;
- (void)notifyDidCompleteTransition:(id)arg1;
- (BOOL)rasterizesOnTransition;
- (void)setDelegate:(id)arg1;
- (void)setIgnoresInteractionEvents:(BOOL)arg1;
- (void)setRasterizesOnTransition:(BOOL)arg1;
- (void)setShouldNotifyDidCompleteImmediately:(BOOL)arg1;
- (BOOL)shouldNotifyDidCompleteImmediately;
- (id)toView;
- (BOOL)transition:(int)arg1 fromView:(id)arg2 toView:(id)arg3;
- (BOOL)transition:(int)arg1 toView:(id)arg2;

@end
