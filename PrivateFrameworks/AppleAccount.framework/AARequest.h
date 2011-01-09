/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSString;



@interface AARequest : NSObject 
{
    NSString *_urlString;
}

@property(readonly) NSURLRequest *urlRequest;
@property(readonly) NSURLCredential *urlCredential;

+ (id)protocolVersion;
+ (Class)responseClass;

- (id)initWithURLString:(id)arg1;
- (id)bodyDictionary;
- (id)urlCredential;
- (id)urlRequest;
- (void)dealloc;

@end