/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSObject, NSKeyValueProperty, NSPointerArray;

@interface NSKeyValueObservance : NSObject {
    struct auto_weak_callback_block { 
        struct auto_weak_callback_block {} *next; 
        int (*callback_function)(); 
        void *arg1; 
        void *arg2; 
    BOOL _cachedIsShareable;
    unsigned int _cachedUnrotatedHashComponent;
    void *_context;
    NSPointerArray *_observationInfos;
    NSObject *_observer;
    } _observerWentAwayCallback;
    unsigned int _options;
    NSObject *_originalObservable;
    NSKeyValueProperty *_property;
    int _retainCountMinusOne;
}

- (id)_initWithObserver:(id)arg1 property:(id)arg2 options:(unsigned int)arg3 context:(void*)arg4 originalObservable:(id)arg5;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;

@end
