/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@interface GMMTileStore : NSObject {
    struct TileStore { long long x1; struct _opaque_pthread_mutex_t { 
            long __sig; 
            BOOL __opaque[40]; 
        } x2; char *x3; struct sqlite3 {} *x4; struct sqlite3_stmt {} *x5; struct sqlite3_stmt {} *x6; struct sqlite3_stmt {} *x7; struct sqlite3_stmt {} *x8; struct sqlite3_stmt {} *x9; struct sqlite3_stmt {} *x10; struct sqlite3_stmt {} *x11; struct sqlite3_stmt {} *x12; } *_tileStore;
}

@property int tileEdition;

- (void)beginWrites;
- (void)endWrites;
- (void)evict;
- (BOOL)hasDataForTilePath:(const struct { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; }*)arg1;
- (id)initWithPath:(id)arg1;
- (void)insertData:(const char *)arg1 length:(unsigned long)arg2 forTilePath:(const struct { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; }*)arg3;
- (void)openDatabase:(BOOL)arg1;
- (BOOL)selectData:(char **)arg1 length:(unsigned int*)arg2 forTilePath:(const struct { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; }*)arg3;
- (void)setTileEdition:(int)arg1;
- (int)tileEdition;

@end
