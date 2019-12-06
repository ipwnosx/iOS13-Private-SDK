//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/ASDServiceProvider-Protocol.h>

@class ASDServiceBroker;

@interface ASDPersonalizationStore : NSObject <ASDServiceProvider>
{
    ASDServiceBroker *_serviceBroker;
}

+ (id)interface;
+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)tasteProfileFeatureEnabled:(CDUnknownBlockType)arg1;
- (void)setClusterMappings:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)setClusterMapping:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)sendMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)resetMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)reloadClusterMappingsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)resetActorIDWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)reportAppEvent:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)recordMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)recordLaunchesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getAppEventsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getGroupingToken:(CDUnknownBlockType)arg1;
- (void)getTasteProfileToken:(CDUnknownBlockType)arg1;
- (void)getClusterMappingsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)flushMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)_initWithServiceBroker:(id)arg1;
- (id)init;

@end

