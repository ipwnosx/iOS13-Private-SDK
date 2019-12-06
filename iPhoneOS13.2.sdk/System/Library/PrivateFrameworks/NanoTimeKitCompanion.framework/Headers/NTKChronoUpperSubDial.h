//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKChronoSubDial.h>

@class SKNode;

@interface NTKChronoUpperSubDial : NTKChronoSubDial
{
    SKNode *_upper60Ticks;
    SKNode *_upper30Ticks;
    SKNode *_upper63Ticks;
    SKNode *_30mLabels;
    SKNode *_15mLabels;
    SKNode *_3mLabels;
    SKNode *_2mLabels;
}

// - (void).cxx_destruct;
- (void)colorize:(id)arg1;
- (void)updateTimeScale:(NSUInteger)arg1;
- (void)applyTransitionFraction:(double)arg1 fromTimeScale:(NSUInteger)arg2 toTimeScale:(NSUInteger)arg3;
- (id)ticksForTimeScale:(NSUInteger)arg1;
- (id)labelsForTimeScale:(NSUInteger)arg1;
- (id)initWithRadius:(double)arg1 forDevice:(id)arg2;

@end

