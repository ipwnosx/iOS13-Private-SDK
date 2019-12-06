//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSPersistentContainer;

@interface TransparencyManagedDataStore : NSObject
{
    NSManagedObjectContext *_context;
    NSPersistentContainer *_persistentContainer;
    _Atomic long long _sequenceId;
}

+ (id)deserializeLoggableDatas:(id)arg1 error:(id )arg2;
+ (id)serializeLoggableDatas:(id)arg1;
+ (void)reportCoreDataEventForEntity:(id)arg1 write:(BOOL)arg2 code:(long long)arg3 underlyingError:(id)arg4;
@property _Atomic long long sequenceId; // @synthesize sequenceId=_sequenceId;
@property(retain) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
// - (void).cxx_destruct;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;
- (BOOL)performAndWaitForRequestId:(id)arg1 error:(id )arg2 block:(CDUnknownBlockType)arg3;
- (void)performOnRequestsForPredicate:(id)arg1 error:(id )arg2 block:(CDUnknownBlockType)arg3;
- (void)performOnBatchesOfEntity:(id)arg1 predicate:(id)arg2 error:(id )arg3 block:(CDUnknownBlockType)arg4;
- (id)copyStatistics:(id )arg1;
- (BOOL)clearStateForApplication:(id)arg1 error:(id )arg2;
- (BOOL)persistAndRefaultObject:(id)arg1 error:(id )arg2;
- (BOOL)persistWithError:(id )arg1;
- (void)refaultObject:(id)arg1;
- (BOOL)logMetricsForApplication:(id)arg1 error:(id )arg2;
- (BOOL)logSTHMetricsForApplication:(id)arg1 error:(id )arg2;
- (BOOL)logSMTMetricsForApplication:(id)arg1 error:(id )arg2;
- (BOOL)logRequestMetricsForApplication:(id)arg1 error:(id )arg2;
- (NSUInteger)countTotalSTHsForApplication:(id)arg1 error:(id )arg2;
- (NSUInteger)countOutstandingSTHsForApplication:(id)arg1 error:(id )arg2;
- (NSUInteger)countTotalSMTsForApplication:(id)arg1 error:(id )arg2;
- (NSUInteger)countOutstandingSMTsForApplication:(id)arg1 error:(id )arg2;
- (NSUInteger)countTotalRequestsForApplication:(id)arg1 error:(id )arg2;
- (NSUInteger)countOutstandingRequestsForApplication:(id)arg1 error:(id )arg2;
- (BOOL)deleteSMTs:(id)arg1 mutationTimeLessThan:(NSUInteger)arg2 error:(id )arg3;
- (BOOL)resetRequestsToPending:(id)arg1 error:(id )arg2;
- (BOOL)deleteSTHs:(id)arg1 logBeginMsLessThan:(NSUInteger)arg2 error:(id )arg3;
- (void)garbageCollectRequests:(id)arg1 olderThan:(id)arg2 error:(id )arg3;
- (void)deleteCompletedRequest:(id)arg1;
- (BOOL)clearState:(id )arg1;
- (void)deleteObjectSet:(id)arg1;
- (void)deleteObject:(id)arg1;
- (id)createSignedTreeHeadFailure;
- (id)createTreeHead;
- (id)createSignedMutationTimestampsFailure;
- (id)fetchPendingSMTsForUri:(id)arg1 uri:(id)arg2 accountId:(id)arg3 error:(id )arg4;
- (id)fetchSMTsWithUnverifiedSignature:(id)arg1 error:(id )arg2;
- (id)createSignedMutationTimestamp:(id)arg1 mutationMs:(NSUInteger)arg2 receiptTime:(double)arg3;
- (id)createRequestFailure;
- (id)fetchCompletedRequests:(id)arg1 olderThan:(id)arg2 error:(id )arg3;
- (id)fetchRequestsWithPendingResponses:(id)arg1 error:(id )arg2;
- (id)fetchRequestsWithPendingSMTs:(id)arg1 error:(id )arg2;
- (id)fetchRequestWithUri:(id)arg1 application:(id)arg2 accountID:(id)arg3 loggableDatas:(id)arg4 youngerThan:(id)arg5 error:(id )arg6;
- (id)fetchRequestsForURI:(id)arg1 error:(id )arg2;
- (id)fetchRequestForUUID:(id)arg1 error:(id )arg2;
- (id)treeHeadsForApplication:(id)arg1 error:(id )arg2;
- (id)createRequestWithUri:(id)arg1 application:(id)arg2 accountID:(id)arg3 serverData:(id)arg4 syncedData:(id)arg5 queryRequest:(id)arg6 queryResponse:(id)arg7 type:(NSUInteger)arg8 error:(id )arg9;
- (id)createRequest;
- (NSUInteger)signedTreeHeadFailureCount:(id )arg1;
- (id)signedTreeHeadFailures:(id )arg1;
- (NSUInteger)treeHeadCount:(id )arg1;
- (id)treeHeads:(id )arg1;
- (NSUInteger)signedMutationTimestampsFailureCount:(id )arg1;
- (id)signedMutationTimestampsFailures:(id )arg1;
- (NSUInteger)signedMutationTimestampCount:(id )arg1;
- (id)signedMutationTimestamps:(id )arg1;
- (NSUInteger)requestFailureCount:(id )arg1;
- (id)requestFailures:(id )arg1;
- (NSUInteger)requestCount:(id )arg1;
- (id)requests:(id )arg1;
- (id)init;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (long long)currentSequenceId:(id )arg1;
- (id)bundleURL;

@end

