//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SKUISettingDescription, SKUISettingDescriptionView, SKUISettingsGroupController, UIViewController;

@protocol SKUISettingsGroupControllerDelegate <NSObject>
- (SKUISettingDescriptionView *)settingsGroupController:(SKUISettingsGroupController *)arg1 viewForSettingDescription:(SKUISettingDescription *)arg2;
- (void)settingsGroupController:(SKUISettingsGroupController *)arg1 reloadSettingDescription:(SKUISettingDescription *)arg2;
- (UIViewController *)owningViewControllerForSettingsGroupController:(SKUISettingsGroupController *)arg1;
@end

