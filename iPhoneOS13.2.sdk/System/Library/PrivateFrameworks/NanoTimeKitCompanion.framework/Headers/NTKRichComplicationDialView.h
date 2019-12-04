//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, CAReplicatorLayer;

@interface NTKRichComplicationDialView : UIView
{
    CAReplicatorLayer *_largeTicksReplicatorLayer;
    CALayer *_largeTickLayer;
    double _largeTickPositionY;
    CAReplicatorLayer *_smallTicksReplicatorLayer;
    CALayer *_smallTickLayer;
    double _smallTickPositionY;
    long long _largeTickCount;
    long long _smallTickCountPerLargeTick;
    double _largeTicksTransformAngle;
    float _progress;
    float _progressDirection;
}

@property(nonatomic) float progressDirection; // @synthesize progressDirection=_progressDirection;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) CALayer *smallTickLayer; // @synthesize smallTickLayer=_smallTickLayer;
@property(readonly, nonatomic) CALayer *largeTickLayer; // @synthesize largeTickLayer=_largeTickLayer;
- (void)layoutSubviews;
- (void)_updateTicksRotationTransform;
- (void)setLargeTicksTransformAngle:(double)arg1;
- (id)initWithTickCount:(long long)arg1 tickSize:(struct CGSize)arg2 dialRange:(double)arg3 startAngle:(double)arg4;
- (id)initWithLargeTickCount:(long long)arg1 smallTickCountPerLargeTick:(long long)arg2 largeTickSize:(struct CGSize)arg3 smallTickSize:(struct CGSize)arg4 dialRange:(double)arg5 startAngle:(double)arg6;

@end
