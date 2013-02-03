/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSOperationQueue, NSOperation;

@interface __NSOperationInternal : NSObject {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    struct _opaque_pthread_cond_t { 
        long __sig; 
        BOOL __opaque[24]; 
    int __RC;
    unsigned char __cached_isReady;
    id __completion;
    int __deps_count;
    void *__implicitObsInfo;
    unsigned char __isCancelled;
    NSOperation *__nextOp;
    void *__obsInfo;
    NSOperation *__outerOp;
    int __outerRC;
    BOOL __prio;
    NSOperationQueue *__queue;
    int __state;
    double __thread_prio;
    int __unfinished_deps;
    } __wait_cond;
    } __wait_mutex;
}

@property(copy) id completionBlock;

+ (void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 changeKind:(unsigned int)arg3 oldValue:(id)arg4 newValue:(id)arg5 indexes:(id)arg6 context:(void*)arg7;

- (void)addDependency:(id)arg1;
- (void)cancel;
- (id)completionBlock;
- (void)dealloc;
- (id)dependencies;
- (void)finalize;
- (id)init;
- (BOOL)isCancelled;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (BOOL)isReady;
- (int)queuePriority;
- (void)release;
- (void)removeDependency:(id)arg1;
- (id)retain;
- (unsigned int)retainCount;
- (void)setCompletionBlock:(id)arg1;
- (void)setQueuePriority:(int)arg1;
- (void)setThreadPriority:(double)arg1;
- (void)start;
- (double)threadPriority;
- (void)waitUntilFinished;
- (void)waitUntilFinishedOrTimeout:(double)arg1;

@end
