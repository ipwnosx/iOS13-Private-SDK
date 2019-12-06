//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesBlockCoordinate-Protocol.h>

@class HKMinMaxCoordinate, NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface _HKBloodPressureCoordinate : NSObject <HKGraphSeriesBlockCoordinate>
{
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;
    HKMinMaxCoordinate *_systolicCoordinate;
    HKMinMaxCoordinate *_diastolicCoordinate;
}

@property(readonly, nonatomic) HKMinMaxCoordinate *diastolicCoordinate; // @synthesize diastolicCoordinate=_diastolicCoordinate;
@property(readonly, nonatomic) HKMinMaxCoordinate *systolicCoordinate; // @synthesize systolicCoordinate=_systolicCoordinate;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <HKGraphSeriesBlockCoordinateInfo> userInfo;
@property(readonly, nonatomic) double endXValue;
@property(readonly, nonatomic) double startXValue;
- (id)copyWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2;
- (id)initWithSystolicCoordinate:(id)arg1 diastolicCoordinate:(id)arg2 userInfo:(id)arg3;

@end

