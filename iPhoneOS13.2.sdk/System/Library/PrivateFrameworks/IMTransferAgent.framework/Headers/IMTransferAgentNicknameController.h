//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContainer;

@interface IMTransferAgentNicknameController : NSObject
{
    CKContainer *_nickNameContainer;
}

+ (id)ckQueue;
+ (id)sharedInstance;
@property(readonly, nonatomic) CKContainer *nickNameContainer; // @synthesize nickNameContainer=_nickNameContainer;
// - (void).cxx_destruct;
- (id)lockdownManager;
- (BOOL)shouldUseDevNickNameContainer;
- (id)_nickNameContainer;
- (id)_nickNameContainerIdentifier;
- (BOOL)_serverSaysToUseOldContainer;
- (double)_retryIntervalForRetryCount:(NSUInteger)arg1;
- (id)_nickNameFetchConfiguration;
- (id)_nickNameSaveConfiguration;
- (id)_nickNamePublicDB;
- (id)nickNamePublicDatabase;
- (void)cloudKitOperationWithRetryCount:(NSUInteger)arg1 withError:(id)arg2 operation:(CDUnknownBlockType)arg3;
- (void)performCloudKitOperation:(CDUnknownBlockType)arg1 withError:(id)arg2;
- (void)_handleSaveNicknameError:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_updateEncryptedPersonalNicknameToPublicCloudKitDBSavingRecord:(id)arg1 deletingRecordIDs:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)_updateEncryptedPersonalNicknameToPublicCloudKitDBSavingRecord:(id)arg1 deletingRecordID:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)deleteAllPersonalNicknamesWithCompletion:(CDUnknownBlockType)arg1;
- (void)setPersonalNickname:(id)arg1 oldRecordID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)fetchAllNicknamesForCurrentUser:(CDUnknownBlockType)arg1;
- (void)fetchCurrentUserForNicknameContainer:(CDUnknownBlockType)arg1;
- (void)getNicknameWithRecordID:(id)arg1 decryptionKey:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

