//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHChartSeriesTypeColumn.h>

__attribute__((visibility("hidden")))
@interface TSCHChartSeriesTypeStackedColumn : TSCHChartSeriesTypeColumn
{
}

- (id)userInterfaceName;
- (BOOL)supportsBarGap;
- (id)elementBuilder;
- (NSUInteger)numberOfSeriesForCalculatingBarWidth:(id)arg1;
- (NSUInteger)seriesIndexForDrawing:(id)arg1;
- (double)beginDataValueForSeries:(id)arg1 groupIndex:(NSUInteger)arg2 valueAxisID:(id)arg3;
- (double)beginValueForSeries:(NSUInteger)arg1 index:(NSUInteger)arg2 unitSpaceIntercept:(double)arg3 relativelyPositive:(BOOL)arg4 valueAxis:(id)arg5;
- (id)genericToSpecificPropertyMap;
- (unsigned int)adjustLabelPosition:(unsigned int)arg1 forAxisValue:(double)arg2 intercept:(double)arg3;
- (unsigned int)filterChartLabelPosition:(unsigned int)arg1;
- (id)userInterfaceNameForLabelPosition:(id)arg1;
- (id)legalChartLabelPositions;
- (id)init;
- (id)g_genericToSpecificPropertyMapStackedColumn;

@end

