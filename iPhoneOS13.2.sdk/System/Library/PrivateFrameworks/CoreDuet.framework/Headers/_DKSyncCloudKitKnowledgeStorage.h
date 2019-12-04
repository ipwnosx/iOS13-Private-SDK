//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/APSConnectionDelegate-Protocol.h>

@class APSConnection, CKContainer, CKServerChangeToken, NSHashTable, NSMutableDictionary, NSMutableSet, NSOperation, NSString, _CDPeriodicSchedulerJob, _DKSyncPeerStatusTracker, _DKThrottledActivity;
@protocol _DKKeyValueStore, _DKSyncRemoteKnowledgeStorageFetchDelegate;

@interface _DKSyncCloudKitKnowledgeStorage : NSObject <APSConnectionDelegate>
{
    _Bool _started;
    id <_DKKeyValueStore> _keyValueStore;
    _DKThrottledActivity *_activityThrottler;
    _DKSyncPeerStatusTracker *_tracker;
    _CDPeriodicSchedulerJob *_updateSourceDeviceIdentifiersPeriodicJob;
    _Bool _cloudSyncAvailablityObserverRegistered;
    CKContainer *_container;
    APSConnection *_connection;
    double _updateSourceDeviceIdentifiersBackoffTimeInterval;
    NSMutableDictionary *_zoneIDsBySourceDeviceID;
    NSMutableDictionary *_recordZonesByZoneID;
    _Bool _databaseChangesExist;
    _Bool _isPrewarmed;
    NSMutableSet *_zoneIDsWithAdditionChanges;
    NSMutableSet *_zoneIDsWithDeletionChanges;
    NSMutableSet *_zoneIDsWithUnrecoverableDecryptionErrors;
    CKServerChangeToken *_fetchDatabaseChangesServerChangeToken;
    NSOperation *_previousDependentOperation;
    NSHashTable *_outstandingOperations;
    _Bool _available;
    id <_DKSyncRemoteKnowledgeStorageFetchDelegate> _delegate;
}

