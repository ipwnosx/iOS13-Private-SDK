//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EFLoggable-Protocol.h>

@class EDGmailLabelPersistence, EDPersistenceDatabase;

@interface EDLocalActionPersistence : NSObject <EFLoggable>
{
    EDPersistenceDatabase *_database;
    EDGmailLabelPersistence *_gmailLabelPersistence;
}

+ (id)actionFlagsTableSchema;
+ (id)actionLabelsTableSchema;
+ (id)actionMessagesTableSchema;
+ (id)localMessageActionsTableSchema;
+ (id)tablesAndForeignKeysToResolve:(id )arg1 associationsToResolve:(id )arg2;
+ (id)log;
@property(readonly, nonatomic) EDGmailLabelPersistence *gmailLabelPersistence; // @synthesize gmailLabelPersistence=_gmailLabelPersistence;
@property(readonly, nonatomic) EDPersistenceDatabase *database; // @synthesize database=_database;
// - (void).cxx_destruct;
- (void)removeMessageAction:(long long)arg1;
- (BOOL)updateTransferUndownloadedMessageAction:(id)arg1 withResults:(id)arg2;
- (id)_sourceRemoteIDListForCopyItems:(id)arg1;
- (id)_whereClauseToFindCopyItems:(id)arg1;
- (void)_deleteCopyItems:(id)arg1 actionID:(long long)arg2 connection:(id)arg3;
- (void)_updateCopyItems:(id)arg1 toPhase:(long long)arg2 actionID:(long long)arg3 connection:(id)arg4;
- (BOOL)moveSupportedFromMailboxURL:(id)arg1 toURL:(id)arg2;
- (BOOL)updateTransferAction:(id)arg1 withResults:(id)arg2;
- (BOOL)_addActionMessageForSourceRemoteID:(id)arg1 actionID:(long long)arg2 connection:(id)arg3;
- (BOOL)_addActionMessageForMessage:(id)arg1 destinationMessage:(id)arg2 actionID:(long long)arg3 actionPhase:(long long)arg4 connection:(id)arg5;
- (BOOL)_setLabelsOnAction:(long long)arg1 labels:(id)arg2 add:(BOOL)arg3 connection:(id)arg4;
- (BOOL)persistLabelChangeAction:(id)arg1;
- (BOOL)persistTransferUndownloadedAction:(id)arg1;
- (BOOL)persistTransferAction:(id)arg1;
- (BOOL)_addFlagChange:(id)arg1 actionID:(long long)arg2 connection:(id)arg3;
- (BOOL)persistFlagChangeUndownloadedAction:(id)arg1;
- (BOOL)persistFlagChangeAction:(id)arg1;
- (id)messageForDatabaseID:(long long)arg1;
- (id)_flagChangeForAction:(long long)arg1 connection:(id)arg2;
- (void)_findMessagesForAction:(long long)arg1 remoteIDs:(id)arg2 messages:(id)arg3 connection:(id)arg4;
- (id)_labelChangeActionForRow:(id)arg1 connection:(id)arg2;
- (id)_flagChangeAllActionForRow:(id)arg1 connection:(id)arg2;
- (id)_flagChangeActionForRow:(id)arg1 connection:(id)arg2;
- (id)_transferUndownloadedActionForRow:(id)arg1 connection:(id)arg2;
- (id)_transferActionForRow:(id)arg1 connection:(id)arg2 failedMessages:(id)arg3;
- (id)messageActionsForAccountURL:(id)arg1 previousActionID:(long long)arg2;
- (id)init;
- (id)initWithDatabase:(id)arg1 gmailLabelPersistence:(id)arg2;

@end

