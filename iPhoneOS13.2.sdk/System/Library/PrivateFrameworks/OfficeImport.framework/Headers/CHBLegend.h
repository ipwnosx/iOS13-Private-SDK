//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHBLegend : NSObject
{
}

//  (id)readCHDLegendEntryFrom:(const struct XlChartCustomLegend )arg1 state:(id)arg2;
//  (id)readFrom:(struct XlChartLegendFrame )arg1 state:(id)arg2;
+ (int)xlLegendPositionEnumFromCHDLegendPosition:(int)arg1;
+ (int)chdLegendPositionEnumFromXlLegendPosition:(int)arg1;

@end

