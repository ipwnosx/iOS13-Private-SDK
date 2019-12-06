//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CALNEventInvitationNotificationInfo, NSArray, NSSet, NSString;

@protocol CALNEventInvitationNotificationDataSource <NSObject>
- (void)reportEventInvitationAsJunkWithSourceClientIdentifier:(NSString *)arg1;
- (void)tentativeAcceptEventInvitationWithSourceClientIdentifier:(NSString *)arg1;
- (void)declineEventInvitationWithSourceClientIdentifier:(NSString *)arg1;
- (void)acceptEventInvitationWithSourceClientIdentifier:(NSString *)arg1;
- (void)clearEventInvitationWithSourceClientIdentifier:(NSString *)arg1;
- (CALNEventInvitationNotificationInfo *)fetchEventInvitationNotificationWithSourceClientIdentifier:(NSString *)arg1;
- (NSArray *)fetchEventInvitationNotificationSourceClientIdentifiers:(NSSet *)arg1;
- (NSArray *)fetchEventInvitationNotifications;
@end

