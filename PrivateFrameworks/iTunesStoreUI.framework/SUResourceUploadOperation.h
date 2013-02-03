/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SSURLRequestProperties, NSDictionary;

@interface SUResourceUploadOperation : ISOperation {
    NSDictionary *_responseDictionary;
    SSURLRequestProperties *_urlRequestProperties;
}

@property(readonly) SSURLRequestProperties * URLRequestProperties;
@property(readonly) NSDictionary * responseDictionary;

- (id)URLRequestProperties;
- (void)_setResponseDictionary:(id)arg1;
- (void)dealloc;
- (id)initWithURLRequestProperties:(id)arg1;
- (id)responseDictionary;
- (void)run;

@end
