//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTAlarmObserver-Protocol.h>

@class NSMutableDictionary;
@protocol MTAlarmStorage, OS_dispatch_queue;

@interface MTCoreDuetMonitor : NSObject <MTAlarmObserver>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    id <MTAlarmStorage> _alarmStorage;
    NSMutableDictionary *_alarmStatesByAlarmID;
}

@property(readonly, nonatomic) NSMutableDictionary *alarmStatesByAlarmID; // @synthesize alarmStatesByAlarmID=_alarmStatesByAlarmID;
@property(readonly, nonatomic) id <MTAlarmStorage> alarmStorage; // @synthesize alarmStorage=_alarmStorage;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
// - (void).cxx_destruct;
- (void)_queue_writeCurrentStateToContextStore;
- (void)_queue_clearPreviouslyDismissedAlarmStates;
- (void)updateStateForAlarms:(id)arg1;
- (void)source:(id)arg1 didRemoveAlarms:(id)arg2;
- (void)source:(id)arg1 didFireAlarm:(id)arg2 triggerType:(NSUInteger)arg3;
- (void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(NSUInteger)arg3;
- (void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(NSUInteger)arg3;
- (void)source:(id)arg1 didChangeNextAlarm:(id)arg2;
- (void)source:(id)arg1 didUpdateAlarms:(id)arg2;
- (void)source:(id)arg1 didAddAlarms:(id)arg2;
- (void)handleSystemReady;
- (id)initWithAlarmStorage:(id)arg1;

@end

