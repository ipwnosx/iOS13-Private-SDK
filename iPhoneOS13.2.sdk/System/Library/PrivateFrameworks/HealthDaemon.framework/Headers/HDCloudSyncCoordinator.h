//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDatabaseJournalMergeObserver-Protocol.h>
#import <HealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>
#import <HealthDaemon/HDPeriodicActivityDelegate-Protocol.h>

@class ACAccountStore, APSConnection, HDAsynchronousTaskTree, HDDaemon, HDPeriodicActivity, HDProfile, HKObserverSet, NSDate, NSMutableArray, NSProgress, NSString;
@protocol OS_dispatch_queue;

@interface HDCloudSyncCoordinator : NSObject <HDDiagnosticObject, HDPeriodicActivityDelegate, HDHealthDaemonReadyObserver, HDDatabaseJournalMergeObserver>
{
    HDDaemon *_daemon;
    BOOL _queue_syncInProgress;
    BOOL _queue_hasUpdatedCachedLastSuccessfulSyncDates;
    NSDate *_queue_lastSuccessfulPullDate;
    NSDate *_queue_lastSuccessfulPushDate;
    HDAsynchronousTaskTree *_activeTaskGroup;
    NSMutableArray *_pendingTaskGroups;
    ACAccountStore *_accountStore;
    NSString *_latestSyncStartLog;
    NSString *_latestSyncEndLog;
    NSProgress *_activeTaskProgress;
    NSMutableArray *_pendingTasksProgress;
    NSMutableArray *_progressCompletionBlocks;
    HKObserverSet *_observers;
    BOOL _hasRestoreCompleted;
    BOOL _cloudSyncEnabled;
    BOOL _cloudSyncValueLoaded;
    APSConnection *_apsConnection;
    HDProfile *_unitTest_primaryProfileOverride;
    NSObject<OS_dispatch_queue> *_queue;
    HDPeriodicActivity *_periodicActivity;
}

@property(readonly, nonatomic) HDPeriodicActivity *periodicActivity; // @synthesize periodicActivity=_periodicActivity;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
// - (void).cxx_destruct;
- (id)diagnosticDescription;
- (void)unitTest_performPeriodicSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)unitTest_setPrimaryProfileOverride:(id)arg1;
- (void)_queue_generateRestoreEventMergeComplete;
- (void)_queue_setStartDateForRestoreEventSyncComplete;
- (void)databaseJournalMergeDidCompleteForProfile:(id)arg1;
- (void)_updateAggdKeysForPeriodicSyncError:(id)arg1;
- (void)performPeriodicActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_prepareAllProfilesForSync;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (id)readRestoreCompletionDateWithError:(id )arg1;
- (BOOL)persistRestoreCompletionDate:(id)arg1 withError:(id )arg2;
- (id)readErrorRequiringUserActionOnCloudSyncError:(id )arg1;
- (BOOL)persistErrorRequiringUserActionOnCloudSync:(id)arg1;
- (BOOL)_queue_isDeviceInManateeUnavailableCFUState;
- (BOOL)isDeviceInManateeUnavailableCFUState;
- (id)hasErrorRequiringUserActionOnCloudSyncTaskTree:(id)arg1;
- (id)activeTaskProgress;
- (id)lastSuccessfulPushDate;
- (id)lastSuccessfulPullDate;
- (void)_queue_finishCloudSyncTaskProgressWithResult:(long long)arg1 error:(id)arg2;
- (void)addCloudSyncProgressCompletion:(CDUnknownBlockType)arg1;
- (void)_resetPersistedPeriodicSyncErrors;
- (void)_persistPeriodicSyncError:(id)arg1;
- (BOOL)_shouldPerformLastSyncDateCheckInternalSetting;
- (id)_queue_getPersistedAccountInfo;
- (id)_lastLongTimeWithoutSuccessfulCloudSyncReportDateKeyWithError:(id )arg1;
- (void)_queue_checkLastSyncDate;
- (void)_updateCachedLastSyncDatesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_setupPeriodicActivity;
- (void)_queue_triggerSyncForAccountChange;
- (id)_fetchDescriptionForProfile:(id)arg1 options:(NSUInteger)arg2 reason:(long long)arg3 taskTree:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (id)_resetProfile:(id)arg1 options:(NSUInteger)arg2 reason:(long long)arg3 taskTree:(id)arg4;
- (id)_syncProfile:(id)arg1 options:(NSUInteger)arg2 reason:(long long)arg3 taskTree:(id)arg4;
- (BOOL)_queue_hasTooManyPendingTaskGroupsWithError:(id )arg1;
- (void)_queue_startNextTaskGroup;
- (id)_queue_disableAndDeleteCloudSyncDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)_queue_fetchCloudDescriptionWithOptions:(NSUInteger)arg1 reason:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_queue_resetAllProfilesWithOptions:(NSUInteger)arg1 reason:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_queue_syncProfilesWithIdentifiers:(id)arg1 withOptions:(NSUInteger)arg2 reason:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)_unitTest_shouldSyncProfile:(id)arg1;
- (id)_primaryProfile;
- (BOOL)_queue_canPerformCloudSyncWithError:(id )arg1;
- (BOOL)canPerformCloudSyncWithError:(id )arg1;
- (void)_setHealthAccountDataclassEnabled:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)accountConfigurationDidChangeWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 queue:(id)arg2;
- (id)fetchCloudSyncProgressWithCompletion:(CDUnknownBlockType)arg1;
- (id)disableAndDeleteAllSyncDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)enableSyncLocallyWithCompletion:(CDUnknownBlockType)arg1;
- (void)disableSyncLocallyWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchSyncStatusWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchCloudDescriptionWithOptions:(NSUInteger)arg1 reason:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)resetAllProfilesWithOptions:(NSUInteger)arg1 reason:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)syncAllProfilesWithOptions:(NSUInteger)arg1 reason:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (void)_queue_disableCloudSyncSupport;
- (void)_queue_enableCloudSyncSupport;
- (void)_queue_setupCloudSyncSupportIfRequired;
- (void)_setupCloudSyncSupportIfRequired;
- (void)daemonReady:(id)arg1;
- (id)initWithDaemon:(id)arg1;

@end

