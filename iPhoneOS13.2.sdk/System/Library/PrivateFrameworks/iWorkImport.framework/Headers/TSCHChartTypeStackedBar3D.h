//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DChartType.h>

__attribute__((visibility("hidden")))
@interface TSCHChartTypeStackedBar3D : TSCH3DChartType
{
}

- (long long)userInterfaceTag;
- (id)imageWithPreset:(id)arg1 target:(int)arg2 imageSize:(CGSize)arg3 imageScale:(double)arg4 swatchFrame:(CGRect)arg5 documentRoot:(id)arg6 shouldCache:(BOOL )arg7;
- (BOOL)supportsBevels;
- (id)defaultSeriesType:(NSUInteger)arg1;
- (id)userInterfaceName;
- (id)init;
- (double)categoryAxisTitleRotation;
- (double)valueAxisTitleRotation;
- (id)titlePositionerWithInfo:(id)arg1 scene:(id)arg2;
// - (struct TSCH3DChartRotationLimit)rotation3DLimit;

@end

