/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKScore, NSString, NSArray;

@interface GKLeaderboard : NSObject {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    NSString *_category;
    int _loadingCount;
    GKScore *_localPlayerScore;
    unsigned int _maxRange;
    NSArray *_playerIDs;
    int _playerScope;
    } _range;
    NSArray *_scores;
    int _sequenceNumber;
    int _timeScope;
    NSString *_title;
}

@property(retain) NSString * category;
@property(getter=isLoading,readonly) BOOL loading;
@property int loadingCount;
@property(retain) GKScore * localPlayerScore;
@property unsigned int maxRange;
@property(retain) NSArray * playerIDs;
@property int playerScope;
@property struct _NSRange { unsigned int location; unsigned int length; } range;
@property(retain) NSArray * scores;
@property int sequenceNumber;
@property int timeScope;
@property(retain) NSString * title;

+ (void)loadCategoriesForGame:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)loadCategoriesWithCompletionHandler:(id)arg1;

- (id)category;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithPlayerIDs:(id)arg1;
- (BOOL)isLoading;
- (void)loadScoresForGame:(id)arg1 withCompletionHandler:(id)arg2;
- (void)loadScoresWithCompletionHandler:(id)arg1;
- (int)loadingCount;
- (id)localPlayerScore;
- (unsigned int)maxRange;
- (id)playerIDs;
- (int)playerScope;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (id)scores;
- (int)sequenceNumber;
- (void)setCategory:(id)arg1;
- (void)setLoadingCount:(int)arg1;
- (void)setLocalPlayerScore:(id)arg1;
- (void)setMaxRange:(unsigned int)arg1;
- (void)setPlayerIDs:(id)arg1;
- (void)setPlayerScope:(int)arg1;
- (void)setRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setScores:(id)arg1;
- (void)setSequenceNumber:(int)arg1;
- (void)setTimeScope:(int)arg1;
- (void)setTitle:(id)arg1;
- (int)timeScope;
- (id)title;

@end
