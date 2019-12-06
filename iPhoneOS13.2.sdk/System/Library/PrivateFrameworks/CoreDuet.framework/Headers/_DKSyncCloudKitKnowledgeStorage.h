//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/APSConnectionDelegate-Protocol.h>

@class APSConnection, CKContainer, CKServerChangeToken, NSHashTable, NSMutableDictionary, NSMutableSet, NSOperation, _CDPeriodicSchedulerJob, _DKSyncPeerStatusTracker, _DKThrottledActivity;
@protocol _DKKeyValueStore, _DKSyncRemoteKnowledgeStorageFetchDelegate;

@interface _DKSyncCloudKitKnowledgeStorage : NSObject <APSConnectionDelegate>
{
    BOOL _started;
    id <_DKKeyValueStore> _keyValueStore;
    _DKThrottledActivity *_activityThrottler;
    _DKSyncPeerStatusTracker *_tracker;
    _CDPeriodicSchedulerJob *_updateSourceDeviceIdentifiersPeriodicJob;
    BOOL _cloudSyncAvailablityObserverRegistered;
    CKContainer *_container;
    APSConnection *_connection;
    double _updateSourceDeviceIdentifiersBackoffTimeInterval;
    NSMutableDictionary *_zoneIDsBySourceDeviceID;
    NSMutableDictionary *_recordZonesByZoneID;
    BOOL _databaseChangesExist;
    BOOL _isPrewarmed;
    NSMutableSet *_zoneIDsWithAdditionChanges;
    NSMutableSet *_zoneIDsWithDeletionChanges;
    NSMutableSet *_zoneIDsWithUnrecoverableDecryptionErrors;
    CKServerChangeToken *_fetchDatabaseChangesServerChangeToken;
    NSOperation *_previousDependentOperation;
    NSHashTable *_outstandingOperations;
    BOOL _available;
    id <_DKSyncRemoteKnowledgeStorageFetchDelegate> _delegate;
}

+ (id)deviceIDFromZoneID:(id)arg1;
+ (id)zoneIDWithDeviceID:(id)arg1;
+ (void)setMySyncZoneID:(id)arg1;
+ (id)mySyncZoneID;
+ (id)sharedInstance;
@property(getter=isAvailable) BOOL available; // @synthesize available=_available;
@property(retain) id <_DKSyncRemoteKnowledgeStorageFetchDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)executionCriteriaForUpdateSourceDeviceIdentifiersPeriodicJob;
- (void)runUpdateSourceDeviceIdentifiersPeriodicJobWithCompletion:(CDUnknownBlockType)arg1;
- (void)unregisterUpdateSourceDeviceIdentifiersPeriodicJob;
- (void)registerUpdateSourceDeviceIdentifiersPeriodicJobWithCompletion:(CDUnknownBlockType)arg1;
- (void)_destroyPushConnection;
- (void)_createPushConnection;
- (long long)transportType;
- (id)name;
- (void)syncUpToCloudWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateStorageWithAddedEvents:(id)arg1 deletedEventIDs:(id)arg2 highPriority:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setFetchDelegate:(id)arg1;
- (void)fetchSourceDeviceIDFromPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchDeletionsHighWaterMarkWithPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchAdditionsHighWaterMarkWithPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)syncDownDeletionsFromCloudWithZoneID:(id)arg1 deletedRecordIDsAndTypes:(id)arg2 attempt:(NSUInteger)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_resetPreviousServerChangeTokenForRecordZoneID:(id)arg1;
- (void)_setPreviousServerChangeToken:(id)arg1 forRecordZoneID:(id)arg2;
- (id)_previousServerChangeTokenForRecordZoneID:(id)arg1;
- (id)_previousServerChangeTokenKeyForRecordZoneID:(id)arg1;
- (void)syncDownDeletionsFromCloudWithZoneID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchDeletedEventIDsFromPeer:(id)arg1 sinceDate:(id)arg2 streamNames:(id)arg3 limit:(NSUInteger)arg4 highPriority:(BOOL)arg5 completion:(CDUnknownBlockType)arg6;
- (void)syncDownAdditionsFromCloudWithZoneID:(id)arg1 windows:(id)arg2 streamNames:(id)arg3 limit:(NSUInteger)arg4 fetchOrder:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)fetchEventsFromPeer:(id)arg1 windows:(id)arg2 streamNames:(id)arg3 limit:(NSUInteger)arg4 fetchOrder:(long long)arg5 highPriority:(BOOL)arg6 completion:(CDUnknownBlockType)arg7;
- (void)commitFetchDatabaseChangesServerChangeToken;
- (void)prewarmFetchWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearPrewarmedFlag;
- (void)setPrewarmedFlag;
- (void)setHasDeletionsFlag:(BOOL)arg1 forPeer:(id)arg2;
- (BOOL)hasDeletionsFlagForPeer:(id)arg1;
- (void)setHasAdditionsFlag:(BOOL)arg1 forPeer:(id)arg2;
- (BOOL)hasAdditionsFlagForPeer:(id)arg1;
- (void)setHasZoneDeletionChanges:(BOOL)arg1 forZone:(id)arg2;
- (BOOL)hasZoneDeletionChangesForZone:(id)arg1;
- (void)setHasZoneAdditionChanges:(BOOL)arg1 forZone:(id)arg2;
- (BOOL)hasZoneAdditionChangesForZone:(id)arg1;
- (void)removeSourceDeviceIdentifierWithRecordZoneID:(id)arg1;
- (void)fastForwardPastDeletionsInNewZone:(id)arg1 sourceDeviceID:(id)arg2;
- (void)populateLastSeenDateIfNeededByPeer:(id)arg1;
- (void)configurePeerWithSourceDeviceID:(id)arg1 zoneID:(id)arg2;
- (void)addSourceDeviceIdentifierWithRecordZoneID:(id)arg1;
- (void)fetchChangedZonesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_storeZoneIDFromRecords:(id)arg1 orError:(id)arg2;
- (void)_deleteZoneWithZoneID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_createZoneWithZoneID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setZoneIDsBySourceDeviceID:(id)arg1;
- (void)configureCloudPseudoPeerWithMySyncZoneID:(id)arg1;
- (void)scheduleRetryUpdateSourceDeviceIdentifiers;
- (void)finishUpdatingSourceDeviceIdentifiersWithZoneIDsBySourceDeviceID:(id)arg1 orError:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateSourceDeviceIdentifiersWithRecordZonesByZoneID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performThrottledUpdateSourceDeviceIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)performUpdateSourceDeviceIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)_queueOperationForPrivateCloudDatabase:(id)arg1 dependent:(BOOL)arg2 policy:(id)arg3 error:(id )arg4;
- (id)_handleAnySpecialnessWithOperationError:(id)arg1;
- (void)_cloudSyncAvailabilityDidChange:(id)arg1;
- (void)_unregisterCloudSyncAvailablityObserver;
- (void)_registerDatabaseChangesSubscription;
- (void)_registerCloudSyncAvailablityObserver;
- (void)cancelOutstandingOperations;
- (BOOL)startShouldUpdateSourceDeviceIdentifiers;
- (void)finishStartOrError:(id)arg1;
- (void)finishStartBecauseCloudIsAvailable;
- (void)start;
- (void)dealloc;
- (id)init;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;

@end

