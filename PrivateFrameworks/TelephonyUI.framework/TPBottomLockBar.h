/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class NSArray, TPLockKnobView, NSTimer, UIView, TPLockTextView, TPWell;

@interface TPBottomLockBar : TPBottomBar {
    int _currentLabelIndex;
    NSTimer *_cycleLabelTimer;
    id _delegate;
    float _fontSize;
    float _knobTrackInsetLeft;
    TPLockKnobView *_knobView;
    TPLockTextView *_labelView;
    NSArray *_labels;
    id _representedObject;
    UIView *_trackArrow;
    TPWell *_well;
}

+ (id)_imageForBaseName:(id)arg1;
+ (void)_initializeSafeCategory;
+ (float)defaultLabelFontSize;
+ (struct CGSize { float x1; float x2; })defaultSize;

- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (BOOL)_accessibilitySupportsActivateAction;
- (void)_adjustKnobOrigin;
- (void)_adjustLabelOrigin;
- (float)_calcKnobYOffset;
- (BOOL)_canDrawContent;
- (void)_setLabel:(id)arg1;
- (void)accessibilityActivate;
- (struct CGPoint { float x1; float x2; })accessibilityCenterPoint;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (int)currentLabelIndex;
- (void)cycleToLabelAtIndex:(int)arg1;
- (void)cycleToNextLabel;
- (void)dealloc;
- (void)downInKnob;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)finishedCyclingLabelOut;
- (float)fontSize;
- (void)freezeKnobInUnlockedPosition;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initForIncomingCallWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 knobColor:(int)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 knobImage:(id)arg2;
- (BOOL)isAccessibilityElement;
- (BOOL)isAnimating;
- (id)knob;
- (void)knobDragged:(float)arg1;
- (float)knobTrackInsetLeft;
- (float)knobTrackInsetRight;
- (id)labels;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)relock;
- (id)representedObject;
- (void)setDelegate:(id)arg1;
- (void)setFontSize:(float)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabels:(id)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)slideBack:(BOOL)arg1;
- (void)startAnimating;
- (void)startCyclingLabels;
- (void)stopAnimating;
- (void)stopCyclingLabels;
- (void)unlock;
- (void)upInKnob;

@end
