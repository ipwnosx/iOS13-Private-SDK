//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNNotificationSource-Protocol.h>

@class NSArray, NSString;
@protocol CALNCalendarIconIdentifierProvider, CALNEventInvitationNotificationDataSource, CALNNotificationManager;

@interface CALNEventInvitationNotificationSource : NSObject <CALNNotificationSource>
{
    id <CALNEventInvitationNotificationDataSource> _dataSource;
    id <CALNNotificationManager> _notificationManager;
    id <CALNCalendarIconIdentifierProvider> _iconIdentifierProvider;
}

+ (id)_notificationBodyForNotificationInfo:(id)arg1 contactIdentifier:(id )arg2 summaryArgument:(id )arg3;
+ (id)reportJunkActionIdentifier;
+ (id)declineActionIdentifier;
+ (id)maybeActionIdentifier;
+ (id)acceptActionIdentifier;
+ (id)couldBeJunkCategoryIdentifier;
+ (id)defaultCategoryIdentifier;
@property(readonly, nonatomic) id <CALNCalendarIconIdentifierProvider> iconIdentifierProvider; // @synthesize iconIdentifierProvider=_iconIdentifierProvider;
@property(readonly, nonatomic) __weak id <CALNNotificationManager> notificationManager; // @synthesize notificationManager=_notificationManager;
@property(readonly, nonatomic) id <CALNEventInvitationNotificationDataSource> dataSource; // @synthesize dataSource=_dataSource;
// - (void).cxx_destruct;
- (void)didReceiveResponse:(id)arg1;
- (void)refreshNotifications:(id)arg1;
- (id)contentForNotificationWithInfo:(id)arg1;
- (id)contentForNotificationWithSourceClientIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *categories;
@property(readonly, nonatomic) NSString *sourceIdentifier;
- (id)initWithDataSource:(id)arg1 notificationManager:(id)arg2 iconIdentifierProvider:(id)arg3;

@end

