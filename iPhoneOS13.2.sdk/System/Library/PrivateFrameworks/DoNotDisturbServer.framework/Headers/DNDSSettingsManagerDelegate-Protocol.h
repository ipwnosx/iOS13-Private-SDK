//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class DNDBehaviorSettings, DNDBypassSettings, DNDSScheduleSettings, DNDSSettingsManager, DNDSSyncSettings;

@protocol DNDSSettingsManagerDelegate <NSObject>
- (void)settingsManager:(DNDSSettingsManager *)arg1 didReceiveUpdatedSyncSettings:(DNDSSyncSettings *)arg2;
- (void)settingsManager:(DNDSSettingsManager *)arg1 didReceiveUpdatedScheduleSettings:(DNDSScheduleSettings *)arg2;
- (void)settingsManager:(DNDSSettingsManager *)arg1 didReceiveUpdatedPhoneCallBypassSettings:(DNDBypassSettings *)arg2;
- (void)settingsManager:(DNDSSettingsManager *)arg1 didReceiveUpdatedBehaviorSettings:(DNDBehaviorSettings *)arg2;
@end

