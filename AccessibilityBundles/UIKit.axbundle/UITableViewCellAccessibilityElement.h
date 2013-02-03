/* Generated by RuntimeBrowser
   Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
 */

@class UITableViewCell, NSMutableArray, NSIndexPath;

@interface UITableViewCellAccessibilityElement : UIAccessibilityElement {
    NSIndexPath *_indexPath;
    NSMutableArray *_mockChildren;
    UITableViewCell *_tableViewCell;
    BOOL _usingRealTableViewCell;
}

@property(retain) NSIndexPath * indexPath;
@property(readonly) UITableViewCell * realTableViewCell;
@property(retain) UITableViewCell * tableViewCell;
@property BOOL usingRealTableViewCell;

- (float)_accessibilityAllowedGeometryOverlap;
- (BOOL)_accessibilityBackingElementIsValid;
- (void)_accessibilityCopy;
- (void)_accessibilityCut;
- (BOOL)_accessibilityHasTextOperations;
- (id)_accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)_accessibilityIsTableCell;
- (struct CGPoint { float x1; float x2; })_accessibilityMaxScrubberPosition;
- (struct CGPoint { float x1; float x2; })_accessibilityMinScrubberPosition;
- (void)_accessibilityPaste;
- (void)_accessibilitySelect;
- (void)_accessibilitySelectAll;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_accessibilitySelectedTextRange;
- (BOOL)_accessibilityServesAsContainingParentForOrdering;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)_accessibilitySupportsActivateAction;
- (id)_accessibilityTextOperations;
- (id)_accessibilityTextViewTextOperationResponder;
- (id)_accessibilityUserTestingChildren;
- (void)accessibilityActivate;
- (struct CGPoint { float x1; float x2; })accessibilityCenterPoint;
- (void)accessibilityDecrement;
- (id)accessibilityElementAtIndex:(int)arg1;
- (int)accessibilityElementCount;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityHint;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (id)accessibilityLanguage;
- (id)accessibilityLiteContent;
- (void)accessibilityScrollToVisible;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (void)dealloc;
- (id)description;
- (int)indexOfAccessibilityElement:(id)arg1;
- (id)indexPath;
- (BOOL)isAccessibilityElement;
- (id)realTableViewCell;
- (void)registerMockChild:(id)arg1;
- (void)setIndexPath:(id)arg1;
- (void)setTableViewCell:(id)arg1;
- (void)setUsingRealTableViewCell:(BOOL)arg1;
- (id)tableViewCell;
- (void)unregisterAllChildren;
- (void)unregisterMockChild:(id)arg1;
- (BOOL)usingRealTableViewCell;

@end
