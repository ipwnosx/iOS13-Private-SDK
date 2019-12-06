//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCH3DBarChartAppearance-Protocol.h>
#import <iWorkImport/TSCHUnretainedParent-Protocol.h>

@class TSCH3DChartBarElementProperties;

__attribute__((visibility("hidden")))
@interface TSCH3DBarChartDefaultAppearance : NSObject <TSCHUnretainedParent, TSCH3DBarChartAppearance>
{
    TSCH3DChartBarElementProperties *mProperties;
}

// + (struct BarExtrusionDetails)defaultDetails;
+ (int)shapeType;
- (BOOL)isCircular;
- (float)depthForScene:(id)arg1;
- (float)chartMinZForScene:(id)arg1;
- (float)signedValueForSeries:(id)arg1 index:(const tvec2_3b141483 )arg2;
- (float)maxValueForSeries:(long long)arg1;
- (void)clearParent;
- (void)dealloc;
- (id)initWithProperties:(id)arg1;

@end

