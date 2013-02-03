/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, SUSearchFieldConfiguration, <SUCompletionTableDelegate>;

@interface SUCompletionTableViewController : SUTableViewController {
    <SUCompletionTableDelegate> *_delegate;
    SUSearchFieldConfiguration *_searchFieldConfiguration;
    NSString *_stringToComplete;
}

@property <SUCompletionTableDelegate> * delegate;
@property(readonly) int numberOfCompletions;
@property(retain) SUSearchFieldConfiguration * searchFieldConfiguration;
@property(retain) NSString * stringToComplete;

- (void)_dismissWithPickedItem:(id)arg1;
- (void)_fetchCompletions;
- (void)_setCompletions:(id)arg1;
- (void)cancelOperations;
- (void)dealloc;
- (id)delegate;
- (BOOL)handleSelectionForIndexPath:(id)arg1 tapCount:(int)arg2;
- (id)init;
- (void)loadView;
- (struct CGSize { float x1; float x2; })maximumViewSize;
- (struct CGSize { float x1; float x2; })minimumViewSize;
- (int)numberOfCompletions;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)reloadData;
- (id)searchFieldConfiguration;
- (void)setDelegate:(id)arg1;
- (void)setSearchFieldConfiguration:(id)arg1;
- (void)setStringToComplete:(id)arg1;
- (id)stringToComplete;
- (void)viewWillAppear:(BOOL)arg1;

@end
