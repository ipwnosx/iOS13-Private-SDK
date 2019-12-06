//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _PathPoint : NSObject
{
    BOOL _sentinelPoint;
    double _force;
    double _relativeTime;
    double _absoluteTime;
    double _decay;
    double _length;
    CGPoint _point;
}

@property(nonatomic) double length; // @synthesize length=_length;
@property(nonatomic) double decay; // @synthesize decay=_decay;
@property(nonatomic) double absoluteTime; // @synthesize absoluteTime=_absoluteTime;
@property(nonatomic) double relativeTime; // @synthesize relativeTime=_relativeTime;
@property(nonatomic) double force; // @synthesize force=_force;
@property(nonatomic) CGPoint point; // @synthesize point=_point;
@property(nonatomic, getter=isSentinelPoint) BOOL sentinelPoint; // @synthesize sentinelPoint=_sentinelPoint;
- (id)description;

@end

