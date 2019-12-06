//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableArray, NSMutableSet, NSString, SPCoreSpotlightIndexer;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface SPConcreteCoreSpotlightIndexer : NSObject
{
    _Atomic unsigned int _maintenanceOperations;
    int _cancelPtr;
    BOOL _suspended;
    BOOL _softSuspended;
    BOOL _scheduledStringsCleanup;
    NSMapTable *_checkedInClients;
    NSMutableSet *_knownClients;
    NSMutableSet *_reindexAllDelegateBundleIDs;
    double _lastPreheat;
    double _lastTTLPass;
    NSUInteger _createCount;
    SPCoreSpotlightIndexer *_owner;
//    struct __SI _index;
//    struct __SIResultQueue _resultQueue;
    NSObject<OS_dispatch_queue> *_indexQueue;
    NSObject<OS_dispatch_queue> *_firstUnlockQueue;
    NSString *_dataclass;
    NSObject<OS_dispatch_source> *_indexIdleTimer;
    double _idleStartTime;
    NSMutableArray *_outstandingMaintenance;
    NSObject<OS_os_transaction> *_dirtyTransaction;
}

+ (id)_stateInfoAttributeNameWithClientStateName:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSObject<OS_os_transaction> *dirtyTransaction; // @synthesize dirtyTransaction=_dirtyTransaction;
@property(readonly, nonatomic) NSMapTable *checkedInClients; // @synthesize checkedInClients=_checkedInClients;
@property(readonly, nonatomic) NSMutableSet *knownClients; // @synthesize knownClients=_knownClients;
@property(retain, nonatomic) NSMutableArray *outstandingMaintenance; // @synthesize outstandingMaintenance=_outstandingMaintenance;
@property(readonly, nonatomic) double idleStartTime; // @synthesize idleStartTime=_idleStartTime;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *indexIdleTimer; // @synthesize indexIdleTimer=_indexIdleTimer;
@property(retain, nonatomic) NSString *dataclass; // @synthesize dataclass=_dataclass;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *firstUnlockQueue; // @synthesize firstUnlockQueue=_firstUnlockQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *indexQueue; // @synthesize indexQueue=_indexQueue;
// property(nonatomic) struct __SIResultQueue resultQueue; // @synthesize resultQueue=_resultQueue;
// property(nonatomic) struct __SI index; // @synthesize index=_index;
@property(nonatomic) __weak SPCoreSpotlightIndexer *owner; // @synthesize owner=_owner;
// - (void).cxx_destruct;
- (void)_fetchAccumulatedStorageSizeForBundleId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
//  (BOOL)_startInternalQueryWithIndex:(struct __SI )arg1 query:(id)arg2 fetchAttributes:(id)arg3 forBundleIds:(id)arg4 resultsHandler:(CDUnknownBlockType)arg5;
- (void)powerStateChanged;
- (void)attributesForBundleId:(id)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchAttributes:(id)arg1 bundleID:(id)arg2 identifiers:(id)arg3 includeParents:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)fetchAttributes:(id)arg1 bundleID:(id)arg2 identifiers:(id)arg3 includeParents:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)changeStateOfSearchableItemsWithUIDs:(id)arg1 toState:(long long)arg2 forBundleID:(id)arg3;
- (void)fetchLastClientStateForBundleID:(id)arg1 clientStateName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteAllInteractionsWithBundleID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteActionsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteActionsBeforeTime:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteSearchableItemsSinceDate:(id)arg1 forBundleID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_deleteSearchableItemsMatchingQuery:(id)arg1 forBundleIds:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteAllSearchableItemsForBundleID:(id)arg1 shouldGC:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)zombifyAllContactItems:(id)arg1;
- (void)_scheduleStringsCleanupForBundleID:(id)arg1;
- (void)deleteAllUserActivities:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteSearchableItemsWithPersonaIds:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 forBundleID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteItemsForEnumerator:(id)arg1 traceID:(long long)arg2 bundleID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)deleteItemsForQuery:(id)arg1 bundleID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_backgroundDeleteItems:(id)arg1 bundleID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)willModifySearchableItemsWithIdentifiers:(id)arg1 forBundleID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)startQueryWithQueryTask:(id)arg1 startHandler:(CDUnknownBlockType)arg2 eventHandler:(CDUnknownBlockType)arg3 resultsHandler:(CDUnknownBlockType)arg4;
- (id)_startQueryWithQueryTask:(id)arg1 eventHandler:(CDUnknownBlockType)arg2 resultsHandler:(CDUnknownBlockType)arg3;
- (void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 clientStateName:(id)arg4 forBundleID:(id)arg5 options:(long long)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 forBundleID:(id)arg4 options:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)indexFromBundle:(id)arg1 personaID:(id)arg2 options:(long long)arg3 items:(id)arg4 itemsText:(id)arg5 clientState:(id)arg6 clientStateName:(id)arg7 deletes:(id)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (void)_setClientState:(id)arg1 clientStateName:(id)arg2 forBundleID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)preheat;
- (void)suspendIndexForDeviceLock;
- (void)ensureOpenIndexFiles;
- (void)readyIndex:(BOOL)arg1;
- (void)resumeIndex;
- (void)closeIndex;
- (BOOL)writeDiagnostic:(id)arg1 bundleID:(id)arg2 identifier:(id)arg3;
- (void)issueConsistencyCheck;
- (void)issueRepair;
- (void)issueDefrag:(id)arg1;
- (void)cleanupStringsWithActivity:(id)arg1 group:(id)arg2 shouldDefer:(BOOL )arg3 flags:(int)arg4;
- (void)cleanupStringsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)mergeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)mergeWithGroup:(id)arg1;
- (void)issueSplit;
- (void)shrink:(NSUInteger)arg1;
- (void)coolDown:(id)arg1;
- (void)commitUpdates:(id)arg1;
- (void)addCompletedBundleIDs:(id)arg1 forIndexerTask:(id)arg2;
- (void)fetchAllCompletedBundleIDsForIndexerTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)reindexAllStarted;
- (void)finishReindexAll;
- (void)startReindexAll;
- (void)performIndexerTask:(id)arg1 withIndexDelegatesAndCompletionHandler:(CDUnknownBlockType)arg2;
- (void)performIndexerTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_addNewClientWithBundleID:(id)arg1;
- (void)addClients:(id)arg1;
- (void)checkInWithBundleID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)clientDidCheckin:(id)arg1 service:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (int)openIndex:(BOOL)arg1;
- (int)openIndex:(BOOL)arg1 shouldReindexAll:(BOOL)arg2;
- (void)_saveCorruptIndexWithPath:(id)arg1;
- (void)_expireCorruptIndexFilesWithPath:(id)arg1 keepLatest:(BOOL)arg2;
- (void)revokeExpiredItems:(id)arg1;
- (void)removeExpiredItemsForBundleId:(id)arg1 group:(id)arg2;
- (void)indexFinishedDrainingJournal;
- (void)fixupPathTimeouts;
- (void)indexFinishedDrainingJournal:(id)arg1;
- (void)scheduleMaintenance:(CDUnknownBlockType)arg1 description:(id)arg2 forDarkWake:(BOOL)arg3;
- (id)_indexMaintenanceActivityName;
- (void)_performXPCActivity:(id)arg1 name:(id)arg2;
- (id)_indexPath;
- (void)dirty;
- (id)_cancelIdleTimer;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 protectionClass:(id)arg2 cancelPtr:(int )arg3;
- (void)performQueryForCountOfItemsInCategory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dumpAllRankingDiagnosticInformationForQuery:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)updateRankingDates;
- (id)getPropertyForKey:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2 sync:(BOOL)arg3;

@end

