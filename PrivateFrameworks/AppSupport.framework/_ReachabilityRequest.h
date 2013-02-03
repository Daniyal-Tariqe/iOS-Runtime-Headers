/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class NSString, NSLock;

@interface _ReachabilityRequest : NSObject {
    unsigned int _flags;
    NSString *_hostname;
    BOOL _isReachable;
    NSLock *_lock;
    struct __CFDictionary { } *_observers;
    struct __SCNetworkReachability { } *_reachability;
    BOOL _receivedAtLeastOneCallback;
}

@property NSString * hostname;

- (void)addObserver:(id)arg1 selector:(SEL)arg2;
- (void)dealloc;
- (id)description;
- (BOOL)hasObservers;
- (id)hostname;
- (id)initWithHostname:(id)arg1;
- (void)reachabilityChangedWithFlags:(unsigned int)arg1;
- (void)removeObserver:(id)arg1;
- (void)setHostname:(id)arg1;

@end
