/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUSection;

@interface SUNavigationController : UINavigationController {
    BOOL _loading;
    SUSection *_section;
}

@property(getter=isLoading) BOOL loading;
@property(retain) SUSection * section;

- (void)_loadingDidChangeNotification:(id)arg1;
- (id)_sectionForViewController:(id)arg1;
- (void)addChildViewController:(id)arg1;
- (id)copyArchivableContext;
- (id)copyScriptViewController;
- (void)dealloc;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithSection:(id)arg1 rootViewController:(id)arg2;
- (id)initWithSection:(id)arg1;
- (BOOL)isLoading;
- (id)moreListImage;
- (id)moreListSelectedImage;
- (id)navigationBar;
- (void)removeChildViewController:(id)arg1;
- (void)restoreArchivableContext:(id)arg1;
- (id)section;
- (void)setLoading:(BOOL)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setViewControllers:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(int)arg2;

@end
