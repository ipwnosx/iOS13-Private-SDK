//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSleepWakeHardwareButtonInteraction.h>

@class SBHIDUILockAssertion;

@interface SBDoubleClickSleepWakeHardwareButtonInteraction : SBSleepWakeHardwareButtonInteraction
{
    SBHIDUILockAssertion *_proxLockAssertion;
}

@property(retain, nonatomic) SBHIDUILockAssertion *proxLockAssertion; // @synthesize proxLockAssertion=_proxLockAssertion;
// - (void).cxx_destruct;
- (void)_cancelPreviousResumeProxRequests;
- (void)_resumeProxAfterMultiplePressIntervalForReason:(id)arg1;
- (void)_resumeProxForReason:(id)arg1;
- (void)_suspendProx;
- (void)_performWake;
- (void)_performSleep;
- (void)observeSinglePressDidFail;
- (void)observeFinalPressUp;
- (BOOL)consumeSecondPressDown;
- (BOOL)consumeInitialPressUp;
- (BOOL)consumeInitialPressDown;

@end

