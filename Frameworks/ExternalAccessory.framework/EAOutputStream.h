/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@class EASession, NSThread, NSCondition, EAAccessory;

@interface EAOutputStream : NSOutputStream {
    EAAccessory *_accessory;
    id _delegate;
    BOOL _hasSpaceAvailable;
    BOOL _hasSpaceAvailableEventSent;
    BOOL _isAtEndEventSent;
    BOOL _isOpenCompletedEventSent;
    BOOL _isWriteAvailableThreadCancelled;
    int _outfd;
    struct __CFRunLoop { } *_runLoop;
    struct __CFRunLoopSource { } *_runLoopSource;
    EASession *_session;
    unsigned int _streamStatus;
    NSThread *_writeAvailableThread;
    NSCondition *_writeAvailableThreadRunCondition;
}

- (void)_accessoryDidDisconnect:(id)arg1;
- (void)_performAtEndOfStreamValidation;
- (void)_scheduleCallback;
- (void)_streamEventTrigger;
- (void)_writeAvailableThread;
- (void)close;
- (void)dealloc;
- (id)delegate;
- (BOOL)hasSpaceAvailable;
- (id)initWithAccessory:(id)arg1 forSession:(id)arg2;
- (void)open;
- (id)propertyForKey:(id)arg1;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (id)streamError;
- (unsigned int)streamStatus;
- (int)write:(const char *)arg1 maxLength:(unsigned int)arg2;

@end
