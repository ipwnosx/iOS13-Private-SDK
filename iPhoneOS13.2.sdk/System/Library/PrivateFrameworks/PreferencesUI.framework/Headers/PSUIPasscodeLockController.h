//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <PreferencesUI/DevicePINControllerDelegate-Protocol.h>
#import <PreferencesUI/HMHomeManagerDelegate-Protocol.h>

@class HMHomeManager, PSSpecifier;

__attribute__((visibility("hidden")))
@interface PSUIPasscodeLockController : PSListController <HMHomeManagerDelegate, DevicePINControllerDelegate>
{
    int _policyDictatedMaxFailedAttempts;
    PSSpecifier *_voiceDialSpecifier;
    PSSpecifier *_voiceDialGroupSpecifier;
    BOOL _canUnlockWatch;
    HMHomeManager *_homeManager;
}

+ (long long)passcodeGracePeriod;
@property(retain, nonatomic) HMHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(nonatomic) BOOL canUnlockWatch; // @synthesize canUnlockWatch=_canUnlockWatch;
// - (void).cxx_destruct;
- (void)profileNotification:(id)arg1;
- (void)disablePasscodeRequiredSpecifiers:(id)arg1;
- (void)setEnabledInLockScreenForUSB:(id)arg1 specifier:(id)arg2;
- (void)setEnabledInLockScreen:(id)arg1 specifier:(id)arg2;
- (id)enabledInLockScreenForUSB:(id)arg1;
- (id)enabledInLockScreen:(id)arg1;
- (id)specifiers;
- (void)suspend;
- (BOOL)canBeShownFromSuspendedState;
- (void)showKeychainAlert;
- (void)didAcceptRemovePIN;
- (void)devicePINController:(id)arg1 didAcceptChangedPIN:(id)arg2;
- (void)_didUpdatePasscode:(id)arg1;
- (void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2;
- (void)showWeakWarningAlertForController:(id)arg1 offerUseAnyway:(BOOL)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)devicePINController:(id)arg1 shouldAcceptPIN:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)_makeWipeDeviceGroupFooter;
- (void)_setWipeEnabled:(BOOL)arg1;
- (void)setWipeEnabled:(id)arg1 specifier:(id)arg2;
- (id)wipeEnabled:(id)arg1;
- (BOOL)showReplyWithMessage;
- (BOOL)isWalletRestricted;
- (void)setWallet:(id)arg1 specifier:(id)arg2;
- (id)wallet:(id)arg1;
- (void)homeManager:(id)arg1 didUpdateAccessAllowedWhenLocked:(BOOL)arg2;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (void)setHomeControlAccessAllowedWhenLocked:(id)arg1 specifier:(id)arg2;
- (id)homeControlAccessAllowedWhenLocked:(id)arg1;
- (BOOL)isAssistantRestricted;
- (void)setAssistantUnderLockEnabled:(id)arg1 forSpecifier:(id)arg2;
- (id)assistantUnderLockEnabled:(id)arg1;
- (void)updateVoiceDialGroup;
- (BOOL)isVoiceDialRestricted;
- (BOOL)shouldShowVoiceDial;
- (void)setVoiceDial:(id)arg1 specifier:(id)arg2;
- (id)voiceDial:(id)arg1;
- (void)_localizeGracePeriodTitlesForSpecifier:(id)arg1;
- (void)_updateGracePeriodForSpecifier:(id)arg1;
- (void)updateGracePeriodSpecifier;
- (void)setGraceValue:(id)arg1 specifier:(id)arg2;
- (id)graceValue:(id)arg1;
- (void)showPINSheet:(id)arg1;
- (void)presentAppleIDAuthenticationController;
- (void)togglePasscode:(id)arg1;
- (void)_showDeleteSavedFingerprintsAlert;
- (long long)fingerprintCount;
- (BOOL)isPasscodeSet;
- (void)dealloc;
- (id)init;

@end

