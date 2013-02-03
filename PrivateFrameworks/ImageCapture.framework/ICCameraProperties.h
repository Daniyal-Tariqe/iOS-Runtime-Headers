/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class NSString, NSMutableArray;

@interface ICCameraProperties : NSObject {
    BOOL _accessRestrictedAppleDevice;
    BOOL _allowsSyncingClock;
    unsigned int _batteryLevel;
    BOOL _batteryLevelAvailable;
    BOOL _beingEjected;
    unsigned int _contentCatalogPercentCompleted;
    BOOL _contentReceived;
    NSMutableArray *_contents;
    int _contentsLock;
    struct dispatch_semaphore_s { } *_deviceQSemaphore;
    double _downloadCancelTimestamp;
    struct dispatch_queue_s { } *_downloadQ;
    BOOL _ejectable;
    unsigned int _estimatedNumberOfDownloadableItems;
    struct dispatch_queue_s { } *_generalQ;
    BOOL _locked;
    NSMutableArray *_mediaFiles;
    int _mediaFilesLock;
    struct dispatch_queue_s { } *_metadataFetchQ;
    unsigned int _numberOfDownloadableItems;
    struct dispatch_queue_s { } *_thumbnailFetchQ;
    double _timeOffset;
    NSMutableArray *_toBeNotifiedAddedItems;
    NSString *_volumePath;
}

@property BOOL accessRestrictedAppleDevice;
@property BOOL allowsSyncingClock;
@property unsigned int batteryLevel;
@property BOOL batteryLevelAvailable;
@property BOOL beingEjected;
@property unsigned int contentCatalogPercentCompleted;
@property BOOL contentReceived;
@property(retain) NSMutableArray * contents;
@property int contentsLock;
@property struct dispatch_semaphore_s { }* deviceQSemaphore;
@property double downloadCancelTimestamp;
@property struct dispatch_queue_s { }* downloadQ;
@property BOOL ejectable;
@property unsigned int estimatedNumberOfDownloadableItems;
@property struct dispatch_queue_s { }* generalQ;
@property BOOL locked;
@property(retain) NSMutableArray * mediaFiles;
@property int mediaFilesLock;
@property struct dispatch_queue_s { }* metadataFetchQ;
@property unsigned int numberOfDownloadableItems;
@property struct dispatch_queue_s { }* thumbnailFetchQ;
@property double timeOffset;
@property(retain) NSMutableArray * toBeNotifiedAddedItems;
@property(retain) NSString * volumePath;

- (BOOL)accessRestrictedAppleDevice;
- (BOOL)allowsSyncingClock;
- (unsigned int)batteryLevel;
- (BOOL)batteryLevelAvailable;
- (BOOL)beingEjected;
- (unsigned int)contentCatalogPercentCompleted;
- (BOOL)contentReceived;
- (id)contents;
- (int)contentsLock;
- (void)dealloc;
- (struct dispatch_semaphore_s { }*)deviceQSemaphore;
- (double)downloadCancelTimestamp;
- (struct dispatch_queue_s { }*)downloadQ;
- (BOOL)ejectable;
- (unsigned int)estimatedNumberOfDownloadableItems;
- (void)finalize;
- (struct dispatch_queue_s { }*)generalQ;
- (void)lockContents;
- (void)lockMediaFiles;
- (BOOL)locked;
- (id)mediaFiles;
- (int)mediaFilesLock;
- (struct dispatch_queue_s { }*)metadataFetchQ;
- (unsigned int)numberOfDownloadableItems;
- (void)setAccessRestrictedAppleDevice:(BOOL)arg1;
- (void)setAllowsSyncingClock:(BOOL)arg1;
- (void)setBatteryLevel:(unsigned int)arg1;
- (void)setBatteryLevelAvailable:(BOOL)arg1;
- (void)setBeingEjected:(BOOL)arg1;
- (void)setContentCatalogPercentCompleted:(unsigned int)arg1;
- (void)setContentReceived:(BOOL)arg1;
- (void)setContents:(id)arg1;
- (void)setContentsLock:(int)arg1;
- (void)setDeviceQSemaphore:(struct dispatch_semaphore_s { }*)arg1;
- (void)setDownloadCancelTimestamp:(double)arg1;
- (void)setDownloadQ:(struct dispatch_queue_s { }*)arg1;
- (void)setEjectable:(BOOL)arg1;
- (void)setEstimatedNumberOfDownloadableItems:(unsigned int)arg1;
- (void)setGeneralQ:(struct dispatch_queue_s { }*)arg1;
- (void)setLocked:(BOOL)arg1;
- (void)setMediaFiles:(id)arg1;
- (void)setMediaFilesLock:(int)arg1;
- (void)setMetadataFetchQ:(struct dispatch_queue_s { }*)arg1;
- (void)setNumberOfDownloadableItems:(unsigned int)arg1;
- (void)setThumbnailFetchQ:(struct dispatch_queue_s { }*)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setToBeNotifiedAddedItems:(id)arg1;
- (void)setVolumePath:(id)arg1;
- (struct dispatch_queue_s { }*)thumbnailFetchQ;
- (double)timeOffset;
- (id)toBeNotifiedAddedItems;
- (void)unlockContents;
- (void)unlockMediaFiles;
- (id)volumePath;

@end
