//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDatabaseProtectedDataObserver-Protocol.h>
#import <HealthDaemon/HDDiagnosticObject-Protocol.h>

@class HDProfile, HDXPCAlarm, NSDate, NSMapTable, NSString;
@protocol OS_dispatch_queue;

@interface HDRestorableAlarmScheduler : NSObject <HDDiagnosticObject, HDDatabaseProtectedDataObserver>
{
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    int _significantTimeChangeNotificationToken;
    NSMapTable *_clients;
    BOOL _hasInitializedSystemScheduler;
    BOOL _maintenanceOperationQueued;
    BOOL _needsMaintenanceNotifyAndSchedule;
    BOOL _needsLockStateUpdates;
    BOOL _isDeviceOnWrist;
    BOOL _isRegisteredForOnWristUpdates;
    BOOL _isRegisteredForLockStateUpdates;
    HDXPCAlarm *_systemScheduler;
    NSDate *__unitTest_currentDate;
}

@property(readonly, nonatomic) BOOL isRegisteredForLockStateUpdates; // @synthesize isRegisteredForLockStateUpdates=_isRegisteredForLockStateUpdates;
@property(readonly, nonatomic) BOOL isRegisteredForOnWristUpdates; // @synthesize isRegisteredForOnWristUpdates=_isRegisteredForOnWristUpdates;
@property(copy, nonatomic) NSDate *_unitTest_currentDate; // @synthesize _unitTest_currentDate=__unitTest_currentDate;
@property(readonly, nonatomic) HDXPCAlarm *systemScheduler; // @synthesize systemScheduler=_systemScheduler;
// - (void).cxx_destruct;
- (id)diagnosticDescription;
@property(readonly, copy) NSString *description;
- (BOOL)_enumerateAllAlarmEventsWithError:(id )arg1 enumerationHandler:(CDUnknownBlockType)arg2;
- (void)checkForDueEventsImmediatelyWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)_performWriteTransactionAndFireEventsWithError:(id )arg1 block:(CDUnknownBlockType)arg2;
- (id)scheduledEventsForClientIdentifier:(id)arg1 error:(id )arg2;
- (BOOL)replaceAllScheduledEventsWithClientIdentifier:(id)arg1 newEvents:(id)arg2 error:(id )arg3;
- (BOOL)removeAllEventsWithClientIdentifier:(id)arg1 error:(id )arg2;
- (BOOL)removeEvents:(id)arg1 error:(id )arg2;
- (BOOL)scheduleEvents:(id)arg1 error:(id )arg2;
- (void)removeAlarm:(id)arg1;
- (void)addAlarm:(id)arg1;
- (void)_queue_registerForWristStateUpdates:(BOOL)arg1;
- (BOOL)_queue_notifyClientsOfDueEventsAndScheduleNextFireDateWithError:(id )arg1;
- (void)_queue_processDueEventsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_fetchCurrentWristStateWithCompletion:(CDUnknownBlockType)arg1;
- (id)_currentDate;
- (void)_queue_beginReceivingSystemEventsIfNecessary;
- (void)_runMaintenanceNotifyAndSchedule;
- (void)_queue_enqueueMaintenanceNotifyAndSchedule;
- (void)_queue_updateProtectedDataObserverStateIfRequired;
- (void)_queue_registerForLockStateUpdates:(BOOL)arg1;
- (void)_queue_setNeedsMaintenanceNotifyAndSchedule:(BOOL)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
- (void)_queue_significantTimeChangeDidOccur;
- (void)_stopObservingSignificantTimeChangeNotification;
- (void)_startObservingSignificantTimeChangeNotification;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;

@end

