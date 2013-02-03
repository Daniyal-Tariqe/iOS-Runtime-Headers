/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, NSArray, UIView, <UIScrollViewDelegate>;

@interface UIScrollView : UIView <NSCoding> {
    struct CGSize { 
        float width; 
        float height; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct { 
        unsigned int tracking : 1; 
        unsigned int dragging : 1; 
        unsigned int verticalBounceEnabled : 1; 
        unsigned int horizontalBounceEnabled : 1; 
        unsigned int verticalBouncing : 1; 
        unsigned int horizontalBouncing : 1; 
        unsigned int bouncesZoom : 1; 
        unsigned int zoomBouncing : 1; 
        unsigned int alwaysBounceHorizontal : 1; 
        unsigned int alwaysBounceVertical : 1; 
        unsigned int canCancelContentTouches : 1; 
        unsigned int delaysContentTouches : 1; 
        unsigned int programmaticScrollDisabled : 1; 
        unsigned int scrollDisabled : 1; 
        unsigned int zoomDisabled : 1; 
        unsigned int scrollTriggered : 1; 
        unsigned int scrollDisabledOnTouchBegan : 1; 
        unsigned int ignoreNextTouchesMoved : 1; 
        unsigned int cancelNextContentTouchEnded : 1; 
        unsigned int inContentViewCall : 1; 
        unsigned int dontSelect : 1; 
        unsigned int contentTouched : 1; 
        unsigned int cantCancel : 1; 
        unsigned int directionalLockEnabled : 1; 
        unsigned int directionalLockAutoEnabled : 1; 
        unsigned int lockVertical : 1; 
        unsigned int lockHorizontal : 1; 
        unsigned int keepLocked : 1; 
        unsigned int showsHorizontalScrollIndicator : 1; 
        unsigned int showsVerticalScrollIndicator : 1; 
        unsigned int indicatorStyle : 2; 
        unsigned int inZoom : 1; 
        unsigned int hideIndicatorsInZoom : 1; 
        unsigned int pushedTrackingMode : 1; 
        unsigned int multipleDrag : 1; 
        unsigned int displayingScrollIndicators : 1; 
        unsigned int verticalIndicatorShrunk : 1; 
        unsigned int horizontalIndicatorShrunk : 1; 
        unsigned int contentFitDisableScrolling : 1; 
        unsigned int pagingEnabled : 1; 
        unsigned int pagingLeft : 1; 
        unsigned int pagingRight : 1; 
        unsigned int pagingUp : 1; 
        unsigned int pagingDown : 1; 
        unsigned int lastHorizontalDirection : 1; 
        unsigned int lastVerticalDirection : 1; 
        unsigned int dontScrollToTop : 1; 
        unsigned int scrollingToTop : 1; 
        unsigned int useGestureRecognizers : 1; 
        unsigned int autoscrolling : 1; 
        unsigned int automaticContentOffsetAdjustmentDisabled : 1; 
        unsigned int skipStartOffsetAdjustment : 1; 
        unsigned int delegateScrollViewDidScroll : 1; 
        unsigned int delegateScrollViewDidZoom : 1; 
        unsigned int delegateContentSizeForZoomScale : 1; 
        unsigned int preserveCenterDuringRotation : 1; 
        unsigned int delaysTrackingWhileDecelerating : 1; 
        unsigned int pinnedZoomMin : 1; 
        unsigned int pinnedXMin : 1; 
        unsigned int pinnedYMin : 1; 
        unsigned int pinnedXMax : 1; 
        unsigned int pinnedYMax : 1; 
        unsigned int skipLinkChecks : 1; 
        unsigned int wasIgnoringTapsInDimmingView : 1; 
        unsigned int isAnimatingScroll : 1; 
        unsigned int isAnimatingZoom : 1; 
        unsigned int staysCenteredDuringPinch : 1; 
        unsigned int wasDelayingPinchForSystemGestures : 1; 
        unsigned int systemGesturesRecognitionPossible : 1; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    float _accuracy;
    id _animation;
    } _contentInset;
    double _contentOffsetAnimationDuration;
    } _contentSize;
    UIView *_contentView;
    } _decelerationFactor;
    double _decelerationLnFactorH;
    double _decelerationLnFactorV;
    NSArray *_deferredBeginTouchesInfo;
    id _delegate;
    float _farthestDistance;
    int _fastScrollCount;
    double _fastScrollEndTime;
    float _fastScrollMultiplier;
    float _fastScrollStartMultiplier;
    UIImageView *_horizontalScrollIndicator;
    double _horizontalVelocity;
    float _hysteresis;
    } _initialTouchPosition;
    } _lastTouchPosition;
    double _lastTouchTime;
    double _lastUpdateOffsetX;
    double _lastUpdateOffsetY;
    double _lastUpdateTime;
    float _maximumZoomScale;
    float _minimumZoomScale;
    } _pageDecelerationTarget;
    float _pagingFriction;
    float _pagingSpringPull;
    id _pan;
    } _parentAdjustment;
    id _pinch;
    double _previousHorizontalVelocity;
    double _previousVerticalVelocity;
    } _rotationCenterPoint;
    void *_scrollHeartbeat;
    } _scrollIndicatorInset;
    id _scrollNotificationViews;
    } _scrollViewFlags;
    UIImageView **_shadows;
    double _startOffsetX;
    double _startOffsetY;
    } _startTouchPosition;
    double _startTouchTime;
    } _stopOffset;
    id _swipe;
    UIImageView *_verticalScrollIndicator;
    double _verticalVelocity;
    } _zoomAnchorPoint;
    unsigned int _zoomAnimationCount;
    int _zoomRubberBandHysteresisCount;
    UIView *_zoomView;
}

