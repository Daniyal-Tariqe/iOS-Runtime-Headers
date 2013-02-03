/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GKMatchPlayersDataRequest;

@interface GKMatchmaker : NSObject {
    id _inviteHandler;
    GKMatchPlayersDataRequest *_matchPlayersDataRequest;
}

@property(copy) id inviteHandler;
@property(retain) GKMatchPlayersDataRequest * matchPlayersDataRequest;

+ (id)sharedMatchmaker;

- (void)addPlayersForHostedMatchRequest:(id)arg1 existingPlayerIDs:(id)arg2 completionHandler:(id)arg3;
- (void)addPlayersToInviteWithMatch:(id)arg1 matchRequest:(id)arg2 completionHandler:(id)arg3;
- (void)addPlayersToMatch:(id)arg1 matchRequest:(id)arg2 completionHandler:(id)arg3;
- (void)cancel;
- (void)dealloc;
- (void)findMatchForRequest:(id)arg1 withCompletionHandler:(id)arg2;
- (void)findPlayersForHostedMatchRequest:(id)arg1 withCompletionHandler:(id)arg2;
- (id)init;
- (id)inviteHandler;
- (BOOL)isMatchingPlayers;
- (void)loadConnectivitySettingsWithCompletionHandler:(id)arg1;
- (void)localPlayerAcceptedGameInvite:(id)arg1;
- (void)lookForInvite;
- (id)matchPlayersDataRequest;
- (void)matchWithRequest:(id)arg1 currentMatch:(id)arg2 currentPlayerIDs:(id)arg3 combo:(BOOL)arg4 serverHosted:(BOOL)arg5 completionHandler:(id)arg6;
- (void)queryActivityWithCompletionHandler:(id)arg1;
- (void)queryPlayerGroupActivity:(unsigned int)arg1 withCompletionHandler:(id)arg2;
- (void)setConnectivitySettings:(id)arg1;
- (void)setInviteHandler:(id)arg1;
- (void)setMatchPlayersDataRequest:(id)arg1;

@end
