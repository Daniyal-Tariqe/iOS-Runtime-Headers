/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class SPSearchResultDeserializer, UISearchBar, NSTimer, UISearchDisplayController, <CKConversationSearcherDelegate>, SPDaemonQueryToken;

@interface CKConversationSearcher : NSObject <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, UISearchDisplayDelegate, SPDaemonQueryDelegate> {
    struct _CKSpotlightSearchResultList { 
        unsigned int length; 
        unsigned int capacity; 
        struct _CKSpotlightSearchResult {} *array; 
    struct _CKSpotlightSearchResultList { 
        unsigned int length; 
        unsigned int capacity; 
        struct _CKSpotlightSearchResult {} *array; 
    } _allSearchResults;
    <CKConversationSearcherDelegate> *_delegate;
    SPSearchResultDeserializer *_deserializer;
    unsigned int _deserializerIndex;
    } _perConversationSearchResults;
    SPDaemonQueryToken *_queryToken;
    NSTimer *_resultProcessor;
    UISearchBar *_searchBar;
    UISearchDisplayController *_searchController;
    BOOL _shouldDisplayNoResults;
}

@property(readonly) UISearchDisplayController * searchController;

- (void)_cancel;
- (void)_processSearchResults;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (id)searchBar;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (id)searchController;
- (void)searchDaemonQuery:(id)arg1 addedResults:(id)arg2;
- (void)searchDaemonQuery:(id)arg1 encounteredError:(id)arg2;
- (void)searchDaemonQueryCompleted:(id)arg1;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;

@end
