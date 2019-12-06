//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKSQLite.h>

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKDOperationInfoCache : CKSQLite
{
    NSObject<OS_dispatch_queue> *_cacheQueue;
    NSObject<OS_dispatch_queue> *_cacheDelegateQueue;
    NSMutableDictionary *_delegateWrappersByOperationID;
}

+ (id)dbFileName;
+ (id)sharedCache;
@property(retain, nonatomic) NSMutableDictionary *delegateWrappersByOperationID; // @synthesize delegateWrappersByOperationID=_delegateWrappersByOperationID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cacheDelegateQueue; // @synthesize cacheDelegateQueue=_cacheDelegateQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue; // @synthesize cacheQueue=_cacheQueue;
// - (void).cxx_destruct;
- (void)registerCacheEvictionActivity;
- (id)_locked_operationInfoForID:(id)arg1;
- (void)registerAttemptForOperationWithID:(id)arg1;
- (void)setOperationResult:(id)arg1 forOperationID:(id)arg2;
- (void)_lockedSetOperationResult:(id)arg1 forOperationID:(id)arg2;
- (void)setProgressCallbackArguments:(id)arg1 forOperationID:(id)arg2;
- (void)setOperationInfo:(id)arg1 forOperationID:(id)arg2 appContainerTuple:(id)arg3 accountID:(id)arg4;
- (void)_lockedSetOperationInfo:(id)arg1 forOperationID:(id)arg2 appContainerTuple:(id)arg3 accountID:(id)arg4;
- (void)deleteAllInfoForOperationWithID:(id)arg1;
- (void)expungeOperationInfoForDeletedAccountID:(id)arg1;
- (id)allOutstandingOperationIDsForAppContainerTuple:(id)arg1 accountID:(id)arg2;
- (id)outstandingOperationInfosForIDs:(id)arg1;
- (id)resumableOperationInfosByAppContainerTuplesWithProgressPurged:(BOOL)arg1;
- (void)enumerateCallbackArgumentsForOperationWithID:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_locked_enumerateCallbackArgumentsForOperationWithID:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_lockedResultForOperationWithID:(id)arg1;
- (id)resultForOperationWithID:(id)arg1;
- (id)operationInfoMetadataForOperationWithID:(id)arg1;
- (void)registerOperationAndSetResult:(id)arg1 forOperationInfo:(id)arg2 appContainerTuple:(id)arg3 accountID:(id)arg4;
- (void)unregisterDelegate:(id)arg1 forOperationWithID:(id)arg2;
- (void)registerDelegate:(id)arg1 forOperationWithID:(id)arg2;
- (id)_initWithCacheDir:(id)arg1;

@end

