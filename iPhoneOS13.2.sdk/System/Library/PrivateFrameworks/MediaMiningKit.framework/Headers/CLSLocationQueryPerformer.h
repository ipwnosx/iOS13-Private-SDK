//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/CLSQueryPerformerProtocol-Protocol.h>

@class NSArray;
@protocol GEOMapServiceTicket, OS_os_log;

@interface CLSLocationQueryPerformer : NSObject <CLSQueryPerformerProtocol>
{
    BOOL _isCancelled;
    NSArray *_geoLocations;
    id <GEOMapServiceTicket> _ticket;
    NSArray *_regions;
    double _precision;
    NSObject<OS_os_log> *_loggingConnection;
//     CDStruct_95c2efd7 _statistics;
}

+ (double)defaultPrecision;
+ (NSUInteger)numberOfRegionsPerBatch;
+ (id)queryWithTemplate:(id)arg1 forRegions:(id)arg2;
@property(nonatomic) NSObject<OS_os_log> *loggingConnection; // @synthesize loggingConnection=_loggingConnection;
@property(nonatomic) double precision; // @synthesize precision=_precision;
// @property(nonatomic) CDStruct_95c2efd7 statistics; // @synthesize statistics=_statistics;
@property(readonly, nonatomic) BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property(readonly, copy, nonatomic) NSArray *regions; // @synthesize regions=_regions;
@property(readonly, nonatomic) id <GEOMapServiceTicket> ticket; // @synthesize ticket=_ticket;
@property(readonly, nonatomic) NSArray *geoLocations; // @synthesize geoLocations=_geoLocations;
// - (void).cxx_destruct;
- (void)logAggdGeoLookupFailureResult;
- (void)logAggdGeoLookupCounterAndDurationWithLookupDuration:(id)arg1;
- (BOOL)shouldQueryItemsForRegion:(id)arg1 selectedRegions:(id)arg2;
- (void)cancel;
- (void)submitWithHandler:(CDUnknownBlockType)arg1;
- (NSUInteger)cacheItems:(id)arg1;
- (id)initWithRegions:(id)arg1 precision:(double)arg2;
- (id)init;

@end

