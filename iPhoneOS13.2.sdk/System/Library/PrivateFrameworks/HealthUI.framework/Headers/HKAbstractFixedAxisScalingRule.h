//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKInteractiveChartsAxisScalingRule-Protocol.h>

@class HKValueRange, NSDictionary;

@interface HKAbstractFixedAxisScalingRule : NSObject <HKInteractiveChartsAxisScalingRule>
{
    HKValueRange *_defaultAxisBounds;
    NSDictionary *_axisBoundsOverrides;
    BOOL _shouldExpandBoundsForOutliers;
    long long _portraitPrettyNumberRule;
}

@property(readonly, nonatomic) NSDictionary *axisBoundsOverrides; // @synthesize axisBoundsOverrides=_axisBoundsOverrides;
@property(readonly, nonatomic) HKValueRange *defaultAxisBounds; // @synthesize defaultAxisBounds=_defaultAxisBounds;
@property(nonatomic) long long portraitPrettyNumberRule; // @synthesize portraitPrettyNumberRule=_portraitPrettyNumberRule;
@property(nonatomic) BOOL shouldExpandBoundsForOutliers; // @synthesize shouldExpandBoundsForOutliers=_shouldExpandBoundsForOutliers;
// - (void).cxx_destruct;
- (id)_valueRangeForZoomLevel:(long long)arg1;
- (id)portraitYValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2 allowedDecimalPrecision:(long long)arg3;
- (id)yValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2;
- (id)init;

@end

