//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/PPContactClientProtocol-Protocol.h>

@class PPXPCClientHelper, PPXPCClientPipelinedBatchQueryManager;

@interface PPContactClient : NSObject <PPContactClientProtocol>
{
    PPXPCClientHelper *_clientHelper;
    PPXPCClientPipelinedBatchQueryManager *_queryManager;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)contactNameRecordChangesBatch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(NSUInteger)arg4 completion:(CDUnknownBlockType)arg5;
- (BOOL)contactNameRecordChangesForClient:(id)arg1 error:(id )arg2 handleBatch:(CDUnknownBlockType)arg3;
- (void)contactNameRecordChangesForClient:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)contactNameRecordBatch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(NSUInteger)arg4 completion:(CDUnknownBlockType)arg5;
- (BOOL)contactNameRecordsForClient:(id)arg1 error:(id )arg2 handleBatch:(CDUnknownBlockType)arg3;
- (void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)arg1 chosenContactIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)rankedContactsBatch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(NSUInteger)arg4 completion:(CDUnknownBlockType)arg5;
- (BOOL)rankedContactsWithQuery:(id)arg1 error:(id )arg2 handleBatch:(CDUnknownBlockType)arg3;
- (id)_remoteObjectProxy;
- (void)_unblockPendingQueries;
- (id)init;

@end

