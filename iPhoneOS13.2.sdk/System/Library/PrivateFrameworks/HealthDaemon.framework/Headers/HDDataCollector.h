//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDHealthDataCollector-Protocol.h>

@class HDDeviceEntity, HDPrimaryProfile, HDProfile, HDSourceEntity, HKObjectType;
@protocol OS_dispatch_queue;

@interface HDDataCollector : NSObject <HDHealthDataCollector>
{
    HDPrimaryProfile *_primaryProfile;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    HKObjectType *_observedType;
    HDDeviceEntity *_deviceEntity;
    long long _state;
    double _collectionInterval;
    long long _failureRetryCount;
    BOOL _disabled;
    HDSourceEntity *_sourceEntity;
}

+ (id)secondaryContextClasses;
+ (Class)sensorDatumClass;
+ (id)domain;
+ (id)observedType;
+ (id)_lastReceivedSensorDatumForProfile:(id)arg1;
+ (BOOL)_primaryContextExistsForDomain:(id)arg1 profile:(id)arg2;
+ (id)_sensorDatumFromContext:(id)arg1;
+ (double)defaultCollectionInterval;
+ (id)_retrieveContextForKey:(id)arg1 domain:(id)arg2 profile:(id)arg3;
@property(readonly) HDSourceEntity *sourceEntity; // @synthesize sourceEntity=_sourceEntity;
// - (void).cxx_destruct;
- (void)_queue_retryFromFailure;
- (BOOL)_queue_shouldRetryFromFailure;
- (void)_queue_incrementFailureRetryCounter;
- (void)_queue_resetFailureRetryCounter;
- (id)deviceEntity;
- (void)stopPerformingUpdatesWithErrorEncountered:(BOOL)arg1;
- (id)dataCollectorDiagnosticDescription;
- (void)updateHistoricalDataForcedUpdate:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateHistoricalDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateHistoricalData;
- (void)collectionStoppedForType:(id)arg1;
- (void)updateCollectionInterval:(double)arg1 forType:(id)arg2;
- (void)collectionStartedForType:(id)arg1 collectionInterval:(double)arg2;
- (void)_queue_updateCollectionInterval:(double)arg1;
- (void)_queue_transitionToIdle;
- (void)_queue_transitionToStreaming;
- (void)_queue_transitionToFailure;
- (void)_queue_beginStreaming;
- (void)_queue_beginStreamingIfNecessary;
- (id)_queue_deviceEntity;
- (BOOL)_queue_streaming;
@property BOOL disabled;
- (void)setCollectionInterval:(double)arg1;
- (double)collectionInterval;
- (BOOL)_queue_disabled;
- (void)_queue_receivedData;
- (id)_dictionaryFromContext:(id)arg1;
- (id)_sensorDatumFromContext:(id)arg1;
- (id)_contextFromDictionary:(id)arg1;
- (id)_contextFromSensorDatum:(id)arg1;
- (id)_retrieveSecondaryContext;
- (id)_retrievePrimaryContext;
- (BOOL)_persistSecondaryContext:(id)arg1;
- (BOOL)_persistPrimaryContext:(id)arg1;
- (id)_retrieveContextForKey:(id)arg1;
- (BOOL)_persistContext:(id)arg1 forKey:(id)arg2;
- (void)_performSync:(CDUnknownBlockType)arg1;
- (void)_performAsync:(CDUnknownBlockType)arg1;
- (id)initWithPrimaryProfile:(id)arg1;
- (id)initWithProfile:(id)arg1;

@end

