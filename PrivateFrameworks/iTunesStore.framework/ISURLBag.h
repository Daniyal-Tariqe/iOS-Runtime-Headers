/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSArray, NSSet, NSDictionary;

@interface ISURLBag : NSObject {
    NSDictionary *_dictionary;
    NSDictionary *_headerPatterns;
    double _invalidationTime;
    NSArray *_networkConstraints;
}

@property(readonly) NSSet * availableStorefrontItemKinds;
@property double invalidationTime;
@property(readonly) NSArray * networkConstraints;
@property(getter=isValid,readonly) BOOL valid;

+ (id)_copyFallbackContextForContext:(id)arg1;
+ (void)_loadItemKindURLBagKeyMap;
+ (id)copyExtraHeadersForURL:(id)arg1 inBagContext:(id)arg2;
+ (void)invalidateAllBags;
+ (id)networkConstraintsForNetworkType:(int)arg1 inBagContext:(id)arg2;
+ (void)setURLBag:(id)arg1 forContext:(id)arg2;
+ (id)storeFrontURLBagKeyForItemKind:(id)arg1;
+ (id)urlBagForContext:(id)arg1;
+ (id)urlForKey:(id)arg1 inBagContext:(id)arg2;
+ (BOOL)urlIsTrusted:(id)arg1 inBagContext:(id)arg2;
+ (id)valueForKey:(id)arg1 inBagContext:(id)arg2;

- (id)_copyHeaderPatternsFromDictionary:(id)arg1;
- (id)_copyNetworkConstraintsFromDictionary:(id)arg1;
- (id)_copyNetworkConstraintsFromURLBag:(id)arg1;
- (BOOL)_loadFromSignedDictionary:(id)arg1 returningError:(id*)arg2;
- (id)_networkConstraintsCachePath;
- (id)_newDefaultExternalNetworkConstraints;
- (id)_newExternalNetworkConstraints;
- (void)_setDictionary:(id)arg1;
- (void)_writeNetworkConstraintsCacheFile;
- (void)_writeURLResolutionCacheFile;
- (id)availableStorefrontItemKinds;
- (id)copyExtraHeadersForURL:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithRawDictionary:(id)arg1;
- (id)initWithURLBagContext:(id)arg1;
- (double)invalidationTime;
- (BOOL)isValid;
- (BOOL)loadFromDictionary:(id)arg1 returningError:(id*)arg2;
- (int)minimumNetworkTypeForAssetType:(int)arg1 fileSize:(long long)arg2;
- (id)networkConstraints;
- (id)networkConstraintsForNetworkType:(int)arg1;
- (id)sanitizedURLForURL:(id)arg1;
- (void)setInvalidationTime:(double)arg1;
- (id)urlForKey:(id)arg1;
- (BOOL)urlIsTrusted:(id)arg1;
- (id)valueForKey:(id)arg1;

@end
