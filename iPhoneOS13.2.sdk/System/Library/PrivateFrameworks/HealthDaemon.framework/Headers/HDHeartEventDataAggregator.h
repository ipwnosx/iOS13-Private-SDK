//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDPassiveDataAggregator.h>

@interface HDHeartEventDataAggregator : HDPassiveDataAggregator
{
}

- (BOOL)didPersistObjects:(id)arg1 lastDatum:(id)arg2 collector:(id)arg3 error:(id )arg4;
- (id)dataObjectsFromSensorDatum:(id)arg1 error:(id )arg2;
- (Class)sensorDatumClass;
- (id)_categoryType;
- (id)objectType;

@end

