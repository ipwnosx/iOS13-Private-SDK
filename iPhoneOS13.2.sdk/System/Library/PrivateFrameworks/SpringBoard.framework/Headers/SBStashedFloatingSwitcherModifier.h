//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

@class SBActiveAppLayoutFloatingSwitcherModifier;

@interface SBStashedFloatingSwitcherModifier : SBSwitcherModifier
{
    SBActiveAppLayoutFloatingSwitcherModifier *_activeModifier;
}

// - (void).cxx_destruct;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (BOOL)isSwitcherWindowVisible;
- (double)shadowOpacityForIndex:(NSUInteger)arg1;
- (double)opacityForIndex:(NSUInteger)arg1;
- (BOOL)isIndexVisible:(NSUInteger)arg1;
- (id)init;

@end

