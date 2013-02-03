/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKGame, NSDate, GKPlayer;

@interface GKGameMatch : NSObject {
    NSDate *_date;
    GKGame *_game;
    GKPlayer *_player;
    int _score;
}

@property(retain) NSDate * date;
@property(retain) GKGame * game;
@property(retain) GKPlayer * player;
@property int score;

+ (id)gameMatchWithDictionary:(id)arg1;
+ (id)gameMatchesWithDictionaries:(id)arg1;

- (id)date;
- (void)dealloc;
- (id)game;
- (id)player;
- (int)score;
- (void)setDate:(id)arg1;
- (void)setGame:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setScore:(int)arg1;

@end
