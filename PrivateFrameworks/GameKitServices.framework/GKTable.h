/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKTable : NSObject {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    unsigned int _count;
    struct _gktableitem { unsigned int x1; id x2; double x3; double x4; } *_items;
    } _lock;
    unsigned int _size;
}

@property(readonly) unsigned int count;

- (id)allObjects;
- (unsigned long)count;
- (void)dealloc;
- (id)init;
- (id)initWithSize:(unsigned long)arg1;
- (void)lock;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (id)objectForKey:(unsigned int)arg1;
- (void)print;
- (void)removeAllObjects;
- (void)removeObjectForKey:(unsigned int)arg1;
- (void)setObject:(id)arg1 forKey:(unsigned int)arg2;
- (void)touchObject:(id)arg1;
- (void)touchObjectForKey:(unsigned int)arg1;
- (void)unlock;

@end
