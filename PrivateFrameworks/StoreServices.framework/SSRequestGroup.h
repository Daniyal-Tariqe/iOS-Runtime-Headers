/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSString, NSMutableSet;

@interface SSRequestGroup : NSObject {
    NSString *_identifier;
    Class _requestClass;
    NSMutableSet *_requests;
}

@property(readonly) NSString * groupIdentifier;
@property(readonly) NSArray * requests;

- (void)_daemonExited:(id)arg1;
- (void)_mainThreadDaemonExited:(id)arg1;
- (void)_registerForDaemonNotifications;
- (void)_reloadRequestsFromDaemon;
- (void)_setGroupIdentifier:(id)arg1 forRequestWithIdentifier:(id)arg2;
- (void)_unregisterForDaemonNotifications;
- (void)addRequest:(id)arg1;
- (void)dealloc;
- (id)groupIdentifier;
- (id)init;
- (id)initWithGroupIdentifier:(id)arg1 requestClass:(Class)arg2;
- (id)initWithGroupIdentifier:(id)arg1;
- (void)removeRequest:(id)arg1;
- (id)requests;

@end
