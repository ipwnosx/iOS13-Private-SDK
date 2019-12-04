//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNSharedCalendarInvitationResponseNotificationDataSource-Protocol.h>

@class NSString;
@protocol CALNEKCalendarNotificationReferenceProvider, CALNInboxNotificationProvider, EKEventStoreProvider;

@interface CALNSharedCalendarInvitationResponseNotificationEKDataSource : NSObject <CALNSharedCalendarInvitationResponseNotificationDataSource>
{
    id <EKEventStoreProvider> _eventStoreProvider;
    id <CALNInboxNotificationProvider> _inboxNotificationProvider;
    id <CALNEKCalendarNotificationReferenceProvider> _notificationReferenceProvider;
}

@property(readonly, nonatomic) id <CALNEKCalendarNotificationReferenceProvider> notificationReferenceProvider; // @synthesize notificationReferenceProvider=_notificationReferenceProvider;
@property(readonly, nonatomic) id <CALNInboxNotificationProvider> inboxNotificationProvider; // @synthesize inboxNotificationProvider=_inboxNotificationProvider;
@property(readonly, nonatomic) id <EKEventStoreProvider> eventStoreProvider; // @synthesize eventStoreProvider=_eventStoreProvider;
- (id)_notificationInfoFromNotification:(id)arg1;
- (id)_notificationInfoFromNotificationReference:(id)arg1;
- (void)clearSharedCalendarInvitationResponseWithSourceClientIdentifier:(id)arg1;
- (id)fetchSharedCalendarInvitationResponseNotificationWithSourceClientIdentifier:(id)arg1;
- (id)fetchSharedCalendarInvitationResponseNotificationSourceClientIdentifiers:(id)arg1;
- (id)fetchSharedCalendarInvitationResponseNotifications;
- (id)initWithEventStoreProvider:(id)arg1 inboxNotificationProvider:(id)arg2 notificationReferenceProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
