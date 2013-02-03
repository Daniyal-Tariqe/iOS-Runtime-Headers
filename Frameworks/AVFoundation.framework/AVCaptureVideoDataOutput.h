/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureVideoDataOutputInternal, <AVCaptureVideoDataOutputSampleBufferDelegate>, NSDictionary;

@interface AVCaptureVideoDataOutput : AVCaptureOutput {
    AVCaptureVideoDataOutputInternal *_internal;
}

@property BOOL alwaysDiscardsLateVideoFrames;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } minFrameDuration;
@property(readonly) struct dispatch_queue_s { }* sampleBufferCallbackQueue;
@property(readonly) <AVCaptureVideoDataOutputSampleBufferDelegate> * sampleBufferDelegate;
@property(copy) NSDictionary * videoSettings;

+ (void)initialize;

- (void)_AVCaptureVideoDataOutput_VideoDataBecameReady;
- (id)_applyOverridesToCaptureOptions:(id)arg1;
- (BOOL)alwaysDiscardsLateVideoFrames;
- (id)availableVideoCVPixelFormatTypes;
- (id)availableVideoCodecTypes;
- (id)connectionMediaTypes;
- (void)dealloc;
- (void)didStartForSession:(id)arg1;
- (void)didStopForSession:(id)arg1 error:(id)arg2;
- (id)init;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minFrameDuration;
- (struct dispatch_queue_s { }*)sampleBufferCallbackQueue;
- (id)sampleBufferDelegate;
- (void)setAlwaysDiscardsLateVideoFrames:(BOOL)arg1;
- (void)setMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setSampleBufferDelegate:(id)arg1 queue:(struct dispatch_queue_s { }*)arg2;
- (void)setSession:(id)arg1;
- (void)setVideoSettings:(id)arg1;
- (id)videoSettings;

@end
