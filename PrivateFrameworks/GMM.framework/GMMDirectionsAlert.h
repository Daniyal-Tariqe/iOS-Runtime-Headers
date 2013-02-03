/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString;

@interface GMMDirectionsAlert : PBCodable {
    NSString *_headline;
    NSString *_text;
    NSString *_url;
}

@property(readonly) BOOL hasHeadline;
@property(readonly) BOOL hasText;
@property(readonly) BOOL hasUrl;
@property(retain) NSString * headline;
@property(retain) NSString * text;
@property(retain) NSString * url;

- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasHeadline;
- (BOOL)hasText;
- (BOOL)hasUrl;
- (id)headline;
- (id)init;
- (BOOL)readFrom:(id)arg1;
- (void)setHeadline:(id)arg1;
- (void)setText:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)text;
- (id)url;
- (void)writeTo:(id)arg1;

@end
