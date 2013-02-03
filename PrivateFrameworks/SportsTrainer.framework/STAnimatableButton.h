/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
 */

@class STAnimatableButtonSlice, UIImage, UIColor, STShadowLabel;

@interface STAnimatableButton : UIView <STAnimatableButtonSliceDelegate> {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    SEL _action;
    UIImage *_highlightedImage;
    } _hitRectEdgeInsets;
    UIImage *_image;
    BOOL _isLandscape;
    STAnimatableButtonSlice *_leftSlice;
    STAnimatableButtonSlice *_middleSlice;
    UIImage *_normalImage;
    STAnimatableButtonSlice *_rightSlice;
    float _shadowBlurRadius;
    UIColor *_shadowColor;
    BOOL _slicesNeedDisplay;
    STShadowLabel *_subtitleLabel;
    id _target;
    STShadowLabel *_titleLabel;
    BOOL _touchInside;
}

@property struct UIEdgeInsets { float top; float left; float bottom; float right; } hitRectEdgeInsets;

+ (void)_initializeSafeCategory;

- (id)_buttonWellImage;
- (id)_buttonWellLandscapeImage;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)dealloc;
- (void)drawImageForSlice;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hitRect;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })hitRectEdgeInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;
- (void)setHighlightedBackgroundImage:(id)arg1;
- (void)setHitRectEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setImage:(id)arg1;
- (void)setLandscape:(BOOL)arg1;
- (void)setNormalBackgroundImage:(id)arg1;
- (void)setShadowColor:(id)arg1 blurRadius:(float)arg2;
- (void)setSubtitle:(id)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (void)setTitle:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
