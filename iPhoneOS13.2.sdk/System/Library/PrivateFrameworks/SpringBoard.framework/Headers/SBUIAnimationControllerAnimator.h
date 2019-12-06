//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBViewControllerAnimatedTransitioning-Protocol.h>

@class SBUIAnimationController;

@interface SBUIAnimationControllerAnimator : NSObject <SBViewControllerAnimatedTransitioning>
{
    SBUIAnimationController *_animationController;
}

@property(readonly, nonatomic) __weak SBUIAnimationController *animationController; // @synthesize animationController=_animationController;
// - (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (id)transitionAnimationFactory:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithAnimationController:(id)arg1;
- (id)init;

@end

