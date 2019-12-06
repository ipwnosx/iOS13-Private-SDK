//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SOSUtilities : NSObject
{
}

+ (void)setAllowedToMessageSOSContacts:(BOOL)arg1;
+ (BOOL)isAllowedToMessageSOSContacts;
+ (void)setPlayAudioDuringCountdown:(BOOL)arg1;
+ (BOOL)shouldPlayAudioDuringCountdown;
+ (void)setAutomaticCallCountdownEnabled:(BOOL)arg1;
+ (BOOL)isAutomaticCallCountdownEnabled;
+ (BOOL)hasActiveSIMForClient:(id)arg1;
+ (BOOL)shouldForceDisableAutoCallForClient:(id)arg1;
+ (long long)SOSSelectableTriggerMechanismCapability;
+ (BOOL)deviceHasHomeButton;
+ (BOOL)isD2xDevice;
+ (long long)defaultSOSTriggerMechanism;
+ (long long)SOSTriggerMechanismForClickCount:(long long)arg1;
+ (long long)currentSOSTriggerMechanism;
+ (long long)SOSTriggerClickCount;
+ (BOOL)canTriggerSOSWithClicks;
+ (BOOL)canTriggerSOSWithVolumeLockHold;
+ (BOOL)isIndiaSKU;
+ (BOOL)autoCallRequiresSIM;
+ (BOOL)mustAllowThreeClickTrigger;
+ (void)setNewtonTriggersEmergencySOS:(BOOL)arg1;
+ (BOOL)newtonTriggersEmergencySOS;
+ (void)setNewtonTriggersEmergencySOSNumber:(id)arg1;
+ (id)newtonTriggersEmergencySOSNumber;
+ (void)setLongPressTriggersEmergencySOS:(BOOL)arg1;
+ (BOOL)longPressTriggersEmergencySOS;
+ (id)_userFriendsDefaults;
+ (id)_userSOSDefaults;

@end

