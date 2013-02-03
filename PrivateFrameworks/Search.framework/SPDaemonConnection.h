/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPDaemonConnection : NSObject {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _lock;
    unsigned int _publicPort;
    unsigned int _serverPort;
}

+ (id)sharedConnection;

- (BOOL)_appInstalled:(BOOL)arg1 withDisplayIdentifier:(id)arg2 withCategories:(id)arg3;
- (void)_handleSendFailure:(int)arg1 inCodeNamed:(const char *)arg2;
- (void)appWasSelected:(id)arg1 queryString:(id)arg2;
- (void)cancelQuery:(id)arg1;
- (void)dealloc;
- (BOOL)endRecordUpdatesForApplication:(id)arg1 andCategory:(id)arg2;
- (BOOL)indexUpdatedContent:(id)arg1 moreComing:(BOOL)arg2;
- (id)init;
- (void)invalidateServerPort;
- (void)preheat;
- (unsigned int)publicPort;
- (void)registerApplication:(id)arg1 withCategories:(id)arg2;
- (BOOL)requestRecordUpdatesForApplication:(id)arg1 category:(id)arg2 andIDs:(id)arg3;
- (BOOL)retrieveUpdateList:(id*)arg1;
- (void)searchResultWasSelected:(unsigned long long)arg1 inDomain:(unsigned int)arg2 queryString:(id)arg3;
- (unsigned int)serverPort;
- (id)startQuery:(id)arg1;
- (BOOL)startRecordUpdatesForApplication:(id)arg1 andCategory:(id)arg2;
- (void)unregisterApplication:(id)arg1;
- (BOOL)willStartIndexingForDisplayID:(id)arg1 category:(id)arg2;

@end
