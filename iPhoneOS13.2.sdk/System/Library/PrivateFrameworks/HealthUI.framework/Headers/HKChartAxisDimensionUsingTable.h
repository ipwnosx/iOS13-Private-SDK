//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKAxisLabelDimension-Protocol.h>

@class HKDisplayType, HKUnitPreferenceController;

@interface HKChartAxisDimensionUsingTable : NSObject <HKAxisLabelDimension>
{
//    struct HKStepSizeTableEntryDefn _stepSizeTable;
    long long _stepSizeTableSize;
    HKDisplayType *_displayType;
    HKUnitPreferenceController *_unitController;
}

@property(readonly) HKUnitPreferenceController *unitController; // @synthesize unitController=_unitController;
@property(readonly) HKDisplayType *displayType; // @synthesize displayType=_displayType;
@property(readonly) long long stepSizeTableSize; // @synthesize stepSizeTableSize=_stepSizeTableSize;
// property(readonly) struct HKStepSizeTableEntryDefn stepSizeTable; // @synthesize stepSizeTable=_stepSizeTable;
// - (void).cxx_destruct;
//  (struct HKStepSizeTableEntryDefn )_findStepSize:(double)arg1 allowEqual:(BOOL)arg2;
- (id)stringForLocation:(id)arg1;
- (void)setStepSizeForLabels:(double)arg1;
- (double)ticksPerStepSize:(double)arg1;
- (double)niceStepSizeLargerThan:(double)arg1;
//  (id)initWithStepSizeTable:(struct HKStepSizeTableEntryDefn )arg1 stepSizeTableSize:(long long)arg2 displayType:(id)arg3 unitController:(id)arg4;

@end

