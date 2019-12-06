//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDApplicationInfo, HMFLocationAuthorization, NSArray, NSHashTable, NSObject, NSString;
@protocol HMFLocking, OS_dispatch_queue;

@interface HMDProcessInfo : HMFObject <HMFLogging>
{
    id <HMFLocking> _lock;
    BOOL _viewService;
    int _pid;
    NSUInteger _state;
    HMDApplicationInfo *_appInfo;
    HMFLocationAuthorization *_locationAuthorization;
    NSArray *_runningReasons;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    NSHashTable *_connectionProxies;
}

+ (id)logCategory;
@property(readonly, nonatomic) NSHashTable *connectionProxies; // @synthesize connectionProxies=_connectionProxies;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *xpcQueue; // @synthesize xpcQueue=_xpcQueue;
@property(retain, nonatomic) NSArray *runningReasons; // @synthesize runningReasons=_runningReasons;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property(readonly) HMFLocationAuthorization *locationAuthorization; // @synthesize locationAuthorization=_locationAuthorization;
@property(readonly, nonatomic) __weak HMDApplicationInfo *appInfo; // @synthesize appInfo=_appInfo;
@property(readonly, nonatomic, getter=isViewService) BOOL viewService; // @synthesize viewService=_viewService;
// - (void).cxx_destruct;
- (id)_activeRequestIdentifiers;
- (void)initiateRefresh;
- (void)removeConnectionProxy:(id)arg1;
- (void)addConnectionProxy:(id)arg1;
- (NSUInteger)proxyCount;
- (void)deactivate;
- (void)activate;
@property(readonly, nonatomic, getter=isTerminated) BOOL terminated;
@property(readonly, nonatomic, getter=isSuspended) BOOL suspended;
@property(readonly, nonatomic, getter=isBackgrounded) BOOL background;
@property(readonly, nonatomic, getter=isBackgroundUpgradedToForeground) BOOL backgroundUpgradedToForeground;
@property(readonly, nonatomic, getter=isForegrounded) BOOL foreground;
@property(nonatomic) NSUInteger state; // @synthesize state=_state;
@property(readonly, copy) NSString *description;
- (id)logIdentifier;
- (id)initWithConnectionProxy:(id)arg1 application:(id)arg2 processId:(int)arg3 xpcQueue:(id)arg4;
- (id)init;

@end

