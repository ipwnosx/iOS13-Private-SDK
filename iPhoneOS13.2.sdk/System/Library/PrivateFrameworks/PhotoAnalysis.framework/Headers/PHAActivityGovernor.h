//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object, PHAActivityGovernorDelegate;

@interface PHAActivityGovernor : NSObject
{
    char _backgroundActivityName;
    char _foregroundActivityName;
    BOOL _hasBackgroundAccess;
    BOOL _hasForegroundAccess;
    BOOL _wantsBackgroundAccess;
    BOOL _wantsForegroundAccess;
    BOOL _overrideAccess;
    BOOL _simulatedWantsDefer;
    BOOL _simulatedNeverHasAccess;
    id <PHAActivityGovernorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_foregroundActivity;
    NSObject<OS_dispatch_source> *_foregroundDeferCheckTimer;
    double _timeOfLastForegroundWantRequest;
    double _timeSpentWantingForeground;
    double _timeOfLastForegroundGrant;
    double _timeSpentForegroundGranted;
    NSObject<OS_xpc_object> *_backgroundActivity;
    NSObject<OS_dispatch_source> *_backgroundDeferCheckTimer;
}

@property(nonatomic) BOOL simulatedNeverHasAccess; // @synthesize simulatedNeverHasAccess=_simulatedNeverHasAccess;
@property(nonatomic) BOOL simulatedWantsDefer; // @synthesize simulatedWantsDefer=_simulatedWantsDefer;
@property(retain) NSObject<OS_dispatch_source> *backgroundDeferCheckTimer; // @synthesize backgroundDeferCheckTimer=_backgroundDeferCheckTimer;
@property(retain) NSObject<OS_xpc_object> *backgroundActivity; // @synthesize backgroundActivity=_backgroundActivity;
@property(nonatomic) double timeSpentForegroundGranted; // @synthesize timeSpentForegroundGranted=_timeSpentForegroundGranted;
@property(nonatomic) double timeOfLastForegroundGrant; // @synthesize timeOfLastForegroundGrant=_timeOfLastForegroundGrant;
@property(nonatomic) double timeSpentWantingForeground; // @synthesize timeSpentWantingForeground=_timeSpentWantingForeground;
@property(nonatomic) double timeOfLastForegroundWantRequest; // @synthesize timeOfLastForegroundWantRequest=_timeOfLastForegroundWantRequest;
@property(retain) NSObject<OS_dispatch_source> *foregroundDeferCheckTimer; // @synthesize foregroundDeferCheckTimer=_foregroundDeferCheckTimer;
@property(retain) NSObject<OS_xpc_object> *foregroundActivity; // @synthesize foregroundActivity=_foregroundActivity;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <PHAActivityGovernorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL overrideAccess; // @synthesize overrideAccess=_overrideAccess;
@property(nonatomic) BOOL wantsForegroundAccess; // @synthesize wantsForegroundAccess=_wantsForegroundAccess;
@property(nonatomic) BOOL wantsBackgroundAccess; // @synthesize wantsBackgroundAccess=_wantsBackgroundAccess;
// - (void).cxx_destruct;
@property(nonatomic) BOOL hasForegroundAccess; // @synthesize hasForegroundAccess=_hasForegroundAccess;
@property(nonatomic) BOOL hasBackgroundAccess; // @synthesize hasBackgroundAccess=_hasBackgroundAccess;
- (void)dealloc;
- (id)init;
- (id)statusAsDictionary;
- (id)description;
- (void)_inq_handleRequestChangeForAccessLevel:(NSUInteger)arg1;
- (BOOL)_inq_wantsAccessForLevel:(NSUInteger)arg1;
- (BOOL)_inq_hasAccessForLevel:(NSUInteger)arg1;
- (const char )_activityNameForLevel:(NSUInteger)arg1;
- (void)_generateActivityNames;
- (void)_inq_finishActivity:(id )arg1 accessLevel:(NSUInteger)arg2 timer:(id)arg3;
- (void)_inq_registerActivityNamed:(const char )arg1 withCriteria:(id)arg2 accessLevel:(NSUInteger)arg3;
- (void)_inq_installDeferMonitorForActivity:(id)arg1 accessLevel:(NSUInteger)arg2;
- (void)_inq_teardownActivity:(id )arg1 accessLevel:(NSUInteger)arg2 timer:(id)arg3;
- (void)_inq_removeDeferTimer:(id)arg1;

@end

