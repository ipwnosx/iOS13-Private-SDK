//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIViewPropertyAnimatorTrackingGroup : NSObject <UIViewImplicitlyAnimating>
{
    NSArray *_trackingAnimators;
}

@property(readonly, nonatomic) NSArray *trackingAnimators; // @synthesize trackingAnimators=_trackingAnimators;
// - (void).cxx_destruct;
- (void)finishAnimationAtPosition:(long long)arg1;
- (void)stopAnimation:(BOOL)arg1;
- (void)pauseAnimation;
- (void)startAnimationAfterDelay:(double)arg1;
- (void)startAnimation;
@property(nonatomic) double fractionComplete;
@property(nonatomic, getter=isReversed) BOOL reversed;
@property(readonly, nonatomic, getter=isRunning) BOOL running;
@property(readonly, nonatomic) long long state;
- (void)addCompletion:(CDUnknownBlockType)arg1;
- (void)continueAnimationWithTimingParameters:(id)arg1 durationFactor:(double)arg2;
- (id)initWithAnimators:(id)arg1;

@end

