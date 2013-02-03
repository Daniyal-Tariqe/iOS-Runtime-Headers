/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIButton, NSTimer;

@interface UIStepper : UIControl {
    BOOL _autorepeat;
    BOOL _continuous;
    int _intValue;
    int _maximumIntValue;
    int _minimumIntValue;
    UIButton *_minusButton;
    UIButton *_plusButton;
    int _repeatCount;
    NSTimer *_repeatTimer;
    BOOL _wraps;
}

@property BOOL autorepeat;
@property(getter=isContinuous) BOOL continuous;
@property int intValue;
@property int maximumIntValue;
@property int minimumIntValue;
@property BOOL wraps;

+ (void)_initializeSafeCategory;

- (void)_commonStepperInit;
- (void)_startTimer;
- (void)_stopTimer;
- (void)_updateButtonEnabled;
- (void)_updateCount:(id)arg1;
- (BOOL)autorepeat;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)intValue;
- (BOOL)isContinuous;
- (int)maximumIntValue;
- (int)minimumIntValue;
- (void)setAutorepeat:(BOOL)arg1;
- (void)setContinuous:(BOOL)arg1;
- (void)setIntValue:(int)arg1;
- (void)setMaximumIntValue:(int)arg1;
- (void)setMinimumIntValue:(int)arg1;
- (void)setWraps:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)wraps;

@end
