//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/APSConnectionDelegate-Protocol.h>

@class APSConnection, CKContainer, CKDatabase, HMDCloudCache, HMDCloudDataSyncStateFilter, HMDCloudHomeManagerZone, HMDCloudLegacyZone, HMDCloudMetadataZone, HMDHomeManager, HMDSyncOperationManager, HMFMessageDispatcher, NSData, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HMDCloudManager : HMFObject <APSConnectionDelegate>
{
    BOOL _accountActive;
    BOOL _cloudHomeDataRecordExists;
    BOOL _keychainSyncEnabled;
    BOOL _firstV3FetchRun;
    BOOL _firstDBQueryRun;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CKContainer *_container;
    CKDatabase *_database;
    HMDCloudCache *_cloudCache;
    HMFMessageDispatcher *_configSyncDispatcher;
    NSObject<OS_dispatch_queue> *_workQueue;
    id /* CDUnknownBlockType */ _fetchCompletionHandler;
    NSObject<OS_dispatch_queue> *_clientCallbackQueue;
    NSObject<OS_dispatch_source> *_retryTimer;
    NSObject<OS_dispatch_source> *_pollTimer;
    NSObject<OS_dispatch_source> *_controllerKeyPollTimer;
    NSObject<OS_dispatch_source> *_watchdogControllerKeyPollTimer;
    APSConnection *_pushConnection;
    id /* CDUnknownBlockType */ _cloudDataDeletedNotificationHandler;
    id /* CDUnknownBlockType */ _cloudMetadataDeletedNotificationHandler;
    id /* CDUnknownBlockType */ _controllerKeyAvailableNotificationHandler;
    HMDCloudDataSyncStateFilter *_cloudDataSyncStateFilter;
    HMFMessageDispatcher *_msgDispatcher;
    HMDHomeManager *_homeManager;
    HMDSyncOperationManager *_syncManager;
    NSMutableArray *_currentBackoffTimerValuesInMinutes;
    id /* CDUnknownBlockType */ _dataDecryptionFailedHandler;
    id /* CDUnknownBlockType */ _accountActiveUpdateHandler;
}

