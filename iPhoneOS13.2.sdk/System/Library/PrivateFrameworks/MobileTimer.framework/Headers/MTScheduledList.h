//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableOrderedSet;
@protocol MTScheduledListDelegate;

@interface MTScheduledList : NSObject
{
    id <MTScheduledListDelegate> _delegate;
    NSMutableOrderedSet *_orderedScheduledAlerts;
    NSMutableOrderedSet *_orderedScheduledNotifications;
    NSMutableOrderedSet *_orderedScheduledEvents;
    NSMutableDictionary *_scheduledAlertMap;
}

+ (id)_nextScheduledObjectInSets:(id)arg1;
+ (id)_filterScheduledObjects:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (CDUnknownBlockType)_dateIntervalFilter:(id)arg1;
+ (CDUnknownBlockType)_scheduledObjectComparator;
+ (void)_sort:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *scheduledAlertMap; // @synthesize scheduledAlertMap=_scheduledAlertMap;
@property(retain, nonatomic) NSMutableOrderedSet *orderedScheduledEvents; // @synthesize orderedScheduledEvents=_orderedScheduledEvents;
@property(retain, nonatomic) NSMutableOrderedSet *orderedScheduledNotifications; // @synthesize orderedScheduledNotifications=_orderedScheduledNotifications;
@property(retain, nonatomic) NSMutableOrderedSet *orderedScheduledAlerts; // @synthesize orderedScheduledAlerts=_orderedScheduledAlerts;
@property(nonatomic) __weak id <MTScheduledListDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)description;
- (void)_unscheduleObject:(id)arg1;
- (BOOL)isScheduled:(id)arg1;
- (void)_performScheduleChangingBlock:(CDUnknownBlockType)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_scheduleObject:(id)arg1;
- (void)schedule:(id)arg1 afterDate:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_unschedule:(id)arg1;
- (void)unschedule:(id)arg1;
- (void)reset;
- (id)_scheduledListForTriggerType:(NSUInteger)arg1;
- (id)nextScheduledObjectWithTriggerType:(NSUInteger)arg1;
- (id)nextScheduledObject;
- (id)nextScheduledAlertOrNotification;
- (id)nextScheduledAlert;
- (id)scheduledObjectsToFireInInterval:(id)arg1;
- (id)scheduledObjectsToFireBeforeDate:(id)arg1;
@property(readonly, nonatomic) NSArray *scheduledObjects;
@property(readonly, nonatomic) NSArray *scheduledAlertsAndNotifications;
@property(readonly, nonatomic) NSArray *scheduledAlerts;
@property(readonly, nonatomic) NSUInteger numberOfScheduledAlertsAndNotifications;
@property(readonly, nonatomic) NSUInteger numberOfScheduledAlerts;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

