//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@interface SBMoveFloatingConfigurationFloatingSwitcherModifier : SBTransitionSwitcherModifier
{
    long long _fromFloatingConfiguration;
    long long _toFloatingConfiguration;
}

- (long long)liveContentRasterizationStyle;
- (long long)keyboardSuppressionMode;
- (BOOL)wantsResignActiveAssertion;
- (BOOL)shouldPerformCrossfadeForReduceMotion;
- (id)layoutSettings;
- (double)opacityForIndex:(NSUInteger)arg1;
- (BOOL)isIndexVisible:(NSUInteger)arg1;
- (id)transitionWillBegin;
- (id)initWithTransitionID:(id)arg1 fromFloatingConfiguration:(long long)arg2 toFloatingConfiguration:(long long)arg3;

@end

