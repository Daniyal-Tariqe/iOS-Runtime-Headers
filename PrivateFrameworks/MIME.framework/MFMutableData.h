/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFMutableData : NSMutableData <NSCopying, NSMutableCopying> {
    void *_bytes;
    unsigned int _capacity;
    int _fd;
    BOOL _flush;
    unsigned int _flushFrom;
    BOOL _immutable;
    unsigned int _length;
    unsigned int _mappedLength;
    char *_path;
    unsigned int _threshold;
    BOOL _vm;
}

- (void)_flushToDisk:(unsigned int)arg1 capacity:(unsigned int)arg2;
- (id)_initWithFd:(int)arg1 path:(id)arg2 mutable:(BOOL)arg3;
- (void)_mapMutableData:(BOOL)arg1;
- (void)appendBytes:(const void*)arg1 length:(unsigned int)arg2;
- (void)appendData:(id)arg1;
- (const void*)bytes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithBytes:(const void*)arg1 length:(unsigned int)arg2;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2 freeWhenDone:(BOOL)arg3;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned int)arg2;
- (id)initWithCapacity:(unsigned int)arg1;
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfMappedFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithLength:(unsigned int)arg1;
- (unsigned int)length;
- (BOOL)mf_immutable;
- (void)mf_makeImmutable;
- (const void*)mutableBytes;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setLength:(unsigned int)arg1;
- (void)setMappingThreshold:(unsigned int)arg1;
- (id)subdataWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToFile:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;

@end
