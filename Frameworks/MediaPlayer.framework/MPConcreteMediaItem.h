/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSNumber, NSArray, MPMediaLibrary;

@interface MPConcreteMediaItem : MPMediaItem {
    NSArray *_chapters;
    MPMediaLibrary *_library;
    unsigned long long _persistentID;
    NSNumber *_physicalOrder;
}

- (void)clearBookmarkTime;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateValuesForProperties:(id)arg1 usingBlock:(id)arg2;
- (BOOL)existsInLibrary;
- (void)incrementPlayCountForPlayingToEnd;
- (BOOL)incrementPlayCountForStopTime:(double)arg1;
- (void)incrementSkipCount;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersistentID:(unsigned long long)arg1 physicalOrder:(id)arg2 library:(id)arg3;
- (id)initWithPersistentID:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)markNominalAmountHasBeenPlayed;
- (id)mediaLibrary;
- (double)nominalHasBeenPlayedThreshold;
- (void)noteWasPlayedToTime:(double)arg1 skipped:(BOOL*)arg2;
- (unsigned long long)persistentID;
- (void)reallyIncrementPlayCount;
- (void)setCachedPhysicalOrder:(long long)arg1;
- (void)setValue:(id)arg1 forProperty:(id)arg2;
- (id)valueForProperty:(id)arg1;

@end
