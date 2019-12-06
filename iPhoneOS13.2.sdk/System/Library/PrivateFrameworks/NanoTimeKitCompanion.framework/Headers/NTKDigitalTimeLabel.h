//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKitUI/CLKUITimeLabel.h>

#import <NanoTimeKitCompanion/NTKColoringView-Protocol.h>
#import <NanoTimeKitCompanion/NTKTimeView-Protocol.h>

@class NTKDigitalTimeLabelStyle, UIColor;

@interface NTKDigitalTimeLabel : CLKUITimeLabel <NTKColoringView, NTKTimeView>
{
    UIColor *_shadowColor;
    BOOL _usesLegibility;
    BOOL _frozen;
    UIColor *_overrideColor;
}

@property(nonatomic, getter=isFrozen) BOOL frozen; // @synthesize frozen=_frozen;
@property(retain, nonatomic) UIColor *overrideColor; // @synthesize overrideColor=_overrideColor;
@property(nonatomic) BOOL usesLegibility; // @synthesize usesLegibility=_usesLegibility;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTimeOffset:(double)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
@property(readonly, nonatomic) UIColor *contentColor;
- (void)setTextColor:(id)arg1;
@property(retain, nonatomic) UIColor *color;
- (id)_labelColorFromFaceColor:(NSUInteger)arg1 device:(id)arg2;
- (void)applyFaceFromColor:(NSUInteger)arg1 toColor:(NSUInteger)arg2 fraction:(float)arg3 device:(id)arg4;
- (void)applyFaceColor:(NSUInteger)arg1 device:(id)arg2;
- (void)setShadowColor:(id)arg1;
- (id)_newUnderlyingLabel:(BOOL)arg1;
@property(copy, nonatomic) NTKDigitalTimeLabelStyle *style; // @dynamic style;
- (void)animateToStyle:(id)arg1 duration:(double)arg2 timingFunction:(id)arg3 additionalAnimation:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setFrameUsingCurrentStyle;
- (id)initWithTimeLabelOptions:(NSUInteger)arg1 forDevice:(id)arg2;

@end

