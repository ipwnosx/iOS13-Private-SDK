//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHChartAxisLayoutItem.h>

@class TSCHChartValueAxisLabelsLayoutItem;

__attribute__((visibility("hidden")))
@interface TSCHChartValueAxisLayoutItem : TSCHChartAxisLayoutItem
{
    TSCHChartValueAxisLabelsLayoutItem *mValueLabels;
}

@property(readonly, nonatomic) TSCHChartValueAxisLabelsLayoutItem *axisValueLabelsLayoutItem; // @synthesize axisValueLabelsLayoutItem=mValueLabels;
// - (void).cxx_destruct;
- (CGRect)protected_layoutSpaceRectForAllLabels;
- (id)renderersWithRep:(id)arg1;
- (void)p_layoutLabelsNow;
- (void)buildSubTree;

@end

