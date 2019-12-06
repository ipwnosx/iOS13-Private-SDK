//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PairedSync/PSYSyncSessionObserverDelegate-Protocol.h>

@class NSDictionary, NSMutableSet, NSString, PSYSyncSession, PSYSyncSessionObserver;
@protocol OS_dispatch_queue, PSYProgressObserverDelegate;

@interface PSYProgressObserver : NSObject <PSYSyncSessionObserverDelegate>
{
    PSYSyncSessionObserver *_syncSessionObserver;
    PSYSyncSession *_currentSyncSession;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableSet *_completedInitialSyncPairingIDs;
    id <PSYProgressObserverDelegate> _delegate;
}

@property(nonatomic) __weak id <PSYProgressObserverDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)supportsMigrationSync;
- (void)syncSessionObserver:(id)arg1 didInvalidateSyncSession:(id)arg2;
- (void)syncSessionObserver:(id)arg1 receivedSyncSession:(id)arg2;
- (void)syncSessionObserver:(id)arg1 didReceiveUpdate:(id)arg2;
- (BOOL)_shouldHandleSyncSession:(id)arg1;
@property(readonly, nonatomic) long long progressObserverState;
- (void)_updateState;
@property(readonly, nonatomic) NSString *activityLabel;
@property(readonly, nonatomic) double activityProgress;
@property(readonly, nonatomic) double totalProgress;
@property(readonly, copy, nonatomic) NSDictionary *activityErrors;
- (id)initWithQueue:(id)arg1;
- (id)init;

@end

