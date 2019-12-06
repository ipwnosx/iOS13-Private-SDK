//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

@class SBAppLayout;
@protocol SBFluidSwitcherScrollProviding;

@interface SBSwipeToKillSwitcherModifier : SBSwitcherModifier
{
    SBAppLayout *_appLayout;
    SBSwitcherModifier<SBFluidSwitcherScrollProviding> *_multitaskingModifier;
    double _progress;
    BOOL _hasPrepared;
    BOOL _simulatingPostRemovalState;
    NSUInteger _interpolationDirection;
}

// - (void).cxx_destruct;
- (NSUInteger)_interpolatingAdjacentIndexForIndex:(NSUInteger)arg1;
- (void)_calculateInterpolationDirection;
- (id)topMostAppLayouts;
- (id)appLayoutsForInsertionOrRemoval;
- (double)shadowOffsetForIndex:(NSUInteger)arg1;
- (double)shadowOpacityForIndex:(NSUInteger)arg1;
- (double)titleOpacityForIndex:(NSUInteger)arg1;
- (double)titleAndIconOpacityForIndex:(NSUInteger)arg1;
- (double)lighteningAlphaForIndex:(NSUInteger)arg1;
- (double)wallpaperOverlayAlphaForIndex:(NSUInteger)arg1;
- (double)darkeningAlphaForIndex:(NSUInteger)arg1;
- (double)opacityForIndex:(NSUInteger)arg1;
- (BOOL)clipsToUnobscuredMarginAtIndex:(NSUInteger)arg1;
- (long long)layoutUpdateMode;
- (BOOL)isIndexVisible:(NSUInteger)arg1;
- (double)scaleForIndex:(NSUInteger)arg1;
- (CGRect)frameForIndex:(NSUInteger)arg1;
- (id)handleSwipeToKillEvent:(id)arg1;
- (void)_performBlockWhileSimulatingPostRemovalAppLayoutState:(CDUnknownBlockType)arg1;
- (id)appLayouts;
- (id)initWithAppLayout:(id)arg1 multitaskingModifier:(id)arg2;

@end