+ (BOOL)isControllerKeyAvailable;
@property(nonatomic, getter=isFirstDBQueryRun) BOOL firstDBQueryRun; // @synthesize firstDBQueryRun=_firstDBQueryRun;
@property(nonatomic, getter=isFirstV3FetchRun) BOOL firstV3FetchRun; // @synthesize firstV3FetchRun=_firstV3FetchRun;
@property(copy, nonatomic) id /* CDUnknownBlockType */ accountActiveUpdateHandler; // @synthesize accountActiveUpdateHandler=_accountActiveUpdateHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ dataDecryptionFailedHandler; // @synthesize dataDecryptionFailedHandler=_dataDecryptionFailedHandler;
@property(retain, nonatomic) NSMutableArray *currentBackoffTimerValuesInMinutes; // @synthesize currentBackoffTimerValuesInMinutes=_currentBackoffTimerValuesInMinutes;
@property(nonatomic) __weak HMDSyncOperationManager *syncManager; // @synthesize syncManager=_syncManager;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) HMDCloudDataSyncStateFilter *cloudDataSyncStateFilter; // @synthesize cloudDataSyncStateFilter=_cloudDataSyncStateFilter;
@property(copy, nonatomic) id /* CDUnknownBlockType */ controllerKeyAvailableNotificationHandler; // @synthesize controllerKeyAvailableNotificationHandler=_controllerKeyAvailableNotificationHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ cloudMetadataDeletedNotificationHandler; // @synthesize cloudMetadataDeletedNotificationHandler=_cloudMetadataDeletedNotificationHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ cloudDataDeletedNotificationHandler; // @synthesize cloudDataDeletedNotificationHandler=_cloudDataDeletedNotificationHandler;
@property(retain, nonatomic) APSConnection *pushConnection; // @synthesize pushConnection=_pushConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *watchdogControllerKeyPollTimer; // @synthesize watchdogControllerKeyPollTimer=_watchdogControllerKeyPollTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *controllerKeyPollTimer; // @synthesize controllerKeyPollTimer=_controllerKeyPollTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *pollTimer; // @synthesize pollTimer=_pollTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *retryTimer; // @synthesize retryTimer=_retryTimer;
@property(nonatomic) BOOL keychainSyncEnabled; // @synthesize keychainSyncEnabled=_keychainSyncEnabled;
@property(nonatomic) BOOL cloudHomeDataRecordExists; // @synthesize cloudHomeDataRecordExists=_cloudHomeDataRecordExists;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientCallbackQueue; // @synthesize clientCallbackQueue=_clientCallbackQueue;
@property(copy, nonatomic) id /* CDUnknownBlockType */ fetchCompletionHandler; // @synthesize fetchCompletionHandler=_fetchCompletionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) HMFMessageDispatcher *configSyncDispatcher; // @synthesize configSyncDispatcher=_configSyncDispatcher;
@property(retain, nonatomic) HMDCloudCache *cloudCache; // @synthesize cloudCache=_cloudCache;
@property(retain, nonatomic) CKDatabase *database; // @synthesize database=_database;
@property(retain, nonatomic) CKContainer *container; // @synthesize container=_container;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(nonatomic) BOOL accountActive; // @synthesize accountActive=_accountActive;
// - (void).cxx_destruct;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)_fetchDatabaseZoneChangesCompletion:(CDUnknownBlockType)arg1;
- (void)fetchDatabaseZoneChanges;
- (void)_scheduleZoneFetch:(id)arg1;
- (void)_registerForPushNotifications;
- (void)_setupSubscriptionForZone:(id)arg1;
- (void)_registerForProxSetupNotifications;
- (void)_auditProxSetupNotification:(id)arg1;
- (void)_stopControllerKeyPollTimer;
- (void)_startControllerKeyPollTimerWithValue:(long long)arg1;
- (void)_startControllerKeyPollTimerWithBackoff;
- (void)_startControllerKeyPollTimer;
- (void)_stopWatchdogControllerKeyPollTimer;
- (void)_startWatchdogControllerKeyPollTimer;
- (void)_handleControllerKeyAvailable;
- (void)_handleKeychainSyncStateChanged:(BOOL)arg1;
- (void)handleKeychainStateChangedNotification:(id)arg1;
- (void)_stopFetchPollTimer;
- (void)_startFetchPollTimer;
- (void)_stopFetchRetryTimer;
- (void)_startFetchRetryTimer;
- (void)_updateServerTokenStatusOnCloudFilter;
- (void)updateServerTokenStatusOnCloudFilter;
- (void)initializeServerTokenStatusOnCloudFilter;
- (BOOL)_validFetchRetryCKErrorCode:(long long)arg1;
- (void)_forceCleanCloud:(BOOL)arg1 fetchTransaction:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateCloudDataSyncFilterState:(BOOL)arg1;
- (void)_accountIsActive;
- (void)_createZoneAndFetchChanges:(CDUnknownBlockType)arg1;
- (void)_verifyZonesExist:(id)arg1 zoneIndex:(NSUInteger)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_resetHomeDataRecordState;
- (id)_changeTokenFromData:(id)arg1;
- (void)_handleAccountStatus:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateAccountStatusChanged:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_processFetchCompletedWithError:(id)arg1 serverToken:(id)arg2 fetchTransaction:(id)arg3 migrationOptions:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5 moreRecordsComing:(BOOL)arg6 emptyRecord:(BOOL)arg7;
- (BOOL)_processFetchedTransaction:(id)arg1;
- (void)_fetchLegacyTransaction:(id)arg1 forceFetch:(BOOL)arg2 accountCompletionHandler:(CDUnknownBlockType)arg3 dataCompletionHandler:(CDUnknownBlockType)arg4;
- (void)fetchLegacyTransaction:(id)arg1 forceFetch:(BOOL)arg2 accountCompletionHandler:(CDUnknownBlockType)arg3 dataCompletionHandler:(CDUnknownBlockType)arg4;
- (void)setAccountActiveUpdateCallback:(CDUnknownBlockType)arg1;
- (void)setDataDecryptionFailedCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setControllerKeyAvailableNotificationBlock:(CDUnknownBlockType)arg1;
- (void)setCloudMetadataDeletedNotificationBlock:(CDUnknownBlockType)arg1;
- (void)setCloudDataDeletedNotificationBlock:(CDUnknownBlockType)arg1;
- (void)setDataAvailableFromCloudCompletionBlock:(CDUnknownBlockType)arg1;
- (void)fetchCurrentAccountStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_serverTokenData;
@property(readonly, nonatomic) NSData *serverTokenData;
@property(readonly, nonatomic) BOOL decryptionFailed;
- (void)_resetCloudCache:(CDUnknownBlockType)arg1;
- (void)resetCloudCache:(CDUnknownBlockType)arg1;
- (void)_resetCloudServerTokenData;
- (void)resetCloudServerTokenData:(id)arg1;
- (void)_resetCloudDataAndDeleteMetadataForCurrentAccount:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_resetCloudZonesIgnoreHomeManager:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeAllHomeZonesCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resetCloudDataAndDeleteMetadataForCurrentAccount:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_fetchAndVerifyZoneRootRecord:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_uploadLegacyTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)uploadLegacyTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeZonesTransactions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeZonesTransactions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_uploadTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_checkZoneAndUploadTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_verifyZoneHasBeenDeletedTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_createZoneAndUploadTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)uploadTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_fetchTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeHomeZoneName:(id)arg1;
- (void)removeHomeZoneName:(id)arg1;
- (void)_addHomeZoneName:(id)arg1 owner:(id)arg2;
- (void)addHomeZoneName:(id)arg1 owner:(id)arg2;
@property(readonly, nonatomic) HMDCloudHomeManagerZone *homeManagerZone;
@property(readonly, nonatomic) HMDCloudMetadataZone *metadataZone;
- (BOOL)legacyZoneHasRecordsAvaliable;
@property(readonly, nonatomic) HMDCloudLegacyZone *legacyZone;
- (void)__deleteRecordWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)__deleteRecordZonesWithIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)__deleteRecordZoneWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)__saveRecordZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)__fetchRecordZoneWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)__fetchAllRecordZonesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)__saveSubscription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)__fetchSubscriptionWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)__addCKDatabaseOperation:(id)arg1;
- (void)dealloc;
- (id)initWithMessageDispatcher:(id)arg1 cloudDataSyncStateFilter:(id)arg2 cloudCache:(id)arg3 homeManager:(id)arg4 syncManager:(id)arg5 callbackQueue:(id)arg6;

@end

