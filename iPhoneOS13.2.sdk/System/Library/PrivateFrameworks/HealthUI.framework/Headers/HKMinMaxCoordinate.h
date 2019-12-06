//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesBlockCoordinate-Protocol.h>

@class NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKMinMaxCoordinate : NSObject <HKGraphSeriesBlockCoordinate>
{
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;
    CGPoint _min;
    CGPoint _max;
}

@property(readonly, nonatomic) CGPoint max; // @synthesize max=_max;
@property(readonly, nonatomic) CGPoint min; // @synthesize min=_min;
// - (void).cxx_destruct;
- (BOOL)isVisibleInChartRect:(CGRect)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <HKGraphSeriesBlockCoordinateInfo> userInfo;
- (double)yAxisDifferenceToPoint:(CGPoint)arg1;
- (double)distanceToPoint:(CGPoint)arg1;
@property(readonly, nonatomic) double endXValue;
@property(readonly, nonatomic) double startXValue;
- (id)copyWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2;
- (id)initWithChartPoint:(id)arg1 xAxisTransform:(id)arg2 yAxisTransform:(id)arg3;
- (id)initWithMin:(CGPoint)arg1 max:(CGPoint)arg2 userInfo:(id)arg3;

@end

