//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, SignpostEvent;

@interface SignpostAnimationAccumulatedState : NSObject
{
    SignpostEvent *_animationBeginEvent;
    NSMutableArray *_compositorIntervals;
    NSMutableArray *_longCommitIntervals;
    NSMutableArray *_allCommitIntervals;
    NSMutableArray *_longSystemwideCommitIntervals;
    NSMutableArray *_allSystemwideCommitIntervals;
    NSMutableArray *_longTransactionLifetimes;
    NSMutableArray *_allTransactionLifetimes;
    NSMutableArray *_longFrameLatencies;
    NSMutableArray *_allFrameLatencies;
    NSMutableArray *_longHIDLatencies;
    NSMutableArray *_allHIDLatencies;
    NSMutableArray *_longRenders;
    NSMutableArray *_allRenders;
    NSMutableArray *_longFrameLifetimes;
    NSMutableArray *_longContributedFrameLifetimes;
    NSMutableArray *_allFrameLifetimes;
    NSMutableArray *_allContributedFrameLifetimes;
}

@property(readonly, nonatomic) NSMutableArray *allContributedFrameLifetimes; // @synthesize allContributedFrameLifetimes=_allContributedFrameLifetimes;
@property(readonly, nonatomic) NSMutableArray *allFrameLifetimes; // @synthesize allFrameLifetimes=_allFrameLifetimes;
@property(readonly, nonatomic) NSMutableArray *longContributedFrameLifetimes; // @synthesize longContributedFrameLifetimes=_longContributedFrameLifetimes;
@property(readonly, nonatomic) NSMutableArray *longFrameLifetimes; // @synthesize longFrameLifetimes=_longFrameLifetimes;
@property(readonly, nonatomic) NSMutableArray *allRenders; // @synthesize allRenders=_allRenders;
@property(readonly, nonatomic) NSMutableArray *longRenders; // @synthesize longRenders=_longRenders;
@property(readonly, nonatomic) NSMutableArray *allHIDLatencies; // @synthesize allHIDLatencies=_allHIDLatencies;
@property(readonly, nonatomic) NSMutableArray *longHIDLatencies; // @synthesize longHIDLatencies=_longHIDLatencies;
@property(readonly, nonatomic) NSMutableArray *allFrameLatencies; // @synthesize allFrameLatencies=_allFrameLatencies;
@property(readonly, nonatomic) NSMutableArray *longFrameLatencies; // @synthesize longFrameLatencies=_longFrameLatencies;
@property(readonly, nonatomic) NSMutableArray *allTransactionLifetimes; // @synthesize allTransactionLifetimes=_allTransactionLifetimes;
@property(readonly, nonatomic) NSMutableArray *longTransactionLifetimes; // @synthesize longTransactionLifetimes=_longTransactionLifetimes;
@property(readonly, nonatomic) NSMutableArray *allSystemwideCommitIntervals; // @synthesize allSystemwideCommitIntervals=_allSystemwideCommitIntervals;
@property(readonly, nonatomic) NSMutableArray *longSystemwideCommitIntervals; // @synthesize longSystemwideCommitIntervals=_longSystemwideCommitIntervals;
@property(readonly, nonatomic) NSMutableArray *allCommitIntervals; // @synthesize allCommitIntervals=_allCommitIntervals;
@property(readonly, nonatomic) NSMutableArray *longCommitIntervals; // @synthesize longCommitIntervals=_longCommitIntervals;
@property(readonly, nonatomic) NSMutableArray *compositorIntervals; // @synthesize compositorIntervals=_compositorIntervals;
@property(readonly, nonatomic) SignpostEvent *animationBeginEvent; // @synthesize animationBeginEvent=_animationBeginEvent;
// - (void).cxx_destruct;
- (void)addCompositorInterval:(id)arg1;
- (void)_handleFrameLifetime:(id)arg1 isLong:(BOOL)arg2 isConcise:(BOOL)arg3;
- (void)_handleFrameLatency:(id)arg1 isLong:(BOOL)arg2 isConcise:(BOOL)arg3;
- (void)_handleRenderServerRender:(id)arg1 isLong:(BOOL)arg2 isConcise:(BOOL)arg3;
- (void)_handleHIDLatency:(id)arg1 isLong:(BOOL)arg2 isConcise:(BOOL)arg3;
- (void)_handleTransactionLifetimeInterval:(id)arg1 isLong:(BOOL)arg2 isConcise:(BOOL)arg3;
- (void)_handleCommitInterval:(id)arg1 isLong:(BOOL)arg2 isConcise:(BOOL)arg3;
- (id)initWithAnimationBeginEvent:(id)arg1 shouldTrackComposites:(BOOL)arg2 shouldTrackInMemoryEvents:(BOOL)arg3;

@end

