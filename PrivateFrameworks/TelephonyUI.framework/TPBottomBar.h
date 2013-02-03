/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPBottomBar : UIView {
    int _orientation;
    int _style;
}

+ (id)_backgroundImage;
+ (float)defaultHeight;
+ (float)defaultHeightForOrientation:(int)arg1;
+ (float)defaultHeightForStyle:(int)arg1 orientation:(int)arg2;
+ (float)defaultHeightForStyle:(int)arg1;
+ (int)fullscreenStyle;
+ (int)overlayStyle;
+ (void)preloadImages;

- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)init;
- (id)initWithDefaultSize;
- (id)initWithDefaultSizeForOrientation:(int)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)orientation;
- (void)setOrientation:(int)arg1 updateFrame:(BOOL)arg2;
- (void)setOrientation:(int)arg1;

@end
