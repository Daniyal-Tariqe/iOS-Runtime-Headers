/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface AVExternalAudio : NSObject {
    struct AVExternalAudioPrivate { BOOL x1; struct OpaqueFigPlayer {} *x2; id x3; /* Warning: Unrecognized filer type: '"' using 'void*' */ void*x4; void*x5; oneway void*x6; void*x7; void*x8; void*x9; const in void*x10; long x11; void*x12; void*x13; double x14; int x15; out void*x16; void*x17; long x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; BOOL x25; } *_priv;
}

+ (id)avExternalAudio:(id)arg1;

- (BOOL)activate:(id*)arg1;
- (id)attributeForKey:(id)arg1;
- (void)dealloc;
- (void)fmpChangeConnectionActive:(BOOL)arg1;
- (void)fmpServerConnectionDied;
- (void)fmpUserVolumeDidChange;
- (id)initWithDelegate:(id)arg1;
- (BOOL)isActive;
- (void)makeError:(id*)arg1 withDescription:(id)arg2 code:(long)arg3;
- (BOOL)okToNotifyFromThisThread;
- (void)postServerConnectionDiedNotification:(id)arg1;
- (void)postUserVolumeChangedNotification:(id)arg1;
- (BOOL)setAttribute:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (float)volume;

@end
