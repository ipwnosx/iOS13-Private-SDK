//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HKInteractiveChartAnnotationView, UIView;

@protocol HKInteractiveChartAnnotationViewDataSource <NSObject>
- (BOOL)showSeparators;
- (UIView *)valueViewForColumnAtIndex:(long long)arg1 orientation:(long long)arg2;
- (long long)numberOfValuesForAnnotationView:(HKInteractiveChartAnnotationView *)arg1;
- (UIView *)leftMarginViewWithOrientation:(long long)arg1;
- (UIView *)dateViewWithOrientation:(long long)arg1;
@end

