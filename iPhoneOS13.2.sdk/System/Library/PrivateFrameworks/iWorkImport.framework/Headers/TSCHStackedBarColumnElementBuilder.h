//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHBarColumnElementBuilder.h>

__attribute__((visibility("hidden")))
@interface TSCHStackedBarColumnElementBuilder : TSCHBarColumnElementBuilder
{
}

- (CGPathRef)newRoundedRectPathWithRect:(CGRect)arg1 chartInfo:(id)arg2 series:(id)arg3 groupIndex:(NSUInteger)arg4 isVertical:(BOOL)arg5 forGroups:(id)arg6 forBodyLayout:(id)arg7;
- (id)p_stackedRectsWithChartInfo:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3;
- (NSUInteger)p_logicalSeriesIndexForSeries:(id)arg1;
- (NSUInteger)p_numberOfSeriesForGapCalcInModel:(id)arg1;
- (double)p_beginValueForSeries:(id)arg1 index:(NSUInteger)arg2 unitSpaceIntercept:(double)arg3 relativelyPositive:(BOOL)arg4 valueAxis:(id)arg5;

@end

