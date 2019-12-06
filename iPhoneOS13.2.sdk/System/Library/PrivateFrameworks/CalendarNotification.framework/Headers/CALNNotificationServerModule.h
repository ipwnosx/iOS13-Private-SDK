//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CADModule-Protocol.h>

@class CALNCalendarAppBadgeUpdater, CALNInboxNotificationMonitor, CALNNotificationServer, CALNNotificationSourceRefresher, CALNNotificationStorageWrapper, NSArray;

@interface CALNNotificationServerModule : NSObject <CADModule>
{
    CALNInboxNotificationMonitor *_inboxNotificationMonitor;
    CALNNotificationServer *_calendarNotificationServer;
    CALNNotificationSourceRefresher *_notificationSourceRefresher;
    CALNCalendarAppBadgeUpdater *_calendarAppBadgeUpdater;
    CALNNotificationStorageWrapper *_calendarStorageWrapper;
    CALNNotificationStorageWrapper *_remindersStorageWrapper;
    NSArray *_modules;
}

+ (id)_createTimeToLeaveRefreshStorageAtPath:(id)arg1;
+ (id)_timeToLeaveRefreshStoragePathWithName:(id)arg1;
+ (id)_timeToLeaveRefreshStorage;
+ (id)_createTriggeredEventNotificationDataStorageAtPath:(id)arg1;
+ (id)_triggeredEventNotificationDataStoragePathWithName:(id)arg1;
+ (id)_triggeredEventNotificationDataStorage;
+ (id)_protectedCalendarNotificationStorage;
+ (id)_unprotectedCalendarNotificationStorage;
+ (void)_setProtectedClassForStorageAtPath:(id)arg1;
+ (id)_createNotificationStorageAtPath:(id)arg1;
+ (id)_notificationStoragePathWithName:(id)arg1;
+ (id)_createNotificationSourcesWithNotificationManager:(id)arg1 eventStoreProvider:(id)arg2 inboxNotificationProvider:(id)arg3 alarmEngineMonitor:(id)arg4 travelEngine:(id)arg5 timeToLeaveRefreshMonitor:(id)arg6 timeToLeaveRefreshStorage:(id)arg7;
+ (id)_createNotificationServerWithUserNotificationCenter:(id)arg1 storage:(id)arg2 eventStoreProvider:(id)arg3 inboxNotificationProvider:(id)arg4 alarmEngineMonitor:(id)arg5 travelEngine:(id)arg6 timeToLeaveRefreshMonitor:(id)arg7 timeToLeaveRefreshStorage:(id)arg8;
+ (id)_createCalendarNotificationServerWithUserNotificationCenterFactory:(id)arg1 storage:(id)arg2 eventStoreProvider:(id)arg3 inboxNotificationProvider:(id)arg4 alarmEngineMonitor:(id)arg5 travelEngine:(id)arg6 timeToLeaveRefreshMonitor:(id)arg7 timeToLeaveRefreshStorage:(id)arg8;
@property(readonly, nonatomic) NSArray *modules; // @synthesize modules=_modules;
@property(readonly, nonatomic) CALNNotificationStorageWrapper *remindersStorageWrapper; // @synthesize remindersStorageWrapper=_remindersStorageWrapper;
@property(readonly, nonatomic) CALNNotificationStorageWrapper *calendarStorageWrapper; // @synthesize calendarStorageWrapper=_calendarStorageWrapper;
@property(readonly, nonatomic) CALNCalendarAppBadgeUpdater *calendarAppBadgeUpdater; // @synthesize calendarAppBadgeUpdater=_calendarAppBadgeUpdater;
@property(readonly, nonatomic) CALNNotificationSourceRefresher *notificationSourceRefresher; // @synthesize notificationSourceRefresher=_notificationSourceRefresher;
@property(readonly, nonatomic) CALNNotificationServer *calendarNotificationServer; // @synthesize calendarNotificationServer=_calendarNotificationServer;
@property(readonly, nonatomic) CALNInboxNotificationMonitor *inboxNotificationMonitor; // @synthesize inboxNotificationMonitor=_inboxNotificationMonitor;
// - (void).cxx_destruct;
- (void)_removeNotificationsFromUnprotectedStorage:(id)arg1;
- (void)_reloadNotificationRecords:(id)arg1 forNotificationServer:(id)arg2;
- (void)_updateSourceClientIdentifiersIfNeeded;
- (void)protectedDataDidBecomeAvailable;
- (void)handleBTAJob:(id)arg1 named:(const char )arg2;
- (void)didRegisterForBackgroundTaskAgentJobs;
- (void)receivedAlarmNamed:(id)arg1;
- (void)didRegisterForAlarms;
- (void)_reloadNotificationsFromUnprotectedStorage:(id)arg1 intoProtectedStorage:(id)arg2 withStorageWrapper:(id)arg3 forNotificationServer:(id)arg4;
- (void)_reloadNotificationsAfterFirstUnlock;
- (void)_registerSettingsCaptureHandlers;
- (void)receivedNotificationNamed:(id)arg1;
- (void)deactivate;
- (void)activate;
- (id)init;

@end

