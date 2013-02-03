/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSDate, NSString, AVItemAccessLogEventInternal;

@interface AVItemAccessLogEvent : NSObject <NSCopying> {
    AVItemAccessLogEventInternal *_playerItemAccessLogEvent;
}

@property(readonly) NSString * URI;
@property(readonly) double durationWatched;
@property(readonly) double indicatedBitrate;
@property(readonly) long long numberOfBytesTransferred;
@property(readonly) int numberOfDroppedVideoFrames;
@property(readonly) int numberOfSegmentsDownloaded;
@property(readonly) int numberOfServerAddressChanges;
@property(readonly) int numberOfStalls;
@property(readonly) double observedBitrate;
@property(readonly) NSString * playbackSessionID;
@property(readonly) NSDate * playbackStartDate;
@property(readonly) double playbackStartOffset;
@property(readonly) double segmentsDownloadedDuration;
@property(readonly) NSString * serverAddress;

- (id)URI;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)durationWatched;
- (void)finalize;
- (double)indicatedBitrate;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (long long)numberOfBytesTransferred;
- (int)numberOfDroppedVideoFrames;
- (int)numberOfSegmentsDownloaded;
- (int)numberOfServerAddressChanges;
- (int)numberOfStalls;
- (double)observedBitrate;
- (id)playbackSessionID;
- (id)playbackStartDate;
- (double)playbackStartOffset;
- (double)segmentsDownloadedDuration;
- (id)serverAddress;

@end
