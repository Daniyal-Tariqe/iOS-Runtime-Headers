/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVXMLData, NSString, NSDictionary, NSMutableDictionary;

@interface CoreDAVMultiPutTask : CoreDAVTask {
    NSString *_appSpecificDataProp;
    NSString *_appSpecificNamespace;
    NSString *_checkCTag;
    NSMutableDictionary *_hrefToETag;
    NSString *_newCTag;
    CoreDAVXMLData *_pushedData;
    NSMutableDictionary *_uuidToHREF;
    BOOL _validCTag;
}

@property(readonly) NSDictionary * hrefToETag;
@property(readonly) NSString * newCTag;
@property(readonly) NSDictionary * uuidToHREF;

- (id)additionalHeaderValues;
- (id)copyDefaultParserForContentType:(id)arg1;
- (void)dealloc;
- (void)fillOutDataWithUUIDsToAddActions:(id)arg1 hrefsToModDeleteActions:(id)arg2;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)hrefToETag;
- (id)httpMethod;
- (id)initWithURL:(id)arg1 checkCTag:(id)arg2 uuidsToAddActions:(id)arg3 hrefsToModDeleteActions:(id)arg4;
- (id)newCTag;
- (id)requestBody;
- (id)uuidToHREF;

@end
