/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSDictionary, MPMusicPlayerControllerInternal;

@interface MPMusicPlayerController : NSObject {
    MPMusicPlayerControllerInternal *_internal;
}

@property BOOL allowsRemoteUIAccess;
@property unsigned int currentChapterIndex;
@property(readonly) unsigned int indexOfNowPlayingItem;
@property(readonly) BOOL isNowPlayingItemFromGeniusMix;
@property int playbackSpeed;
@property(readonly) NSDictionary * springboardNowPlayingInfo;
@property(readonly) unsigned int unshuffledIndexOfNowPlayingItem;

+ (id)applicationMusicPlayer;
+ (id)iPodMusicPlayer;
+ (void)initialize;
+ (id)runLoopForNotifications;
+ (void)setRunLoopForNotifications:(id)arg1;

- (void)_clientCheckIn;
- (void)_itemPlaybackDidEnd:(unsigned long long)arg1;
- (void)_musicPlayerDidLaunch;
- (void)_nowPlayingItemDidChange:(unsigned long long)arg1;
- (void)_playbackStateDidChange:(int)arg1;
- (void)_registerForLaunchNotifications;
- (void)_repeatModeDidChange:(int)arg1;
- (void)_runMigServerOnPort:(unsigned int)arg1;
- (void)_serverDied:(id)arg1;
- (void)_setUseApplicationSpecificQueue:(BOOL)arg1;
- (void)_shuffleModeDidChange:(int)arg1;
- (void)_stopMigServer;
- (void)_systemVolumeDidChange:(id)arg1;
- (void)_unregisterForLaunchNotifications;
- (BOOL)allowsRemoteUIAccess;
- (void)beginGeneratingPlaybackNotifications;
- (unsigned int)currentChapterIndex;
- (double)currentPlaybackTime;
- (void)dealloc;
- (void)endGeneratingPlaybackNotifications;
- (void)forwardInvocation:(id)arg1;
- (unsigned int)indexOfNowPlayingItem;
- (id)init;
- (BOOL)isGeniusAvailable;
- (BOOL)isNowPlayingItemFromGeniusMix;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)nowPlayingItem;
- (id)nowPlayingItemAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfItems;
- (void)pauseWithFadeoutDuration:(double)arg1;
- (int)playbackSpeed;
- (int)playbackState;
- (int)repeatMode;
- (BOOL)serverIsAlive;
- (void)setAllowsRemoteUIAccess:(BOOL)arg1;
- (void)setCurrentChapterIndex:(unsigned int)arg1;
- (void)setCurrentPlaybackTime:(double)arg1;
- (void)setPlaybackSpeed:(int)arg1;
- (void)setQueueWithItemCollection:(id)arg1;
- (void)setQueueWithQuery:(id)arg1 firstItem:(id)arg2;
- (void)setQueueWithQuery:(id)arg1;
- (BOOL)setQueueWithSeedItems:(id)arg1;
- (void)setRepeatMode:(int)arg1;
- (void)setShuffleMode:(int)arg1;
- (void)setUseCachedPlaybackState:(BOOL)arg1;
- (void)setVolume:(float)arg1;
- (int)shuffleMode;
- (id)springboardNowPlayingInfo;
- (unsigned int)unshuffledIndexOfNowPlayingItem;
- (float)volume;

@end