@property BOOL alwaysBounceHorizontal;
@property BOOL alwaysBounceVertical;
@property BOOL bounces;
@property BOOL bouncesZoom;
@property BOOL canCancelContentTouches;
@property struct UIEdgeInsets { float top; float left; float bottom; float right; } contentInset;
@property struct CGPoint { float x; float y; } contentOffset;
@property struct CGSize { float width; float height; } contentSize;
@property(getter=isDecelerating,readonly) BOOL decelerating;
@property float decelerationRate;
@property BOOL delaysContentTouches;
@property <UIScrollViewDelegate> * delegate;
@property(getter=isDirectionalLockEnabled) BOOL directionalLockEnabled;
@property(getter=isDragging,readonly) BOOL dragging;
@property int indicatorStyle;
@property(getter=_isAnimatingScroll,readonly) BOOL isAnimatingScroll;
@property(getter=_isAnimatingZoom,readonly) BOOL isAnimatingZoom;
@property(getter=_isHorizontalBouncing,readonly) BOOL isHorizontalBouncing;
@property(getter=_isVerticalBouncing,readonly) BOOL isVerticalBouncing;
@property float maximumZoomScale;
@property float minimumZoomScale;
@property(getter=isPagingEnabled) BOOL pagingEnabled;
@property(getter=isProgrammaticScrollEnabled) BOOL programmaticScrollEnabled;
@property(getter=isScrollEnabled) BOOL scrollEnabled;
@property struct UIEdgeInsets { float top; float left; float bottom; float right; } scrollIndicatorInsets;
@property BOOL scrollsToTop;
@property BOOL showsHorizontalScrollIndicator;
@property BOOL showsVerticalScrollIndicator;
@property(getter=isTracking,readonly) BOOL tracking;
@property(getter=isZoomBouncing,readonly) BOOL zoomBouncing;
@property float zoomScale;
@property(getter=isZooming,readonly) BOOL zooming;

+ (BOOL)__original_resolveClassMethod:(SEL)arg1;
+ (float)_cancelSelectDistance;
+ (void)_initializeSafeCategory;
+ (BOOL)resolveClassMethod:(SEL)arg1;

