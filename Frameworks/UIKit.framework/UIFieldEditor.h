/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class DOMHTMLElement, NSString, DOMDocument, UIView<UITextSelectingContainer>;

@interface UIFieldEditor : UIWebDocumentView <UIAutoscrollContainer> {
    unsigned int _baseWritingDirectionIsRTL : 1;
    unsigned int _changingView : 1;
    unsigned int _disableNotifications : 1;
    unsigned int _delegateRespondsToFieldEditorDidChange : 1;
    unsigned int _delegateRespondsToShouldInsertText : 1;
    unsigned int _delegateRespondsToShouldReplaceWithText : 1;
    unsigned int _fieldEditorReentrancyGuard : 1;
    unsigned int _isResigningFirstResponder : 1;
    unsigned int _mouseWasDragged : 1;
    unsigned int _reserved : 21;
    NSString *_currentStyle;
    DOMDocument *_document;
    NSString *_initialText;
    UIView<UITextSelectingContainer> *_proxiedView;
    DOMHTMLElement *_sizeElement;
    DOMHTMLElement *_textElement;
}

@property struct CGPoint { float x; float y; } autoscrollContentOffset;

+ (void)_initializeSafeCategory;
+ (id)activeFieldEditor;
+ (void)releaseSharedInstance;
+ (id)sharedFieldEditor;

- (void)_deleteBackwardAndNotify:(BOOL)arg1;
- (id)_responderForBecomeFirstResponder;
- (void)_selectNSRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_setTextElementString:(id)arg1;
- (void)_setTextElementStyle:(id)arg1;
- (id)_textSelectingContainer;
- (id)automaticallySelectedOverlay;
- (struct CGPoint { float x1; float x2; })autoscrollContentOffset;
- (void)autoscrollWillNotStart;
- (void)becomeFieldEditorForView:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRectForVisiblePosition:(id)arg1;
- (unsigned int)characterOffsetAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentFrameForView:(id)arg1;
- (struct CGSize { float x1; float x2; })contentSize;
- (id)customOverlayContainer;
- (void)dealloc;
- (BOOL)hasMarkedText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)interactionAssistant;
- (BOOL)isAccessibilityElement;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (BOOL)keyboardInputChanged:(id)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (BOOL)keyboardInputShouldDelete:(id)arg1;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (void)mouseDragged:(struct __GSEvent { }*)arg1;
- (BOOL)mouseEventsChangeSelection;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (BOOL)notificationsDisabled;
- (id)proxiedView;
- (void)resumeWithNotification:(id)arg1;
- (void)revealSelection;
- (void)scrollSelectionToVisible:(BOOL)arg1;
- (void)scrollToMakeInlineHoleVisible;
- (int)scrollXOffset;
- (int)scrollYOffset;
- (void)selectAll;
- (void)selectionChanged;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionClipRect;
- (struct _NSRange { unsigned int x1; unsigned int x2; })selectionRange;
- (id)selectionView;
- (void)setAutoscrollContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setBaseWritingDirection:(int)arg1;
- (void)setCaretColor:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setNotificationsDisabled:(BOOL)arg1;
- (void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2 adjustForPurpleCaret:(BOOL)arg3;
- (void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2;
- (void)setSelection:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setStyle:(id)arg1;
- (void)setText:(id)arg1 andSetCaretSelectionAfterText:(BOOL)arg2;
- (void)setTextSelectionBehavior:(int)arg1;
- (id)sizeStyleForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)startAutoscroll:(struct CGPoint { float x1; float x2; })arg1;
- (id)style;
- (id)text;
- (id)textColorForCaretSelection;
- (id)textInputTraits;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)updateAutoscroll:(id)arg1;
- (BOOL)webView:(id)arg1 shouldChangeSelectedDOMRange:(id)arg2 toDOMRange:(id)arg3 affinity:(int)arg4 stillSelecting:(BOOL)arg5;
- (BOOL)webView:(id)arg1 shouldDeleteDOMRange:(id)arg2;
- (BOOL)webView:(id)arg1 shouldInsertText:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(int)arg4;
- (void)webViewDidChange:(id)arg1;

@end
