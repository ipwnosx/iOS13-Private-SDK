//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class DNDBypassSettings, DNDSScheduleSettings;
@protocol DNDSSettingsSyncManager;

@protocol DNDSSettingsSyncManagerDelegate <NSObject>
- (void)syncManager:(id <DNDSSettingsSyncManager>)arg1 didReceiveUpdatedScheduleSettings:(DNDSScheduleSettings *)arg2;
- (void)syncManager:(id <DNDSSettingsSyncManager>)arg1 didReceiveUpdatedPhoneCallBypassSettings:(DNDBypassSettings *)arg2;
@end

