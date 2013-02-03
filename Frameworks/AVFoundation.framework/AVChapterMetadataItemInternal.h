/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSLocale, NSString, AVWeakReference, NSMutableArray;

@interface AVChapterMetadataItemInternal : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    int chapterGroupIndex;
    int chapterIndex;
    NSString *chapterType;
    NSMutableArray *completions;
    } duration;
    struct OpaqueFigFormatReaderLoader { } *loader;
    NSLocale *locale;
    struct dispatch_queue_s { } *readWriteQueue;
    } time;
    id value;
    int valueErrorCode;
    int valueStatus;
    AVWeakReference *weakReference;
}

@end
