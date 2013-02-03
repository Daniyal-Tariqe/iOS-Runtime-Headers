/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray, NSString, GKLeaderboard, GKGame, NSDictionary;

@interface GKGetLeaderboardDataRequest : GKDataRequest {
    NSString *_categoryTitle;
    GKGame *_game;
    GKLeaderboard *_leaderboard;
    unsigned int _maxRange;
    NSDictionary *_playerScore;
    NSString *_scoreType;
    NSArray *_scores;
}

@property(readonly) NSString * categoryTitle;
@property(retain) GKGame * game;
@property(retain) GKLeaderboard * leaderboard;
@property(readonly) unsigned int maxRange;
@property(readonly) NSDictionary * playerScore;
@property(readonly) NSString * scoreType;
@property(readonly) NSArray * scores;

- (id)_playerScope:(int)arg1;
- (id)_timeScope:(int)arg1;
- (id)cacheKey;
- (int)cachePriority;
- (int)cacheType;
- (id)categoryTitle;
- (void)dealloc;
- (id)game;
- (void)handleResponseFromServer:(id)arg1 error:(id)arg2;
- (id)key;
- (id)leaderboard;
- (unsigned int)maxRange;
- (id)playerScore;
- (id)request;
- (id)scoreType;
- (id)scores;
- (void)setGame:(id)arg1;
- (void)setLeaderboard:(id)arg1;

@end
