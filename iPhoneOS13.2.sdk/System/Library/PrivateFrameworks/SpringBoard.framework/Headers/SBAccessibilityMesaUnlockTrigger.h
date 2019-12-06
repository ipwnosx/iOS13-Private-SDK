//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBMesaUnlockTrigger.h>

#import <SpringBoard/SBMesaUnlockTriggerDelegate-Protocol.h>

@protocol SBBiometricUnlockBehaviorConfigurationDelegate;

@interface SBAccessibilityMesaUnlockTrigger : SBMesaUnlockTrigger <SBMesaUnlockTriggerDelegate>
{
    id <SBBiometricUnlockBehaviorConfigurationDelegate> _behaviorConfigurationDelegate;
    SBMesaUnlockTrigger *_baseTrigger;
}

// - (void).cxx_destruct;
- (void)mesaUnlockTriggerFired:(id)arg1;
- (void)fingerOff;
- (void)fingerOn;
- (void)menuButtonUp;
- (void)menuButtonDown;
- (void)significantUserInteractionOccurred;
- (void)screenOff;
- (BOOL)bioUnlock;
- (id)initWithUnlockBehaviorConfigurationDelegate:(id)arg1 baseTrigger:(id)arg2;

@end

