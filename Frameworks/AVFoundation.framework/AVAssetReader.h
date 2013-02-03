/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSError, AVAssetReaderInternal, NSArray, AVAsset;

@interface AVAssetReader : NSObject {
    AVAssetReaderInternal *_priv;
}

@property(retain,readonly) AVAsset * asset;
@property(readonly) NSError * error;
@property(getter=_figAssetReader,readonly) struct OpaqueFigAssetReader { }* figAssetReader;
@property(readonly) NSArray * outputs;
@property(readonly) int status;
@property struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;

+ (id)assetReaderWithAsset:(id)arg1 error:(id*)arg2;
+ (void)initialize;

- (BOOL)_canAddOutput:(id)arg1 exceptionReason:(id*)arg2;
- (struct OpaqueFigAssetReader { }*)_figAssetReader;
- (void)_handleServerDiedNotification;
- (void)_transitionToStatus:(int)arg1 failureError:(id)arg2;
- (void)addOutput:(id)arg1;
- (id)asset;
- (BOOL)canAddOutput:(id)arg1;
- (void)cancelReading;
- (void)dealloc;
- (id)description;
- (id)error;
- (void)finalize;
- (id)init;
- (id)initWithAsset:(id)arg1 error:(id*)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)outputs;
- (void)release;
- (id)retain;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (BOOL)startReading;
- (int)status;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;

@end
