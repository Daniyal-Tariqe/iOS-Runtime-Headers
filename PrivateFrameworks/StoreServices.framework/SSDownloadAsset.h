/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSString, NSURLRequest, NSLock;

@interface SSDownloadAsset : NSObject <NSCoding> {
    NSString *_downloadFileName;
    long long _fileSize;
    NSString *_finalizedFileName;
    NSArray *_hashes;
    BOOL _isExternal;
    NSLock *_lock;
    long long _numberOfBytesToHash;
    NSString *_processedPath;
    int _type;
    NSURLRequest *_urlRequest;
}

@property(retain) NSURLRequest * URLRequest;
@property(retain) NSString * downloadFileName;
@property(readonly) NSString * downloadInformationKey;
@property(readonly) NSString * downloadPath;
@property(getter=isExternal) BOOL external;
@property long long fileSize;
@property(retain) NSString * finalizedFileName;
@property(readonly) NSString * finalizedPath;
@property(retain) NSArray * hashes;
@property long long numberOfBytesToHash;
@property(retain) NSString * processedPath;
@property(readonly) NSString * purchaseManifestKey;
@property int type;

+ (id)assetWithURL:(id)arg1 type:(int)arg2;

- (id)URLRequest;
- (id)copyPropertyListEncoding;
- (void)dealloc;
- (id)downloadFileName;
- (id)downloadInformationKey;
- (id)downloadPath;
- (void)encodeWithCoder:(id)arg1;
- (long long)fileSize;
- (id)finalizedFileName;
- (id)finalizedPath;
- (id)hashes;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertyListEncoding:(id)arg1;
- (id)initWithURLRequest:(id)arg1 type:(int)arg2;
- (BOOL)isExternal;
- (long long)numberOfBytesToHash;
- (id)processedPath;
- (id)purchaseManifestKey;
- (void)setDownloadFileName:(id)arg1;
- (void)setExternal:(BOOL)arg1;
- (void)setFileSize:(long long)arg1;
- (void)setFinalizedFileName:(id)arg1;
- (void)setHashes:(id)arg1;
- (void)setLocalFileNameFromBase:(id)arg1;
- (void)setNumberOfBytesToHash:(long long)arg1;
- (void)setProcessedPath:(id)arg1;
- (void)setType:(int)arg1;
- (void)setURLRequest:(id)arg1;
- (int)type;

@end
