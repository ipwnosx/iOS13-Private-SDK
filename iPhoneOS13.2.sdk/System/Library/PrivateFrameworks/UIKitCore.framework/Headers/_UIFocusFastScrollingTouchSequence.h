//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIFocusFastScrollingTouchSequence : NSObject
{
    BOOL _didReceiveSpatialFocusUpdate;
    BOOL _didReceiveProgrammaticFocusUpdate;
    double _peakSpeed;
    CGPoint _startLocation;
    CGPoint _previousLocation;
    CGPoint _endLocation;
    CGVector _axisLockedDistanceAccumulator;
}

@property(nonatomic) BOOL didReceiveProgrammaticFocusUpdate; // @synthesize didReceiveProgrammaticFocusUpdate=_didReceiveProgrammaticFocusUpdate;
@property(nonatomic) BOOL didReceiveSpatialFocusUpdate; // @synthesize didReceiveSpatialFocusUpdate=_didReceiveSpatialFocusUpdate;
@property(nonatomic) CGVector axisLockedDistanceAccumulator; // @synthesize axisLockedDistanceAccumulator=_axisLockedDistanceAccumulator;
@property(nonatomic) double peakSpeed; // @synthesize peakSpeed=_peakSpeed;
@property(nonatomic) CGPoint endLocation; // @synthesize endLocation=_endLocation;
@property(nonatomic) CGPoint previousLocation; // @synthesize previousLocation=_previousLocation;
@property(nonatomic) CGPoint startLocation; // @synthesize startLocation=_startLocation;

@end

