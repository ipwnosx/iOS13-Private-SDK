//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDLogEventObserver-Protocol.h>

@class NSMutableDictionary;

@interface HMDAWDLogEventObserver : HMFObject <HMDLogEventObserver>
{
    BOOL _uploadMaximumDelayReached;
    BOOL _hasDecryptionFailed;
    BOOL _lastDecryptionFailed;
    unsigned int _pushCount;
    unsigned int _fetchCount;
    unsigned int _uploadCount;
    unsigned int _uploadErrorCount;
    unsigned int _homeManagerFetchCount;
    unsigned int _homeZoneFetchCount;
    unsigned int _homeManagerUploadCount;
    unsigned int _homeZoneUploadCount;
    NSUInteger _dataSyncState;
    NSMutableDictionary *_reasonToCountMap;
    NSMutableDictionary *_errorToCountMap;
}

+ (void)_submitAWDMetric:(id)arg1 type:(unsigned int)arg2;
+ (id)stringForMetricType:(unsigned int)arg1;
+ (id)sharedAWDServerConnection;
+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *errorToCountMap; // @synthesize errorToCountMap=_errorToCountMap;
@property(retain, nonatomic) NSMutableDictionary *reasonToCountMap; // @synthesize reasonToCountMap=_reasonToCountMap;
@property(nonatomic) unsigned int homeZoneUploadCount; // @synthesize homeZoneUploadCount=_homeZoneUploadCount;
@property(nonatomic) unsigned int homeManagerUploadCount; // @synthesize homeManagerUploadCount=_homeManagerUploadCount;
@property(nonatomic) unsigned int homeZoneFetchCount; // @synthesize homeZoneFetchCount=_homeZoneFetchCount;
@property(nonatomic) unsigned int homeManagerFetchCount; // @synthesize homeManagerFetchCount=_homeManagerFetchCount;
@property(nonatomic) NSUInteger dataSyncState; // @synthesize dataSyncState=_dataSyncState;
@property(nonatomic) BOOL lastDecryptionFailed; // @synthesize lastDecryptionFailed=_lastDecryptionFailed;
@property(nonatomic) BOOL hasDecryptionFailed; // @synthesize hasDecryptionFailed=_hasDecryptionFailed;
@property(nonatomic) unsigned int uploadErrorCount; // @synthesize uploadErrorCount=_uploadErrorCount;
@property(nonatomic) BOOL uploadMaximumDelayReached; // @synthesize uploadMaximumDelayReached=_uploadMaximumDelayReached;
@property(nonatomic) unsigned int uploadCount; // @synthesize uploadCount=_uploadCount;
@property(nonatomic) unsigned int fetchCount; // @synthesize fetchCount=_fetchCount;
@property(nonatomic) unsigned int pushCount; // @synthesize pushCount=_pushCount;
// - (void).cxx_destruct;
- (void)dispatcher:(id)arg1 didReceiveEvent:(id)arg2;
- (void)processCloudEvent:(id)arg1;
- (id)getTop:(long long)arg1 dictionary:(id)arg2;
- (void)submitCloudSyncMetric;
- (void)clearCloudSyncMetrics;
- (id)init;

@end

