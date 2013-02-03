/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSDate, NSMutableData, DAVSession, NSDictionary, NSMutableSet, NSString, NSMutableDictionary, NSData;

@interface DAVRequest : AYOperation {
    struct { 
        int version; 
        void *info; 
        int (*retain)(); 
        int (*release)(); 
        int (*copyDescription)(); 
    NSMutableSet *_acceptingReaders;
    NSMutableDictionary *_attemptDictionary;
    NSMutableSet *_bodyReaders;
    struct __CFReadStream { } *_bodyStream;
    int _certificatePolicy;
    BOOL _checkedServerTrust;
    } _clientContext;
    long long _contentLength;
    void *_davReserved;
    id _delegate;
    NSDate *_dispatchDate;
    NSDictionary *_headers;
    NSMutableData *_httpResponseBody;
    NSString *_httpStatus;
    unsigned int _httpStatusCode;
    NSString *_method;
    long long _putLength;
    long long _readLength;
    struct __CFReadStream { } *_readStream;
    NSData *_requestBodyData;
    NSMutableDictionary *_requestHeaders;
    long long _requestLength;
    struct __CFHTTPMessage { } *_requestMessage;
    struct __CFHTTPMessage { } *_responseMessage;
    DAVSession *_session;
    NSString *_uri;
    BOOL _useKerberos;
}

@property(retain) NSDate * dispatchDate;

+ (BOOL)allowsAnyHTTPSCertificateForHost:(id)arg1;
+ (int)defaultCertificatePolicy;
+ (void)initialize;
+ (BOOL)logHTTPActivity;
+ (BOOL)logRequestSynopsis;
+ (id)multiStatusRequestWithSession:(id)arg1 method:(id)arg2 URI:(id)arg3 responseClass:(Class)arg4;
+ (id)multiStatusRequestWithSession:(id)arg1 method:(id)arg2 URI:(id)arg3;
+ (id)multiStatusRequestWithSession:(id)arg1 method:(id)arg2 path:(id)arg3 responseClass:(Class)arg4;
+ (id)multiStatusRequestWithSession:(id)arg1 method:(id)arg2 path:(id)arg3;
+ (id)multiStatusRequestWithURL:(id)arg1 method:(id)arg2 responseClass:(Class)arg3;
+ (id)multiStatusRequestWithURL:(id)arg1 method:(id)arg2;
+ (id)propFindRequestWithSession:(id)arg1 withDepth:(id)arg2 URI:(id)arg3 lookingForProps:(id)arg4 responseReader:(id)arg5;
+ (id)propFindRequestWithSession:(id)arg1 withDepth:(id)arg2 URI:(id)arg3 lookingForProps:(id)arg4;
+ (id)propFindRequestWithSession:(id)arg1 withDepth:(id)arg2 path:(id)arg3 lookingForProps:(id)arg4;
+ (id)propFindRequestWithURL:(id)arg1 withDepth:(id)arg2 lookingForProps:(id)arg3;
+ (id)propPatchRequestWithSession:(id)arg1 path:(id)arg2 patchProperties:(id)arg3 deleteProperties:(id)arg4;
+ (id)propPatchRequestWithURL:(id)arg1 patchProperties:(id)arg2 deleteProperties:(id)arg3;
+ (id)requestWithSession:(id)arg1 method:(id)arg2 URI:(id)arg3;
+ (id)requestWithSession:(id)arg1 method:(id)arg2 path:(id)arg3;
+ (id)requestWithURL:(id)arg1 method:(id)arg2;
+ (void)setAllowsAnyHTTPSCertificateForHost:(id)arg1 value:(BOOL)arg2;
+ (void)setDefaultCertificatePolicy:(int)arg1;
+ (void)setLogHTTPActivity:(BOOL)arg1;
+ (void)setLogRequestSynopsis:(BOOL)arg1;

