//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDatabaseProtectedDataObserver-Protocol.h>

@class HDAppAssertionManager, HDBackgroundTaskScheduler, HDProfile, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface HDAppSubscriptionManager : NSObject <HDDatabaseProtectedDataObserver>
{
    BOOL _shouldScheduleLaunches;
    int _backgroundAppRefreshNotifyToken;
    HDProfile *_profile;
    HDAppAssertionManager *_appAssertionManager;
    HDBackgroundTaskScheduler *_backgroundTaskScheduler;
    NSObject<OS_dispatch_queue> *_launchQueue;
    NSMutableDictionary *_pendingTypeCodesToAnchors;
    NSMutableSet *_pendingFirstLaunchBundleIdentifiers;
    NSMutableDictionary *_launchTimers;
    NSMutableDictionary *_launchTimerLaunchTimes;
    NSObject<OS_dispatch_queue> *_launchTimerQueue;
}

@property(nonatomic) BOOL shouldScheduleLaunches; // @synthesize shouldScheduleLaunches=_shouldScheduleLaunches;
@property(nonatomic) int backgroundAppRefreshNotifyToken; // @synthesize backgroundAppRefreshNotifyToken=_backgroundAppRefreshNotifyToken;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *launchTimerQueue; // @synthesize launchTimerQueue=_launchTimerQueue;
@property(retain, nonatomic) NSMutableDictionary *launchTimerLaunchTimes; // @synthesize launchTimerLaunchTimes=_launchTimerLaunchTimes;
@property(retain, nonatomic) NSMutableDictionary *launchTimers; // @synthesize launchTimers=_launchTimers;
@property(retain, nonatomic) NSMutableSet *pendingFirstLaunchBundleIdentifiers; // @synthesize pendingFirstLaunchBundleIdentifiers=_pendingFirstLaunchBundleIdentifiers;
@property(retain, nonatomic) NSMutableDictionary *pendingTypeCodesToAnchors; // @synthesize pendingTypeCodesToAnchors=_pendingTypeCodesToAnchors;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *launchQueue; // @synthesize launchQueue=_launchQueue;
@property(retain, nonatomic) HDBackgroundTaskScheduler *backgroundTaskScheduler; // @synthesize backgroundTaskScheduler=_backgroundTaskScheduler;
@property(retain, nonatomic) HDAppAssertionManager *appAssertionManager; // @synthesize appAssertionManager=_appAssertionManager;
@property(nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
// - (void).cxx_destruct;
- (void)unitTesting_synchronizeWithQueue;
- (BOOL)areSubscriptionsSupportedForDataTypeCode:(long long)arg1;
- (void)ackForBundleID:(id)arg1 dataCode:(long long)arg2 anchor:(id)arg3 ackTime:(id)arg4;
- (void)setAnchor:(id)arg1 forDataCode:(long long)arg2;
- (void)subscribeForBundleID:(id)arg1 dataCode:(long long)arg2 frequencyInSeconds:(NSUInteger)arg3;
- (void)removeBundleID:(id)arg1;
- (void)removeSubscriptionForBundleID:(id)arg1 dataCode:(long long)arg2;
- (void)updateBundleID:(id)arg1 dataCode:(long long)arg2 launchTime:(id)arg3;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
- (void)_applicationsInstalled:(id)arg1;
- (BOOL)_shouldDoAFirstLaunchForBundleIdentifier:(id)arg1;
- (void)_queue_updateBundleID:(id)arg1 dataCode:(long long)arg2 launchTime:(id)arg3;
- (void)_queue_ackForBundleID:(id)arg1 dataCode:(long long)arg2 anchor:(id)arg3 ackTime:(id)arg4;
- (void)_queue_subscribeForBundleID:(id)arg1 dataCode:(long long)arg2 frequencyInSeconds:(NSUInteger)arg3;
- (void)_removeSubscriptionForBundleID:(id)arg1 dataCode:(long long)arg2 anchor:(id)arg3;
- (void)_removeBundleID:(id)arg1;
- (void)_launchTimerFired:(id)arg1 code:(id)arg2 anchor:(id)arg3;
- (id)_appSubscriptionsForDataTypeCode:(long long)arg1 lastAppLaunchTimes:(id)arg2 error:(id )arg3;
- (void)_queue_scheduleLaunches:(long long)arg1 anchor:(id)arg2;
- (void)_removeLaunchForSubscription:(id)arg1 anchor:(id)arg2;
- (void)_queue_scheduleLaunchForSubscription:(id)arg1 anchor:(id)arg2;
- (id)_activityNameForSubscription:(id)arg1 anchor:(id)arg2;
- (id)_queue_subscriptionForActivityName:(id)arg1 anchor:(id )arg2;
- (void)_queue_launchSubscription:(id)arg1 anchor:(id)arg2;
- (void)_backgroundTaskFiredWithName:(id)arg1;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (id)init;

@end

