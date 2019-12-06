//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDDataCollector.h>

@class NSDictionary, _HKDelayedOperation;
@protocol HDSensorDatum;

@interface HDAggregateDataCollector : HDDataCollector
{
    _HKDelayedOperation *_historicalFetchOperation;
    id <HDSensorDatum> _lastReceivedSensorDatum;
    BOOL _didReceiveSensorDatum;
    NSDictionary *_lastReceivedSecondaryContext;
    BOOL _fetchingHistoricalData;
    BOOL _needsHistoricalFetch;
    double _maxDatumDuration;
}

// - (void).cxx_destruct;
- (void)willPersistHKObjects:(id)arg1;
- (id)hkObjectsFromSensorData:(id)arg1 baseSensorDatum:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (void)fetchHistoricalSensorDataSinceDatum:(id)arg1 databaseIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)beginUpdatesFromDatum:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)updateHistoricalDataForcedUpdate:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateHistoricalDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateHistoricalData;
- (id)_queue_processSensorDataBatched:(id)arg1 firstDatum:(id)arg2 lastSensorDatum:(id )arg3;
- (void)_queue_processSensorData:(id)arg1 lastSensorDatum:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queue_fetchHistoricalDataForcedUpdate:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_fetchHistoricalDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_handleUpdatingHistoricalDataForcedUpdate:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_handleUpdatingHistoricalDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_handleCMDatabaseReset;
- (void)_queue_updateLastReceivedSecondaryContext:(id)arg1;
- (void)_queue_updateLastReceivedSensorDatum:(id)arg1;
- (id)_queue_lastReceivedSecondaryContext;
- (id)_queue_lastReceivedSensorDatum;
- (void)_queue_beginUpdates;
- (void)_queue_beginStreaming;
@property(readonly, nonatomic) BOOL requiresSampleAggregation;
- (double)_queue_maxDatumDuration;
@property double maxDatumDuration;
- (double)_queue_aggregationInterval;
- (void)_queue_executeHistoricalFetchOperation;
- (id)initWithProfile:(id)arg1;

@end

