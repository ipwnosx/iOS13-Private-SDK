//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBViewControllerAnimatedTransitioning-Protocol.h>
#import <SpringBoard/SBViewControllerRestartableTransitioning-Protocol.h>

@protocol SBViewControllerContextTransitioning;

@protocol SBViewControllerReversibleAnimatedTransitioning <SBViewControllerAnimatedTransitioning, SBViewControllerRestartableTransitioning>
- (void)cancelTransition:(id <SBViewControllerContextTransitioning>)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
@end

