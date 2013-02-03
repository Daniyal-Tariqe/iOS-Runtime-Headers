/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class PCPersistentTimer, NSNumber, NSDate, <FTMessageDeliveryDelegate>, FTMessageQueue, FTMessage, NSString, NSData, NSArray;

@interface FTMessageDelivery : NSObject <FTMessageQueueDelegate> {
    NSArray *_clientCertificates;
    struct __SecIdentity { } *_clientIdentity;
    id _delegate;
    NSString *_deviceID;
    NSString *_deviceIDPrefix;
    NSNumber *_playerID;
    NSNumber *_protocolVersion;
    NSData *_pushToken;
    FTMessageQueue *_queue;
    unsigned int _retries;
    NSDate *_retryDate;
    PCPersistentTimer *_retryTimer;
    BOOL _shouldQueue;
    NSData *_signature;
    NSString *_userAgent;
    NSString *_userID;
}

@property(readonly) BOOL busy;
@property(copy) NSArray * clientCertificates;
@property struct __SecIdentity { }* clientIdentity;
@property(readonly) FTMessage * currentMessage;
@property <FTMessageDeliveryDelegate> * delegate;
@property(copy) NSString * deviceID;
@property(copy) NSString * deviceIDPrefix;
@property(readonly) BOOL hasQueuedItems;
@property double messageTimeoutTime;
@property(copy) NSNumber * protocolVersion;
@property(copy) NSData * pushToken;
@property(readonly) NSArray * queuedMessages;
@property BOOL shouldQueueItems;
@property(copy) NSData * signature;
@property(copy) NSString * userAgent;
@property(copy) NSString * userID;

+ (id)_errorForTDMessageDeliveryStatus:(int)arg1 userInfo:(id)arg2;
+ (id)alloc;

- (void)_clearRetryTimer;
- (void)_informDelegateAboutMessage:(id)arg1 error:(id)arg2 result:(id)arg3;
- (void)_retryTimerHit:(id)arg1;
- (BOOL)_sendMessageAsynchronously:(id)arg1 error:(id*)arg2;
- (void)_setRetryTimer:(double)arg1;
- (BOOL)busy;
- (void)cancelMessage:(id)arg1;
- (id)clientCertificates;
- (struct __SecIdentity { }*)clientIdentity;
- (id)currentMessage;
- (void)dealloc;
- (id)delegate;
- (id)deviceID;
- (id)deviceIDPrefix;
- (BOOL)hasQueuedItems;
- (id)init;
- (void)invalidate;
- (double)messageTimeoutTime;
- (id)protocolVersion;
- (id)pushToken;
- (void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2;
- (id)queuedMessages;
- (int)sendMessage:(id)arg1 error:(id*)arg2;
- (void)setClientCertificates:(id)arg1;
- (void)setClientIdentity:(struct __SecIdentity { }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setDeviceIDPrefix:(id)arg1;
- (void)setMessageTimeoutTime:(double)arg1;
- (void)setProtocolVersion:(id)arg1;
- (void)setPushToken:(id)arg1;
- (void)setShouldQueueItems:(BOOL)arg1;
- (void)setSignature:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (void)setUserID:(id)arg1;
- (BOOL)shouldQueueItems;
- (id)signature;
- (id)userAgent;
- (id)userID;

@end
