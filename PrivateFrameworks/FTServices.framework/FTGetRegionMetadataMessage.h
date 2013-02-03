/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSString, NSDictionary;

@interface FTGetRegionMetadataMessage : FTMessage {
    NSString *_language;
    NSDictionary *_responseRegionInformation;
}

@property(copy) NSString * language;
@property(copy) NSDictionary * responseRegionInformation;

- (id)bagKey;
- (void)dealloc;
- (void)handleResponseDictionary:(id)arg1;
- (id)language;
- (id)messageBody;
- (id)requiredKeys;
- (id)responseRegionInformation;
- (void)setLanguage:(id)arg1;
- (void)setResponseRegionInformation:(id)arg1;

@end
