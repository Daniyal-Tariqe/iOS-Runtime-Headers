/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray, NSMutableArray, MPMediaQuery;

@interface MPMediaQueryShuffledItems : NSObject <NSCoding, NSCopying> {
    unsigned int _activeShuffleType;
    BOOL _dirty;
    NSMutableArray *_orderedArray;
    MPMediaQuery *_sourceMediaQuery;
    NSArray *_sourceMediaQueryItems;
}

@property(readonly) MPMediaQuery * sourceMediaQuery;

- (id)_includeInShuffleItemsForQuery:(id)arg1;
- (void)_rebuildCaches;
- (void)_rebuildCachesWithInitialIndex:(unsigned int)arg1;
- (void)_rebuildGroupedCachesWithInitialItemIndex:(unsigned int)arg1;
- (void)_rebuildItemCachesWithInitialItemIndex:(unsigned int)arg1;
- (void)_resetCaches;
- (void)_shuffleMutableArray:(id)arg1 withInitialIndex:(unsigned int)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)indexOfItemWithPersistentID:(unsigned long long)arg1;
- (unsigned int)indexOfObject:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceMediaQuery:(id)arg1 orderedItems:(id)arg2 shuffleType:(unsigned int)arg3;
- (id)initWithSourceMediaQuery:(id)arg1;
- (void)invalidateSourceMediaQueryAndLoadItems;
- (id)objectAtIndex:(unsigned int)arg1;
- (void)shuffleAlbumsWithInitialIndex:(unsigned int)arg1;
- (void)shuffleItemsWithInitialIndex:(unsigned int)arg1;
- (id)sourceMediaQuery;
- (void)unshuffle;

@end
