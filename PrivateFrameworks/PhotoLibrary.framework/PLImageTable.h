/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSDictionary, NSString, NSMutableArray;

@interface PLImageTable : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    NSMutableArray *_allSegments;
    BOOL _dying;
    int _entryCount;
    int _entryLength;
    int _fid;
    unsigned int _fileLength;
    int _format;
    int _imageLength;
    int _imageRowBytes;
    NSString *_path;
    BOOL _readOnly;
    int _segmentCount;
    unsigned int _segmentLength;
    } _thumbnailSize;
}

@property(readonly) int imageFormat;
@property(readonly) int imageHeight;
@property(readonly) int imageLength;
@property(readonly) int imageRowBytes;
@property(readonly) int imageWidth;
@property(readonly) BOOL isReadOnly;
@property(readonly) NSString * path;
@property(readonly) NSDictionary * photoUUIDToIndexMap;

+ (void)releaseSegmentCache;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })scaleSize:(struct CGSize { float x1; float x2; })arg1 toFitWithinSize:(struct CGSize { float x1; float x2; })arg2;

- (void)_addEntriesIfNecessaryForIndex:(int)arg1;
- (BOOL)_compactWithOccupiedIndexes:(id)arg1 outPhotoUUIDToIndexMap:(id*)arg2;
- (int)_fileDescriptor;
- (void)_flushEntryAtAddress:(void*)arg1 count:(int)arg2;
- (void)_flushEntryAtAddress:(void*)arg1;
- (id)_mappedImageDataAtIndex:(int)arg1;
- (void)_releaseSegment:(id)arg1;
- (void)_releaseSegmentAtIndex:(int)arg1;
- (void)_reloadSegmentAtIndex:(int)arg1;
- (id)_segmentAtIndex:(int)arg1;
- (unsigned long)_segmentLength;
- (void)_setEntryAtIndex:(int)arg1 imageData:(const void*)arg2 actualImageSize:(struct CGSize { float x1; float x2; })arg3;
- (void)_setEntryCount:(int)arg1;
- (void)_updateSegmentCount;
- (void)_writeImage:(id)arg1 withDuration:(id)arg2 photoUUID:(struct __CFUUID { }*)arg3 toEntryAtIndex:(int)arg4 isPlaceholder:(BOOL)arg5;
- (void)compactWithOccupiedIndexes:(id)arg1;
- (id)dataForEntryAtIndex:(int)arg1;
- (void)dealloc;
- (void)deleteEntryAtIndex:(int)arg1;
- (void)ensureIndexExists:(int)arg1;
- (BOOL)entryAtIndexIsPlaceholder:(int)arg1;
- (int)entryCount;
- (void)fileLengthChangedExternally;
- (int)imageFormat;
- (int)imageHeight;
- (int)imageLength;
- (int)imageRowBytes;
- (struct CGSize { float x1; float x2; })imageSize;
- (int)imageWidth;
- (id)initWithPath:(id)arg1 imageFormat:(int)arg2;
- (BOOL)isReadOnly;
- (id)path;
- (id)photoUUIDToIndexMap;
- (id)preflightCompactionWithOccupiedIndexes:(id)arg1;
- (void)rotateEntryAtIndex:(int)arg1 byDegrees:(int)arg2 withWhiteInsert:(int)arg3;
- (void)setImage:(id)arg1 forEntryAtIndex:(int)arg2 videoDuration:(id)arg3 photoUUID:(struct __CFUUID { }*)arg4 isPlaceholder:(BOOL)arg5;

@end
