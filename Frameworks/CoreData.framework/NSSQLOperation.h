/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSManagedObject, NSSQLRow, NSMutableArray, NSMutableDictionary;

@interface NSSQLOperation : NSObject {
    NSMutableArray *_adapterOps;
    unsigned int _databaseOperator;
    NSSQLRow *_dbSnapshot;
    NSMutableDictionary *_mtmDeltas;
    NSManagedObject *_object;
    NSSQLRow *_rowForUpdate;
}

- (id)adapterOperations;
- (void)addAdapterOperation:(id)arg1;
- (void)addDelta:(id)arg1 forManyToManyKey:(id)arg2;
- (unsigned int)databaseOperator;
- (id)dbSnapshot;
- (void)dealloc;
- (id)description;
- (id)initWithObject:(id)arg1 entity:(id)arg2;
- (id)manyToManyDeltas;
- (id)object;
- (id)objectID;
- (void)removeAdapterOperation:(id)arg1;
- (id)rowForUpdate;
- (void)setDBSnapshot:(id)arg1;
- (void)setDatabaseOperator:(unsigned int)arg1;
- (void)setRowForUpdate:(id)arg1;

@end
