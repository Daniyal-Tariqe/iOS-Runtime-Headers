/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUWebImagePool, NSMutableArray, NSLock, SUScriptObjectInvocationBatch, NSMutableSet, SUScriptNativeObject, SUScriptObject, NSString;

@interface SUScriptObject : NSObject {
    unsigned int _checkOutWhenHidden : 1;
    unsigned int _isVisible : 1;
    NSString *_className;
    NSMutableArray *_eventListeners;
    SUScriptObjectInvocationBatch *_invocationBatch;
    NSLock *_lock;
    SUScriptNativeObject *_nativeObject;
    SUScriptObject *_parentScriptObject;
    NSMutableSet *_scriptObjects;
}

@property(getter=_className,readonly) NSString * className;
@property(readonly) struct OpaqueJSContext { }* copyJavaScriptContext;
@property(readonly) SUWebImagePool * imagePool;
@property(retain) SUScriptNativeObject * nativeObject;
@property SUScriptObject * parentScriptObject;
@property(readonly) NSMutableArray * scriptAttributeKeys;
@property(readonly) BOOL sourceIsTrusted;

+ (BOOL)isKeyExcludedFromWebScript:(const char *)arg1;
+ (BOOL)isSelectorExcludedFromWebScript:(SEL)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (void)_checkOutAfterVisibilityChange;
- (id)_className;
- (id)_copyListenersForName:(id)arg1;
- (void)addListenerForEventWithName:(id)arg1 callback:(id)arg2 useCapture:(BOOL)arg3;
- (void)checkInScriptObject:(id)arg1;
- (void)checkInScriptObjects:(id)arg1;
- (void)checkOutBatchTarget:(id)arg1;
- (void)checkOutScriptObject:(id)arg1;
- (void)checkOutScriptObjects:(id)arg1;
- (struct OpaqueJSContext { }*)copyJavaScriptContext;
- (id)copyObjectForScriptFromPoolWithClass:(Class)arg1;
- (void)dealloc;
- (void)didPerformBatchedInvocations;
- (void)dispatchEvent:(id)arg1 forName:(id)arg2 synchronously:(BOOL)arg3;
- (void)dispatchEvent:(id)arg1 forName:(id)arg2;
- (BOOL)equals:(id)arg1;
- (void)finalizeForWebScript;
- (id)imagePool;
- (id)init;
- (id)invocationBatch:(BOOL)arg1;
- (BOOL)isVisible;
- (void)lock;
- (id)nativeObject;
- (id)parentScriptObject;
- (id)parentViewController;
- (void)removeListenerForEventWithName:(id)arg1 callback:(id)arg2 useCapture:(BOOL)arg3;
- (id)scriptAttributeKeys;
- (BOOL)scriptObjectIsCheckedIn:(id)arg1;
- (void)setNativeObject:(id)arg1;
- (void)setParentScriptObject:(id)arg1;
- (void)setVisible:(BOOL)arg1;
- (void)set_class:(id)arg1;
- (BOOL)sourceIsTrusted;
- (id)stringRepresentation;
- (void)tearDownUserInterface;
- (void)unlock;
- (id)webThreadMainThreadBatchProxy;
- (void)willPerformBatchedInvocations;

@end
