//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@interface SBHomeGestureToHomeSwitcherModifier : SBTransitionSwitcherModifier
{
    BOOL _showingOrAnimatingCardsForFlyIn;
}

- (BOOL)shouldWaitForLayoutAndStyleUpdatesForTransactionCompletion;
- (NSRange *)fullSizeSnapshotsRange;
- (NSUInteger)numberOfAppLayoutsToCacheSnapshots;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (long long)wallpaperStyle;
- (BOOL)isWallpaperRequiredForSwitcher;
- (long long)backdropBlurType;
- (UIRectCornerRadii)cardCornerRadiiForIndex:(NSUInteger)arg1;
- (double)opacityForIndex:(NSUInteger)arg1;
- (double)scaleForIndex:(NSUInteger)arg1;
- (CGRect)frameForIndex:(NSUInteger)arg1;
- (BOOL)isIndexVisible:(NSUInteger)arg1;
- (id)initWithTransitionID:(id)arg1 showingOrAnimatingCardsForFlyIn:(BOOL)arg2;

@end

