//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class PKDiscoveryArticleViewController, PKPassGroupsViewController, UIView;
@protocol UIViewControllerContextTransitioning;

@interface PKDiscoveryArticleAnimatedTransitioningHandler : NSObject <UIViewControllerAnimatedTransitioning>
{
    PKPassGroupsViewController *_presentingVC;
    UIView *_presentingView;
    PKDiscoveryArticleViewController *_presentedVC;
    UIView *_presentedView;
    UIView *_containerView;
    id <UIViewControllerContextTransitioning> _transitionContext;
    BOOL _completed;
    BOOL _presenting;
    double _duration;
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic, getter=isPresenting) BOOL presenting; // @synthesize presenting=_presenting;
// - (void).cxx_destruct;
- (void)_moveCardView:(id)arg1 toView:(id)arg2 belowView:(id)arg3;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)_updateWithTransitionContext:(id)arg1;

@end

