/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISearchDisplayController : NSObject <_UIScrollViewScrollObserver_Internal> {
    double  __activationGapHeight;
    double  __additionalNonCollapsingHeightAboveSearchBar;
    UIButton * _animatingAppearanceNavigationButton;
    double  _animatingAppearanceNavigationSearchBarWidth;
    _UINavigationControllerPalette * _attachedNavigationPalette;
    UISearchDisplayControllerContainerView * _containerView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _containingScrollViewContentOffset;
    struct __CFArray { } * _containingScrollViews;
    <UISearchDisplayDelegate> * _delegate;
    _UISearchControllerDidScrollDelegate * _didScrollDelegate;
    UIColor * _dimmingOverlayColor;
    UIView * _dimmingView;
    bool  _displaysSearchBarInNavigationBar;
    double  _lastFooterAdjustment;
    double  _lastKeyboardAdjustment;
    unsigned long long  _navigationBarSearchFieldSizing;
    id  _navigationControllerBookkeeper;
    UINavigationItem * _navigationItem;
    UILabel * _noResultsLabel;
    NSString * _noResultsMessage;
    UIPopoverController * _popoverController;
    NSString * _resultsTitle;
    UIScrollView * _savedContainingScrollView;
    unsigned long long  _savedSearchBarResizingMask;
    NSArray * _savedSelectedCellsWhenViewWillAppear;
    UISearchBar * _searchBar;
    struct { 
        unsigned int visible : 1; 
        unsigned int animating : 1; 
        unsigned int hidIndexBar : 1; 
        unsigned int hidNavigationBar : 1; 
        unsigned int noResultsMessageVisible : 1; 
        unsigned int noResultsMessageAutoDisplay : 1; 
        unsigned int navigationBarHidingEnabled : 1; 
        unsigned int dimTableViewOnEmptySearchString : 1; 
        unsigned int isRotatingWithPopover : 1; 
        unsigned int cancelButtonManagementDisabled : 1; 
        unsigned int allowDisablingNavigationBarHiding : 1; 
        unsigned int showsResultsForEmptyField : 1; 
        unsigned int searchBarCanBeHoisted : 1; 
        unsigned int animatingSearchResultsDisappearance : 1; 
        unsigned int navigationBarShadowWasHidden : 1; 
        unsigned int hoistingSearchBar : 1; 
    }  _searchDisplayControllerFlags;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _searchFieldInNavigationBarFrame;
    long long  _searchResultsTableViewStyle;
    UITableView * _tableView;
    UIView * _tableViewBackgroundHeaderView;
    <UITableViewDataSource> * _tableViewDataSource;
    <UITableViewDelegate> * _tableViewDelegate;
    long long  _unactivatedBarPosition;
    UIViewController * _viewController;
}

