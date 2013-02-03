/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLModel, NSMutableDictionary, NSSQLEntityKey, NSSQLStoreMappingGenerator, NSSQLPrimaryKey, NSSQLStatement, NSKnownKeysMappingStrategy, NSArray, NSEntityDescription, NSString, NSSQLOptLockKey, NSSQLEntity, NSMutableArray;

@interface NSSQLEntity : NSStoreMapping {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    struct __sqlentityFlags { 
        unsigned int _hasAttributesWithExternalDataReferences : 1; 
        unsigned int _reserved : 31; 
    NSMutableArray *_attrColumns;
    NSMutableArray *_columnsToFetch;
    NSSQLStatement *_deletionStatementCache;
    NSMutableArray *_ekColumns;
    NSEntityDescription *_entityDescription;
    unsigned int _entityID;
    NSSQLEntityKey *_entityKey;
    NSSQLStatement *_faultingStatementCache;
    void *_fetch_entity_plan;
    NSMutableArray *_fkColumns;
    NSSQLStatement *_insertStatementCache;
    NSSQLStoreMappingGenerator *_mappingGenerator;
    long long _maxPK;
    NSSQLModel *_model;
    void *_odiousHashHackStorage;
    NSSQLOptLockKey *_optLockKey;
    unsigned int _pkCount;
    NSSQLPrimaryKey *_primaryKey;
    NSMutableDictionary *_properties;
    NSArray *_propertiesAllToManysCache;
    NSArray *_propertyAllCache;
    NSArray *_propertyManyToManyCache;
    NSKnownKeysMappingStrategy *_propertyMapping;
    NSSQLEntity *_rootEntity;
    } _sqlentityFlags;
    NSMutableArray *_subentities;
    unsigned int _subentityMaxID;
    NSSQLEntity *_superentity;
    NSString *_tableName;
    NSMutableDictionary *_toManyRelationshipStatementCache;
    } _toOneRange;
}

- (void)_addColumnToFetch:(id)arg1;
- (void)_addRootColumnToFetch:(id)arg1;
- (void)_addSubentity:(id)arg1;
- (id)_addVirtualToOneForToMany:(id)arg1 withInheritedProperty:(id)arg2;
- (void)_doPostModelGenerationCleanup;
- (unsigned int)_generateIDWithSuperEntity:(id)arg1 nextID:(unsigned int)arg2;
- (void)_generateInverseRelationshipsAndMore;
- (void)_generateProperties;
- (void*)_odiousHashHack;
- (unsigned int)_pkCount;
- (id)_propertySearchMapping;
- (void)_resetPKCount;
- (void)_setMaxPK:(long long)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_toOneRange;
- (void)addInsertedObject:(id)arg1 toArray:(id)arg2;
- (BOOL)addPropertiesForReadOnlyFetch:(id)arg1 keys:(id)arg2 context:(id)arg3;
- (id)attributeColumns;
- (id)attributeNamed:(id)arg1;
- (id)attributes;
- (void)cacheDeletionStatement:(id)arg1;
- (void)cacheFaultingStatement:(id)arg1 forRelationship:(id)arg2;
- (void)cacheFaultingStatement:(id)arg1;
- (void)cacheInsertStatement:(id)arg1;
- (void)clearCachedStatements;
- (id)columnsToCreate;
- (id)columnsToFetch;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (void)dealloc;
- (id)deletionStatement;
- (id)description;
- (id)entityDescription;
- (unsigned int)entityID;
- (id)externalName;
- (id)faultingStatement;
- (id)faultingStatementForRelationship:(id)arg1;
- (unsigned int)fetchIndexForKey:(id)arg1;
- (void)finalize;
- (id)foreignEntityKeyColumns;
- (id)foreignKeyColumns;
- (BOOL)hasAttributesWithExternalDataReferences;
- (BOOL)hasInheritance;
- (BOOL)hasSubentities;
- (id)initWithModel:(id)arg1 entityDescription:(id)arg2;
- (id)insertStatement;
- (BOOL)isKindOfSQLEntity:(id)arg1;
- (BOOL)isRootEntity;
- (id)manyToManyRelationships;
- (id)mappingGenerator;
- (id)model;
- (id)name;
- (long long)nextPrimaryKey64;
- (id)optLockKey;
- (id)primaryKey;
- (id)properties;
- (id)propertiesByName;
- (id)propertyMapping;
- (id)propertyNamed:(id)arg1;
- (id)relationshipNamed:(id)arg1;
- (id)rootEntity;
- (void)setSubentities:(id)arg1;
- (void)setSuperentity:(id)arg1;
- (id)subentities;
- (id)subentityKey;
- (unsigned int)subentityMaxID;
- (id)superentity;
- (id)tableName;
- (id)toManyRelationships;

@end
