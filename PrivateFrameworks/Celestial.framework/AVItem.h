/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSDate;

@interface AVItem : NSObject {
    struct AVItemPrivate { id x1; id x2; /* Warning: Unrecognized filer type: '"' using 'void*' */ void*x3; inout unsigned short x4; unsigned short x5; void*x6; const int x7; in void*x8; void*x9; double x10; float x11; float x12; float x13; unsigned int x14; BOOL x15; BOOL x16; id x17; void*x18; inout unsigned short x19; void*x20; int x21; BOOL x22; void*x23; int x24; out in void*x25; const void*x26; void*x27; int x28; long long x29; long long x30; BOOL x31; id x32; void*x33; inout unsigned short x34; void*x35; int x36; BOOL x37; void*x38; int x39; out in void*x40; const void*x41; void*x42; id x43; void*x44; inout unsigned short x45; void*x46; void*x47; unsigned long x48; void*x49; id x50; void*x51; inout unsigned short x52; void*x53; void*x54; unsigned long x55; void*x56; BOOL x57; BOOL x58; id x59; void*x60; inout unsigned short x61; void*x62; int x63; BOOL x64; void*x65; int x66; out in void*x67; const void*x68; void*x69; id x70; void*x71; inout unsigned short x72; void*x73; void*x74; unsigned long x75; void*x76; struct OpaqueMD5CheckProgress {} *x77; struct OpaqueFigThread {} *x78; struct OpaqueFigByteStream {} *x79; int x80; id x81; void*x82; inout unsigned short x83; void*x84; void*x85; void*x86; void*x87; void*x88; NSDate *x89; } *_priv;
}

+ (id)avItem;
+ (id)avItemWithPath:(id)arg1 error:(id*)arg2;

- (int)_instantiateItem;
- (id)accessLog;
- (void)addPlaybackPropertyWithValue:(id)arg1 forKey:(id)arg2;
- (id)attributeForKey:(id)arg1;
- (long)beginDownloading;
- (void)cancelDownload;
- (id)chapterImageForImageID:(int)arg1;
- (void)dealloc;
- (float)downloadProgress;
- (long)downloadStatus;
- (void*)downloadThread;
- (double)duration;
- (int)eqPreset;
- (id)errorLog;
- (id)evenlySpacedThumbnailTimesFromStartTime:(double)arg1 toEndTime:(double)arg2 maxCount:(int)arg3;
- (id)formatDetailsForTracks;
- (id)init;
- (id)initWithError:(id*)arg1;
- (id)initWithPath:(id)arg1 error:(id*)arg2;
- (struct CGSize { float x1; float x2; })naturalSize;
- (id)nextThumbnailTimesStartingAt:(double)arg1 minimumInterval:(double)arg2 forwards:(BOOL)arg3 maxCount:(int)arg4;
- (id)path;
- (BOOL)setAttribute:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)setEQPreset:(int)arg1;
- (BOOL)setPath:(id)arg1 error:(id*)arg2;
- (void)setVolume:(float)arg1;
- (void)stopDownload;
- (id)url;
- (id)urlFromPath:(id)arg1;
- (float)volume;

@end
