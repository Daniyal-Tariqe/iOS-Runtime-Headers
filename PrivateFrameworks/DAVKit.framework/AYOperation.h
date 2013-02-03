/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

@class NSError, AYOperation, <AYNotificationDelegate>, NSThread, NSLock, <AYGroup>, NSMutableDictionary;

@interface AYOperation : NSObject {
    id _asyncProxy;
    NSThread *_baseThread;
    BOOL _canAbortNow;
    AYOperation *_currentChildOperation;
    int _currentMark;
    NSThread *_currentThread;
    NSError *_error;
    <AYGroup> *_group;
    BOOL _inAbortProcess;
    AYOperation *_mainOperation;
    <AYNotificationDelegate> *_notificationDelegate;
    BOOL _operationAborted;
    BOOL _operationEnded;
    NSLock *_operationLock;
    AYOperation *_parentOperation;
    NSMutableDictionary *_privateInfos;
    void *_reserved;
    BOOL _silent;
}

+ (BOOL)_dispatchNextOperationInQueue;
+ (void)_initCurrentThread;
+ (void)_initMainThread;
+ (void)_lockForAllThreads;
+ (BOOL)_lockWaitingForOperation;
+ (void)_noLockForThread:(id)arg1;
+ (void)_queueOneBlock;
+ (void)_setCurrentOperation:(id)arg1;
+ (id)currentOperation;
+ (void)endAllPendingOperationsOfGroup:(id)arg1 withError:(id)arg2;
+ (void)initialize;
+ (void)lockOperations;
+ (id)mainThread;
+ (BOOL)popOperation:(id)arg1;
+ (void)pushInvocation:(id)arg1;
+ (void)unblockAllOperationsForGroup:(id)arg1;
+ (void)unlockOperations;

- (id)_currentChildOperation;
- (void)_handleEventRecursively:(id)arg1;
- (void)_sendEventToThreadLocked:(id)arg1;
- (void)_setCurrentChildOperation:(id)arg1;
- (void)_setCurrentThread:(id)arg1;
- (void)_startAbortProcess;
- (void)abortOperation;
- (id)async;
- (id)baseThread;
- (BOOL)canAbortNow;
- (void)clearError;
- (int)currentMark;
- (void)dealloc;
- (void)endOperationWithError:(id)arg1;
- (id)error;
- (void)finalizeOperation;
- (BOOL)handleEventInThread:(id)arg1;
- (void)handleNotificationOfChildOperation:(id)arg1 notification:(id)arg2;
- (BOOL)hasOperationEnded;
- (id)infoForKey:(id)arg1;
- (id)init;
- (BOOL)isAsync;
- (BOOL)isRunLoopBased;
- (BOOL)isSilent;
- (void)lockOperation;
- (id)mainOperation;
- (void)markWithTag:(int)arg1 notify:(BOOL)arg2;
- (void)markWithTag:(int)arg1;
- (id)notificationDelegate;
- (void)notifyWithName:(id)arg1 infos:(id)arg2;
- (id)operationCompanion;
- (id)operationGroup;
- (long long)operationProgress;
- (id)operationThread;
- (long long)operationTotal;
- (void)operationWillAbort;
- (id)parentOperation;
- (void)postOperation;
- (void)removeInfoForKey:(id)arg1;
- (void)resetOperation;
- (void)runOperationWithTimeOut:(unsigned int)arg1;
- (void)sendEventToThread:(id)arg1;
- (void)setCanAbortNow:(BOOL)arg1;
- (void)setError:(id)arg1;
- (void)setInfo:(id)arg1 forKey:(id)arg2;
- (void)setNotificationDelegate:(id)arg1;
- (void)setOperationCompanion:(id)arg1;
- (void)setOperationGroup:(id)arg1;
- (void)setSilent:(BOOL)arg1;
- (id)syncFor:(id)arg1;
- (id)synchronous;
- (void)unlockOperation;
- (void)waitForOperationToEnd;

@end
