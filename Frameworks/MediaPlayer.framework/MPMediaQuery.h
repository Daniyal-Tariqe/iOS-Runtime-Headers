/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray, MPMediaQueryCriteria, MPMediaQuerySectionInfo, NSSet, MPMediaLibrary;

@interface MPMediaQuery : NSObject <NSCoding, NSCopying> {
    struct MPMediaQueryInternal { 
        MPMediaLibrary *_mediaLibrary; 
        MPMediaQueryCriteria *_criteria; 
        int _isFilteringDisabled; 
        NSArray *_staticEntities; 
        int _staticEntityType; 
    } _internal;
}

@property struct MPMediaQueryInternal { MPMediaLibrary *_mediaLibrary; MPMediaQueryCriteria *_criteria; int _isFilteringDisabled; NSArray *_staticEntities; int _staticEntityType; } _internal;
@property(copy) NSSet * collectionPropertiesToFetch;
@property(readonly) MPMediaQuerySectionInfo * collectionSectionInfo;
@property(readonly) NSArray * collectionSections;
@property(readonly) NSArray * collections;
@property(readonly) BOOL excludesEntitiesWithBlankNames;
@property(retain) NSSet * filterPredicates;
@property int groupingType;
@property(copy) NSSet * itemPropertiesToFetch;
@property(readonly) MPMediaQuerySectionInfo * itemSectionInfo;
@property(readonly) NSArray * itemSections;
@property(readonly) NSArray * items;
@property(retain) MPMediaLibrary * mediaLibrary;
@property BOOL sortItems;
@property(readonly) BOOL specifiesPlaylistItems;
@property(readonly) BOOL willGroupEntities;

+ (id)ITunesUAudioQuery;
+ (id)albumsQuery;
+ (id)artistsQuery;
+ (id)audibleAudiobooksQuery;
+ (id)audiobooksQuery;
+ (id)compilationsQuery;
+ (id)composersQuery;
+ (id)geniusMixesQuery;
+ (id)genresQuery;
+ (void)initialize;
+ (id)movieRentalsQuery;
+ (id)moviesQuery;
+ (id)musicVideosQuery;
+ (id)playlistsQuery;
+ (id)podcastsQuery;
+ (void)setFilteringDisabled:(BOOL)arg1;
+ (id)songsQuery;
+ (id)tvShowsQuery;
+ (id)videoPodcastsQuery;
+ (id)videosQuery;

- (void)_enumerateCollectionsUsingBlock:(id)arg1;
- (void)_enumerateItemsUsingBlock:(id)arg1;
- (struct MPMediaQueryInternal { id x1; id x2; int x3; id x4; int x5; })_internal;
- (BOOL)_isFilteringDisabled;
- (id)_sanitizedQuery;
- (id)_valueForAggregateFunction:(id)arg1 onProperty:(id)arg2 entityType:(int)arg3;
- (void)addFilterPredicate:(id)arg1;
- (id)collectionPropertiesToFetch;
- (id)collectionSectionInfo;
- (id)collectionSections;
- (id)collections;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)countOfCollections;
- (unsigned int)countOfItems;
- (id)criteria;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)excludesEntitiesWithBlankNames;
- (id)filterPredicates;
- (unsigned int)groupingThreshold;
- (int)groupingType;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCriteria:(id)arg1 library:(id)arg2;
- (id)initWithEntities:(id)arg1 entityType:(int)arg2;
- (id)initWithFilterPredicates:(id)arg1;
- (id)initWithFilterPredicatesInternal:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)itemPropertiesToFetch;
- (id)itemSectionInfo;
- (id)itemSections;
- (id)items;
- (id)mediaLibrary;
- (id)predicateForProperty:(id)arg1;
- (BOOL)prefetchProperties;
- (void)removeFilterPredicate:(id)arg1;
- (void)removePredicatesForProperty:(id)arg1;
- (void)setCollectionPropertiesToFetch:(id)arg1;
- (void)setCriteria:(id)arg1;
- (void)setFilterPredicates:(id)arg1;
- (void)setGroupingType:(int)arg1;
- (void)setItemPropertiesToFetch:(id)arg1;
- (void)setMediaLibrary:(id)arg1;
- (void)setPrefetchProperties:(BOOL)arg1;
- (void)setSortItems:(BOOL)arg1;
- (void)setStaticEntities:(id)arg1 entityType:(int)arg2;
- (void)set_internal:(struct MPMediaQueryInternal { id x1; id x2; int x3; id x4; int x5; })arg1;
- (BOOL)sortItems;
- (BOOL)specifiesPlaylistItems;
- (id)valueForAggregateFunction:(id)arg1 onCollectionsForProperty:(id)arg2;
- (id)valueForAggregateFunction:(id)arg1 onItemsForProperty:(id)arg2;
- (BOOL)willGroupEntities;

@end
