//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKInteractiveChartGenericStatFormatter.h>

@interface HKInteractiveChartAudioExposureStatFormatter : HKInteractiveChartGenericStatFormatter
{
}

- (id)_formatDuration:(double)arg1;
- (id)_formatQuantityAudioData:(id)arg1;
- (long long)_numberOfDaysVisibleInRange:(id)arg1;
- (id)_formattedStringWithValue:(double)arg1 unit:(id)arg2 showUnit:(BOOL)arg3;
- (id)_minorAttributes;
- (id)_majorAttributes;
- (id)_formatAudioMin:(double)arg1 max:(double)arg2;
- (id)_formattedAnnotationForChartData:(id)arg1;
- (id)_attributedCurrentAudioExposureClassificationForChartData:(id)arg1;
- (id)_formattedCurrentValueForChartData:(id)arg1;
- (id)_formattedSelectedRangeLabelDataWithChartData:(id)arg1 context:(long long)arg2;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1;

@end

