//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSRunLoop, NSString, PCDispatchTimer;
@protocol OS_dispatch_queue;

@interface PCSimpleTimer : NSObject
{
    double _fireTime;
    double _startTime;
    double _lastUpdateTime;
    double _earlyFireDelta;
    BOOL _triggerOnGMTChange;
    BOOL _disableSystemWaking;
    NSDate *_scheduledWakeDate;
    NSString *_serviceIdentifier;
    id _target;
    SEL _selector;
    id _userInfo;
    BOOL _userVisible;
    PCDispatchTimer *_preventSleepTimer;
    PCDispatchTimer *_fireTimer;
    BOOL _sleepIsImminent;
    unsigned int _powerAssertionID;
    id _timeChangeSource;
    NSRunLoop *_timerRunLoop;
    NSString *_timerMode;
    int _significantTimeChangeToken;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (double)currentMachTimeInterval;
+ (id)lastSystemWakeDate;
@property(nonatomic) BOOL disableSystemWaking; // @synthesize disableSystemWaking=_disableSystemWaking;
// - (void).cxx_destruct;
- (id)debugDescription;
- (void)_setSignificantTimeChangeMonitoringEnabled:(BOOL)arg1;
- (void)_significantTimeChange;
- (void)_powerNotificationSleepIsImminent;
- (void)_powerNotificationSleepIsNotImminent;
- (void)_setPowerMonitoringEnabled:(BOOL)arg1;
- (void)_fireTimerFired;
- (void)_preventSleepFired;
- (void)_updateTimers;
- (void)_performBlockOnQueue:(CDUnknownBlockType)arg1;
- (id)_getTimerMode;
- (id)_getTimerRunLoop;
- (id)userInfo;
- (BOOL)firingIsImminent;
- (BOOL)isValid;
- (void)invalidate;
- (void)_scheduleTimer;
- (void)scheduleInQueue:(id)arg1;
- (void)scheduleInRunLoop:(id)arg1 inMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1;
@property(nonatomic, getter=isUserVisible) BOOL userVisible;
- (void)updateFireTime:(double)arg1 triggerOnGMTChange:(BOOL)arg2;
- (void)dealloc;
- (id)initWithAbsoluteTime:(double)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 triggerOnGMTChange:(BOOL)arg6;
- (id)initWithTimeInterval:(double)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5;
- (id)initWithFireDate:(id)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5;

@end