- (id)__original_forwardingTargetForSelector:(SEL)arg1;
- (struct CGSize { float x1; float x2; })_accessibilityContentSize;
- (void)_accessibilityCurrentPage:(int*)arg1 totalPages:(int*)arg2;
- (void)_accessibilityInformDelegateScrollViewDidEndDecelerating;
- (BOOL)_accessibilityIsScrollAncestor;
- (float)_accessibilityScrollAnimationDurationDelay;
- (float)_accessibilityScrollHeightDistance;
- (void)_accessibilityScrollPageInDirection:(int)arg1;
- (id)_accessibilityScrollStatus;
- (void)_accessibilityScrollToFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forView:(id)arg2;
- (BOOL)_accessibilityScrollToTopWithAnnouncement:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_accessibilityScrollViewVisibleFrame;
- (float)_accessibilityScrollWidthDistance;
- (BOOL)_accessibilityScrollingEnabled;
- (void)_accessibilitySendScrollStatus;
- (BOOL)_accessibilityShouldAnimateScroll;
- (void)_accessibilityZoomAtPoint:(struct CGPoint { float x1; float x2; })arg1 zoomIn:(BOOL)arg2;
- (void)_addContentSubview:(id)arg1 atBack:(BOOL)arg2;
- (void)_addScrollNotificationView:(id)arg1;
- (void)_adjustBackgroundShadowsForContentSizeForcedVisible:(BOOL)arg1 withOffset:(float)arg2;
- (void)_adjustBackgroundShadowsForContentSizeForcedVisible:(BOOL)arg1;
- (void)_adjustContentOffsetIfNecessary;
- (void)_adjustContentSizeForView:(id)arg1 atScale:(float)arg2;
- (void)_adjustForAutomaticKeyboardInfo:(id)arg1 animated:(BOOL)arg2 lastAdjustment:(float*)arg3;
- (void)_adjustScrollerIndicators:(BOOL)arg1 alwaysShowingThem:(BOOL)arg2;
- (void)_adjustShadowsIfNecessary;
- (void)_adjustShadowsIfNecessaryForOffset:(float)arg1;
- (void)_announceDelayedStatus;
- (id)_backgroundShadowForSlideAnimation;
- (void)_beginTouchesInContentView:(id)arg1 touches:(id)arg2 withEvent:(id)arg3;
- (BOOL)_beginTrackingWithEvent:(id)arg1;
- (BOOL)_canCancelContentTouches:(id)arg1;
- (BOOL)_canScrollX;
- (BOOL)_canScrollY;
- (BOOL)_cancelContentTouchWithEvent:(id)arg1 forced:(BOOL)arg2;
- (void)_cancelPendingAnimations;
- (void)_centerContentIfNecessary;
- (void)_changedGesture:(id)arg1 withEvent:(id)arg2;
- (void)_clearContentOffsetAnimation;
- (double)_contentOffsetAnimationDuration;
- (BOOL)_continueScrollingAtOffset:(struct CGPoint { float x1; float x2; })arg1;
- (id)_defaultHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)_deferredBeginTouchesInContentView;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_disableScrollingIfNecessary;
- (void)_enableScrollingIfNecessary;
- (void)_endGesture:(id)arg1 withEvent:(id)arg2;
- (void)_endPanWithEvent:(id)arg1;
- (void)_forceDelegateScrollViewDidZoom:(BOOL)arg1;
- (BOOL)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)_gestureTargetHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)_getBouncingDecelerationOffset:(double*)arg1 forTimeInterval:(double)arg2 lastUpdateOffset:(double)arg3 min:(double)arg4 max:(double)arg5 decelerationFactor:(double)arg6 decelerationLnFactor:(double)arg7 velocity:(double*)arg8;
- (id)_getDelegateZoomView;
- (BOOL)_getPagingDecelerationOffset:(struct CADoublePoint { double x1; double x2; }*)arg1 forTimeInterval:(double)arg2;
- (void)_getStandardDecelerationOffset:(double*)arg1 forTimeInterval:(double)arg2 min:(double)arg3 max:(double)arg4 decelerationFactor:(double)arg5 decelerationLnFactor:(double)arg6 velocity:(double*)arg7;
- (void)_handleSwipe:(id)arg1;
- (void)_hideScrollIndicators;
- (id)_hitTestForContentView:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (double)_horizontalVelocity;
- (BOOL)_ignoreLinkedOnChecks;
- (BOOL)_isAnimatingContentOffset;
- (BOOL)_isAnimatingScroll;
- (BOOL)_isAnimatingZoom;
- (BOOL)_isAutoscrolling;
- (BOOL)_isHorizontalBouncing;
- (BOOL)_isIgnoringPopoverDimmingViewTaps;
- (BOOL)_isRectFullyVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)_isScrollingEnabled;
- (BOOL)_isVerticalBouncing;
- (void)_moveContentSubview:(id)arg1 toBack:(BOOL)arg2;
- (void)_notifyDidScroll;
- (void)_notifyPopOverIsScrolling:(BOOL)arg1;
- (void)_notifyPopOverStoppedScrolling;
- (void)_notifyPopOverStoppedScrollingLater;
- (struct CGPoint { float x1; float x2; })_originalOffsetForAnimatedSetContentOffset;
- (struct CGPoint { float x1; float x2; })_pageDecelerationTarget;
- (BOOL)_pagingLeft;
- (BOOL)_pagingRight;
- (id)_panGesture;
- (id)_parentScrollView;
- (id)_pinchGesture;
- (void)_popTrackingRunLoopMode;
- (id)_popoverSuperview;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_prepareToPageWithHorizontalVelocity:(float)arg1 verticalVelocity:(float)arg2;
- (void)_registerForRotation:(BOOL)arg1 ofWindow:(id)arg2;
- (void)_removeScrollNotificationView:(id)arg1;
- (BOOL)_resetScrollingForGestureEvent:(id)arg1;
- (void)_resetScrollingWithEvent:(struct __GSEvent { }*)arg1;
- (void)_resetScrollingWithUIEvent:(id)arg1;
- (struct CADoublePoint { double x1; double x2; })_rubberBandContentOffsetForOffset:(struct CADoublePoint { double x1; double x2; })arg1 outsideX:(BOOL*)arg2 outsideY:(BOOL*)arg3;
- (void)_runLoopModePopped:(id)arg1;
- (float)_scrollHysteresis;
- (BOOL)_scrollToTop;
- (void)_scrollViewAnimationEnded;
- (void)_scrollViewDidEndDecelerating;
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)arg1;
- (void)_scrollViewDidEndZooming;
- (id)_scrollViewTouchDelayGesture;
- (void)_scrollViewWillBeginDragging;
- (void)_scrollViewWillBeginZooming;
- (BOOL)_scrollsToMakeFirstResponderVisible;
- (void)_setAutomaticContentOffsetAdjustmentEnabled:(BOOL)arg1;
- (void)_setAutoscrolling:(BOOL)arg1;
- (void)_setContentOffset:(struct CGPoint { float x1; float x2; })arg1 animated:(BOOL)arg2 animationCurve:(int)arg3;
- (void)_setContentOffset:(struct CGPoint { float x1; float x2; })arg1 duration:(double)arg2 animationCurve:(int)arg3;
- (void)_setContentOffsetAnimationDuration:(double)arg1;
- (void)_setContentOffsetPinned:(struct CGPoint { float x1; float x2; })arg1;
- (void)_setIgnoreLinkedOnChecks:(BOOL)arg1;
- (void)_setIgnorePopoverDimmingViewTaps:(BOOL)arg1;
- (void)_setShowsBackgroundShadow:(BOOL)arg1;
- (void)_setStaysCenteredDuringPinch:(BOOL)arg1;
- (void)_setZoomAnchorPoint:(struct CADoublePoint { double x1; double x2; })arg1;
- (float)_shadowHeightOffset;
- (void)_shiftOffset:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)_showsBackgroundShadow;
- (void)_skipNextStartOffsetAdjustment;
- (void)_smoothScroll:(double)arg1;
- (void)_startGesture:(id)arg1 withEvent:(id)arg2;
- (void)_startTimer:(BOOL)arg1;
- (BOOL)_staysCenteredDuringPinch;
- (struct CGPoint { float x1; float x2; })_stopOffset;
- (void)_stopScrollDecelerationNotify:(BOOL)arg1;
- (void)_stopScrollingNotify:(BOOL)arg1 dealloc:(BOOL)arg2 pin:(BOOL)arg3;
- (void)_systemGestureStateChanged:(id)arg1;
- (void)_testingScrollStep;
- (double)_touchDelayForScrollDetection;
- (struct CGPoint { float x1; float x2; })_touchPositionForTouches:(id)arg1;
- (id)_touchedContentView;
- (void)_touchesEnded:(id)arg1 withEvent:(id)arg2 wasCancelled:(BOOL)arg3;
- (void)_updatePagingGesture;
- (void)_updatePanGesture;
- (void)_updatePinchGesture;
- (void)_updatePinchGestureForState:(int)arg1;
- (BOOL)_updateTouchPanWithStartDelta:(struct CGSize { float x1; float x2; })arg1 event:(id)arg2 ignoringDirectionalScroll:(BOOL)arg3;
- (BOOL)_usesDifferentHitTestForGestures;
- (double)_verticalVelocity;
- (void)_willMoveToWindow:(id)arg1;
- (struct CADoublePoint { double x1; double x2; })_zoomAnchorPoint;
- (void)_zoomAnimationDidStop;
- (float)_zoomAnimationDurationForScale:(float)arg1;
- (float)_zoomRubberBandScaleForScale:(float)arg1;
- (float)_zoomScaleForRubberBandScale:(float)arg1;
- (float)_zoomScaleFromPresentationLayer:(BOOL)arg1;
- (void)_zoomToCenter:(struct CGPoint { float x1; float x2; })arg1 scale:(float)arg2 duration:(double)arg3 force:(BOOL)arg4;
- (void)_zoomToCenter:(struct CGPoint { float x1; float x2; })arg1 scale:(float)arg2 duration:(double)arg3;
- (void)ab_adjustForAutomaticKeyboardInfo:(id)arg1 lastAdjustment:(float*)arg2;
- (void)ab_scrollToSelectionOfTextView:(id)arg1 animated:(BOOL)arg2;
- (void)ab_scrollToSelectionOfTextView:(id)arg1;
- (float)ab_verticalOverlapUsingKeyboardInfo:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (void)accessibilityScrollDownPage;
- (void)accessibilityScrollLeftPage;
- (void)accessibilityScrollRightPage;
- (void)accessibilityScrollUpPage;
- (void)accessibilityZoomInAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)allowsMultipleFingers;
- (BOOL)alwaysBounceHorizontal;
- (BOOL)alwaysBounceVertical;
- (struct CGPoint { float x1; float x2; })autoscrollContentOffset;
- (BOOL)bounces;
- (BOOL)bouncesHorizontally;
- (BOOL)bouncesVertically;
- (BOOL)bouncesZoom;
- (BOOL)canCancelContentTouches;
- (BOOL)canHandleSwipes;
- (BOOL)cancelMouseTracking;
- (void)cancelNextContentTouchEnded;
- (BOOL)cancelTouchTracking;
- (id)commonHitTest:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentFrameForView:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInset;
- (struct CGPoint { float x1; float x2; })contentOffset;
- (struct CGSize { float x1; float x2; })contentSize;
- (void)dealloc;
- (float)decelerationRate;
- (void)delayed:(id)arg1;
- (BOOL)delaysContentTouches;
- (id)delegate;
- (id)description;
- (void)didFinishGesture:(int)arg1 inView:(id)arg2 forEvent:(struct __GSEvent { }*)arg3;
- (void)encodeWithCoder:(id)arg1;
- (void)flashScrollIndicators;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)gestureRecognizerFailed:(id)arg1;
- (void)handlePan:(id)arg1;
- (void)handlePinch:(id)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (float)horizontalScrollDecelerationFactor;
- (int)indicatorStyle;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isDecelerating;
- (BOOL)isDirectionalLockEnabled;
- (BOOL)isDragging;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isPagingEnabled;
- (BOOL)isProgrammaticScrollEnabled;
- (BOOL)isScrollEnabled;
- (BOOL)isTracking;
- (BOOL)isZoomBouncing;
- (BOOL)isZoomEnabled;
- (BOOL)isZooming;
- (void)layoutSubviews;
- (float)maxVelocityInDirection:(int)arg1;
- (float)maximumZoomScale;
- (BOOL)mf_needsToAdjustContentOffset;
- (float)minimumZoomScale;
- (struct CGPoint { float x1; float x2; })offset;
- (BOOL)preservesCenterDuringRotation;
- (void)removeFromSuperview;
- (BOOL)restoreScrollPositionForContentMode:(int)arg1;
- (void)runScrollTest:(id)arg1 withDelta:(float)arg2 forIterations:(int)arg3;
- (void)saveScrollPositionForContentMode:(int)arg1;
- (void)scrollBy:(float)arg1 forIterations:(int)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })scrollIndicatorInsets;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;
- (int)scrollableDirections;
- (BOOL)scrollsToTop;
- (void)setAllowsMultipleFingers:(BOOL)arg1;
- (void)setAlwaysBounceHorizontal:(BOOL)arg1;
- (void)setAlwaysBounceVertical:(BOOL)arg1;
- (void)setAutoscrollContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setBounces:(BOOL)arg1;
- (void)setBouncesHorizontally:(BOOL)arg1;
- (void)setBouncesVertically:(BOOL)arg1;
- (void)setBouncesZoom:(BOOL)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCanCancelContentTouches:(BOOL)arg1;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1 animated:(BOOL)arg2;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setDecelerationRate:(float)arg1;
- (void)setDelaysContentTouches:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDirectionalLockEnabled:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHorizontalScrollDecelerationFactor:(float)arg1;
- (void)setIndicatorStyle:(int)arg1;
- (void)setMaximumZoomScale:(float)arg1;
- (void)setMinimumZoomScale:(float)arg1;
- (void)setOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setPagingEnabled:(BOOL)arg1;
- (void)setPreservesCenterDuringRotation:(BOOL)arg1;
- (void)setProgrammaticScrollEnabled:(BOOL)arg1;
- (void)setScrollEnabled:(BOOL)arg1;
- (void)setScrollIndicatorInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setScrollingEnabled:(BOOL)arg1;
- (void)setScrollsToTop:(BOOL)arg1;
- (void)setShowBackgroundShadow:(BOOL)arg1;
- (void)setShowsHorizontalScrollIndicator:(BOOL)arg1;
- (void)setShowsVerticalScrollIndicator:(BOOL)arg1;
- (void)setTopExtensionViewColor:(id)arg1;
- (void)setTracksImmediatelyWhileDecelerating:(BOOL)arg1;
- (void)setUsesGestureRecognizers:(BOOL)arg1;
- (void)setVerticalScrollDecelerationFactor:(float)arg1;
- (void)setZoomEnabled:(BOOL)arg1;
- (void)setZoomScale:(float)arg1 animated:(BOOL)arg2;
- (void)setZoomScale:(float)arg1 withAnchorPoint:(struct CGPoint { float x1; float x2; })arg2 validatingScrollOffset:(BOOL)arg3 allowRubberbanding:(BOOL)arg4 animated:(BOOL)arg5 duration:(double)arg6 notifyDelegate:(BOOL)arg7 force:(BOOL)arg8;
- (void)setZoomScale:(float)arg1 withAnchorPoint:(struct CGPoint { float x1; float x2; })arg2 validatingScrollOffset:(BOOL)arg3 allowRubberbanding:(BOOL)arg4 animated:(BOOL)arg5 duration:(double)arg6 notifyDelegate:(BOOL)arg7;
- (void)setZoomScale:(float)arg1;
- (BOOL)showsHorizontalScrollIndicator;
- (BOOL)showsVerticalScrollIndicator;
- (int)swipe:(int)arg1 withEvent:(struct __GSEvent { }*)arg2;
- (id)topExtensionViewColor;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (BOOL)touchesShouldBegin:(id)arg1 withEvent:(id)arg2 inContentView:(id)arg3;
- (BOOL)touchesShouldCancelInContentView:(id)arg1;
- (BOOL)tracksImmediatelyWhileDecelerating;
- (BOOL)usesGestureRecognizers;
- (float)verticalScrollDecelerationFactor;
- (void)willAnimateRotationToInterfaceOrientation:(id)arg1;
- (void)willRotateToInterfaceOrientation:(id)arg1;
- (float)zoomScale;
- (void)zoomToRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;

@end
