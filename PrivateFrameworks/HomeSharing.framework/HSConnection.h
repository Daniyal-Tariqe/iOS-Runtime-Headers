/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@class NSCountedSet, NSString, HSFairPlayInfo, NSURL;

@interface HSConnection : NSObject {
    NSURL *_baseURL;
    NSCountedSet *_cancelledRequests;
    int _connectionState;
    struct dispatch_queue_s { } *_queue;
    struct __CFReadStream { } *_readStream;
    unsigned int basePlaylistContainerID;
    int connectionState;
    unsigned int databaseID;
    unsigned int databaseRevision;
    HSFairPlayInfo *fairPlayInfo;
    NSString *homeSharingGroupID;
    NSString *password;
    unsigned int sessionID;
}

@property unsigned int basePlaylistContainerID;
@property(readonly) NSURL * baseURL;
@property int connectionState;
@property unsigned int databaseID;
@property unsigned int databaseRevision;
@property(retain) HSFairPlayInfo * fairPlayInfo;
@property(copy) NSString * homeSharingGroupID;
@property(copy) NSString * password;
@property unsigned int sessionID;

- (void)_continueFPSetupNegotiationWithData:(id)arg1 internalConnectionCompletionHandler:(id)arg2;
- (void)_loadDatabaseWithInternalConnectionCompletionHandler:(id)arg1;
- (void)_sendRequest:(id)arg1 withInternalResponseHandler:(id)arg2;
- (unsigned int)basePlaylistContainerID;
- (id)baseURL;
- (void)cancelRequest:(id)arg1;
- (void)checkForDatabaseUpdatesWithCompletionHandler:(id)arg1;
- (void)connectWithCompletionHandler:(id)arg1;
- (int)connectionState;
- (unsigned int)databaseID;
- (unsigned int)databaseRevision;
- (void)dealloc;
- (void)disconnect;
- (id)fairPlayInfo;
- (id)homeSharingGroupID;
- (id)initWithBaseURL:(id)arg1;
- (id)password;
- (void)sendRequest:(id)arg1 withResponseHandler:(id)arg2;
- (unsigned int)sessionID;
- (void)setBasePlaylistContainerID:(unsigned int)arg1;
- (void)setConnectionState:(int)arg1;
- (void)setDatabaseID:(unsigned int)arg1;
- (void)setDatabaseRevision:(unsigned int)arg1;
- (void)setFairPlayInfo:(id)arg1;
- (void)setHomeSharingGroupID:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setSessionID:(unsigned int)arg1;

@end
