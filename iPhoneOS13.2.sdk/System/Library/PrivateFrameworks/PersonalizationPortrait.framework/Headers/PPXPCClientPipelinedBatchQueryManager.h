//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface PPXPCClientPipelinedBatchQueryManager : NSObject
{
    _Atomic NSUInteger _queryId;
    NSMutableDictionary *_queryContexts;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)assertBatch:(id)arg1 forQueryName:(id)arg2 hasExpectedContainedType:(Class)arg3;
// - (void).cxx_destruct;
- (void)cancelPendingQueriesWithError:(id)arg1;
- (void)handleReplyWithName:(id)arg1 batch:(id)arg2 isLast:(BOOL)arg3 error:(id)arg4 queryId:(NSUInteger)arg5 completion:(CDUnknownBlockType)arg6;
- (BOOL)syncExecuteQueryWithName:(id)arg1 error:(id )arg2 queryInitializer:(CDUnknownBlockType)arg3 handleBatch:(CDUnknownBlockType)arg4;
- (id)initWithName:(id)arg1;
- (id)init;

@end

