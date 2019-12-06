//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesBlockCoordinate-Protocol.h>

@class NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface _HKLineSeriesBlockCoordinate : NSObject <HKGraphSeriesBlockCoordinate>
{
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;
    CGPoint _coordinate;
}

@property(readonly, nonatomic) CGPoint coordinate; // @synthesize coordinate=_coordinate;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <HKGraphSeriesBlockCoordinateInfo> userInfo;
@property(readonly, nonatomic) double endXValue;
@property(readonly, nonatomic) double startXValue;
- (double)maxYValue;
- (double)minYValue;
- (id)copyWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2;
- (id)initWithCoordinate:(CGPoint)arg1 userInfo:(id)arg2;

@end

