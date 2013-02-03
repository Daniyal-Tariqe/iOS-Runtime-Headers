/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString, GMMDateTime;

@interface GMMAdEventReportRequest : PBRequest {
    GMMDateTime *_event_time;
    int _event_type;
    BOOL _hasEvent_type;
    NSString *_unique_id;
}

@property(retain) GMMDateTime * event_time;
@property int event_type;
@property(readonly) BOOL hasEvent_time;
@property(readonly) BOOL hasEvent_type;
@property(readonly) BOOL hasUnique_id;
@property(retain) NSString * unique_id;

- (void)dealloc;
- (id)description;
- (id)event_time;
- (int)event_type;
- (BOOL)hasEvent_time;
- (BOOL)hasEvent_type;
- (BOOL)hasUnique_id;
- (id)init;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setEvent_time:(id)arg1;
- (void)setEvent_type:(int)arg1;
- (void)setUnique_id:(id)arg1;
- (id)unique_id;
- (void)writeTo:(id)arg1;

@end
