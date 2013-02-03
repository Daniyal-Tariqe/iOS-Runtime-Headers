/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCPasscodeManager : NSObject {
}

+ (BOOL)_passcodeCharacteristics:(id)arg1 compliesWithPolicyFromRestrictions:(id)arg2 outError:(id*)arg3;
+ (id)characteristicsDictionaryFromPasscode:(id)arg1;
+ (id)generateSalt;
+ (id)hashForPasscode:(id)arg1 usingMethod:(int)arg2 salt:(id)arg3;
+ (id)localizedDescriptionOfPasscodePolicyFromRestrictions:(id)arg1;
+ (BOOL)passcode:(id)arg1 compliesWithPolicyFromRestrictions:(id)arg2 checkHistory:(BOOL)arg3 outError:(id*)arg4;
+ (BOOL)sendPasscodeRestrictionChangeNotificationIfNeededWithOldRestrictions:(id)arg1 newRestrictions:(id)arg2;
+ (id)sharedManager;
+ (int)unlockScreenTypeForPasscodeCharacteristics:(id)arg1;
+ (int)unlockScreenTypeForRestrictions:(id)arg1;

- (BOOL)_checkPasscode:(id)arg1 againstHistoryWithRestrictions:(id)arg2 outError:(id*)arg3;
- (id)_init;
- (id)_passcodeCharacteristics;
- (id)_privatePasscodeDict;
- (id)_publicPasscodeDict;
- (void)_sendPasscodeChangedNotification;
- (void)_setPrivatePasscodeDict:(id)arg1;
- (id)_wrongPasscodeError;
- (BOOL)changePasscodeFrom:(id)arg1 to:(id)arg2 outError:(id*)arg3;
- (BOOL)clearPasscodeWithEscrowKeybagData:(id)arg1 secret:(id)arg2 outError:(id*)arg3;
- (BOOL)currentPasscodeCompliesWithPolicyFromRestrictions:(id)arg1 outError:(id*)arg2;
- (int)currentUnlockScreenType;
- (BOOL)isCurrentPasscodeCompliantOutError:(id*)arg1;
- (BOOL)isDeviceLocked;
- (BOOL)isPasscodeSet;
- (id)localizedDescriptionOfPasscodePolicy;
- (void)lockDevice;
- (int)newPasscodeEntryScreenType;
- (BOOL)passcode:(id)arg1 compliesWithPolicyCheckHistory:(BOOL)arg2 outError:(id*)arg3;
- (id)passcodeExpiryDateOutError:(id*)arg1;
- (BOOL)unlockDeviceWithPasscode:(id)arg1 outError:(id*)arg2;

@end
