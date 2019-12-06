//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNNotificationSource-Protocol.h>

@class NSArray, NSString;
@protocol CALNCalendarIconIdentifierProvider, CALNCalendarResourceChangedNotificationDataSource, CALNNotificationManager, CALNSourceEventRepresentationProvider;

@interface CALNCalendarResourceChangedNotificationSource : NSObject <CALNNotificationSource>
{
    id <CALNCalendarResourceChangedNotificationDataSource> _dataSource;
    id <CALNNotificationManager> _notificationManager;
    id <CALNCalendarIconIdentifierProvider> _iconIdentifierProvider;
    id <CALNSourceEventRepresentationProvider> _sourceEventRepresentationProvider;
}

@property(readonly, nonatomic) id <CALNSourceEventRepresentationProvider> sourceEventRepresentationProvider; // @synthesize sourceEventRepresentationProvider=_sourceEventRepresentationProvider;
@property(readonly, nonatomic) id <CALNCalendarIconIdentifierProvider> iconIdentifierProvider; // @synthesize iconIdentifierProvider=_iconIdentifierProvider;
@property(readonly, nonatomic) __weak id <CALNNotificationManager> notificationManager; // @synthesize notificationManager=_notificationManager;
@property(readonly, nonatomic) id <CALNCalendarResourceChangedNotificationDataSource> dataSource; // @synthesize dataSource=_dataSource;
// - (void).cxx_destruct;
- (void)didReceiveResponse:(id)arg1;
- (id)contentForNotificationWithInfo:(id)arg1;
- (id)contentForNotificationWithSourceClientIdentifier:(id)arg1;
- (void)refreshNotifications:(id)arg1;
@property(readonly, nonatomic) NSArray *categories;
@property(readonly, nonatomic) NSString *sourceIdentifier;
- (id)initWithDataSource:(id)arg1 notificationManager:(id)arg2 iconIdentifierProvider:(id)arg3 sourceEventRepresentationProvider:(id)arg4;

@end

