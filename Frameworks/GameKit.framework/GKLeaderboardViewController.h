/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString, <GKLeaderboardViewControllerDelegate>, GKLeaderboardCategoryViewController, GKLeaderboardViewControllerPrivate;

@interface GKLeaderboardViewController : UINavigationController {
    GKLeaderboardCategoryViewController *_categoryController;
    GKLeaderboardViewControllerPrivate *_privateViewController;
}

@property(retain) NSString * category;
@property(retain) GKLeaderboardCategoryViewController * categoryController;
@property <GKLeaderboardViewControllerDelegate> * leaderboardDelegate;
@property(retain) GKLeaderboardViewControllerPrivate * privateViewController;
@property int timeScope;

- (void)authenticatedStatusChanged;
- (id)category;
- (id)categoryController;
- (void)dealloc;
- (id)game;
- (id)init;
- (id)leaderboardDelegate;
- (id)privateViewController;
- (void)setCategory:(id)arg1;
- (void)setCategoryController:(id)arg1;
- (void)setGame:(id)arg1;
- (void)setLeaderboardDelegate:(id)arg1;
- (void)setPrivateViewController:(id)arg1;
- (void)setTimeScope:(int)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (int)timeScope;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
