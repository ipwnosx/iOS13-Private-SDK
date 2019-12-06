//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>
#import <HealthDaemon/HDPeriodicActivityDelegate-Protocol.h>

@class HDPeriodicActivity, HDProfile;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HDDatabasePruningManager : NSObject <HDDiagnosticObject, HDHealthDaemonReadyObserver, HDPeriodicActivityDelegate>
{
    HDPeriodicActivity *_activity;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timerSource;
    NSUInteger _prunedObjectLimit;
    NSUInteger _prunedObjectTransactionLimit;
}

@property NSUInteger prunedObjectTransactionLimit; // @synthesize prunedObjectTransactionLimit=_prunedObjectTransactionLimit;
@property NSUInteger prunedObjectLimit; // @synthesize prunedObjectLimit=_prunedObjectLimit;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timerSource; // @synthesize timerSource=_timerSource;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
// - (void).cxx_destruct;
- (id)diagnosticDescription;
- (void)_setLastAttemptDate:(id)arg1 completed:(BOOL)arg2;
- (id)_lastAttemptDateWithCompleted:(BOOL )arg1;
- (BOOL)_pruneDatabaseWithNowDate:(id)arg1 error:(id )arg2;
- (id)_minimumFrozenAnchorMapForPruningDate:(id)arg1 error:(id )arg2;
- (BOOL)pruneDatabaseWithAccessibilityAssertion:(id)arg1 nowDate:(id)arg2 error:(id )arg3;
- (void)performPeriodicActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (void)daemonReady:(id)arg1;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;

@end

