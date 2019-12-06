//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXMADSREnvelope : NSObject
{
    double _attackMS;
    double _attackLevel;
    double _decayMS;
    double _sustainMS;
    double _sustainLevel;
    double _releaseMS;
}

+ (id)defaultEnvelope;
@property(nonatomic) double releaseMS; // @synthesize releaseMS=_releaseMS;
@property(nonatomic) double sustainLevel; // @synthesize sustainLevel=_sustainLevel;
@property(nonatomic) double sustainMS; // @synthesize sustainMS=_sustainMS;
@property(nonatomic) double decayMS; // @synthesize decayMS=_decayMS;
@property(nonatomic) double attackLevel; // @synthesize attackLevel=_attackLevel;
@property(nonatomic) double attackMS; // @synthesize attackMS=_attackMS;
- (double)levelForTime:(double)arg1;
@property(readonly, nonatomic) double lengthMS;
- (id)copy;
- (id)init;
- (id)initWithAttackDuration:(double)arg1 attackLevel:(double)arg2 decayDuration:(double)arg3 sustainDuration:(double)arg4 sustainLevel:(double)arg5 releaseDuration:(double)arg6;

@end

