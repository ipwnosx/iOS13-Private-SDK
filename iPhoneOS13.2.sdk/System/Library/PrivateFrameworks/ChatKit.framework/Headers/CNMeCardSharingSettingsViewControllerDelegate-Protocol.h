//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CNMeCardSharingResult, CNMeCardSharingSettingsViewController;

@protocol CNMeCardSharingSettingsViewControllerDelegate <NSObject>

@optional
- (void)sharingSettingsViewController:(CNMeCardSharingSettingsViewController *)arg1 didSelectSharingAudience:(NSUInteger)arg2;
- (void)sharingSettingsViewController:(CNMeCardSharingSettingsViewController *)arg1 didUpdateSharingState:(BOOL)arg2;
- (void)sharingSettingsViewControllerDidUpdateContact:(CNMeCardSharingSettingsViewController *)arg1;
- (void)sharingSettingsViewController:(CNMeCardSharingSettingsViewController *)arg1 didUpdateWithSharingResult:(CNMeCardSharingResult *)arg2;
@end

