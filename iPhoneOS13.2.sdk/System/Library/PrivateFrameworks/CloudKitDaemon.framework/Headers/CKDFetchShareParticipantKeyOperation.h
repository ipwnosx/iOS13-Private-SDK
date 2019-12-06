//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDFetchShareParticipantKeyOperation : CKDDatabaseOperation
{
    BOOL _hasAttemptedShareUpdate;
    id /* CDUnknownBlockType */ _shareParticipantKeyFetchedBlock;
    NSMutableArray *_shareIDs;
    NSDictionary *_baseTokensByShareID;
    NSDictionary *_childRecordIDsByShareID;
    NSMutableDictionary *_sharesNeedingUpdateByID;
}

@property(nonatomic) BOOL hasAttemptedShareUpdate; // @synthesize hasAttemptedShareUpdate=_hasAttemptedShareUpdate;
@property(retain, nonatomic) NSMutableDictionary *sharesNeedingUpdateByID; // @synthesize sharesNeedingUpdateByID=_sharesNeedingUpdateByID;
@property(retain, nonatomic) NSDictionary *childRecordIDsByShareID; // @synthesize childRecordIDsByShareID=_childRecordIDsByShareID;
@property(retain, nonatomic) NSDictionary *baseTokensByShareID; // @synthesize baseTokensByShareID=_baseTokensByShareID;
@property(retain, nonatomic) NSMutableArray *shareIDs; // @synthesize shareIDs=_shareIDs;
@property(copy, nonatomic) id /* CDUnknownBlockType */ shareParticipantKeyFetchedBlock; // @synthesize shareParticipantKeyFetchedBlock=_shareParticipantKeyFetchedBlock;
// - (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)updateShares;
- (void)fetchSharesFromServer;
- (void)_handleFetchedShare:(id)arg1 withID:(id)arg2 error:(id)arg3;
- (id)_participantKeyFromShare:(id)arg1 withError:(id )arg2;
- (void)_sendErrorForFailedShares;
- (void)_performCallbackForShareID:(id)arg1 withParticipantKey:(id)arg2 error:(id)arg3;
- (id)activityCreate;
- (id)nameForState:(NSUInteger)arg1;
- (BOOL)makeStateTransition;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

