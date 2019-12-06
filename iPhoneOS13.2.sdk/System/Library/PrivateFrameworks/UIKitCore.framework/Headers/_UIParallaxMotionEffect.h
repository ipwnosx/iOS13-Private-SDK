//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIMotionEffect.h"

@class UIInterpolatingMotionEffect, UIMotionEffectGroup, _UITiltMotionEffect;

@interface _UIParallaxMotionEffect : UIMotionEffect
{
    UIMotionEffectGroup *_group;
    UIOffset _slideMagnitude;
    UIInterpolatingMotionEffect *_horizontalSlideEffect;
    UIInterpolatingMotionEffect *_verticalSlideEffect;
    _UITiltMotionEffect *_tiltEffect;
}

@property(nonatomic) UIOffset slideMagnitude; // @synthesize slideMagnitude=_slideMagnitude;
// - (void).cxx_destruct;
@property(nonatomic) double rotatingSphereRadius;
@property(nonatomic) double maximumVerticalTiltAngle;
@property(nonatomic) double maximumHorizontalTiltAngle;
- (void)_activateTiltEffectIfNecessary;
- (id)keyPathsAndRelativeValuesForViewerOffset:(UIOffset)arg1;
- (id)_keyPathsAndRelativeValuesForPose:(id)arg1;
- (void)_updateGroupMotionEffect;
@property(nonatomic) double verticalSlideAccelerationBoostFactor;
@property(nonatomic) double horizontalSlideAccelerationBoostFactor;
- (void)_updateSlideEffectsWithCurrentSlideMagnitude;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end

