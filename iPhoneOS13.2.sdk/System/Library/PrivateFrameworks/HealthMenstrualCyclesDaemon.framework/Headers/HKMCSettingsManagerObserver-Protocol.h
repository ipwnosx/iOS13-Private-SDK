//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HKMCSettingsManager;

@protocol HKMCSettingsManagerObserver <NSObject>

@optional
- (void)settingsManagerDidUpdateHiddenDisplayTypes:(HKMCSettingsManager *)arg1;
- (void)settingsManagerDidUpdateNotificationSettings:(HKMCSettingsManager *)arg1;
- (void)settingsManagerDidUpdateAnalysisSettings:(HKMCSettingsManager *)arg1;
@end

