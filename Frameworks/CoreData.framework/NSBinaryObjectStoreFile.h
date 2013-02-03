/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableDictionary, NSDictionary;

@interface NSBinaryObjectStoreFile : NSObject {
    int _databaseVersion;
    NSDictionary *_fullMetadata;
    NSMutableDictionary *_mapData;
    unsigned long long _primaryKeyGeneration;
}

- (BOOL)_writeMetadataData:(id)arg1 andMapDataData:(id)arg2 toFile:(id)arg3 error:(id*)arg4;
- (void)clearCurrentValues;
- (int)databaseVersion;
- (void)dealloc;
- (id)fullMetadata;
- (id)mapData;
- (unsigned long long)primaryKeyGeneration;
- (BOOL)readBinaryStoreFromData:(id)arg1 originalPath:(id)arg2 error:(id*)arg3;
- (BOOL)readFromFile:(id)arg1 error:(id*)arg2;
- (BOOL)readMetadataFromFile:(id)arg1 error:(id*)arg2;
- (void)setDatabaseVersion:(int)arg1;
- (void)setFullMetadata:(id)arg1;
- (void)setMapData:(id)arg1;
- (void)setPrimaryKeyGeneration:(unsigned long long)arg1;
- (BOOL)writeMetadataToFile:(id)arg1 error:(id*)arg2;
- (BOOL)writeToFile:(id)arg1 error:(id*)arg2;

@end
