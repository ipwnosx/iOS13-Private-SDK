//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface NSValue (HKGraphSeriesDataBlockPath)
// + (id)valueWithHKGraphSeriesDataBlockPath:(CDStruct_6ca94699)arg1;
//  (id)valueWithHKLinearTransform:(struct HKLinearTransform)arg1;
// - (CDStruct_6ca94699)HKGraphSeriesDataBlockPathValue;
- (id)_hk_CGPointMidPointToValue:(id)arg1 percentage:(double)arg2;
- (id)_hk_HKLinearTransformMidPointToValue:(id)arg1 percentage:(double)arg2;
- (id)hk_midPointToValue:(id)arg1 percentage:(double)arg2;
- (BOOL)_hk_isHKLinearTransform;
- (BOOL)_hk_isCGPoint;
- (BOOL)hk_animatable;
//  (struct HKLinearTransform)HKLinearTransformValue;
@end

