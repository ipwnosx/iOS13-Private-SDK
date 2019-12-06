//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSDate, NSDateInterval, NSSet, NSUUID, SPBeacon, SPCommand;

@protocol SPOwnerSessionXPCProtocol <NSObject>
- (oneway void)executeCommand:(SPCommand *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)rawSearchResultsForIdentifier:(NSUUID *)arg1 dateInterval:(NSDateInterval *)arg2 completion:(void (^)(NSArray *))arg3;
- (oneway void)latestLocationsForIdentifiers:(NSArray *)arg1 fetchLimit:(NSDate *)arg2 sources:(NSSet *)arg3 completion:(void (^)(NSDictionary *))arg4;
- (oneway void)removeBeacon:(SPBeacon *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)unacceptedBeaconsWithCompletion:(void (^)(NSSet *))arg1;
- (oneway void)allBeaconsWithCompletion:(void (^)(NSSet *))arg1;
- (oneway void)forceDistributeKeysWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)beaconForUUID:(NSUUID *)arg1 completion:(void (^)(SPBeacon *))arg2;
@end

