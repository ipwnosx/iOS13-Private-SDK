//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNNotificationStorage-Protocol.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CALNInMemoryNotificationStorage : NSObject <CALNNotificationStorage>
{
    NSMutableDictionary *_recordMap;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSMutableDictionary *recordMap; // @synthesize recordMap=_recordMap;
// - (void).cxx_destruct;
- (void)_removeNotificationRecordsPassingTest:(CDUnknownBlockType)arg1;
- (void)removeNotificationRecordsPassingTest:(CDUnknownBlockType)arg1;
- (void)_addNotificationRecord:(id)arg1;
- (void)addNotificationRecord:(id)arg1;
- (id)_notificationRecords;
- (id)notificationRecords;
- (id)init;

@end

