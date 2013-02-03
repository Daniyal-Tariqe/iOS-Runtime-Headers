/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class DOMTouchList;

@interface DOMTouchEvent : DOMUIEvent {
}

@property(readonly) BOOL altKey;
@property(retain,readonly) DOMTouchList * changedTouches;
@property(readonly) BOOL ctrlKey;
@property(readonly) BOOL metaKey;
@property(readonly) float rotation;
@property(readonly) float scale;
@property(readonly) BOOL shiftKey;
@property(retain,readonly) DOMTouchList * targetTouches;
@property(retain,readonly) DOMTouchList * touches;

- (BOOL)altKey;
- (id)changedTouches;
- (BOOL)ctrlKey;
- (void)initTouchEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 view:(id)arg4 detail:(int)arg5 screenX:(int)arg6 screenY:(int)arg7 clientX:(int)arg8 clientY:(int)arg9 ctrlKey:(BOOL)arg10 altKey:(BOOL)arg11 shiftKey:(BOOL)arg12 metaKey:(BOOL)arg13 touches:(id)arg14 targetTouches:(id)arg15 changedTouches:(id)arg16 scale:(float)arg17 rotation:(float)arg18;
- (BOOL)metaKey;
- (float)rotation;
- (float)scale;
- (BOOL)shiftKey;
- (id)targetTouches;
- (id)touches;

@end
