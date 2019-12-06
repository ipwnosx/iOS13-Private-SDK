//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout;

@interface SBArcSwipeFloatingSwitcherModifier : SBTransitionSwitcherModifier
{
    SBAppLayout *_toAppLayout;
    SBAppLayout *_fromAppLayout;
    long long _floatingConfiguration;
    NSUInteger _direction;
    BOOL _hasReshuffledZOrder;
}

// - (void).cxx_destruct;
- (long long)liveContentRasterizationStyle;
- (long long)keyboardSuppressionMode;
- (BOOL)wantsResignActiveAssertion;
- (BOOL)shouldPerformCrossfadeForReduceMotion;
- (id)layoutSettings;
- (BOOL)isContentStatusBarVisibleForIndex:(NSUInteger)arg1;
- (double)opacityForIndex:(NSUInteger)arg1;
- (BOOL)isIndexVisible:(NSUInteger)arg1;
- (id)topMostAppLayouts;
- (double)scaleForIndex:(NSUInteger)arg1;
- (CGRect)frameForIndex:(NSUInteger)arg1;
- (id)handleTimerEvent:(id)arg1;
- (id)transitionWillUpdate;
- (id)transitionWillBegin;
- (BOOL)shouldRasterizeLiveContentUntilDelay:(inout double )arg1;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 floatingConfiguration:(long long)arg4 direction:(NSUInteger)arg5 needsOvershoot:(BOOL)arg6;

@end

