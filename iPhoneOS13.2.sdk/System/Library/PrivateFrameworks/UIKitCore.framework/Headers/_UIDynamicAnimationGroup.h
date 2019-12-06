//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIDynamicAnimation.h>

@class NSArray, NSMutableArray;

@interface _UIDynamicAnimationGroup : _UIDynamicAnimation
{
    id /* CDUnknownBlockType */ _applier;
    NSMutableArray *_animations;
    NSMutableArray *_runningAnimations;
}

@property(copy, nonatomic) NSArray *animations; // @synthesize animations=_animations;
- (void)_appendSubclassDescription:(id)arg1 atLevel:(int)arg2;
- (void)runWithCompletion:(CDUnknownBlockType)arg1;
- (void)runWithGroupApplier:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)runWithGroupApplier:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 forScreen:(id)arg3 runLoopMode:(id)arg4;
- (void)removeAnimation:(id)arg1;
- (void)addAnimation:(id)arg1;
- (BOOL)_animateForInterval:(double)arg1;
- (void)_stopAnimation;
- (void)dealloc;

@end

