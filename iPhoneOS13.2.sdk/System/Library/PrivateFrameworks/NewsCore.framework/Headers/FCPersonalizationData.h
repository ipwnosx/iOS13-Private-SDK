//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCPrivateDataController.h>

#import <NewsCore/FCAppActivityObserving-Protocol.h>
#import <NewsCore/FCCoreConfigurationObserving-Protocol.h>
#import <NewsCore/FCDerivedPersonalizationData-Protocol.h>
#import <NewsCore/FCOperationThrottlerDelegate-Protocol.h>

@class CKRecord, FCPersonalizationTreatment, NSData, NSMutableArray, NSMutableDictionary, NSObject;
@protocol FCOperationThrottler, OS_dispatch_queue;

@interface FCPersonalizationData : FCPrivateDataController <FCOperationThrottlerDelegate, FCCoreConfigurationObserving, FCAppActivityObserving, FCDerivedPersonalizationData>
{
    BOOL _attemptingUpload;
    NSData *_pbData;
    NSMutableDictionary *_aggregates;
    NSMutableDictionary *_openChangeGroupDeltas;
    NSMutableArray *_closedChangeGroups;
    CKRecord *_remoteRecord;
    NSObject<OS_dispatch_queue> *_accessQueue;
    FCPersonalizationTreatment *_treatment;
    id <FCOperationThrottler> _saveThrottler;
}

+ (void)configureKeyValueStoreForJSONHandling:(id)arg1;
+ (id)localStoreMigrator;
+ (id)desiredKeys;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (NSUInteger)localStoreVersion;
+ (id)localStoreFilename;
+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (BOOL)requiresHighPriorityFirstSync;
+ (BOOL)requiresBatchedSync;
+ (BOOL)requiresPushNotificationSupport;
@property BOOL attemptingUpload; // @synthesize attemptingUpload=_attemptingUpload;
@property(retain, nonatomic) id <FCOperationThrottler> saveThrottler; // @synthesize saveThrottler=_saveThrottler;
@property(retain) FCPersonalizationTreatment *treatment; // @synthesize treatment=_treatment;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(retain, nonatomic) CKRecord *remoteRecord; // @synthesize remoteRecord=_remoteRecord;
@property(retain, nonatomic) NSMutableArray *closedChangeGroups; // @synthesize closedChangeGroups=_closedChangeGroups;
@property(retain, nonatomic) NSMutableDictionary *openChangeGroupDeltas; // @synthesize openChangeGroupDeltas=_openChangeGroupDeltas;
@property(retain, nonatomic) NSMutableDictionary *aggregates; // @synthesize aggregates=_aggregates;
@property(readonly, nonatomic) NSData *pbData; // @synthesize pbData=_pbData;
// - (void).cxx_destruct;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(CDUnknownBlockType)arg2;
- (void)configurationManager:(id)arg1 configurationDidChange:(id)arg2;
- (id)aggregateForFeatureKey:(id)arg1;
- (void)enumerateAggregatesUsingBlock:(CDUnknownBlockType)arg1;
- (id)aggregatesForFeatureKeys:(id)arg1;
- (void)activityObservingApplicationDidEnterBackground;
- (void)_reloadTreatment;
- (void)_applicationDidEnterBackground;
- (void)_closeOpenChangeGroupFromInstance:(id)arg1;
- (void)_writeToLocalStoreWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_updateWithRemoteRecord:(id)arg1 profile:(id)arg2;
- (id)_instanceIdentifier;
- (id)recordsForRestoringZoneName:(id)arg1;
- (BOOL)canHelpRestoreZoneName:(id)arg1;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2;
- (void)loadLocalCachesFromStore;
- (void)syncWithCompletion:(CDUnknownBlockType)arg1;
- (void)generateDerivedDataWithQualityOfService:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)d_allGlobalAggregates;
- (void)clearPersonalizationData;
- (id)modifyLocalAggregatesForFeatureKeys:(id)arg1 withAction:(NSUInteger)arg2 actionCount:(NSUInteger)arg3 defaultClicks:(double)arg4 defaultImpressions:(double)arg5 impressionBias:(double)arg6;
@property(readonly, nonatomic) FCPersonalizationTreatment *personalizationTreatment;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithPBData:(id)arg1 treatment:(id)arg2;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3;
- (void)d_allResults:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareAggregatesForUseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateFeatures:(id)arg1 withAction:(NSUInteger)arg2 displayRank:(long long)arg3 groupRank:(long long)arg4 individually:(BOOL)arg5 configurableValues:(id)arg6 featuresUpdatedBlock:(CDUnknownBlockType)arg7;
- (id)aggregatesForFeatures:(id)arg1;
- (id)baselineAggregateWithConfigurableValues:(id)arg1;

@end

