//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface VKViewportInfo : NSObject
{
//     CDStruct_2c43369c _centerCoordinate;
    long long _tileSize;
    float _zoomLevel;
    double _pitch;
    double _yaw;
}

@property(nonatomic) double yaw; // @synthesize yaw=_yaw;
@property(nonatomic) double pitch; // @synthesize pitch=_pitch;
@property(nonatomic) float zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(nonatomic) long long tileSize; // @synthesize tileSize=_tileSize;
// @property(nonatomic) CDStruct_c3b9c2ee centerCoordinate; // @synthesize centerCoordinate=_centerCoordinate;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end

