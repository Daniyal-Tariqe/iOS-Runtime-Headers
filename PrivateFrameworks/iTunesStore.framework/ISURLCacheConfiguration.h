/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSSet, NSString, NSArray;

@interface ISURLCacheConfiguration : NSObject <NSCopying> {
    NSArray *_clientIdentifiers;
    unsigned int _diskCapacity;
    NSSet *_fileExtensions;
    unsigned int _memoryCapacity;
    NSString *_persistentIdentifier;
    NSArray *_urlPatterns;
}

@property(copy) NSArray * URLPatterns;
@property(copy) NSArray * clientIdentifiers;
@property unsigned int diskCapacity;
@property(copy) NSSet * fileExtensions;
@property unsigned int memoryCapacity;
@property(copy) NSString * persistentIdentifier;

- (id)URLPatterns;
- (void)_setClientIdentifiersFromPropertyList:(id)arg1;
- (void)_setFileExtensionsFromPropertyList:(id)arg1;
- (void)_setURLPatternsFromPropertyList:(id)arg1;
- (id)clientIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)diskCapacity;
- (id)fileExtensions;
- (id)initWithPropertyList:(id)arg1;
- (unsigned int)memoryCapacity;
- (id)persistentIdentifier;
- (void)setClientIdentifiers:(id)arg1;
- (void)setDiskCapacity:(unsigned int)arg1;
- (void)setFileExtensions:(id)arg1;
- (void)setMemoryCapacity:(unsigned int)arg1;
- (void)setPersistentIdentifier:(id)arg1;
- (void)setURLPatterns:(id)arg1;

@end
