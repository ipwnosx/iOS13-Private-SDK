//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKDigitalFaceView.h>


#import <NanoTimeKitCompanion/NTKRichComplicationRectangularBaseViewDelegate-Protocol.h>

@interface NTKWhistlerDigitalFaceView : NTKDigitalFaceView <NTKRichComplicationRectangularBaseViewDelegate>
{
    BOOL _is24HourMode;
    NSUInteger _faceColor;
}

+ (id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2;
- (id)_defaultDateAccentColor;
- (id)_defaultDateTextColor;
- (void)setFaceColor:(NSUInteger)arg1;
- (void)_updateLocale;
- (void)rectangularViewDidEndInteractive:(id)arg1;
- (void)rectangularViewDidBecomeInteractive:(id)arg1;
- (BOOL)_supportsTimeScrubbing;
- (id)complicationPickerViewForSlot:(id)arg1;
- (double)_minimumBreathingScaleForComplicationSlot:(id)arg1;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (long long)complicationFamilyForSlot:(id)arg1;
- (long long)_keylineStyleForComplicationSlot:(id)arg1;
- (NSUInteger)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (UIEdgeInsets)_keylineLabelActiveAreaInsetsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (NSUInteger)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (CGRect)_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_applyTransitionFraction:(double)arg1 fromColor:(NSUInteger)arg2 toColor:(NSUInteger)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_loadLayoutRulesForState:(long long)arg1 withTopGap:(double)arg2 largeModuleHeight:(double)arg3;
- (void)_loadLayoutRules;
- (BOOL)_needsForegroundContainerView;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)_unloadSnapshotContentViews;
- (void)_loadSnapshotContentViews;
- (NSUInteger)_timeLabelOptions;
- (id)_digitalTimeLabelStyleFromViewMode:(long long)arg1 faceBounds:(CGRect)arg2;
- (void)dealloc;

@end

