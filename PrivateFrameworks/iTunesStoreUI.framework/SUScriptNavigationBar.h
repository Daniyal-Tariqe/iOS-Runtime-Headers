/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class <SUScriptNavigationItem>, SUScriptButton, NSArray, NSString, SUScriptNavigationItem;

@interface SUScriptNavigationBar : SUScriptObject {
}

@property(readonly) SUScriptNavigationItem * backNavigationItem;
@property(retain) SUScriptButton * leftButton;
@property(retain) <SUScriptNavigationItem> * leftItem;
@property(readonly) NSArray * navigationItems;
@property(retain) NSString * prompt;
@property(retain) SUScriptButton * rightButton;
@property(retain) <SUScriptNavigationItem> * rightItem;
@property(readonly) SUScriptNavigationItem * topNavigationItem;

+ (id)webScriptNameForKey:(const char *)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)_copyBackNavigationItem;
- (id)_copyNavigationItems;
- (id)_copyTopNavigationItem;
- (id)_nativeNavigationBar;
- (id)_topNavigationItem;
- (id)attributeKeys;
- (id)backNavigationItem;
- (id)buttonWithTitle:(id)arg1 style:(id)arg2 target:(id)arg3 action:(id)arg4;
- (id)init;
- (id)initWithNativeNavigationBar:(id)arg1;
- (id)leftButton;
- (id)leftItem;
- (id)navigationItems;
- (id)prompt;
- (id)rightButton;
- (id)rightItem;
- (id)scriptAttributeKeys;
- (void)setBackNavigationItem:(id)arg1;
- (void)setLeftButton:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftButton:(id)arg1;
- (void)setLeftItem:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftItem:(id)arg1;
- (void)setNavigationItems:(id)arg1;
- (void)setPrompt:(id)arg1;
- (void)setRightButton:(id)arg1 animated:(BOOL)arg2;
- (void)setRightButton:(id)arg1;
- (void)setRightItem:(id)arg1 animated:(BOOL)arg2;
- (void)setRightItem:(id)arg1;
- (void)setTopNavigationItem:(id)arg1;
- (id)topNavigationItem;

@end
