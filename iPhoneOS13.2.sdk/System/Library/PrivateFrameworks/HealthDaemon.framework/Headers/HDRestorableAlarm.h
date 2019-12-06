//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDiagnosticObject-Protocol.h>

@class HDRestorableAlarmScheduler, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface HDRestorableAlarm : NSObject <HDDiagnosticObject>
{
//    struct os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_eventHandlerQueue;
    HDRestorableAlarmScheduler *_scheduler;
    id /* CDUnknownBlockType */ _eventsHandler;
    NSMutableSet *_outstandingEventIdentifiers;
    NSString *_clientIdentifier;
}

@property(readonly, copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
// - (void).cxx_destruct;
- (id)systemScheduler;
- (id)diagnosticDescription;
- (void)eventsDidFire:(id)arg1;
- (void)checkForDueEventsWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)removeAllEventsWithError:(id )arg1;
- (BOOL)replaceAllScheduledEventsWithEvents:(id)arg1 error:(id )arg2;
- (BOOL)removeEvents:(id)arg1 error:(id )arg2;
- (BOOL)scheduleEvents:(id)arg1 error:(id )arg2;
- (id)allScheduledEventsWithError:(id )arg1;
- (id)eventWithIdentifier:(id)arg1 dueDateComponents:(id)arg2 eventOptions:(NSUInteger)arg3;
- (id)eventWithIdentifier:(id)arg1 dueDate:(id)arg2 eventOptions:(NSUInteger)arg3;
- (void)invalidate;
- (void)beginReceivingEventsWithHandler:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithProfile:(id)arg1 clientIdentifier:(id)arg2 eventHandlerQueue:(id)arg3;

@end

