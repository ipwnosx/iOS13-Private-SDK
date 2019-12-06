//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GEORoadMatch : NSObject
{
//     CDStruct_c8b5ad3f _roadFeature;
    NSString *_roadName;
//     CDStruct_2c43369c _coordinateOnRoad;
    double _courseOnRoad;
    double _distanceFromRoad;
    double _roadWidth;
    double _distanceFromJunction;
    double _junctionRadius;
}

@property(nonatomic) double junctionRadius; // @synthesize junctionRadius=_junctionRadius;
@property(nonatomic) double distanceFromJunction; // @synthesize distanceFromJunction=_distanceFromJunction;
@property(nonatomic) double roadWidth; // @synthesize roadWidth=_roadWidth;
@property(nonatomic) double distanceFromRoad; // @synthesize distanceFromRoad=_distanceFromRoad;
@property(nonatomic) double courseOnRoad; // @synthesize courseOnRoad=_courseOnRoad;
// @property(nonatomic) CDStruct_c3b9c2ee coordinateOnRoad; // @synthesize coordinateOnRoad=_coordinateOnRoad;
@property(copy, nonatomic) NSString *roadName; // @synthesize roadName=_roadName;
// @property(readonly, nonatomic) CDStruct_c8b5ad3f roadFeature; // @synthesize roadFeature=_roadFeature;
// - (void).cxx_destruct;
- (void)dealloc;
// - (id)initWithCoordinateOnRoad:(CDStruct_c3b9c2ee)arg1 courseOnRoad:(double)arg2;

@end

