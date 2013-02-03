/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUMaskProvider;

@interface SUMaskedView : UIView {
    SUMaskProvider *_maskProvider;
}

@property(retain) SUMaskProvider * maskProvider;

+ (void)_initializeSafeCategory;

- (void)_reloadMask;
- (BOOL)accessibilityTreeHidden;
- (struct CGPath { }*)copyMaskPath;
- (void)dealloc;
- (id)maskProvider;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setMaskProvider:(id)arg1;

@end
