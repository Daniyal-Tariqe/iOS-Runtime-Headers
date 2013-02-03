/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;

@interface EDCollection : NSObject <NSCopying> {
    NSMutableArray *mObjects;
}

+ (id)collection;
+ (id)collectionWithObject:(id)arg1;

- (unsigned int)addObject:(id)arg1;
- (unsigned int)addOrEquivalentObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (void)dealloc;
- (unsigned int)hash;
- (unsigned int)indexOfObject:(id)arg1;
- (id)init;
- (id)initWithObject:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCollection:(id)arg1;
- (id)objectAtIndex:(unsigned int)arg1;
- (void)removeAllObjects;
- (void)removeObjectAtIndex:(unsigned int)arg1;

@end
