//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBMainWorkspaceTransaction.h>

#import <SpringBoard/FBApplicationProcessLaunchTransactionObserver-Protocol.h>

@class NSMapTable, NSMutableSet;

@interface SBSuspendedWorkspaceTransaction : SBMainWorkspaceTransaction <FBApplicationProcessLaunchTransactionObserver>
{
    NSMapTable *_launchTransactionToSceneEntityMap;
    NSMutableSet *_outstandingProcessLaunchTransactions;
    NSMutableSet *_incompleteProcessLaunchTransactions;
    BOOL _anyLaunchFailed;
}

// - (void).cxx_destruct;
- (void)transaction:(id)arg1 willLaunchProcess:(id)arg2;
- (void)_didComplete;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_begin;
- (void)_sendActivationResultWithSuccess:(BOOL)arg1;

@end

