/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, UIImage;

@interface UIKeyboardEmojiCategoriesControl : UIControl {
    UIImage *_darkDivider;
    NSMutableArray *_dividerViews;
    UIImage *_plainDivider;
    NSMutableArray *_segmentViews;
    int _selected;
    UIImage *_selectedDivider;
    int _total;
}

@property(readonly) int numSegments;
@property int selectedIndex;

+ (void)_initializeSafeCategory;
+ (id)categoryControl;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)numSegments;
- (int)selectedIndex;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setSelectedIndex:(int)arg1;

@end
