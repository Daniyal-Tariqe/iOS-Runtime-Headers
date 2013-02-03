/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSArray;

@interface NSCompoundPredicate : NSPredicate {
    void *_reserved2;
    NSArray *_subpredicates;
    unsigned int _type;
}

+ (id)_operatorForType:(unsigned int)arg1;
+ (id)andPredicateWithSubpredicates:(id)arg1;
+ (id)notPredicateWithSubpredicate:(id)arg1;
+ (id)orPredicateWithSubpredicates:(id)arg1;

- (void)_acceptSubpredicates:(id)arg1 flags:(unsigned int)arg2;
- (id)_predicateOperator;
- (id)_subpredicateDescription:(id)arg1;
- (void)ab_addCallbackContextToArray:(struct __CFArray { }*)arg1;
- (void)ab_bindStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (BOOL)ab_hasCallback;
- (id)ab_newQueryWithSortOrder:(unsigned int)arg1 addressBook:(void*)arg2 propertyIndices:(const struct __CFDictionary {}**)arg3;
- (void)acceptVisitor:(id)arg1 flags:(unsigned int)arg2;
- (unsigned int)compoundPredicateType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned int)arg1 subpredicates:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)minimalFormInContext:(id)arg1;
- (id)predicateFormat;
- (id)predicateOperator;
- (id)predicateWithSubstitutionVariables:(id)arg1;
- (id)subpredicates;

@end