- (unsigned char)_bodyStreamCanRead;
- (unsigned char)_bodyStreamOpen:(struct { int x1; int x2; }*)arg1 openComplete:(char *)arg2;
- (long)_bodyStreamRead:(char *)arg1 bufferLength:(long)arg2 error:(struct { int x1; int x2; }*)arg3 atEOF:(char *)arg4;
- (BOOL)_computeHeaders;
- (void)_initForPropFindWithDepth:(id)arg1 lookingForProps:(id)arg2;
- (void)_initForPropPatchWithPatchDict:(id)arg1 deleteProperties:(id)arg2;
- (BOOL)_initHTTPRequest;
- (void)_initReaderWithClass:(Class)arg1;
- (id)_nonceFromAuthHeader:(id)arg1;
- (BOOL)_nonceIsStale:(id)arg1;
- (void)_readStreamEvent:(unsigned long)arg1;
- (id)acceptingReaders;
- (void)addResponseBodyReader:(id)arg1;
- (int)attemptForHTTPCode:(int)arg1;
- (int)certificatePolicy;
- (void)dealloc;
- (id)description;
- (void)dispatch;
- (id)dispatchDate;
- (void)displayCertPanel:(id)arg1;
- (void)endOperationWithError:(id)arg1;
- (void)finalize;
- (void)finalizeOperation;
- (id)getErrorFromHTTPStatus;
- (char *)getToken;
- (void)grantRequestWithLockToken:(id)arg1;
- (void)grantRequestWithLockTokens:(id)arg1;
- (id)httpStatus;
- (int)httpStatusCode;
- (BOOL)initAuthGSS;
- (void)initBeforeDispatch;
- (id)initMultiStatusRequestWithSession:(id)arg1 method:(id)arg2 URI:(id)arg3 responseClass:(Class)arg4;
- (id)initMultiStatusRequestWithSession:(id)arg1 method:(id)arg2 URI:(id)arg3 responseReader:(id)arg4;
- (id)initMultiStatusRequestWithSession:(id)arg1 method:(id)arg2 URI:(id)arg3;
- (id)initMultiStatusRequestWithSession:(id)arg1 method:(id)arg2 path:(id)arg3 responseClass:(Class)arg4;
- (id)initMultiStatusRequestWithSession:(id)arg1 method:(id)arg2 path:(id)arg3;
- (id)initMultiStatusRequestWithURL:(id)arg1 method:(id)arg2 responseClass:(Class)arg3;
- (id)initMultiStatusRequestWithURL:(id)arg1 method:(id)arg2;
- (id)initPropFindWithSession:(id)arg1 withDepth:(id)arg2 URI:(id)arg3 lookingForProps:(id)arg4 responseReader:(id)arg5;
- (id)initPropFindWithSession:(id)arg1 withDepth:(id)arg2 URI:(id)arg3 lookingForProps:(id)arg4;
- (id)initPropFindWithSession:(id)arg1 withDepth:(id)arg2 path:(id)arg3 lookingForProps:(id)arg4;
- (id)initPropFindWithURL:(id)arg1 withDepth:(id)arg2 lookingForProps:(id)arg3;
- (id)initPropPatchWithSession:(id)arg1 URI:(id)arg2 patchProperties:(id)arg3 deleteProperties:(id)arg4;
- (id)initPropPatchWithSession:(id)arg1 path:(id)arg2 patchProperties:(id)arg3 deleteProperties:(id)arg4;
- (id)initPropPatchWithURL:(id)arg1 patchProperties:(id)arg2 deleteProperties:(id)arg3;
- (id)initWithSession:(id)arg1 method:(id)arg2 URI:(id)arg3;
- (id)initWithSession:(id)arg1 method:(id)arg2 path:(id)arg3;
- (id)initWithURL:(id)arg1 method:(id)arg2;
- (BOOL)isNegoHeader:(id)arg1;
- (BOOL)isRunLoopBased;
- (struct __CFHTTPMessage { }*)lastRequestMessage;
- (struct __CFHTTPMessage { }*)lastResponseMessage;
- (id)method;
- (struct __CFReadStream { }*)newStreamWithRequestMessage:(struct __CFHTTPMessage { }*)arg1;
- (long long)operationProgress;
- (long long)operationTotal;
- (id)password;
- (long long)putLength;
- (long long)readLength;
- (id)requestBody;
- (id)requestHeaders;
- (long long)requestLength;
- (id)responseBody;
- (id)responseBodyString;
- (long long)responseContentLength;
- (id)responseHeaders;
- (id)responses;
- (id)retryOperationAfterSSLError:(int)arg1;
- (id)session;
- (void)setCertificatePolicy:(int)arg1;
- (BOOL)setCertificatePolicyOnStream:(struct __CFReadStream { }*)arg1;
- (void)setDispatchDate:(id)arg1;
- (void)setError:(id)arg1;
- (void)setHeader:(id)arg1 withValue:(id)arg2;
- (void)setRequestBodyWithData:(id)arg1;
- (void)setRequestBodyWithString:(id)arg1 encoding:(unsigned int)arg2;
- (void)setSSLPropertiesOnReadStream;
- (void)setTrustedCertsOnReadStream:(id)arg1;
- (void)setUsername:(id)arg1 andPassword:(id)arg2;
- (BOOL)shouldContinueAfterCheckingServerTrust;
- (BOOL)stepAuthGSS:(id)arg1;
- (BOOL)supportsDigest;
- (id)uri;
- (id)url;
- (BOOL)useKerberos;
- (id)username;

@end
