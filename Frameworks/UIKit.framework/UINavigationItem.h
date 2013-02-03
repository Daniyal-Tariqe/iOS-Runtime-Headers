/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UINavigationBar, UIView, NSString, UIBarButtonItem, UIImageView;

@interface UINavigationItem : NSObject <NSCoding> {
    UIBarButtonItem *_backBarButtonItem;
    NSString *_backButtonTitle;
    UIView *_backButtonView;
    id _context;
    UIView *_customLeftView;
    UIView *_customRightView;
    UIView *_defaultTitleView;
    UIImageView *_frozenTitleView;
    BOOL _hidesBackButton;
    UIBarButtonItem *_leftBarButtonItem;
    UINavigationBar *_navigationBar;
    NSString *_prompt;
    UIBarButtonItem *_rightBarButtonItem;
    int _tag;
    NSString *_title;
    UIView *_titleView;
}

@property(retain) UIBarButtonItem * backBarButtonItem;
@property BOOL hidesBackButton;
@property(retain) UIBarButtonItem * leftBarButtonItem;
@property(copy) NSString * prompt;
@property(retain) UIBarButtonItem * rightBarButtonItem;
@property(copy) NSString * title;
@property(retain) UIView * titleView;

+ (void)_initializeSafeCategory;
+ (id)defaultFont;

- (id)_automationID;
- (void)_cleanupFrozenTitleView;
- (id)_customLeftView;
- (id)_customRightView;
- (void)_freezeCurrentTitleView;
- (id)_leftBarButtonItem;
- (void)_removeBackButtonView;
- (void)_removeCustomLeftView;
- (void)_removeCustomRightView;
- (void)_removeTitleAndButtonViews;
- (id)_rightBarButtonItem;
- (void)_setBackButtonTitle:(id)arg1 lineBreakMode:(int)arg2;
- (void)_setCustomLeftView:(id)arg1;
- (void)_setCustomRightView:(id)arg1;
- (void)_setLeftBarButtonItem:(id)arg1;
- (void)_setRightBarButtonItem:(id)arg1;
- (void)_setTitle:(id)arg1 animated:(BOOL)arg2;
- (void)_setTitleAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (id)_titleView;
- (void)_updateViewsForBarSizeChangeIfNecessary;
- (id)backBarButtonItem;
- (id)backButtonTitle;
- (id)backButtonView;
- (id)context;
- (id)currentBackButtonTitle;
- (id)customLeftItem;
- (id)customLeftView;
- (id)customRightItem;
- (id)customRightView;
- (id)customTitleView;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)existingBackButtonView;
- (id)font;
- (BOOL)hidesBackButton;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1;
- (id)leftBarButtonItem;
- (void)mergeValuesFromItem:(id)arg1;
- (id)navigationBar;
- (id)prompt;
- (void)resetAllValues;
- (id)rightBarButtonItem;
- (void)setBackBarButtonItem:(id)arg1;
- (void)setBackButtonTitle:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCustomLeftItem:(id)arg1 animated:(BOOL)arg2;
- (void)setCustomLeftItem:(id)arg1;
- (void)setCustomLeftView:(id)arg1 animated:(BOOL)arg2;
- (void)setCustomLeftView:(id)arg1;
- (void)setCustomRightItem:(id)arg1 animated:(BOOL)arg2;
- (void)setCustomRightItem:(id)arg1;
- (void)setCustomRightView:(id)arg1 animated:(BOOL)arg2;
- (void)setCustomRightView:(id)arg1;
- (void)setCustomTitleView:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setHidesBackButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHidesBackButton:(BOOL)arg1;
- (void)setLeftBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftBarButtonItem:(id)arg1;
- (void)setNavigationBar:(id)arg1;
- (void)setObject:(id)arg1 forLeftRightKeyPath:(id)arg2 animated:(BOOL)arg3;
- (void)setPrompt:(id)arg1;
- (void)setRightBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)setRightBarButtonItem:(id)arg1;
- (void)setTag:(int)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)setWidth:(float)arg1;
- (int)tag;
- (id)title;
- (id)titleView;
- (void)updateNavigationBarButtonsAnimated:(BOOL)arg1;
- (float)width;

@end
