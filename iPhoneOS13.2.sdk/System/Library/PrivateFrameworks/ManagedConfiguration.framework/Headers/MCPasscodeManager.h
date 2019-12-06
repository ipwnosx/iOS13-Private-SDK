//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MCPasscodeManager : NSObject
{
}

+ (id)hashForPasscode:(id)arg1 usingMethod:(int)arg2 salt:(id)arg3 customIterations:(unsigned int)arg4;
+ (id)characteristicsDictionaryFromPasscode:(id)arg1;
+ (BOOL)_passcodeCharacteristics:(id)arg1 compliesWithPolicyFromRestrictions:(id)arg2 outError:(id )arg3;
+ (BOOL)passcode:(id)arg1 compliesWithPolicyFromRestrictions:(id)arg2 checkHistory:(BOOL)arg3 outError:(id )arg4;
+ (id)_localizedDescriptionOfPasscodePolicyFromRestrictions:(id)arg1 shouldBeDefault:(BOOL)arg2;
+ (id)localizedDescriptionOfDefaultNewPasscodePolicyFromRestrictions:(id)arg1;
+ (id)localizedDescriptionOfPasscodePolicyFromRestrictions:(id)arg1;
+ (int)unlockScreenTypeForRestrictions:(id)arg1 outSimplePasscodeType:(int )arg2;
+ (int)unlockScreenTypeForRestrictions:(id)arg1;
+ (int)unlockScreenTypeForPasscodeCharacteristics:(id)arg1 outSimplePasscodeType:(int )arg2;
+ (int)unlockScreenTypeForPasscodeCharacteristics:(id)arg1;
+ (int)defaultNewPasscodeEntrySimplePasscodeType;
+ (id)generateSalt;
+ (id)deviceLockedError;
+ (BOOL)isDeviceUnlocked;
+ (id)sharedManager;
- (void)passcodeExpiryDateCompletionBlock:(CDUnknownBlockType)arg1;
- (id)passcodeExpiryDateOutError:(id )arg1;
- (BOOL)_checkPasscode:(id)arg1 againstHistoryWithRestrictions:(id)arg2 outError:(id )arg3;
- (BOOL)isPasscodeCompliantWithNamedPolicy:(id)arg1 outError:(id )arg2;
- (BOOL)isCurrentPasscodeCompliantOutError:(id )arg1;
- (BOOL)currentPasscodeCompliesWithPolicyFromRestrictions:(id)arg1 outError:(id )arg2;
- (BOOL)passcode:(id)arg1 compliesWithPolicyCheckHistory:(BOOL)arg2 outError:(id )arg3;
- (id)localizedDescriptionOfDefaultNewPasscodePolicy;
- (id)localizedDescriptionOfPasscodePolicy;
- (int)_newPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int )arg1 shouldBeMinimum:(BOOL)arg2;
- (int)defaultNewPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int )arg1;
- (int)minimumNewPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int )arg1;
- (int)newPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int )arg1;
- (int)newPasscodeEntryScreenType;
- (int)currentUnlockSimplePasscodeType;
- (int)currentUnlockScreenType;
- (id)_passcodeCharacteristics;
- (BOOL)unlockDeviceWithPasscode:(id)arg1 outError:(id )arg2;
- (id)_wrongPasscodeError;
- (BOOL)isDeviceLocked;
- (void)lockDevice;
- (void)lockDeviceImmediately:(BOOL)arg1;
- (BOOL)isPasscodeSet;
- (id)_privatePasscodeDict;
- (id)_publicPasscodeDict;

@end

