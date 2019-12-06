//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MNActiveRouteInfo, MNLocation, NSArray, NSTimer;
@protocol MNTimeAndDistanceUpdaterDelegate;

__attribute__((visibility("hidden")))
@interface MNTimeAndDistanceUpdater : NSObject
{
    id <MNTimeAndDistanceUpdaterDelegate> _delegate;
    MNLocation *_location;
    NSArray *_routes;
    NSTimer *_minuteTimer;
    MNActiveRouteInfo *_mainRoute;
    double _remainingTime;
    double _remainingDistance;
    double _distanceToManeuverStart;
    double _distanceToManeuverEnd;
}

@property(readonly, nonatomic) double distanceToManeuverEnd; // @synthesize distanceToManeuverEnd=_distanceToManeuverEnd;
@property(readonly, nonatomic) double distanceToManeuverStart; // @synthesize distanceToManeuverStart=_distanceToManeuverStart;
@property(readonly, nonatomic) double remainingDistance; // @synthesize remainingDistance=_remainingDistance;
@property(readonly, nonatomic) double remainingTime; // @synthesize remainingTime=_remainingTime;
@property(nonatomic) __weak id <MNTimeAndDistanceUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_startTimerToNextMinute;
- (void)updateDisplayETAForRoute:(id)arg1 notificationType:(NSUInteger)arg2;
- (void)setRoutes:(id)arg1 mainRoute:(id)arg2 location:(id)arg3 notificationType:(NSUInteger)arg4;
- (void)setLocation:(id)arg1 notificationType:(NSUInteger)arg2;
- (void)stopUpdating;
- (void)startUpdating;
- (void)dealloc;

@end

