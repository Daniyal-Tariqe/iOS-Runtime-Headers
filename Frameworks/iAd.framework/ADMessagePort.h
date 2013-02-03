/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class NSString, <ADMessagePortDelegate>;

@interface ADMessagePort : NSObject {
    <ADMessagePortDelegate> *_delegate;
    NSString *_name;
    struct __CFMessagePort { } *_port;
    struct __CFRunLoopSource { } *_runLoopSource;
}

@property <ADMessagePortDelegate> * delegate;
@property(readonly) NSString * name;
@property(readonly) struct __CFMessagePort { }* port;
@property(readonly) struct __CFRunLoopSource { }* runLoopSource;

+ (void)addRemoteInstance:(id)arg1;
+ (id)remoteInstanceNamed:(id)arg1;
+ (void)removeRemoteInstanceNamed:(id)arg1;

- (void)dealloc;
- (id)delegate;
- (id)initLocalWithName:(id)arg1;
- (id)initRemoteWithName:(id)arg1;
- (void)invalidate;
- (BOOL)isValid;
- (id)name;
- (struct __CFMessagePort { }*)port;
- (struct __CFRunLoopSource { }*)runLoopSource;
- (long)sendMessage:(long)arg1 withData:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
