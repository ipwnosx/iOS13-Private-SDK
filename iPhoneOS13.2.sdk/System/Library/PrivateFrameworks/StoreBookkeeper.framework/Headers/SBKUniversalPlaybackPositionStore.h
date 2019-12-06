//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray, NSString, NSTimer, SBKAsynchronousTask, SBKRequestHandler;
@protocol OS_dispatch_queue, SBKUniversalPlaybackPositionDataSource;

@interface SBKUniversalPlaybackPositionStore : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isActive;
    BOOL _hasLocalChangesToSync;
    NSMutableArray *_pendingTaskBlocks;
    NSString *_domain;
    NSUInteger _automaticSynchronizeOptions;
    double _initialAutosyncInterval;
    double _pollingLimitFromBag;
    double _autorefreshInterval;
    BOOL _refreshTimerActive;
    id _accountsObserver;
    id _prefsObserver;
    id <SBKUniversalPlaybackPositionDataSource> _dataSource;
    SBKAsynchronousTask *_currentTask;
    SBKAsynchronousTask *_lookupDomainVersionTask;
    SBKAsynchronousTask *_bagLookupTask;
    SBKRequestHandler *_currentTaskRequestHandler;
    NSDate *_dateToFireNextTimer;
    NSTimer *_timer;
}

+ (id)keyValueStoreItemIdentifierForItem:(id)arg1;
@property(retain) NSTimer *timer; // @synthesize timer=_timer;
@property(retain) NSDate *dateToFireNextTimer; // @synthesize dateToFireNextTimer=_dateToFireNextTimer;
@property(retain) SBKRequestHandler *currentTaskRequestHandler; // @synthesize currentTaskRequestHandler=_currentTaskRequestHandler;
@property(retain) SBKAsynchronousTask *bagLookupTask; // @synthesize bagLookupTask=_bagLookupTask;
@property(retain) SBKAsynchronousTask *lookupDomainVersionTask; // @synthesize lookupDomainVersionTask=_lookupDomainVersionTask;
@property(retain) SBKAsynchronousTask *currentTask; // @synthesize currentTask=_currentTask;
@property(readonly) __weak id <SBKUniversalPlaybackPositionDataSource> dataSource; // @synthesize dataSource=_dataSource;
// - (void).cxx_destruct;
- (void)_onQueueStartNewTimerWithTimeIntervalSinceNow:(double)arg1;
- (void)_onQueueStartNewTimer;
- (void)_onQueueStopTimer;
- (void)_onQueueResumeTimer;
- (void)_onQueueSuspendTimer;
- (void)_onQueueScheduleTimer;
- (BOOL)_timerIsStopped;
- (void)_timerFired:(id)arg1;
- (void)_updateAutorefreshRateSettingAndRestartTimer:(BOOL)arg1;
- (double)_effectiveAutorefreshRate;
- (void)_updateForStoreAccountsChange;
- (void)_onQueueLoadBagContextWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_updateSettingsFromLoadedBagContext:(id)arg1;
- (id)_accountForSyncing;
- (void)_onQueuePullMetadataItemWithItemIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_onQueuePushMetadataItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_onQueueSynchronizeImmediatelyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_onQueueRunTaskWithName:(id)arg1 taskCompletionHandler:(CDUnknownBlockType)arg2 runTaskBlock:(CDUnknownBlockType)arg3;
- (void)_onQueueRunNextPendingTaskBlock;
- (void)_onQueueLoadRemoteDomainVersionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_onQueueSynchronizeWithAutosynchronizeMask:(NSUInteger)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)loadBagContextWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)loadRemoteDomainVersionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)checkForAvailabilityWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)synchronizeImmediatelyWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)pullMetadataItemWithItemIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)pushMetadataItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)synchronizeImmediatelyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)automaticallySynchronizeOnBecomeActive;
- (BOOL)_automaticallySynchronizeOnBecomeActive;
- (void)setAutomaticallySynchronizeOnBecomeActive:(BOOL)arg1;
- (BOOL)automaticallySynchronizeLocalChangesOnResignActive;
- (BOOL)_automaticallySynchronizeLocalChangesOnResignActive;
- (void)setAutomaticallySynchronizeLocalChangesOnResignActive:(BOOL)arg1;
@property BOOL hasLocalChangesToSync;
@property NSUInteger automaticSynchronizeOptions;
- (void)resignActive;
- (void)becomeActive;
- (void)_onQueueUpdateTimerForAutomaticSyncOptionChanges;
- (void)_onQueueUpdateTimerForActiveChanges;
- (void)dealloc;
- (id)initWithInitialUpdateDelay:(double)arg1;
- (id)init;
- (id)initWithDomain:(id)arg1 dataSource:(id)arg2 automaticSynchronizeOptions:(NSUInteger)arg3 isActive:(BOOL)arg4;
- (void)deprecated_setDataSource:(id)arg1;

@end

