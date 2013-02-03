/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, UIImage;

@interface _UINavigationBarAppearance : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    unsigned int hasCustomButtonTextShadowOffset : 1;
    unsigned int reversesButtonTextShadowOffsetWhenPressed : 1;
    UIImage *backButtonBackgroundImage;
    UIImage *backButtonBackgroundImagePressed;
    UIImage *backgroundImage;
    UIImage *buttonBackgroundImage;
    UIImage *buttonBackgroundImagePressed;
    UIColor *buttonItemTextColor;
    UIColor *buttonItemTextColorPressed;
    UIColor *buttonItemTextShadowColor;
    UIColor *buttonItemTextShadowColorPressed;
    } buttonTextShadowOffset;
    UIImage *miniBackButtonBackgroundImage;
    UIImage *miniBackButtonBackgroundImagePressed;
    UIImage *miniBackgroundImage;
    UIImage *miniButtonBackgroundImage;
    UIImage *miniButtonBackgroundImagePressed;
}

- (void)dealloc;
- (BOOL)hasCustomButtonTitleTreatment;

@end
