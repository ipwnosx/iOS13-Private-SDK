//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class BSPowerMonitor;

@protocol BSPowerMonitorObserver <NSObject>

@optional
- (void)powerMonitorSystemDidWakeFromSleep:(BSPowerMonitor *)arg1;
- (void)powerMonitorSystemWillWakeFromSleep:(BSPowerMonitor *)arg1;
- (void)powerMonitorSystemWillSleep:(BSPowerMonitor *)arg1;
- (void)powerMonitorSystemSleepRequestAborted:(BSPowerMonitor *)arg1;
- (BOOL)powerMonitorSystemSleepRequested:(BSPowerMonitor *)arg1;
@end

