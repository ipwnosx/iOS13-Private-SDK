//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSMADEVValue : NSObject
{
    double _observationInterval;
    double _madev;
}

@property(readonly, nonatomic) double madev; // @synthesize madev=_madev;
@property(readonly, nonatomic) double observationInterval; // @synthesize observationInterval=_observationInterval;
- (id)description;
- (id)initWithObservationInterval:(double)arg1 andMADEV:(double)arg2;

@end

