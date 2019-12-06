//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBUIAnimationStepping-Protocol.h>

@class BSAnimationSettings, CADisplayLink, NSArray, NSMutableSet;

@interface SBAnimationStepper : NSObject <CAAnimationDelegate, SBUIAnimationStepping>
{
    BSAnimationSettings *_animationSettings;
    NSMutableSet *_views;
    NSMutableSet *_finishedAnimatingViews;
    CADisplayLink *_displayLink;
    id /* CDUnknownBlockType */ _completion;
    double _percentage;
    BOOL _invalidated;
    BOOL _completed;
    BOOL _finishingForward;
    BOOL _finishingBackward;
    BOOL _animatingToStepPercent;
    double _animatedSteppingTimestamp;
    double _animatedSteppingStartPercent;
    double _animatedSteppingTargetPercent;
    double _finishBackwardTimestamp;
    double _finishBackwardDuration;
    double _finishBackwardPercentage;
    BOOL _adjustsDurationForLongestAnimation;
    double _duration;
    double _finishSpeed;
}

@property(nonatomic) double finishSpeed; // @synthesize finishSpeed=_finishSpeed;
@property(nonatomic) BOOL adjustsDurationForLongestAnimation; // @synthesize adjustsDurationForLongestAnimation=_adjustsDurationForLongestAnimation;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)finishSteppingBackwardToStart;
- (void)finishSteppingForwardToEnd;
@property(nonatomic) double stepPercentage;
@property(readonly, nonatomic, getter=isStepped) BOOL stepped;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (double)_nextCommitTime;
- (void)_displayLinkFiredForBackwardToStart:(id)arg1;
- (void)_displayLinkFired:(id)arg1;
- (void)_setStepPercentage:(double)arg1;
- (void)_updateAnimationSteppingTarget:(double)arg1;
- (void)_checkForCompletion;
- (void)finishSteppingBackwardToStartWithCompletion:(CDUnknownBlockType)arg1;
- (void)finishSteppingForwardToEndWithCompletion:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (void)_makeSubviewTree:(id)arg1 fromView:(id)arg2;
- (void)_adjustDurationForLongestAnimation;
- (void)startSteppingAnimationsInView:(id)arg1;
@property(readonly, nonatomic) NSArray *views; // @dynamic views;
- (void)dealloc;
- (id)initWithAnimationSettings:(id)arg1;
- (id)init;

@end