+ (id)deviceIDFromZoneID:(id)arg1;
+ (id)zoneIDWithDeviceID:(id)arg1;
+ (void)setMySyncZoneID:(id)arg1;
+ (id)mySyncZoneID;
+ (id)sharedInstance;
@property(getter=isAvailable) _Bool available; // @synthesize available=_available;
@property(retain) id <_DKSyncRemoteKnowledgeStorageFetchDelegate> delegate; // @synthesize delegate=_delegate;
- (id)executionCriteriaForUpdateSourceDeviceIdentifiersPeriodicJob;
- (void)runUpdateSourceDeviceIdentifiersPeriodicJobWithCompletion:(id /* block */)arg1;
- (void)unregisterUpdateSourceDeviceIdentifiersPeriodicJob;
- (void)registerUpdateSourceDeviceIdentifiersPeriodicJobWithCompletion:(id /* block */)arg1;
- (void)_destroyPushConnection;
- (void)_createPushConnection;
- (long long)transportType;
- (id)name;
- (void)syncUpToCloudWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2 completion:(id /* block */)arg3;
- (void)updateStorageWithAddedEvents:(id)arg1 deletedEventIDs:(id)arg2 highPriority:(_Bool)arg3 completion:(id /* block */)arg4;
- (void)setFetchDelegate:(id)arg1;
- (void)fetchSourceDeviceIDFromPeer:(id)arg1 highPriority:(_Bool)arg2 completion:(id /* block */)arg3;
- (void)fetchDeletionsHighWaterMarkWithPeer:(id)arg1 highPriority:(_Bool)arg2 completion:(id /* block */)arg3;
- (void)fetchAdditionsHighWaterMarkWithPeer:(id)arg1 highPriority:(_Bool)arg2 completion:(id /* block */)arg3;
- (void)syncDownDeletionsFromCloudWithZoneID:(id)arg1 deletedRecordIDsAndTypes:(id)arg2 attempt:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)_resetPreviousServerChangeTokenForRecordZoneID:(id)arg1;
- (void)_setPreviousServerChangeToken:(id)arg1 forRecordZoneID:(id)arg2;
- (id)_previousServerChangeTokenForRecordZoneID:(id)arg1;
- (id)_previousServerChangeTokenKeyForRecordZoneID:(id)arg1;
- (void)syncDownDeletionsFromCloudWithZoneID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchDeletedEventIDsFromPeer:(id)arg1 sinceDate:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 highPriority:(_Bool)arg5 completion:(id /* block */)arg6;
- (void)syncDownAdditionsFromCloudWithZoneID:(id)arg1 windows:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 completion:(id /* block */)arg6;
- (void)fetchEventsFromPeer:(id)arg1 windows:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 highPriority:(_Bool)arg6 completion:(id /* block */)arg7;
- (void)commitFetchDatabaseChangesServerChangeToken;
- (void)prewarmFetchWithCompletion:(id /* block */)arg1;
- (void)clearPrewarmedFlag;
- (void)setPrewarmedFlag;
- (void)setHasDeletionsFlag:(_Bool)arg1 forPeer:(id)arg2;
- (_Bool)hasDeletionsFlagForPeer:(id)arg1;
- (void)setHasAdditionsFlag:(_Bool)arg1 forPeer:(id)arg2;
- (_Bool)hasAdditionsFlagForPeer:(id)arg1;
- (void)setHasZoneDeletionChanges:(_Bool)arg1 forZone:(id)arg2;
- (_Bool)hasZoneDeletionChangesForZone:(id)arg1;
- (void)setHasZoneAdditionChanges:(_Bool)arg1 forZone:(id)arg2;
- (_Bool)hasZoneAdditionChangesForZone:(id)arg1;
- (void)removeSourceDeviceIdentifierWithRecordZoneID:(id)arg1;
- (void)fastForwardPastDeletionsInNewZone:(id)arg1 sourceDeviceID:(id)arg2;
- (void)populateLastSeenDateIfNeededByPeer:(id)arg1;
- (void)configurePeerWithSourceDeviceID:(id)arg1 zoneID:(id)arg2;
- (void)addSourceDeviceIdentifierWithRecordZoneID:(id)arg1;
- (void)fetchChangedZonesWithCompletion:(id /* block */)arg1;
- (void)_storeZoneIDFromRecords:(id)arg1 orError:(id)arg2;
- (void)_deleteZoneWithZoneID:(id)arg1 completion:(id /* block */)arg2;
- (void)_createZoneWithZoneID:(id)arg1 completion:(id /* block */)arg2;
- (void)setZoneIDsBySourceDeviceID:(id)arg1;
- (void)configureCloudPseudoPeerWithMySyncZoneID:(id)arg1;
- (void)scheduleRetryUpdateSourceDeviceIdentifiers;
- (void)finishUpdatingSourceDeviceIdentifiersWithZoneIDsBySourceDeviceID:(id)arg1 orError:(id)arg2 completion:(id /* block */)arg3;
- (void)updateSourceDeviceIdentifiersWithRecordZonesByZoneID:(id)arg1 completion:(id /* block */)arg2;
- (void)_performThrottledUpdateSourceDeviceIdentifiersWithCompletion:(id /* block */)arg1;
- (void)performUpdateSourceDeviceIdentifiersWithCompletion:(id /* block */)arg1;
- (_Bool)_queueOperationForPrivateCloudDatabase:(id)arg1 dependent:(_Bool)arg2 policy:(id)arg3 error:(id *)arg4;
- (id)_handleAnySpecialnessWithOperationError:(id)arg1;
- (void)_cloudSyncAvailabilityDidChange:(id)arg1;
- (void)_unregisterCloudSyncAvailablityObserver;
- (void)_registerDatabaseChangesSubscription;
- (void)_registerCloudSyncAvailablityObserver;
- (void)cancelOutstandingOperations;
- (_Bool)startShouldUpdateSourceDeviceIdentifiers;
- (void)finishStartOrError:(id)arg1;
- (void)finishStartBecauseCloudIsAvailable;
- (void)start;
- (void)dealloc;
- (id)init;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
