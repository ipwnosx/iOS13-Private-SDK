//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NCNotificationManagementSuggestionManager, NCNotificationRequest, NCNotificationSectionSettings, NSString, UIView;

@protocol NCNotificationManagementSuggestionManagerDelegate <NSObject>
- (NCNotificationSectionSettings *)notificationManagementSuggestionManager:(NCNotificationManagementSuggestionManager *)arg1 requestsSectionSettingsForSectionIdentifier:(NSString *)arg2;
- (void)notificationManagementSuggestionManager:(NCNotificationManagementSuggestionManager *)arg1 requestsPresentingNotificationManagementViewType:(NSUInteger)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withPresentingView:(UIView *)arg4;
- (void)notificationManagementSuggestionManager:(NCNotificationManagementSuggestionManager *)arg1 requestsUpdatingContentForNotificationRequest:(NCNotificationRequest *)arg2;
@end

