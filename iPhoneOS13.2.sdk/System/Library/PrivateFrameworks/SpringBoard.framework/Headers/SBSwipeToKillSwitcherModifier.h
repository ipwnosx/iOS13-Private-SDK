//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

@class SBAppLayout;
@protocol SBFluidSwitcherScrollProviding;

@interface SBSwipeToKillSwitcherModifier : SBSwitcherModifier
{
    SBAppLayout *_appLayout;
    SBSwitcherModifier<SBFluidSwitcherScrollProviding> *_multitaskingModifier;
    double _progress;
    _Bool _hasPrepared;
    _Bool _simulatingPostRemovalState;
    unsigned long long _interpolationDirection;
}

- (unsigned long long)_interpolatingAdjacentIndexForIndex:(unsigned long long)arg1;
- (void)_calculateInterpolationDirection;
- (id)topMostAppLayouts;
- (id)appLayoutsForInsertionOrRemoval;
- (double)shadowOffsetForIndex:(unsigned long long)arg1;
- (double)shadowOpacityForIndex:(unsigned long long)arg1;
- (double)titleOpacityForIndex:(unsigned long long)arg1;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (double)lighteningAlphaForIndex:(unsigned long long)arg1;
- (double)wallpaperOverlayAlphaForIndex:(unsigned long long)arg1;
- (double)darkeningAlphaForIndex:(unsigned long long)arg1;
- (double)opacityForIndex:(unsigned long long)arg1;
- (_Bool)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1;
- (long long)layoutUpdateMode;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (id)handleSwipeToKillEvent:(id)arg1;
- (void)_performBlockWhileSimulatingPostRemovalAppLayoutState:(id /* block */)arg1;
- (id)appLayouts;
- (id)initWithAppLayout:(id)arg1 multitaskingModifier:(id)arg2;

@end
