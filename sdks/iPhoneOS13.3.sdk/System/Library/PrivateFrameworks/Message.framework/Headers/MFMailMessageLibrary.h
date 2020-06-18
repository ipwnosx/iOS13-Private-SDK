//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/MFMessageLibrary.h>

#import <Message/EDMessageChangeHookResponder-Protocol.h>
#import <Message/EDProtectedDataReconciliationHookResponder-Protocol.h>
#import <Message/EFContentProtectionObserver-Protocol.h>
#import <Message/EFSignpostable-Protocol.h>

@class EDMessageQueryParser, EDPersistence, EDPersistenceHookRegistry, EDSearchableIndexScheduler, MFFileCompressionQueue, MFLibrarySearchableIndex, MFMessageChangeManager_iOS, MFPersistenceDatabase_iOS, MFWeakObjectCache, NSCache, NSMutableDictionary, NSMutableSet, NSObject, NSString, _MFMailMessageLibraryStatistics;
@protocol EFSQLExpressable, EFScheduler, OS_dispatch_queue;

@interface MFMailMessageLibrary : MFMessageLibrary <EDMessageChangeHookResponder, EDProtectedDataReconciliationHookResponder, EFSignpostable, EFContentProtectionObserver>
{
    MFWeakObjectCache *_libraryMessageCache;
    NSMutableDictionary *_mailboxCache;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_statsQueue;
    NSString *_activeAccountClause;
    NSString *_nonLocalAccountClause;
    id <EFSQLExpressable> _enabledAccountMailboxesExpression;
    int _protectedDataAvailability;
    NSObject<OS_dispatch_queue> *_keyBagQueue;
    NSObject<OS_dispatch_queue> *_conversationCalculationQueue;
    NSMutableSet *_messagesToThreadAtUnlock;
    _MFMailMessageLibraryStatistics *_lastStats;
    MFFileCompressionQueue *_compressionQueue;
    MFLibrarySearchableIndex *_searchableIndex;
//     struct os_unfair_lock_s _searchableIndexLock;
    _Atomic BOOL _suspendedUnderLock;
//     struct os_unfair_lock_s _mailboxLock;
//     struct os_unfair_lock_s _addedMessagesMapLock;
    NSCache *_mailboxURLsToMailboxIDs;
    NSCache *_optionsToQueries;
    BOOL _allowedToAccessProtectedData;
    EDPersistence *_persistence;
    MFPersistenceDatabase_iOS *_database;
    MFMessageChangeManager_iOS *_messageChangeManager;
    EDSearchableIndexScheduler *_searchableIndexScheduler;
    EDMessageQueryParser *_queryParser;
    id <EFScheduler> _reconciliationCleanupScheduler;
    id <EFScheduler> _fileRemovalAfterCompactionScheduler;
    NSMutableDictionary *_currentAddedMessagesMap;
}

