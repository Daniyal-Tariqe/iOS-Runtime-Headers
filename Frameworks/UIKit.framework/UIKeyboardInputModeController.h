/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKeyboardInputMode;

@interface UIKeyboardInputModeController : NSObject {
    UIKeyboardInputMode *_currentInputMode;
}

@property(retain) UIKeyboardInputMode * currentInputMode;

+ (id)sharedInputModeController;

- (id)currentInputMode;
- (void)dealloc;
- (id)inputModeWithIdentifier:(id)arg1;
- (void)setCurrentInputMode:(id)arg1;

@end
