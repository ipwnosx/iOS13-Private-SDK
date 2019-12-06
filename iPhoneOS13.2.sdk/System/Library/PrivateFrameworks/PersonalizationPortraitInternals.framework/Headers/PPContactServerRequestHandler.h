//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/PPContactServerProtocol-Protocol.h>

@class NSString, PPXPCServerPipelinedBatchQueryManager;
@protocol PPContactClientProtocol;

@interface PPContactServerRequestHandler : NSObject <PPContactServerProtocol>
{
    id <PPContactClientProtocol> _clientProxy;
    PPXPCServerPipelinedBatchQueryManager *_queryManager;
    NSString *_clientProcessName;
}

@property(copy, nonatomic) NSString *clientProcessName; // @synthesize clientProcessName=_clientProcessName;
// - (void).cxx_destruct;
- (void)contactNameRecordChangesForClient:(id)arg1 queryId:(NSUInteger)arg2;
- (void)contactNameRecordChangesForClient:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)contactNameRecordsForClient:(id)arg1 queryId:(NSUInteger)arg2;
- (void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)arg1 chosenContactIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)rankedContactsWithQuery:(id)arg1 queryId:(NSUInteger)arg2;
- (void)unblockPendingQueries;
- (void)setRemoteObjectProxy:(id)arg1;
- (id)init;

@end

