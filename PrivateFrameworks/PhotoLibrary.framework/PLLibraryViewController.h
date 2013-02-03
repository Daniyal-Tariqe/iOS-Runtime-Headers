/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UITableView, PLPhotoLibrary, PLSyncProgressView, NSArray, PLEmptyAlbumView;

@interface PLLibraryViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    struct { 
        unsigned int albumsInvalid : 1; 
        unsigned int visible : 1; 
        unsigned int filter : 3; 
        unsigned int syncing : 1; 
        unsigned int isPhotoStreamslList : 1; 
        unsigned int reserved : 25; 
    NSArray *_albums;
    int _contentMode;
    PLEmptyAlbumView *_emptyLibraryView;
    PLPhotoLibrary *_library;
    } _libraryControllerFlags;
    PLSyncProgressView *_syncProgressView;
    UITableView *_tableView;
}

@property(readonly) int contentMode;
@property int filter;
@property BOOL isPhotoStreamsList;

- (BOOL)_hasContent;
- (id)_library;
- (void)_reloadLibrary;
- (void)_setAlbums:(id)arg1;
- (void)_updateAlbumsIfNecessary;
- (void)_updateInterface;
- (void)albumDidChange:(id)arg1;
- (int)contentMode;
- (id)contentScrollView;
- (void)dealloc;
- (void)didSelectAlbum:(id)arg1;
- (int)filter;
- (void)iTunesSyncDidFinish;
- (void)iTunesSyncDidStart;
- (id)init;
- (BOOL)isPhotoStreamsList;
- (void)libraryDidChange:(id)arg1;
- (void)loadCurrentConfiguration:(id)arg1;
- (void)loadView;
- (void)setContentMode:(int)arg1;
- (void)setFilter:(int)arg1;
- (void)setIsPhotoStreamsList:(BOOL)arg1;
- (void)setShowSyncUI:(BOOL)arg1;
- (void)storeCurrentConfiguration:(id)arg1;
- (id)tableOffsetKey;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;

@end
