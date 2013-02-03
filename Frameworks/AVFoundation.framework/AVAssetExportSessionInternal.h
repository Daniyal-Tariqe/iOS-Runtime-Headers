/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSError, AVURLAsset, AVWeakReference, AVAudioMix, NSString, NSURL, AVVideoComposition, NSArray;

@interface AVAssetExportSessionInternal : NSObject {
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    AVURLAsset *asset;
    AVAudioMix *audioMix;
    NSError *error;
    id handler;
    long long maxFileSize;
    NSArray *metadata;
    BOOL optimizeForNetworkUse;
    BOOL outputFileCreatedByRemaker;
    NSString *outputFileType;
    NSURL *outputURL;
    NSString *preset16x9;
    NSString *preset;
    float progress;
    struct dispatch_queue_s { } *readWriteQueue;
    struct OpaqueFigRemaker { } *remaker;
    struct dispatch_queue_s { } *remakerNotificationSerializationQueue;
    int status;
    } timeRange;
    AVVideoComposition *videoComposition;
    AVWeakReference *weakReference;
}

@end