+ (void)_renameLibraryAtPath:(id)arg1;
+ (void)removeLibraryOnNextLaunch;
+ (id)defaultPath;
+ (void)setDefaultInstance:(id)arg1;
+ (id)defaultInstance;
+ (BOOL)canUsePersistence;
+ (id)propertyMapper;
+ (id)signpostLog;
+ (id)log;
@property(retain, nonatomic) NSMutableDictionary *currentAddedMessagesMap; // @synthesize currentAddedMessagesMap=_currentAddedMessagesMap;
@property(retain, nonatomic) id <EFScheduler> fileRemovalAfterCompactionScheduler; // @synthesize fileRemovalAfterCompactionScheduler=_fileRemovalAfterCompactionScheduler;
@property(retain, nonatomic) id <EFScheduler> reconciliationCleanupScheduler; // @synthesize reconciliationCleanupScheduler=_reconciliationCleanupScheduler;
@property(retain, nonatomic) EDMessageQueryParser *queryParser; // @synthesize queryParser=_queryParser;
@property(retain, nonatomic) EDSearchableIndexScheduler *searchableIndexScheduler; // @synthesize searchableIndexScheduler=_searchableIndexScheduler;
@property(readonly, nonatomic) BOOL allowedToAccessProtectedData; // @synthesize allowedToAccessProtectedData=_allowedToAccessProtectedData;
@property(readonly) MFMessageChangeManager_iOS *messageChangeManager; // @synthesize messageChangeManager=_messageChangeManager;
@property(readonly) MFPersistenceDatabase_iOS *database; // @synthesize database=_database;
@property(readonly) EDPersistence *persistence; // @synthesize persistence=_persistence;
// - (void).cxx_destruct;
- (BOOL)messageDataExistsInDatabaseForMessageLibraryID:(long long)arg1 part:(id)arg2 length:(NSUInteger )arg3;
- (id)stringFromAllMailboxUnreadCount;
- (id)_recipientsForMessagesWithDatabaseIDs:(id)arg1 includeTo:(BOOL)arg2 includeCC:(BOOL)arg3 includeBCC:(BOOL)arg4;
- (id)firstMessageMatchingCriterion:(id)arg1;
- (id)_recipientsForMessageWithDatabaseID:(long long)arg1 connection:(id)arg2;
- (id)_messageForRow:(id)arg1 options:(unsigned int)arg2 timestamp:(NSUInteger)arg3 connection:(id)arg4 isProtectedDataAvailable:(BOOL)arg5;
- (id)_libraryMessageWithLibraryID:(long long)arg1 wasCached:(BOOL )arg2;
- (id)_libraryMessageCache;
- (id)allMailboxURLStrings;
- (void)reindexAllSearchableItemsWithAcknowledgementHandler:(id /* CDUnknownBlockType */)arg1;
- (void)reindexSearchableItemsWithIdentifiers:(id)arg1 acknowledgementHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_removeSearchableItemsWithLibraryIDs:(id)arg1;
- (void)removeSearchableItemsForAccount:(id)arg1 mailboxID:(long long)arg2;
- (void)removeSearchableItemsForMessages:(id)arg1;
- (void)removeSearchableItemsForMailbox:(id)arg1;
- (void)removeSearchableItemsForAccount:(id)arg1;
- (id)indexableMessagesWhere:(id)arg1 sortedBy:(id)arg2 limit:(long long)arg3 options:(unsigned int)arg4;
- (struct sqlite3_stmt )_prepareBatchStatement:(id)arg1 pattern:(id)arg2 libraryIDs:(long long )arg3 batchSize:(NSUInteger)arg4;
- (struct sqlite3_stmt )_prepareBatchStatement:(id)arg1 pattern:(id)arg2 objects:(id )arg3 count:(NSUInteger)arg4;
- (id)_stringsForIndexSet:(id)arg1;
- (void)pruneConversationTables:(double)arg1;
- (void)renameOrRemoveDatabaseIfNeeded;
- (void)persistenceDidReconcileProtectedData;
- (void)handleFailedMigration;
- (void)journalReconciliationFailed;
- (void)closeDatabaseConnections;
- (void)_scheduleIncrementalVacuum;
- (void)performIncrementalVacuumForSchema:(id)arg1;
- (BOOL)migrate;
- (void)_addMessageToThreadAtUnlock:(long long)arg1;
- (void)journalWasReconciled;
- (BOOL)_canAccessProtectedData;
- (void)_cancelPendingJournalReconciliation;
- (void)_scheduleJournalReconciliation;
- (void)contentProtectionStateChanged:(int)arg1 previousState:(int)arg2;
- (BOOL)isProtectedDataAvailable:(id)arg1;
- (void)_schedulePeriodicStatisticsLogging;
- (void)_logStatistics;
- (BOOL)_shouldLogDatabaseStats;
- (void)_collectStatistics_nts;
- (BOOL)checkDatabaseConsistency;
- (BOOL)cleanupProtectedTables;
- (id)_indexSetOfMessagesDeleted;
@property(readonly, nonatomic) NSUInteger protectedDataAvailability;
- (void)_setProtectedDataAvailabilityState:(NSUInteger)arg1;
- (id)hiddenPOPUIDsInMailbox:(id)arg1;
- (id)allUIDsInMailbox:(id)arg1;
- (id)UIDsToDeleteInMailbox:(id)arg1;
- (void)deletePOPUID:(id)arg1 inMailbox:(id)arg2;
- (id)_nonLocalAccountsClause;
- (id)_activeAccountsClause;
- (id)enabledAccountMailboxesExpression;
- (void)rebuildActiveAccountsClauseWithActiveAccounts:(id)arg1 inactiveAccounts:(id)arg2;
- (void)rebuildActiveAccountMailboxesExpression:(id)arg1;
- (void)rebuildActiveAccountsClausesAndExpressionsWithAccounts:(id)arg1;
- (id)_mailboxesClauseForAccounts:(id)arg1;
- (void)deleteAccount:(id)arg1;
- (void)invalidateAccount:(id)arg1;
- (long long)libraryIDForAccount:(id)arg1;
- (long long)createLibraryIDForAccount:(id)arg1;
- (id)filterContiguousMessages:(id)arg1 forCriterion:(id)arg2 options:(unsigned int)arg3;
- (id)messagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2;
- (id)messagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2 success:(BOOL )arg3;
- (id)messagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2 range:(NSRange)arg3 success:(BOOL )arg4;
- (id)messagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2 range:(NSRange)arg3;
- (void)iterateMessagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (void)iterateMessagesMatchingCriterion:(id)arg1 withResultHandler:(id)arg2 options:(unsigned int)arg3 withMonitor:(id)arg4;
- (void)iterateMessagesMatchingQuery:(id)arg1 withResultHandler:(id)arg2 options:(unsigned int)arg3 withMonitor:(id)arg4;
- (id)sqlQueryWithConversionLogForQuery:(id)arg1;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned int)arg3;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned int)arg3 range:(NSRange)arg4;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned int)arg3 baseTable:(unsigned int)arg4;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned int)arg3 baseTable:(unsigned int)arg4 range:(NSRange)arg5;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned int)arg3 baseTable:(unsigned int)arg4 range:(NSRange)arg5 success:(BOOL )arg6;
- (id)queryForCriterion:(id)arg1 connection:(id)arg2 options:(unsigned int)arg3;
- (id)queryForCriterion:(id)arg1 connection:(id)arg2 options:(unsigned int)arg3 range:(NSRange)arg4;
- (id)queryForCriterion:(id)arg1 connection:(id)arg2 options:(unsigned int)arg3 baseTable:(unsigned int)arg4;
- (id)queryForCriterion:(id)arg1 connection:(id)arg2 options:(unsigned int)arg3 baseTable:(unsigned int)arg4 isSubquery:(BOOL)arg5;
- (id)queryForCriterion:(id)arg1 connection:(id)arg2 options:(unsigned int)arg3 baseTable:(unsigned int)arg4 isSubquery:(BOOL)arg5 range:(NSRange)arg6;
- (id)_equalToMailboxIDsFromCriterion:(id)arg1;
- (BOOL)areMessageContentsLocallyAvailable:(id)arg1 fullContentsAvailble:(BOOL )arg2;
- (BOOL)hasCompleteDataForMimePart:(id)arg1;
- (id)dataForMimePart:(id)arg1 isComplete:(BOOL )arg2;
- (void)deleteDataForMessage:(id)arg1;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id )arg2;
- (id)headerDataForMessage:(id)arg1;
- (id)bodyDataForMessage:(id)arg1;
- (id)bodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id )arg2 isComplete:(BOOL )arg3;
- (id)headerDataAtPath:(id)arg1;
- (id)bodyDataAtPath:(id)arg1 headerData:(id )arg2;
- (id)loadMeetingMetadataForMessage:(id)arg1;
- (id)loadMeetingExternalIDForMessage:(id)arg1;
- (id)loadMeetingDataForMessage:(id)arg1;
- (id)loadData:(id)arg1 forMessage:(id)arg2 usingBlock:(id /* CDUnknownBlockType */)arg3;
- (BOOL)_setSummary:(id)arg1 forMessageWithRowID:(long long)arg2 connection:(id)arg3;
- (void)setSummary:(id)arg1 forMessage:(id)arg2;
- (BOOL)_setMessageData:(id)arg1 libraryID:(long long)arg2 part:(id)arg3 partial:(BOOL)arg4 complete:(BOOL)arg5 connection:(id)arg6;
- (void)setData:(id)arg1 forMessageToAppend:(id)arg2;
- (void)setData:(id)arg1 forMessage:(id)arg2 isPartial:(BOOL)arg3;
- (id)dataConsumerForMessage:(id)arg1;
- (id)dataConsumerForMessage:(id)arg1 isPartial:(BOOL)arg2;
- (id)dataConsumerForMessage:(id)arg1 part:(id)arg2 incomplete:(BOOL)arg3;
- (id)dataConsumerForMessage:(id)arg1 part:(id)arg2;
- (long long)deleteAttachmentsForMessage:(id)arg1 inMailboxFileURL:(id)arg2;
- (id)attachmentsDirectoryURLForMessage:(id)arg1 inMailboxFileURL:(id)arg2;
- (id)attachmentsDirectoryURLForMessage:(id)arg1;
- (id)fileAttributesForMessage:(id)arg1;
- (id)dataPathForMessage:(id)arg1 part:(id)arg2;
- (id)dataPathForMessage:(id)arg1;
- (id)dataPathForMessage:(id)arg1 type:(int)arg2;
- (id)messageWithMessageID:(id)arg1 inMailbox:(id)arg2;
- (BOOL)_deleteMessagesWithWhereClause:(id)arg1 deletedMessages:(id)arg2 connection:(id)arg3;
- (void)removeAllMessagesFromMailbox:(id)arg1 removeMailbox:(BOOL)arg2 andNotify:(BOOL)arg3;
- (void)deleteMailboxes:(id)arg1 account:(id)arg2;
- (BOOL)renameMailboxes:(id)arg1 to:(id)arg2;
- (void)compactMailbox:(id)arg1;
- (BOOL)_deleteRows:(id)arg1 fromTable:(id)arg2 connection:(id)arg3;
- (long long)_maxRowIDInSet:(id)arg1;
- (id)_existingValuesForColumn:(id)arg1 table:(id)arg2 fromValues:(id)arg3 connection:(id)arg4;
- (BOOL)_deleteMessages:(id)arg1 andCleanUpAddresses:(id)arg2 subjects:(id)arg3 summaries:(id)arg4 connection:(id)arg5;
- (BOOL)_addAddressesFromRecipientsForMessages:(id)arg1 toSet:(id)arg2 connection:(id)arg3;
- (void)compactMessages:(id)arg1 permanently:(BOOL)arg2;
- (void)_notifyDidCompact:(BOOL)arg1 messages:(id)arg2 mailboxes:(id)arg3;
- (void)setStoredIntegerPropertyWithName:(id)arg1 value:(id)arg2;
- (id)storedIntegerPropertyWithName:(id)arg1;
- (id)messageIdsForConversationId:(long long)arg1 limit:(NSUInteger)arg2;
- (long long)conversationIdForMessageIds:(id)arg1;
- (void)setConversationInfo:(long long)arg1 syncKey:(id)arg2 flags:(NSUInteger)arg3;
- (void)setFlags:(NSUInteger)arg1 forConversationId:(long long)arg2;
- (NSUInteger)flagsForConversationId:(long long)arg1;
- (id)syncedConversations;
- (void)scheduleRecurringActivity;
- (void)clearServerSearchFlagsForMessagesWithLibraryIDs:(id)arg1;
- (BOOL)_canSelectMessagesWithOptions:(unsigned int)arg1 connection:(id)arg2;
- (BOOL)shouldCancel;
- (id)accountForMessage:(id)arg1;
- (id)remoteStoreForMessage:(id)arg1;
- (id)mailboxUidForMessage:(id)arg1;
- (id)mailboxURLForMessage:(id)arg1;
- (long long)mailboxIDForURLString:(id)arg1;
- (long long)mailboxIDForURLString:(id)arg1 createIfNecessary:(BOOL)arg2;
- (id)mailboxURLsForIDs:(id)arg1;
- (id)urlForMailboxID:(long long)arg1;
- (void)reloadMailboxCacheIfNecessaryWithConnection:(id)arg1;
- (id)stringForQuery:(id)arg1;
- (id)stringForQuery:(id)arg1 monitor:(id)arg2;
- (long long)loadMoreMessagesForThreadContainingMessage:(id)arg1 hasNoMoreMessages:(BOOL )arg2;
- (long long)countOfMessagesMissingFromThreadContainingMessage:(id)arg1;
- (id)_getReferencesForHashesWithOwners:(id)arg1;
- (id)missingReferencesForConversationContainingMessage:(id)arg1;
- (id)_copyReferenceHashesWithoutMessagesForMessageWithConversation:(id)arg1;
- (id)conversationIDsOfMessagesInSameThreadAsMessageWithLibraryID:(long long)arg1 messageIDHash:(long long)arg2;
- (id)messageWithLibraryID:(long long)arg1 options:(unsigned int)arg2 inMailbox:(id)arg3 temporarilyUnavailable:(BOOL )arg4;
- (id)_keyForOptions:(unsigned int)arg1 protectedDataAvailable:(BOOL)arg2 mailboxAvailable:(BOOL)arg3 mailboxCached:(BOOL)arg4;
- (id)messagesWithMessageIDHeader:(id)arg1;
- (id)messageWithMessageID:(id)arg1 options:(unsigned int)arg2 inMailbox:(id)arg3;
- (id)getDetailsForAllMessagesFromMailbox:(id)arg1;
- (id)getDetailsForMessages:(NSUInteger)arg1 absoluteBottom:(NSUInteger)arg2 topOfDesiredRange:(NSUInteger)arg3 range:(NSRange )arg4 fromMailbox:(id)arg5;
- (id)getDetailsForMessagesWithRemoteIDInRange:(NSRange)arg1 fromMailbox:(id)arg2;
- (void)setSequenceIdentifier:(id)arg1 forMessagesWithRemoteIDs:(id)arg2 inMailbox:(id)arg3;
- (void)setSequenceIdentifier:(id)arg1 forMessageWithLibraryID:(long long)arg2;
- (id)sequenceIdentifierForMessagesWithRemoteIDs:(id)arg1 inMailbox:(id)arg2;
- (void)setSequenceIdentifier:(id)arg1 forMailbox:(id)arg2;
- (id)sequenceIdentifierForMailbox:(id)arg1;
- (unsigned int)minimumRemoteIDForMailbox:(id)arg1;
- (BOOL)canProvideMinimumRemoteID;
- (unsigned int)maximumRemoteIDForMailbox:(id)arg1;
- (id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned int)arg2 inRemoteMailbox:(id)arg3;
- (id)messageWithRemoteID:(id)arg1 inRemoteMailbox:(id)arg2;
- (id)oldestMessageInMailbox:(id)arg1;
- (void)setMostRecentStatusCount:(NSUInteger)arg1 forMailbox:(id)arg2;
- (NSUInteger)mostRecentStatusCountForMailbox:(id)arg1;
- (void)increaseProtectionOnFileForMessage:(id)arg1;
- (void)setLastSyncAndMostRecentStatusCount:(long long)arg1 forMailbox:(id)arg2;
- (long long)statusCountDeltaForMailbox:(id)arg1;
- (void)setServerUnreadOnlyOnServerCount:(NSUInteger)arg1 forMailbox:(id)arg2;
- (NSUInteger)indexedCountForMailbox:(id)arg1 limit:(NSUInteger)arg2;
- (NSUInteger)serverUnreadOnlyOnServerCountForMailbox:(id)arg1;
- (NSUInteger)unseenCountForMailbox:(id)arg1;
- (unsigned int)totalCountForMailbox:(id)arg1;
- (unsigned int)nonDeletedCountForAggregatedMailboxes:(id)arg1;
- (unsigned int)nonDeletedCountForAggregatedMailboxes:(id)arg1 includeServerSearchResults:(BOOL)arg2 includeThreadSearchResults:(BOOL)arg3;
- (unsigned int)nonDeletedCountForMailbox:(id)arg1;
- (unsigned int)nonDeletedCountForMailbox:(id)arg1 includeServerSearchResults:(BOOL)arg2 includeThreadSearchResults:(BOOL)arg3;
- (unsigned int)allNonDeleteCountForMailbox:(id)arg1 includeServerSearchResults:(BOOL)arg2 includeThreadSearchResults:(BOOL)arg3;
- (unsigned int)attachmentCountForMailboxes:(id)arg1;
- (unsigned int)deletedCountForMailbox:(id)arg1;
- (unsigned int)includesMeCountForMailbox:(id)arg1;
- (unsigned int)attachmentCountForMailbox:(id)arg1;
- (unsigned int)flaggedCountForMailbox:(id)arg1;
- (unsigned int)unreadCountForMailbox:(id)arg1;
- (id)_queryForMailboxesIDsFromMailboxes:(id)arg1;
- (unsigned int)_includesMeCountForAggregatedMailboxes:(id)arg1;
- (unsigned int)_attachmentCountForAggregatedMailboxes:(id)arg1;
- (unsigned int)_flaggedCountForAggregatedMailboxes:(id)arg1;
- (unsigned int)_computeUnreadCountForMailboxes:(id)arg1;
- (unsigned int)unreadCountForAggregatedMailboxes:(id)arg1;
- (long long)countDistinctMessagesMatchingCriterion:(id)arg1;
- (unsigned int)unreadCountForAggregatedMailboxes:(id)arg1 matchingCriterion:(id)arg2;
- (unsigned int)unreadCountForMailbox:(id)arg1 matchingCriterion:(id)arg2;
- (void)recomputeUnreadCountForMailboxWithURL:(id)arg1;
- (int)_integerForQuery:(id)arg1 withTextArgument:(id)arg2;
- (long long)_int64ForQuery:(id)arg1 connection:(id)arg2 textArgument:(id)arg3;
- (id)messagesWithoutSummariesForMailbox:(id)arg1 fromRowID:(long long)arg2 limit:(unsigned int)arg3;
- (id)orderedBatchOfMessagesEndingAtRowId:(long long)arg1 limit:(unsigned int)arg2 success:(BOOL )arg3;
- (id)messagesWithSummariesForMailbox:(id)arg1 fromRowID:(long long)arg2 limit:(unsigned int)arg3;
- (id)messagesWithoutSummariesForMailbox:(id)arg1;
- (id)messagesWithSummariesForMailbox:(id)arg1 range:(NSRange)arg2;
- (id)sendersByLibraryIDForConversation:(long long)arg1 mailbox:(id)arg2 limit:(long long)arg3;
- (long long)_libraryIDForOldestKnownMessageInMailbox:(id)arg1;
- (id)oldestKnownMessageInMailbox:(id)arg1;
- (long long)oldestKnownConversationInMailbox:(id)arg1;
- (id)groupedMessagesCountForCriterion:(id)arg1 groupBy:(NSUInteger)arg2;
- (id)groupedMessagesCountByMailboxMatchingQuery:(NSUInteger)arg1 variable:(id)arg2;
- (NSUInteger)countMessagesMatchingCriterion:(id)arg1;
- (unsigned int)countOfRelatedMessagesMatchingCriterion:(id)arg1 forConversationsContainingMessagesMatchingCriterion:(id)arg2 forMailboxCriterion:(id)arg3;
- (id)copyMessageInfosForConversationsContainingMessagesMatchingCriterion:(id)arg1 forMailbox:(id)arg2;
- (id)copyMessageInfosMatchingCriterion:(id)arg1;
- (id)copyMessageInfosForMailbox:(id)arg1;
- (id)dateOfOldestNonIndexedNonSearchResultMessageInMailbox:(id)arg1;
- (id)dateOfOldestNonSearchResultMessageInMailbox:(id)arg1;
- (id)_firstDateForQuery:(id)arg1 inMailbox:(id)arg2;
- (id)serverSearchResultMessagesForMailbox:(id)arg1;
- (id)_messagesForMailbox:(id)arg1 olderThanNumberOfDays:(int)arg2 limit:(NSUInteger)arg3;
- (id)messagesForMailbox:(id)arg1 olderThanNumberOfDays:(int)arg2;
- (id)messagesForMailbox:(id)arg1 limit:(NSUInteger)arg2;
- (void)_sendMessagesForStatement:(id)arg1 connection:(id)arg2 to:(id)arg3 options:(unsigned int)arg4 timestamp:(NSUInteger)arg5;
- (void)iterateStatement:(struct sqlite3_stmt )arg1 connection:(id)arg2 withProgressMonitor:(id)arg3 andRowHandler:(/* void * /* void * CDUnknownFunctionPointerType */ */)arg4 context:(void )arg5;
- (void)_iterateStatement:(id)arg1 connection:(id)arg2 withProgressMonitor:(id)arg3 andRowHandler:(/* void * /* void * CDUnknownFunctionPointerType */ */)arg4 context:(const CDStruct_6c71af79 )arg5;
- (id)_selectClauseForOptions:(unsigned int)arg1 protectedDataAvailable:(BOOL)arg2;
- (id)_selectExpressionForMessageWithAvailableTables:(unsigned int)arg1;
- (void)updateThreadingInfoForMessage:(id)arg1 fromHeaders:(id)arg2;
- (void)updateAdditionalThreadingInfoForSentMessageWithHeaders:(id)arg1 externalConversationID:(long long)arg2;
- (long long)_findOrCreateDatabaseIDForValue:(id)arg1 inTable:(id)arg2 column:(id)arg3 cache:(id)arg4 connection:(id)arg5;
- (long long)_findOrCreateDatabaseIDForSummary:(id)arg1 cache:(id)arg2 connection:(id)arg3;
- (long long)_findOrCreateDatabaseIDForSubject:(id)arg1 cache:(id)arg2 connection:(id)arg3;
- (long long)_findOrCreateDatabaseIDForAddress:(id)arg1 comment:(id)arg2 cache:(id)arg3 connection:(id)arg4;
- (BOOL)_addRecipients:(id)arg1 toMessageWithDatabaseID:(long long)arg2 cache:(id)arg3 connection:(id)arg4;
- (void)persistenceDidAddMessages:(id)arg1 generationWindow:(id)arg2;
- (void)didFinishPersistenceDidAddMessages:(id)arg1;
- (void)willStartPersistenceDidAddMessages:(id)arg1;
- (id)addMessages:(id)arg1 withMailbox:(id)arg2 newMessagesByOldMessage:(id)arg3 remoteIDs:(id)arg4 setFlags:(NSUInteger)arg5 addPOPUIDs:(BOOL)arg6 dataSectionsByMessage:(id)arg7 generationWindow:(id)arg8;
@property(readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry;
- (long long)addReferenceForContext:(id)arg1 usingDatabaseConnection:(id)arg2 generationWindow:(id)arg3 mergeHandler:(id /* CDUnknownBlockType */)arg4;
- (BOOL)_insertThreadReferences:(id)arg1 toMessageWithLibraryID:(long long)arg2 usingDatabaseConnection:(id)arg3;
- (id)_addThreadingInfoWithContext:(id)arg1 usingDatabaseConnection:(id)arg2;
- (id)referencesFromHeaders:(id)arg1;
- (void)notifyConversation:(long long)arg1 hasMergedIntoConversation:(long long)arg2;
- (void)notifyNewDataAvailableForMessages:(id)arg1;
- (BOOL)_writeEmlxFile:(id)arg1 withBodyData:(id)arg2 protectionClass:(int)arg3;
- (void)setMessage:(id)arg1 isPartial:(BOOL)arg2;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4;
- (void)setFlagsFromDictionary:(id)arg1 forMessagesInMailboxURLString:(id)arg2;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)updateFlagsForMessages:(id)arg1 changes:(id)arg2 transformer:(id /* CDUnknownBlockType */)arg3;
- (void)updateFlagsForMessagesInPlace:(id)arg1 success:(BOOL )arg2;
- (void)setFlags:(NSUInteger)arg1 forMessage:(id)arg2;
- (id)searchableIndex;
@property(readonly, nonatomic) NSUInteger pendingIndexItemsCount;
- (void)start;
- (void)_setSuspendedUnderLock:(BOOL)arg1;
- (void)invalidateAndWait;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 inMemoryIdentifier:(id)arg2 userAgent:(id)arg3;
@property(readonly) NSUInteger signpostID;

@end

