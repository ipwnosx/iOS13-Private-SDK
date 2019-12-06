//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEORequestCounterProtocol-Protocol.h>

@protocol GEORequestCounterProtocol;

@interface GEORequestCounter : NSObject <GEORequestCounterProtocol>
{
    id <GEORequestCounterProtocol> _proxy;
}

+ (id)sharedCounter;
+ (void)useRemoteProxy;
+ (void)useLocalProxy;
+ (void)useProxy:(Class)arg1;
// - (void).cxx_destruct;
- (void)fetchAnalyticsHandlingDataFrom:(id)arg1 completion:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;
- (void)recordAnalyticsDBExpireCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3;
- (void)recordAnalyticsUploadFailureCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3;
- (void)recordAnalyticsUploadSuccessCount:(long long)arg1 bytes:(long long)arg2 logMsgType:(long long)arg3 at:(id)arg4;
- (void)recordAnalyticsPersistCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3;
- (void)readProactiveTileDownloadsSince:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)finishedProactiveTileDownloadForIdentifier:(id)arg1 policy:(unsigned char)arg2 tilesConsidered:(unsigned int)arg3 tileDownloadAttempts:(unsigned int)arg4 successes:(unsigned int)arg5 failures:(unsigned int)arg6 bytesDownloaded:(NSUInteger)arg7;
- (void)startedProactiveTileDownloadForIdentifier:(id)arg1 policy:(unsigned char)arg2;
- (void)fetchTrafficProbeCollectionsStartingFrom:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)recordTrafficProbeCollectionAt:(id)arg1 tripId:(id)arg2 locationCount:(int)arg3 result:(unsigned char)arg4;
- (void)clearCounters;
- (void)startPowerLogSessionWithName:(id)arg1;
- (void)readRequestLogsSince:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)readRequestsPerAppSince:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)requestCounterTicketForType:(unsigned char)arg1 appId:(id)arg2;
@property(nonatomic) BOOL countersEnabled;
- (id)init;

@end

