/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaLibraryEntityWriteStream, MPMediaQueryCriteria, MPMediaQuery, NSSet;

@interface MPMediaLibraryFetchRequest : NSObject {
    id _entityArray;
    MPMediaLibraryEntityWriteStream *_stream;
}

@property(copy,readonly) NSSet * propertiesToFetch;
@property(retain,readonly) MPMediaQuery * query;
@property(retain,readonly) MPMediaQueryCriteria * queryCriteria;

- (void)dealloc;
- (id)description;
- (id)initWithEntityStreamArray:(id)arg1;
- (id)propertiesToFetch;
- (id)query;
- (id)queryCriteria;
- (id)streamForWritingWithCount:(unsigned int)arg1 containedMediaTypes:(int)arg2 sectionInfo:(id)arg3;

@end
