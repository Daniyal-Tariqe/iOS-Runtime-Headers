/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSTimer, UIKBKeyboard, UISwipeGestureRecognizer, UIPinchGestureRecognizer, UIView<UIKeyboardRivenTransitionView>, UIView<UIKeyboardRivenCenterView>, NSMutableSet, UIKBKeyplaneView, UIView, UIKBKeyplane, UIKBKey, NSString, NSMutableArray, NSMutableDictionary;

@interface UIKeyboardLayoutStar : UIKeyboardLayout {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    NSMutableSet *_accentInfo;
    NSMutableDictionary *_activatedKeys;
    NSTimer *_activatedTimer;
    UIKBKey *_activeKey;
    NSMutableSet *_allKeyplaneKeycaps;
    NSMutableDictionary *_allKeyplaneViews;
    NSMutableDictionary *_allKeys;
    UIView *_animationBackgroundView;
    UIView *_animationFromView;
    UIView *_animationKeyplaneBackground;
    UIView *_animationToView;
    int _appearance;
    BOOL _autoshift;
    UIView<UIKeyboardRivenCenterView> *_centerView;
    NSMutableDictionary *_compositeImages;
    BOOL _currentInputModeVariantsOnly;
    SEL _deleteAction;
    SEL _deleteLongAction;
    id _deleteTarget;
    BOOL _didLongPress;
    UIView *_dimKeyboardImageView;
    BOOL _dragChangedKey;
    BOOL _dragDismissStarted;
    } _dragPrevPoint;
    float _dragValues[4];
    float _dragVelocity;
    BOOL _dragged;
    struct __CFDictionary { } *_extendedTouchInfoMap;
    UIView *_flickPopupView;
    NSTimer *_flickPopuptimer;
    NSMutableSet *_hasAccents;
    } _initialDragPoint;
    float _initialPinchSeparation;
    float _initialScale;
    float _initialSplitProgress;
    NSMutableArray *_keyIndexMap;
    } _keyPeripheralInset;
    UIKBKeyboard *_keyboard;
    BOOL _keyboardImageViewIsDim;
    NSString *_keyboardName;
    int _keyboardType;
    NSMutableDictionary *_keyboards;
    UIKBKeyplane *_keyplane;
    BOOL _keyplaneDidTransition;
    NSString *_keyplaneName;
    UIKBKeyplaneView *_keyplaneView;
    int _lastFlickDirection;
    float _lastPinchSeparation;
    UISwipeGestureRecognizer *_leftSwipeRecognizer;
    NSString *_localizedInputKey;
    BOOL _pinchDetected;
    UIPinchGestureRecognizer *_pinchRecognizer;
    BOOL _popupViewIsShown;
    NSString *_preRotateKeyplaneName;
    BOOL _preRotateShift;
    int _preferredTrackingChangeCount;
    double _prevTouchDownTime;
    double _prevTouchUpTime;
    int _prevUpActions;
    BOOL _previousTouchInMore;
    NSMutableDictionary *_renderedKeys;
    SEL _returnAction;
    SEL _returnLongAction;
    id _returnTarget;
    UISwipeGestureRecognizer *_rightSwipeRecognizer;
    UIView *_savedKeyplaneView;
    BOOL _secureTextEntry;
    BOOL _settingShift;
    BOOL _shift;
    double _shiftLockFirstTapTime;
    BOOL _shiftLockReady;
    int _shiftTrackingChangeCount;
    SEL _spaceAction;
    SEL _spaceLongAction;
    id _spaceTarget;
    NSMutableDictionary *_states;
    BOOL _supportsSplit;
    BOOL _touchDownInMoreKey;
    BOOL _touchDownInShiftKey;
    id _touchInfo;
    UIView<UIKeyboardRivenTransitionView> *_transitionView;
    UISwipeGestureRecognizer *_upSwipeRecognizer;
    NSMutableSet *_validInputStrings;
    NSMutableSet *_variantKeyTokens;
    NSMutableDictionary *_variantKeys;
    BOOL _wasShifted;
}

