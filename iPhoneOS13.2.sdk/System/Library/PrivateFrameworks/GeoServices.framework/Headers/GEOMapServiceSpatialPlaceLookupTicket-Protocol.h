//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class GEOApplicationAuditToken, GEOMapServiceTraits, NSArray, NSObject;
@protocol OS_dispatch_queue;

@protocol GEOMapServiceSpatialPlaceLookupTicket <NSObject>
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
@property(readonly, nonatomic) NSArray *parameters;
- (void)cancel;
- (void)submitWithHandler:(void (^)(GEOSpatialPlaceLookupResult *, NSError *))arg1 auditToken:(GEOApplicationAuditToken *)arg2 queue:(NSObject<OS_dispatch_queue> *)arg3;
- (void)submitWithHandler:(void (^)(GEOSpatialPlaceLookupResult *, NSError *))arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
@end

