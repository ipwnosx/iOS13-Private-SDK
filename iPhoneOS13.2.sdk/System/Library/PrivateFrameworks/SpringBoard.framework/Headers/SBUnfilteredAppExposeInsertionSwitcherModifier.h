//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

@class SBAppLayout, SBInsertionSwitcherModifier;

@interface SBUnfilteredAppExposeInsertionSwitcherModifier : SBSwitcherModifier
{
    SBAppLayout *_appLayout;
    SBInsertionSwitcherModifier *_insertionSwitcherModifier;
}

// - (void).cxx_destruct;
- (double)scaleForIndex:(NSUInteger)arg1;
- (CGRect)frameForIndex:(NSUInteger)arg1;
- (id)handleEvent:(id)arg1;
- (id)initWithAppLayout:(id)arg1 insertionSwitcherModifier:(id)arg2;

@end

