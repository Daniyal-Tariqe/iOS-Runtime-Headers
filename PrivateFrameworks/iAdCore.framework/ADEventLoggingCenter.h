/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class NSMapTable;

@interface ADEventLoggingCenter : NSObject {
    NSMapTable *_inflightRequests;
    BOOL _retransmitScheduled;
}

@property(retain) NSMapTable * inflightRequests;
@property(readonly) BOOL isIdle;
@property BOOL retransmitScheduled;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedCenter;

- (id)_URLForRequest:(id)arg1 baseURL:(id)arg2;
- (void)_considerPostingDidBecomeIdleNotification;
- (void)_considerSchedulingRetransmit;
- (id)_sendRequests:(id)arg1 toURL:(id)arg2 additionalHeaders:(id)arg3;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)inflightRequests;
- (id)init;
- (BOOL)isIdle;
- (void)logEvent:(id)arg1 baseURL:(id)arg2;
- (void)release;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requester:(id)arg1 didReceiveResponse:(id)arg2 forRequest:(id)arg3;
- (void)requesterDidFinish:(id)arg1;
- (id)retain;
- (unsigned int)retainCount;
- (BOOL)retransmitScheduled;
- (void)setInflightRequests:(id)arg1;
- (void)setRetransmitScheduled:(BOOL)arg1;

@end
