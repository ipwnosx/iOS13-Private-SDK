//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <CoverSheet/SBUIOptionalLegibility-Protocol.h>

@class MTLumaDodgePillView, MTStaticColorPillView, UIColor, _UILegibilitySettings;

@interface CSHomeAffordanceView : UIView <SBUIOptionalLegibility>
{
    _UILegibilitySettings *_legibilitySettings;
    NSUInteger _style;
    UIColor *_overrideColor;
    MTStaticColorPillView *_staticHomeAffordance;
    MTLumaDodgePillView *_dynamicHomeAffordance;
}

@property(nonatomic) __weak MTLumaDodgePillView *dynamicHomeAffordance; // @synthesize dynamicHomeAffordance=_dynamicHomeAffordance;
@property(nonatomic) __weak MTStaticColorPillView *staticHomeAffordance; // @synthesize staticHomeAffordance=_staticHomeAffordance;
@property(retain, nonatomic) UIColor *overrideColor; // @synthesize overrideColor=_overrideColor;
@property(nonatomic) NSUInteger style; // @synthesize style=_style;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
// - (void).cxx_destruct;
- (id)_viewForStyle:(NSUInteger)arg1;
- (void)_transitionToStyle:(NSUInteger)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (void)_updateForLegibility;
- (double)suggestedEdgeSpacing;
- (CGSize)suggestedSizeForContentWidth:(double)arg1;
- (void)_createDynamicHomeAffordance;
- (void)_createStaticHomeAffordance;
- (id)init;

@end

