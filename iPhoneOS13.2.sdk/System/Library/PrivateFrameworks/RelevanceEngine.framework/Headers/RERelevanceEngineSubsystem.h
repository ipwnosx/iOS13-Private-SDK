//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/REActivityTrackerDelegate-Protocol.h>
#import <RelevanceEngine/RERelevanceEngineSubsystemProperties-Protocol.h>

@class NSString, REActivityTracker, RERelevanceEngine;
@protocol OS_dispatch_queue;

@interface RERelevanceEngineSubsystem : NSObject <RERelevanceEngineSubsystemProperties, REActivityTrackerDelegate>
{
    NSObject<OS_dispatch_queue> *_relevanceEngineQueue;
    REActivityTracker *_activityTracker;
    BOOL _running;
//    struct os_unfair_lock_s _lock;
    RERelevanceEngine *_relevanceEngine;
}

@property(readonly, nonatomic) __weak RERelevanceEngine *relevanceEngine; // @synthesize relevanceEngine=_relevanceEngine;
// - (void).cxx_destruct;
- (void)activityTracker:(id)arg1 didEndActivity:(id)arg2;
- (void)activityTracker:(id)arg1 didBeginActivity:(id)arg2;
- (void)endActivity:(id)arg1 forObject:(id)arg2;
- (void)beginActivity:(id)arg1 forObject:(id)arg2;
- (void)withdrawObject:(id)arg1;
- (void)trackObject:(id)arg1;
@property(readonly, nonatomic) NSString *name;
- (void)resume;
- (void)pause;
@property(readonly, nonatomic, getter=isRunning) BOOL running;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
- (void)dealloc;
- (id)initWithRelevanceEngine:(id)arg1;

@end

