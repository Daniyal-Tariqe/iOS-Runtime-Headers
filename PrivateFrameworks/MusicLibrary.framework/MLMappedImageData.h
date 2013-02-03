/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class MLMappedFileSegment;

@interface MLMappedImageData : NSData {
    void *_bytes;
    unsigned int _length;
    MLMappedFileSegment *_mappedFileSegment;
}

+ (id)mappedImageDataForFile:(id)arg1 offset:(long long)arg2 length:(unsigned long)arg3 fileIsFixedSize:(BOOL)arg4;

- (const void*)bytes;
- (void)dealloc;
- (id)initWithMappedFileSegment:(id)arg1 bytes:(void*)arg2 length:(unsigned long)arg3;
- (unsigned int)length;

@end
