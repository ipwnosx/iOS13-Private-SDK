//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MNAudioOutputSetting, MNAudioOutputSettingsManager, NSArray;

@protocol MNAudioOutputSettingsManagerObserver <NSObject>
- (void)audioOutputSettingsManager:(MNAudioOutputSettingsManager *)arg1 didUpdateRouteSelection:(NSUInteger)arg2;
- (void)audioOutputSettingsManager:(MNAudioOutputSettingsManager *)arg1 didUpdateCurrentSettingForVoicePrompt:(MNAudioOutputSetting *)arg2;
- (void)audioOutputSettingsManager:(MNAudioOutputSettingsManager *)arg1 didUpdateCurrentSetting:(MNAudioOutputSetting *)arg2;
- (void)audioOutputSettingsManager:(MNAudioOutputSettingsManager *)arg1 didUpdateSettings:(NSArray *)arg2;
@end

