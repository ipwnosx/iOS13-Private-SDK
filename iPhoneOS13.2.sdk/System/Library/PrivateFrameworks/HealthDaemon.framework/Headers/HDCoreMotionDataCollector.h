//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDataCollector-Protocol.h>

@class HDDataCollectorMultiplexer, HDDataCollectorState, HDProfile, NSMutableDictionary, NSSet;
@protocol HDCoreMotionDataSource, OS_dispatch_queue;

@interface HDCoreMotionDataCollector : NSObject <HDDataCollector>
{
    NSSet *_quantityTypes;
    HDDataCollectorMultiplexer *_multiplexer;
    NSMutableDictionary *_lastCMDatumByType;
    id <HDCoreMotionDataSource> _dataSource;
    HDDataCollectorState *_state;
    long long _errorCount;
    NSObject<OS_dispatch_queue> *_queue;
    HDProfile *_profile;
}

@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
// - (void).cxx_destruct;
- (id)_migrateDataCollectionContextForType:(id)arg1 error:(id )arg2;
- (Class)sensorDatumClassForAggregator:(id)arg1;
- (id)identifierForDataAggregator:(id)arg1;
- (id)sourceForDataAggregator:(id)arg1;
- (void)dataAggregator:(id)arg1 wantsCollectionWithConfiguration:(id)arg2;
- (void)beginCollectionForDataAggregator:(id)arg1 lastPersistedSensorDatum:(id)arg2;
- (NSUInteger)queue_targetCollectionTypeForRequestedCollectionType:(NSUInteger)arg1;
- (id)persistentIdentifier;
- (double)queue_differenceFromDatum:(id)arg1 toDatum:(id)arg2 type:(id)arg3;
- (id)queue_newDataSource;
- (id)collectedTypes;
- (Class)coreMotionDatumClass;
- (void)_accessToFitnessDataDidChange:(id)arg1;
- (void)_queue_beginUpdatesWithTargetCollectionType:(NSUInteger)arg1;
- (void)_queue_populateLastDatumDictionary;
- (id)_queue_lastPersistedSensorDatumForType:(id)arg1;
- (void)_queue_updateCollectionType:(NSUInteger)arg1;
- (void)didReceiveCoreMotionData:(id)arg1 startingDatum:(id)arg2 error:(id)arg3;
- (id)_queue_diagnosticDescription;
- (void)_queue_forwardCoreMotionData:(id)arg1;
- (void)_queue_forwardCoreMotionData:(id)arg1 forType:(id)arg2;
- (id)coreMotionDatumFromSensorDatum:(id)arg1;
- (void)queue_recomputeCurrentState;
- (void)registerWithAggregators;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;

@end

