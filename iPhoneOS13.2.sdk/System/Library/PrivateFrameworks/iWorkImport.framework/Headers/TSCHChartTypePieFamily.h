//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH2DChartType.h>

__attribute__((visibility("hidden")))
@interface TSCHChartTypePieFamily : TSCH2DChartType
{
}

- (BOOL)supportsAxisLabelAngle;
- (BOOL)shouldChangeExplosionWithPreviousChartType:(id)arg1 chartInfo:(id)arg2 seriesList:(id)arg3;
- (id)animationDeliveryStylesForFilter:(id)arg1;
- (BOOL)explosionAffectsChartBodyBounds;
- (Class)repClass;
- (id)init;
- (CGSize)mungeBodySize:(CGSize)arg1;
- (BOOL)layoutFrameShouldEncloseInfoGeometry;

@end

