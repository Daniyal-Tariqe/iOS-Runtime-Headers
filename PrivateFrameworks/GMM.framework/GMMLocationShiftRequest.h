/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class GMMMapPoint;

@interface GMMLocationShiftRequest : PBRequest {
    GMMMapPoint *_originalPoint;
}

@property(retain) GMMMapPoint * originalPoint;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)originalPoint;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setOriginalPoint:(id)arg1;
- (void)writeTo:(id)arg1;

@end
