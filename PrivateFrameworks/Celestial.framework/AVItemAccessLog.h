/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class AVItemAccessLogInternal, NSArray;

@interface AVItemAccessLog : NSObject <NSCopying> {
    AVItemAccessLogInternal *_playerItemAccessLog;
}

@property(readonly) NSArray * events;


- (void)finalize;
- (id)init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)events;
- (id)extendedLogData;
- (unsigned int)extendedLogDataStringEncoding;
- (id)initWithLogArray:(id)arg1;

@end