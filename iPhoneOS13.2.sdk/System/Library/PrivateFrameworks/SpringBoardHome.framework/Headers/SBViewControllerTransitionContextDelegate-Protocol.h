//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SBViewControllerTransitionContext;

@protocol SBViewControllerTransitionContextDelegate <NSObject>

@optional
- (void)transitionDidFinish:(SBViewControllerTransitionContext *)arg1;
- (void)transitionWillFinish:(SBViewControllerTransitionContext *)arg1;
- (void)transitionDidReverse:(SBViewControllerTransitionContext *)arg1;
- (void)transitionWillReverse:(SBViewControllerTransitionContext *)arg1;
- (void)transitionDidBegin:(SBViewControllerTransitionContext *)arg1;
- (void)transitionWillBegin:(SBViewControllerTransitionContext *)arg1;
@end

