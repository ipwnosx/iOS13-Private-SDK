//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CHDMarker, OADFill, OADGraphicProperties, OADStroke;

@protocol CHAutoStyling <NSObject>
- (OADFill *)autoTextFill;
- (OADStroke *)autoStrokeForSeriesIndex:(NSUInteger)arg1;
- (void)resolveMarker:(CHDMarker *)arg1 withSeriesGraphicProperties:(OADGraphicProperties *)arg2 forSeriesIndex:(NSUInteger)arg3 clientGraphicPropertyDefaults:(id (^)(OADGraphicProperties *, NSArray *))arg4;
- (void)resolveLegendGraphicProperties:(OADGraphicProperties *)arg1;
- (void)resolveMinorGridLinesGraphicProperties:(OADGraphicProperties *)arg1;
- (void)resolveMajorGridLinesGraphicProperties:(OADGraphicProperties *)arg1;
- (void)resolveAxisGraphicProperties:(OADGraphicProperties *)arg1;
- (void)resolvePlotAreaGraphicProperties:(OADGraphicProperties *)arg1;
- (void)resolveFloorGraphicProperties:(OADGraphicProperties *)arg1;
- (void)resolveWallGraphicProperties:(OADGraphicProperties *)arg1;
- (void)resolveChartAreaGraphicProperties:(OADGraphicProperties *)arg1;
- (void)resolveGraphicPropertiesOfErrorBar:(OADGraphicProperties *)arg1 forSeriesIndex:(NSUInteger)arg2;
- (void)resolveGraphicPropertiesOfTrendline:(OADGraphicProperties *)arg1 forSeriesIndex:(NSUInteger)arg2;
- (void)resolveGraphicPropertiesOfSeries:(OADGraphicProperties *)arg1 forSeriesIndex:(NSUInteger)arg2 isLine:(BOOL)arg3;
- (void)resolveGraphicPropertiesOfSeries:(OADGraphicProperties *)arg1 forSeriesIndex:(NSUInteger)arg2;

@optional
- (void)setAutoChartStrokeIsHollow:(BOOL)arg1;
- (void)setAutoChartFillIsHollow:(BOOL)arg1;
@end

