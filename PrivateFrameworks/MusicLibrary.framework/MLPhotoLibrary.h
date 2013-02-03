/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSDate, NSString, NSMutableArray;

@interface MLPhotoLibrary : NSObject {
    NSMutableArray *_albums;
    BOOL _cancelFileSystemGarbageCollection;
    NSString *_path;
    NSDate *_referenceDate;
}

+ (BOOL)formatHasJPEGFile:(int)arg1;
+ (BOOL)formatIsCropped:(int)arg1;
+ (BOOL)formatWasSynced:(int)arg1;
+ (id)imageFormats;
+ (BOOL)isAlbumVideoPath:(id)arg1;
+ (BOOL)isApplicationWildcat;
+ (BOOL)needsToBeSyncedWithiTunes;
+ (void)setApplicationIsWildcat:(BOOL)arg1;
+ (id)sharedPhotoLibrary;
+ (struct CGSize { float x1; float x2; })sizeForFormat:(int)arg1;
+ (BOOL)transformForImage:(struct CGImage { }*)arg1 captureOrientation:(int)arg2 format:(int)arg3 sizeInOut:(struct CGSize { float x1; float x2; }*)arg4 contextSizeOut:(struct CGSize { float x1; float x2; }*)arg5 transformOut:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg6;

- (id)_albums;
- (id)_faceImageDataForRecordID:(int)arg1 faceIndex:(int)arg2 returnLocationInImage:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3;
- (void)_flushImageLibrary;
- (BOOL)_hasAtLeastOnePhoto:(BOOL)arg1;
- (struct ITImageInfo { struct DLinkElement { struct DLinkElement {} *x_1_1_1; struct DLinkElement {} *x_1_1_2; } x1; struct ITImageLibrary {} *x2; unsigned int x3; unsigned long long x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned short x8; unsigned short x9; struct SLinkList { struct SLinkElement {} *x_10_1_1; } x10; unsigned int x11; unsigned char x12; unsigned char x13; unsigned short x14; unsigned short x15; unsigned short x16; struct ITImageFaceInstance {} *x17; unsigned int x18; unsigned int x19; double x20; double x21; }*)_imageInfoForPhoto:(id)arg1;
- (id)_imagesForAlbum:(id)arg1 firstImageOnly:(BOOL)arg2;
- (void)_loadImageLibrary;
- (void)_setAlbums:(id)arg1;
- (id)albums;
- (id)albumsWithKinds:(id)arg1;
- (BOOL)containersAreSorted;
- (id)countOfAllPhotosAndVideos;
- (id)dataForPhoto:(id)arg1 format:(int)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8;
- (id)databasePath;
- (id)dateForPhoto:(id)arg1;
- (void)dealloc;
- (id)eventAlbums;
- (id)faceAlbums;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })faceRectangles:(id)arg1 forPhoto:(id)arg2;
- (id)firstImageForAlbum:(id)arg1;
- (void)flushAlbums;
- (BOOL)hasAtLeastOneItem;
- (BOOL)hasAtLeastOnePhoto;
- (BOOL)hasAtLeastOnePhotoWithGPS;
- (id)iTunesDataForPhoto:(id)arg1 format:(int)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8;
- (void)iTunesFaceForID:(int)arg1 faceIndex:(int)arg2 photoOut:(id*)arg3 rectOut:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg4;
- (id)iTunesFaceImageForRecordID:(int)arg1 faceIndex:(int)arg2 size:(struct CGSize { float x1; float x2; })arg3 returnLocationInImage:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg4;
- (BOOL)iTunesLibraryFromAperture;
- (BOOL)iTunesLibraryFromIPhoto;
- (id)imageWithITImageInfo:(struct ITImageInfo { struct DLinkElement { struct DLinkElement {} *x_1_1_1; struct DLinkElement {} *x_1_1_2; } x1; struct ITImageLibrary {} *x2; unsigned int x3; unsigned long long x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned short x8; unsigned short x9; struct SLinkList { struct SLinkElement {} *x_10_1_1; } x10; unsigned int x11; unsigned char x12; unsigned char x13; unsigned short x14; unsigned short x15; unsigned short x16; struct ITImageFaceInstance {} *x17; unsigned int x18; unsigned int x19; double x20; double x21; }*)arg1;
- (id)imagesForAlbum:(id)arg1;
- (id)initWithPath:(id)arg1;
- (BOOL)isPosterPhoto:(id)arg1 forAlbum:(id)arg2;
- (int)numberOfImagesInAlbum:(id)arg1;
- (int)numberOfVideosInAlbum:(id)arg1;
- (id)pathForPhotoJPEG:(id)arg1 format:(int)arg2;
- (id)placeAlbums;
- (void)reloadAlbums;
- (id)slideshowSettingsPathForUuid:(id)arg1;
- (BOOL)sortITunesAlbumsByDate;
- (BOOL)supportsAlbums;
- (BOOL)supportsAllPhotos;
- (BOOL)supportsEvents;
- (BOOL)supportsFaces;
- (BOOL)supportsPlaces;
- (void)updateHasAtLeastOnePhotoWithGPS;
- (id)userAlbums;
- (id)videosPath;

@end
