/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSEntityDescription, NSArray, NSString, NSDictionary;

@interface NSEntityStoreMapping : NSStoreMapping {
    NSEntityDescription *_entity;
    BOOL _isSingleTableEntity;
    NSArray *_primaryKeys;
    NSDictionary *_propertyMappings;
    NSString *_subentityColumn;
    unsigned int _subentityID;
}

- (id)attributeColumnDefinitions;
- (id)attributeMappings;
- (id)createTableStatement;
- (void)dealloc;
- (id)description;
- (id)entity;
- (id)foreignKeyColumnDefinitions;
- (id)foreignKeyConstraintDefinitions;
- (id)initWithEntity:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSingleTableEntity;
- (id)primaryKeyColumnDefinitions;
- (id)primaryKeys;
- (id)propertyMappings;
- (id)relationshipMappings;
- (void)setEntity:(id)arg1;
- (void)setPrimaryKeys:(id)arg1;
- (void)setPropertyMappings:(id)arg1;
- (void)setSingleTableEntity:(BOOL)arg1;
- (void)setSubentityColumn:(id)arg1;
- (void)setSubentityID:(unsigned int)arg1;
- (id)subentityColumn;
- (unsigned int)subentityID;

@end
