/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@class NSString, NSMutableArray;

@interface SPContentIndexer : NSObject {
    NSString *_category;
    NSMutableArray *_dirtyContent;
    NSMutableArray *_dirtyRecords;
    NSMutableArray *_dirtyRemoves;
    NSString *_displayIdentifier;
    struct __CXIndex { } *_index;
    struct __CXQuery { } *_query;
    struct CPRecordStore { } *_store;
    unsigned int _version;
}

+ (id)indexerForDisplayIdentifier:(id)arg1 category:(id)arg2;
+ (void)initialize;
+ (void)preheat;

- (void*)_copyRecordForExternalID:(id)arg1;
- (id)_indexPath;
- (void)_openOrCreateIndex;
- (BOOL)_openOrCreateStore;
- (id)_storePath;
- (void)beginSearch:(id)arg1;
- (void)cancelSearch;
- (void)clearIndex;
- (BOOL)commitUpdates;
- (void*)copyResultForIdentifier:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithDisplayIdentifier:(id)arg1 category:(id)arg2 version:(unsigned int)arg3;
- (BOOL)nextSearchResults:(id*)arg1;
- (void)removeIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1 forRecordDictionary:(id)arg2;

@end
