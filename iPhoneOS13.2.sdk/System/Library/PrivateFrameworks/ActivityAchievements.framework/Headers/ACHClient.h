//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityAchievements/_HKXPCExportable-Protocol.h>

@class HKPluginProxyProvider;
@protocol ACHServerInterface, OS_dispatch_queue;

@interface ACHClient : NSObject <_HKXPCExportable>
{
    NSObject<OS_dispatch_queue> *_serverQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    id <ACHServerInterface> _serverProxy;
    HKPluginProxyProvider *_pluginProxyProvider;
    id /* CDUnknownBlockType */ _injectedErrorHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ injectedErrorHandler; // @synthesize injectedErrorHandler=_injectedErrorHandler;
@property(retain, nonatomic) HKPluginProxyProvider *pluginProxyProvider; // @synthesize pluginProxyProvider=_pluginProxyProvider;
@property(retain, nonatomic) id <ACHServerInterface> serverProxy; // @synthesize serverProxy=_serverProxy;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serverQueue; // @synthesize serverQueue=_serverQueue;
// - (void).cxx_destruct;
- (void)_addPluginProxyErrorHandler:(CDUnknownBlockType)arg1;
- (void)_injectProxyProvider:(id)arg1;
- (CDUnknownBlockType)_clientQueueCompletion:(CDUnknownBlockType)arg1;
- (void)_remoteProxy:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)availableMobileAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (void)setActivityChallengeAssetsServerURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchActivityChallengeAssetsServerURLWithCompletion:(CDUnknownBlockType)arg1;
- (void)runMonthlyChallengesWithCompletion:(CDUnknownBlockType)arg1;
- (void)forceAwardingSchedulerWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchEphemeralAchievementWithTemplateUniqueName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAchievementWithTemplateUniqueName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAllAchievementsWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeAllEarnedInstancesWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeEarnedInstance:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addEarnedInstance:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAllEarnedInstancesWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeAllTemplatesWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeTemplate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addTemplate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAllTemplatesWithCompletion:(CDUnknownBlockType)arg1;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)arg1;

@end

