/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSURL, NSString;

@interface ISOpenURLRequest : NSObject <NSCopying> {
    BOOL _isITunesStoreURL;
    NSString *_targetIdentifier;
    NSURL *_url;
}

@property(getter=isITunesStoreURL) BOOL ITunesStoreURL;
@property(retain) NSURL * URL;
@property(copy) NSString * targetIdentifier;

+ (id)openURLRequestWithURL:(id)arg1;

- (id)URL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithURL:(id)arg1;
- (BOOL)isITunesStoreURL;
- (void)setITunesStoreURL:(BOOL)arg1;
- (void)setTargetIdentifier:(id)arg1;
- (void)setURL:(id)arg1;
- (id)targetIdentifier;

@end