@property (nonatomic) double _activationGapHeight;
@property (nonatomic) double _additionalNonCollapsingHeightAboveSearchBar;
@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) bool automaticallyShowsNoResultsMessage;
@property (getter=_isCancelButtonManagementDisabled, setter=_setCancelButtonManagementDisabled:, nonatomic) bool cancelButtonManagementDisabled;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UISearchDisplayDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dimTableViewOnEmptySearchString;
@property (nonatomic) bool displaysSearchBarInNavigationBar;
@property (readonly) unsigned long long hash;
@property (getter=isNavigationBarHidingEnabled, nonatomic) bool navigationBarHidingEnabled;
@property (nonatomic) unsigned long long navigationBarSearchFieldSizing;
@property (nonatomic, readonly) UINavigationItem *navigationItem;
@property (nonatomic, copy) NSString *noResultsMessage;
@property (nonatomic) bool noResultsMessageVisible;
@property (nonatomic, readonly) UISearchBar *searchBar;
@property (nonatomic, readonly) UIViewController *searchContentsController;
@property (nonatomic) <UITableViewDataSource> *searchResultsDataSource;
@property (nonatomic) <UITableViewDelegate> *searchResultsDelegate;
@property (nonatomic, readonly) UITableView *searchResultsTableView;
@property (nonatomic, copy) NSString *searchResultsTitle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_activationGapHeight;
- (double)_additionalNonCollapsingHeightAboveSearchBar;
- (void)_adjustTableViewContentInsetsAndOffsetsIgnoringCurrent:(bool)arg1;
- (bool)_allowDisablingNavigationBarHiding;
- (void)_animateNavigationBarSearchBarAppearance:(id)arg1;
- (bool)_areSearchContentsSplitViewMaster;
- (void)_cleanUpSearchBar;
- (void)_clearSavedSelectedCellsWeUsedWhenHedgingOurBets;
- (void)_clearViewController;
- (void)_configureContainerView;
- (void)_configureNewSearchBar;
- (void)_configureSearchBarForTableView;
- (bool)_containedInPopover;
- (id)_containerView;
- (id)_containingTableView;
- (id)_containingViewOfClass:(Class)arg1;
- (id)_createPopoverController;
- (void)_destroyManagedTableView;
- (id)_dimmingOverlayColor;
- (double)_dimmingViewAlpha;
- (id)_dimmingViewColor;
- (void)_disableParentScrollViews;
- (void)_enableParentScrollViews;
- (void)_hideVisibleRefreshControl;
- (void)_hoistSearchBar;
- (void)_indexBarFrameChanged:(id)arg1;
- (bool)_isCancelButtonManagementDisabled;
- (bool)_isSearchBarInBar;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_managedTableViewDidScroll;
- (id)_noResultsMessageLabel;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (void)_popoverClearButtonPressed:(id)arg1;
- (void)_popoverKeyboardDidHide:(id)arg1;
- (void)_popoverKeyboardDidShow:(id)arg1;
- (void)_restoreSelectedCellsInCaseViewDidNotReallyAppear;
- (void)_saveSelectedRowsInCaseViewDoesNotReallyAppear;
- (bool)_searchBarInNavigationControllerComponent;
- (bool)_searchBarShouldScrollToVisible:(id)arg1;
- (void)_searchBarSuperviewChanged;
- (void)_searchBarSuperviewWillChange;
- (void)_sendDelegateDidBeginDidEndSearch;
- (void)_setAllowDisablingNavigationBarHiding:(bool)arg1;
- (void)_setCancelButtonManagementDisabled:(bool)arg1;
- (void)_setDimmingOverlayColor:(id)arg1;
- (void)_setShowsResultsForEmptyField:(bool)arg1;
- (void)_setTableViewVisible:(bool)arg1 inView:(id)arg2;
- (void)_setupNoResultsLabelIfNecessary;
- (bool)_shouldAccountForStatusBarHeight;
- (bool)_showsResultsForEmptyField;
- (double)_statusBarHeight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_tableViewContentInsets;
- (id)_topShadowView;
- (double)_updateNavigationPalette;
- (void)_updateNoSearchResultsMessageVisiblity;
- (void)_updatePinnedSearchBar;
- (void)_updateSearchBarMaskIfNecessary;
- (void)_updateTableHeaderBackgroundViewInTableView:(id)arg1 amountScrolledUnder:(double)arg2;
- (void)_watchContainingTableViewForScrolling:(bool)arg1;
- (bool)automaticallyShowsNoResultsMessage;
- (void)dealloc;
- (id)delegate;
- (bool)dimTableViewOnEmptySearchString;
- (bool)displaysSearchBarInNavigationBar;
- (void)encodeWithCoder:(id)arg1;
- (bool)hidNavigationBar;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSearchBar:(id)arg1 contentsController:(id)arg2;
- (id)initWithSearchBar:(id)arg1 contentsController:(id)arg2 searchResultsTableViewStyle:(long long)arg3;
- (bool)isActive;
- (bool)isNavigationBarHidingEnabled;
- (unsigned long long)navigationBarSearchFieldSizing;
- (void)navigationControllerDidCancelShowingViewController:(id)arg1;
- (void)navigationControllerDidShowViewController:(id)arg1;
- (void)navigationControllerWillShowViewController:(id)arg1;
- (id)navigationItem;
- (id)noResultsMessage;
- (bool)noResultsMessageVisible;
- (void)popoverController:(id)arg1 animationCompleted:(long long)arg2;
- (bool)popoverControllerShouldDismissPopover:(id)arg1;
- (id)searchBar;
- (void)searchBar:(id)arg1 selectedScopeButtonIndexDidChange:(long long)arg2;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarResultsListButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (id)searchContentsController;
- (id)searchResultsDataSource;
- (id)searchResultsDelegate;
- (id)searchResultsTableView;
- (id)searchResultsTitle;
- (void)setActive:(bool)arg1;
- (void)setActive:(bool)arg1 animated:(bool)arg2;
- (void)setAutomaticallyShowsNoResultsMessage:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimTableViewOnEmptySearchString:(bool)arg1;
- (void)setDisplaysSearchBarInNavigationBar:(bool)arg1;
- (void)setNavigationBarHidingEnabled:(bool)arg1;
- (void)setNavigationBarSearchFieldSizing:(unsigned long long)arg1;
- (void)setNoResultsMessage:(id)arg1;
- (void)setNoResultsMessageVisible:(bool)arg1;
- (void)setSearchBar:(id)arg1;
- (void)setSearchContentsController:(id)arg1;
- (void)setSearchResultsDataSource:(id)arg1;
- (void)setSearchResultsDelegate:(id)arg1;
- (void)setSearchResultsTitle:(id)arg1;
- (void)set_activationGapHeight:(double)arg1;
- (void)set_additionalNonCollapsingHeightAboveSearchBar:(double)arg1;
- (void)showHideAnimationDidFinish;
- (void)windowDidRotate:(id)arg1;
- (void)windowWillAnimateRotation:(id)arg1;

@end