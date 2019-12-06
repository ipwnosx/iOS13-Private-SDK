//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/CSEventMonitor.h>

@interface CSNetworkAvailabilityMonitor : CSEventMonitor
{
    int _notifyToken;
}

+ (id)sharedInstance;
- (void)_notifyObserver:(id)arg1 withNetworkAvailability:(BOOL)arg2;
- (void)_didReceivedNetworkAvailabilityChangedNotification:(BOOL)arg1;
- (void)_availabilityChanged;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (BOOL)isAvailable;
- (id)init;

@end

