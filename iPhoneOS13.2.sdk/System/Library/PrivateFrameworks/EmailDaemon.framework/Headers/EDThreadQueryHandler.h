//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EDMessageRepositoryQueryHandler-Protocol.h>
#import <EmailDaemon/EDThreadMigratorDelegate-Protocol.h>
#import <EmailDaemon/EFLoggable-Protocol.h>
#import <EmailDaemon/EMMessageListItemQueryResultsObserver-Protocol.h>

@class EDMessagePersistence, EDPersistenceHookRegistry, EDThreadPersistence, EDVIPManager, EFLocked, EFQuery, EMObjectID, EMThreadScope;
@protocol EDRemoteSearchProvider, EDThreadQueryHandlerDelegate, EMMessageListItemQueryResultsObserver;

@interface EDThreadQueryHandler : NSObject <EDThreadMigratorDelegate, EMMessageListItemQueryResultsObserver, EFLoggable, EDMessageRepositoryQueryHandler>
{
    _Atomic char _state;
//    struct atomic_flag _isRunning;
    EMThreadScope *_threadScope;
    EFQuery *_query;
    id <EMMessageListItemQueryResultsObserver> _resultsObserver;
    EMObjectID *_observationIdentifier;
    EDMessagePersistence *_messagePersistence;
    EDThreadPersistence *_threadPersistence;
    EDPersistenceHookRegistry *_hookRegistry;
    EDVIPManager *_vipManager;
    id <EDRemoteSearchProvider> _remoteSearchProvider;
    EFLocked *_underlyingHandler;
    id <EDThreadQueryHandlerDelegate> _delegate;
}

+ (id)log;
@property(readonly, nonatomic) __weak id <EDThreadQueryHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) EFLocked *underlyingHandler; // @synthesize underlyingHandler=_underlyingHandler;
@property(readonly, nonatomic) id <EDRemoteSearchProvider> remoteSearchProvider; // @synthesize remoteSearchProvider=_remoteSearchProvider;
@property(readonly, nonatomic) EDVIPManager *vipManager; // @synthesize vipManager=_vipManager;
@property(readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry; // @synthesize hookRegistry=_hookRegistry;
@property(readonly, nonatomic) EDThreadPersistence *threadPersistence; // @synthesize threadPersistence=_threadPersistence;
@property(readonly, nonatomic) EDMessagePersistence *messagePersistence; // @synthesize messagePersistence=_messagePersistence;
@property(readonly, nonatomic) EMObjectID *observationIdentifier; // @synthesize observationIdentifier=_observationIdentifier;
@property(readonly, nonatomic) id <EMMessageListItemQueryResultsObserver> resultsObserver; // @synthesize resultsObserver=_resultsObserver;
@property(readonly, nonatomic) EFQuery *query; // @synthesize query=_query;
@property(readonly, nonatomic) EMThreadScope *threadScope; // @synthesize threadScope=_threadScope;
// - (void).cxx_destruct;
- (void)observer:(id)arg1 matchedOldestItemsUpdatedForMailboxes:(id)arg2;
- (void)observerWillRestart:(id)arg1;
- (void)observer:(id)arg1 replacedExistingObjectID:(id)arg2 withNewObjectID:(id)arg3;
- (void)observerDidFinishRemoteSearch:(id)arg1;
- (void)observerDidFinishInitialLoad:(id)arg1;
- (void)observer:(id)arg1 matchedDeletedObjectIDs:(id)arg2;
- (void)observer:(id)arg1 matchedChangesForObjectIDs:(id)arg2;
- (void)observer:(id)arg1 matchedMovedObjectIDs:(id)arg2 after:(id)arg3;
- (void)observer:(id)arg1 matchedMovedObjectIDs:(id)arg2 before:(id)arg3;
- (void)observer:(id)arg1 matchedAddedObjectIDs:(id)arg2 after:(id)arg3 extraInfo:(id)arg4;
- (void)observer:(id)arg1 matchedAddedObjectIDs:(id)arg2 before:(id)arg3 extraInfo:(id)arg4;
- (void)observer:(id)arg1 wasUpdated:(id)arg2;
- (void)threadMigratorDidComplete:(id)arg1;
- (BOOL)isStarted;
- (void)checkIfPrecomputedStateIsAvailable;
- (void)triggerMigration;
- (id)inMemoryMessageObjectIDsForThread:(id)arg1;
- (id)threadForObjectID:(id)arg1 isPersisted:(BOOL )arg2 error:(id )arg3;
- (void)requestSummaryForMessageObjectID:(id)arg1;
- (void)tearDown;
- (void)cancel;
- (void)start;
- (void)_createUnderlyingHandlerIfNeededAndStart;
- (id)initWithQuery:(id)arg1 messagePersistence:(id)arg2 threadPersistence:(id)arg3 hookRegistry:(id)arg4 vipManager:(id)arg5 remoteSearchProvider:(id)arg6 observer:(id)arg7 observationIdentifier:(id)arg8 delegate:(id)arg9;

@end

