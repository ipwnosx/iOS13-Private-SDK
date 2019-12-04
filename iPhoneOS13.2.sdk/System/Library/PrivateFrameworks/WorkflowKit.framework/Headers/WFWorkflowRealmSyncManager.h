//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFApplicationStateObserver-Protocol.h>
#import <WorkflowKit/WFDatabaseResultObserver-Protocol.h>

@class NSLock, NSMutableArray, WFDatabase, WFDatabaseResult;
@protocol OS_dispatch_queue, OS_dispatch_source, WFUserInterface;

@interface WFWorkflowRealmSyncManager : NSObject <WFApplicationStateObserver, WFDatabaseResultObserver>
{
    _Bool _pendingResume;
    _Bool _syncPending;
    long long _accountStatus;
    id <WFUserInterface> _userInterface;
    WFDatabase *_database;
    WFDatabaseResult *_databaseResultForObservation;
    unsigned long long _pauseCount;
    unsigned long long _start;
    NSObject<OS_dispatch_source> *_timer;
    NSLock *_timerLock;
    NSObject<OS_dispatch_queue> *_syncSessionQueue;
    NSLock *_completionHandlerLock;
    NSMutableArray *_completionHandlers;
}

+ (void)setDefaultManager:(id)arg1;
+ (id)defaultManager;
@property(readonly, nonatomic) _Bool syncPending; // @synthesize syncPending=_syncPending;
@property(readonly, nonatomic) NSMutableArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(readonly, nonatomic) NSLock *completionHandlerLock; // @synthesize completionHandlerLock=_completionHandlerLock;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *syncSessionQueue; // @synthesize syncSessionQueue=_syncSessionQueue;
@property(readonly, nonatomic) NSLock *timerLock; // @synthesize timerLock=_timerLock;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(nonatomic) unsigned long long start; // @synthesize start=_start;
@property(nonatomic) _Bool pendingResume; // @synthesize pendingResume=_pendingResume;
@property(nonatomic) unsigned long long pauseCount; // @synthesize pauseCount=_pauseCount;
@property(retain, nonatomic) WFDatabaseResult *databaseResultForObservation; // @synthesize databaseResultForObservation=_databaseResultForObservation;
@property(readonly, nonatomic) WFDatabase *database; // @synthesize database=_database;
@property(retain, nonatomic) id <WFUserInterface> userInterface; // @synthesize userInterface=_userInterface;
@property(readonly, nonatomic) long long accountStatus; // @synthesize accountStatus=_accountStatus;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObservingUserDefaults;
- (void)startObservingUserDefaults;
- (id)userDefaultsKeysToObserve;
- (void)handleAccountChangedNotification:(id)arg1;
- (void)unsubscribeFromCloudKitAccountStatusNotifications;
- (void)subscribeToCloudKitAccountStatusNotifications;
- (void)updateAccountStatus;
- (void)databaseResult:(id)arg1 didUpdateObjects:(id)arg2 inserted:(id)arg3 removed:(id)arg4;
- (void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2;
- (void)resumeAutomaticUpdates;
- (void)pauseAutomaticUpdates;
- (void)stopAutomaticUpdates;
- (void)startAutomaticUpdates;
- (void)triggerSync:(_Bool)arg1 onlyIfPending:(_Bool)arg2 completion:(id /* block */)arg3;
- (void)triggerSync:(_Bool)arg1 completion:(id /* block */)arg2;
- (void)completeSyncWithSuccess:(_Bool)arg1 changes:(_Bool)arg2 error:(id)arg3;
- (void)pushCompletionHandler:(id /* block */)arg1;
- (void)handleUserDeletedZoneErrorIfNeededWithSuccess:(_Bool)arg1 changes:(_Bool)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (void)startSync;
- (void)dealloc;
- (id)initWithDatabase:(id)arg1;

@end
