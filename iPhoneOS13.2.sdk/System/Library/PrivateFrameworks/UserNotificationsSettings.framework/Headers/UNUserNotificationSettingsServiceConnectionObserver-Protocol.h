//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSSet, UNNotificationSystemSettings, UNUserNotificationSettingsServiceConnection;

@protocol UNUserNotificationSettingsServiceConnectionObserver <NSObject>

@optional
- (void)settingsServiceConnection:(UNUserNotificationSettingsServiceConnection *)arg1 didUpdateNotificationSystemSettings:(UNNotificationSystemSettings *)arg2;
- (void)settingsServiceConnection:(UNUserNotificationSettingsServiceConnection *)arg1 didUpdateNotificationSourcesWithIdentifiers:(NSSet *)arg2;
@end

