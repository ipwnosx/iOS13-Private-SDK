//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransaction.h>

#import <SpringBoard/SBLayoutStateTransitionObserver-Protocol.h>

@class SBLayoutStateTransitionCoordinator;

@interface SBWaitForSceneLayoutTransitionTransaction : SBTransaction <SBLayoutStateTransitionObserver>
{
    SBLayoutStateTransitionCoordinator *_transitionCoordinator;
}

// - (void).cxx_destruct;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)_begin;
- (void)dealloc;
- (id)initWithSceneLayoutTransitionCoordinator:(id)arg1;

@end

