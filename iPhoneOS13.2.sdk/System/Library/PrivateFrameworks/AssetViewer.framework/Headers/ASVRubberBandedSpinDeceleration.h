//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssetViewer/ASVDampingDeceleration.h>

@class ASVRubberBand;

@interface ASVRubberBandedSpinDeceleration : ASVDampingDeceleration
{
    float _currentOffset;
    float _previousRubberBandedOffset;
    ASVRubberBand *_rubberBand;
}

@property(retain, nonatomic) ASVRubberBand *rubberBand; // @synthesize rubberBand=_rubberBand;
@property(nonatomic) float previousRubberBandedOffset; // @synthesize previousRubberBandedOffset=_previousRubberBandedOffset;
@property(nonatomic) float currentOffset; // @synthesize currentOffset=_currentOffset;
// - (void).cxx_destruct;
- (float)decelerationDelta;
- (id)initWithVelocity:(float)arg1 minEndDelta:(float)arg2 startingOffset:(float)arg3 decelerationRate:(float)arg4 rubberBand:(id)arg5;

@end

