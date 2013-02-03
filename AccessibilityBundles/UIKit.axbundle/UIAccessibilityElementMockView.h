/* Generated by RuntimeBrowser
   Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
 */

@class <UIAccessibilityElementMockViewDelegateProtocol>, UIView;

@interface UIAccessibilityElementMockView : UIAccessibilityElement {
    <UIAccessibilityElementMockViewDelegateProtocol> *_delegate;
    int _subviewIndex;
    UIView *_view;
}

@property <UIAccessibilityElementMockViewDelegateProtocol> * delegate;
@property int subviewIndex;
@property(retain) UIView * view;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_accessibilityBoundsForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)_accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (id)_accessibilityLineNumberAndColumnForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })_accessibilityMaxScrubberPosition;
- (struct CGPoint { float x1; float x2; })_accessibilityMinScrubberPosition;
- (int)_accessibilityPageControlCount;
- (int)_accessibilityPageControlIndex;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_accessibilityRangeForLineNumberAndColumn:(id)arg1;
- (void)_accessibilityScrollToVisible;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)_accessibilityTextViewTextOperationResponder;
- (id)_accessibilityUserTestingElementType;
- (id)_accessibilityUserTestingParent;
- (void)accessibilityActivate;
- (struct CGPoint { float x1; float x2; })accessibilityCenterPoint;
- (int)accessibilityCompareGeometry:(id)arg1;
- (void)accessibilityDecrement;
- (id)accessibilityElementAtIndex:(int)arg1;
- (int)accessibilityElementCount;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityHint;
- (id)accessibilityIdentification;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromView:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (int)indexOfAccessibilityElement:(id)arg1;
- (BOOL)isAccessibilityElement;
- (void)revalidate;
- (void)setAccessibilityContainer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSubviewIndex:(int)arg1;
- (void)setView:(id)arg1;
- (int)subviewIndex;
- (id)view;

@end
