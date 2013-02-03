/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface SFUFileInputStream : NSObject <SFUInputStream> {
    long long mCurrentOffset;
    long long mEndOffset;
    int mFd;
    BOOL mIsCachingDisabled;
    long long mStartOffset;
}

- (BOOL)canSeek;
- (void)close;
- (id)closeLocalStream;
- (void)dealloc;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (id)initWithFileDescriptor:(int)arg1 offset:(long long)arg2 length:(long long)arg3;
- (id)initWithPath:(id)arg1 offset:(long long)arg2 length:(long long)arg3;
- (id)initWithPath:(id)arg1 offset:(long long)arg2;
- (long long)offset;
- (unsigned long)readToBuffer:(char *)arg1 size:(unsigned long)arg2;
- (void)seekToOffset:(long long)arg1;

@end
