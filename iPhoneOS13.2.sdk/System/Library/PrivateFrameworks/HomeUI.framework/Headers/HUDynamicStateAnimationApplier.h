//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUDisplayLinkApplier.h>

@class HUAnimationSettings;

@interface HUDynamicStateAnimationApplier : HUDisplayLinkApplier
{
    _Bool _hasUpdatedProgress;
    HUAnimationSettings *_animationSettings;
    double _initialProgress;
    double _targetProgress;
    double _preInterpolatedProgress;
    double _lastTargetChangeTime;
}

@property(nonatomic) _Bool hasUpdatedProgress; // @synthesize hasUpdatedProgress=_hasUpdatedProgress;
@property(nonatomic) double lastTargetChangeTime; // @synthesize lastTargetChangeTime=_lastTargetChangeTime;
@property(nonatomic) double preInterpolatedProgress; // @synthesize preInterpolatedProgress=_preInterpolatedProgress;
@property(nonatomic) double targetProgress; // @synthesize targetProgress=_targetProgress;
@property(nonatomic) double initialProgress; // @synthesize initialProgress=_initialProgress;
- (double)effectiveInputProgressForBlock:(id /* block */)arg1;
- (void)updateProgress:(double)arg1;
- (_Bool)start;
@property(readonly, copy, nonatomic) HUAnimationSettings *animationSettings; // @synthesize animationSettings=_animationSettings;
- (id)initWithAnimationSettings:(id)arg1 initialProgress:(double)arg2 progressInputBlock:(id /* block */)arg3;

@end