@property(retain) UIKBKey * activeKey;
@property BOOL autoShift;
@property BOOL didLongPress;
@property(readonly) UIKBKeyboard * keyboard;
@property(copy) NSString * keyboardName;
@property(readonly) UIKBKeyplane * keyplane;
@property(copy) NSString * keyplaneName;
@property(readonly) NSString * localizedInputMode;
@property(getter=isRotating,readonly) BOOL rotating;
@property BOOL shift;

+ (void)_initializeSafeCategory;

- (id)_accessibilityCreateElementForKey:(id)arg1;
- (id)_accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)_accessibilityInternalData;
- (id)_accessibilityKeys;
- (id)accessibilityElementAtIndex:(int)arg1;
- (int)accessibilityElementCount;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (BOOL)accessibilityTreeHidden;
- (void)activateCompositeKey:(id)arg1 direction:(int)arg2 flickString:(id)arg3 popupInfo:(id)arg4;
- (id)activationIndicatorView;
- (id)activeKey;
- (id)activeTouchForKey:(id)arg1;
- (void)addKeyToActivatedSet:(id)arg1;
- (void)addPinchRecognizerAfterDelay:(float)arg1;
- (struct CGPoint { float x1; float x2; })applyError:(struct CGPoint { float x1; float x2; })arg1 toKey:(id)arg2;
- (BOOL)autoShift;
- (id)baseKeyForString:(id)arg1;
- (id)cacheIdentifierForKeyplaneNamed:(id)arg1 withVisualStyle:(id)arg2;
- (id)cacheIdentifierForState:(int)arg1 ofKey:(id)arg2;
- (BOOL)canProduceString:(id)arg1;
- (void)cancelPeriodicProcessActivatedSet;
- (id)candidateList;
- (void)changeToKeyplane:(id)arg1;
- (void)clearAllTouchInfo;
- (void)clearInfoForTouch:(id)arg1;
- (id)compositeImageForKey:(id)arg1;
- (void)confirmAction;
- (void)deactivateActiveKeys;
- (void)deactivateAllInActivatedSet;
- (void)dealloc;
- (void)deleteAction;
- (void)didClearInput;
- (BOOL)didLongPress;
- (void)didRotate;
- (int)displayTypeHintForKeyplaneSwitchKey:(id)arg1;
- (int)displayTypeHintForMoreKey;
- (int)displayTypeHintForShiftKey;
- (BOOL)doesKeyCharging;
- (unsigned int)downActionFlagsForKey:(id)arg1;
- (void)downActionShiftWithKey:(id)arg1;
- (id)findKanaKeyPlaneSwitchKeyOnKeyPlane:(id)arg1;
- (id)findMoreKeyOnKeyPlane:(id)arg1 onLeftMostSide:(BOOL)arg2;
- (void)finishSplit;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForKeyWithRepresentedString:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForLastKeyWithRepresentedString:(id)arg1;
- (id)generateInfoForTouch:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)getFlickCompositeImageForKey:(id)arg1 direction:(int)arg2 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (id)getPopupBackgroundImageForKey:(id)arg1 direction:(int)arg2 popupInfo:(id)arg3 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (void)handleFlick:(id)arg1;
- (void)handlePopupView:(id)arg1;
- (float)hitBuffer;
- (int)indexOfAccessibilityElement:(id)arg1;
- (id)infoForTouch:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)installGestureRecognizers;
- (BOOL)isAccessibilityElement;
- (BOOL)isLongPressedKey:(id)arg1;
- (BOOL)isRotating;
- (BOOL)isShiftKeyBeingHeld;
- (BOOL)isShiftKeyPlaneChooser;
- (BOOL)keyHasAccentedVariants:(id)arg1;
- (id)keyHitTest:(struct CGPoint { float x1; float x2; })arg1 touchStage:(int)arg2 atTime:(double)arg3 withTouch:(id)arg4;
- (id)keyHitTest:(struct CGPoint { float x1; float x2; })arg1;
- (id)keyHitTestClosestToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)keyHitTestContainingPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)keyHitTestContainingPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)keyHitTestWithoutCharging:(struct CGPoint { float x1; float x2; })arg1;
- (id)keyWithRepresentedString:(id)arg1;
- (id)keyboard;
- (id)keyboardName;
- (BOOL)keyboardWillSplit;
- (id)keyboardWithName:(id)arg1;
- (id)keyplane;
- (id)keyplaneForKey:(id)arg1;
- (id)keyplaneName;
- (id)localizedInputMode;
- (void)longPressAction;
- (void)merge;
- (void)nextCandidatesAction;
- (id)overlayCharacterImageForKey:(id)arg1 direction:(int)arg2 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 flickString:(id)arg4 popupInfo:(id)arg5;
- (BOOL)performReturnAction;
- (void)periodicProcessActivatedSet:(id)arg1;
- (void)pinchDetected:(id)arg1;
- (void)pinchSeparationUntouch;
- (void)pinchSeparationUpdate:(float)arg1;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)popupKeyViews;
- (void)removeFromSuperview;
- (void)removeKeyFromActivatedSet:(id)arg1;
- (void)restoreDefaultsForAllKeys;
- (void)restoreDefaultsForKey:(id)arg1;
- (void)schedulePeriodicProcessActivatedSet;
- (id)scriptingInfoWithChildren;
- (void)sendStringAction:(id)arg1 forKey:(id)arg2;
- (void)setAction:(SEL)arg1 forKey:(id)arg2;
- (void)setActiveKey:(id)arg1;
- (void)setAutoShift:(BOOL)arg1;
- (void)setAutoshift:(BOOL)arg1;
- (void)setCompositeImage:(id)arg1 forKey:(id)arg2;
- (void)setCurrencyKeysForCurrentLocale:(id)arg1;
- (void)setDidLongPress:(BOOL)arg1;
- (void)setKeyForTouchInfo:(id)arg1 key:(id)arg2;
- (void)setKeyViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)setKeyboardAppearance:(int)arg1;
- (void)setKeyboardDim:(BOOL)arg1;
- (void)setKeyboardName:(id)arg1 appearance:(int)arg2;
- (void)setKeyboardName:(id)arg1;
- (void)setKeyplaneName:(id)arg1;
- (void)setLabel:(id)arg1 forKey:(id)arg2;
- (void)setLongPressAction:(SEL)arg1 forKey:(id)arg2;
- (void)setReturnKeyEnabled:(BOOL)arg1 withDisplayName:(id)arg2 withType:(int)arg3;
- (void)setShift:(BOOL)arg1;
- (void)setState:(int)arg1 forKey:(id)arg2;
- (void)setTarget:(id)arg1 forKey:(id)arg2;
- (BOOL)shift;
- (BOOL)shouldRetestKey:(id)arg1 withKeyplane:(id)arg2;
- (BOOL)shouldShowIndicator;
- (void)showFlickView:(int)arg1 withKey:(id)arg2 flickString:(id)arg3;
- (void)showKeyboardType:(int)arg1 appearance:(int)arg2 orientation:(id)arg3 withShift:(BOOL)arg4;
- (void)showPopupVariantsForKey:(id)arg1;
- (void)showPopupView:(int)arg1 withKey:(id)arg2 popupInfo:(id)arg3 force:(BOOL)arg4;
- (id)simulateTouchForCharacter:(id)arg1 errorVector:(struct CGPoint { float x1; float x2; })arg2 shouldTypeVariants:(BOOL)arg3 baseKeyForVariants:(BOOL)arg4;
- (id)spaceKey;
- (void)split;
- (int)stateForKey:(id)arg1;
- (unsigned int)stateForShiftKey:(id)arg1;
- (void)swipeDetected:(id)arg1;
- (void)touchCancelled:(id)arg1;
- (void)touchDown:(id)arg1;
- (void)touchDownWithKey:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)touchDragged:(id)arg1;
- (id)touchForKey:(id)arg1;
- (void)touchUp:(id)arg1;
- (void)uninstallGestureRecognizers;
- (unsigned int)upActionFlagsForKey:(id)arg1;
- (void)upActionShift;
- (void)updateBackground:(id)arg1;
- (void)updateKeyCentroids;
- (void)updateKeyboardForKeyplane:(id)arg1;
- (void)updateKeys;
- (void)updateLatinAccentsKey;
- (void)updateLocalizedKeys:(id)arg1;
- (void)updateMoreAndInternationalKeys;
- (void)updateShiftKeyState;
- (BOOL)usesAutoShift;
- (id)visualStyleForRivenStyle:(unsigned int)arg1;
- (void)willRotate;

@end
