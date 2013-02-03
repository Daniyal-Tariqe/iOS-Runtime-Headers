/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSDate, NSArray, NSProtocolChecker, NSMutableArray, NSDictionary, NSString, NSMutableDictionary, NSData;

@interface IMDaemonListener : NSObject {
    NSMutableArray *_deferredChatMessages;
    NSMutableArray *_handlers;
    BOOL _holdingChatMessages;
    NSDate *_myIdleSince;
    NSString *_myNowPlayingString;
    NSData *_myPicture;
    unsigned int _myStatus;
    NSString *_myStatusMessage;
    NSMutableDictionary *_persistentProperties;
    NSMutableDictionary *_properties;
    NSProtocolChecker *_protocol;
    NSMutableDictionary *_services;
    BOOL _setupComplete;
    unsigned long long _vcCapabilities;
}

@property(readonly) NSArray * allServices;
@property(readonly) NSArray * handlers;
@property(readonly) BOOL isHoldingChatMessages;
@property(readonly) BOOL isSetupComplete;
@property(readonly) unsigned int myIdleTime;
@property(readonly) unsigned int myStatus;
@property(readonly) NSString * myStatusMessage;
@property(readonly) NSDictionary * persistentProperties;
@property(readonly) NSDictionary * properties;
@property(readonly) BOOL shouldHoldChatMessages;
@property(readonly) unsigned long long vcCapabilities;

- (void)_cacheValue:(id)arg1 forPersistentProperty:(id)arg2;
- (void)_cacheValue:(id)arg1 forProperty:(id)arg2;
- (void)_deferNotification:(id)arg1;
- (void)_noteDisconnected;
- (void)_processDeferredInvitationDictionary:(id)arg1;
- (void)_processMyStatusChanged;
- (void)_reallyProcessMyStatusChanged;
- (oneway void)account:(id)arg1 allowListChanged:(id)arg2;
- (oneway void)account:(id)arg1 blockIdleStatusChanged:(BOOL)arg2;
- (oneway void)account:(id)arg1 blockListChanged:(id)arg2;
- (oneway void)account:(id)arg1 blockingModeChanged:(unsigned int)arg2;
- (oneway void)account:(id)arg1 buddyPictureChanged:(id)arg2 imageData:(id)arg3 imageHash:(id)arg4;
- (oneway void)account:(id)arg1 buddyProperties:(id)arg2 buddyPictures:(id)arg3;
- (oneway void)account:(id)arg1 buddyPropertiesChanged:(id)arg2;
- (oneway void)account:(id)arg1 capabilitiesChanged:(unsigned long long)arg2;
- (oneway void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 invitationReceived:(id)arg4;
- (oneway void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 messageReceived:(id)arg4;
- (oneway void)account:(id)arg1 defaultsChanged:(id)arg2;
- (oneway void)account:(id)arg1 groupsChanged:(id)arg2 error:(id)arg3;
- (oneway void)account:(id)arg1 handleSubscriptionRequestFrom:(id)arg2 withMessage:(id)arg3;
- (oneway void)account:(id)arg1 loginStatusChanged:(unsigned int)arg2 message:(id)arg3 reason:(unsigned int)arg4 properties:(id)arg5;
- (oneway void)account:(id)arg1 postedError:(id)arg2;
- (oneway void)account:(id)arg1 status:(id)arg2 capabilities:(unsigned long long)arg3 serviceLoginStatus:(unsigned int)arg4 loginStatusMessage:(id)arg5;
- (oneway void)account:(id)arg1 statusChanged:(id)arg2;
- (oneway void)accountAdded:(id)arg1 defaults:(id)arg2 service:(id)arg3;
- (oneway void)accountRemoved:(id)arg1;
- (oneway void)activeAccountsChanged:(id)arg1 forService:(id)arg2;
- (void)addHandler:(id)arg1;
- (oneway void)allFileTransfers:(id)arg1;
- (id)allServices;
- (void)dealloc;
- (oneway void)defaultsChanged:(id)arg1 forService:(id)arg2;
- (oneway void)fileTransfer:(id)arg1 createdWithProperties:(id)arg2;
- (oneway void)fileTransfer:(id)arg1 updatedWithCurrentBytes:(unsigned long long)arg2 totalBytes:(unsigned long long)arg3 averageTransferRate:(unsigned long long)arg4;
- (oneway void)fileTransfer:(id)arg1 updatedWithProperties:(id)arg2;
- (void)forwardInvocation:(id)arg1;
- (id)handlers;
- (void)holdChatMessages;
- (id)init;
- (BOOL)isHoldingChatMessages;
- (BOOL)isSetupComplete;
- (id)methodSignatureForSelector:(SEL)arg1;
- (unsigned long)myIdleTime;
- (unsigned int)myStatus;
- (id)myStatusMessage;
- (id)persistentProperties;
- (oneway void)persistentProperty:(id)arg1 changedTo:(id)arg2 from:(id)arg3;
- (id)properties;
- (oneway void)property:(id)arg1 changedTo:(id)arg2 from:(id)arg3;
- (void)releaseHeldChatMessages;
- (void)removeHandler:(id)arg1;
- (oneway void)service:(id)arg1 properties:(id)arg2 defaults:(id)arg3 defaultAccountSettings:(id)arg4 allAccounts:(id)arg5 activeAccounts:(id)arg6;
- (id)serviceWithName:(id)arg1;
- (oneway void)services:(id)arg1 properties:(id)arg2 persistentProperties:(id)arg3;
- (oneway void)setupComplete;
- (BOOL)shouldHoldChatMessages;
- (oneway void)standaloneFileTransferRegistered:(id)arg1;
- (id)valueOfPersistentProperty:(id)arg1;
- (id)valueOfProperty:(id)arg1;
- (unsigned long long)vcCapabilities;
- (oneway void)vcCapabilitiesChanged:(unsigned long long)arg1;

@end
