//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CAAnimationGroup.h>

@interface CAAnimationGroup (TSDCAAnimationAdditions)
- (double)TSD_animationPercentByApplyingTimingFunctionForKeyPath:(id)arg1 atTime:(double)arg2;
- (id)TSD_animationForKeyPath:(id)arg1 atTime:(double)arg2;
- (id)TSD_valueForKeyPath:(id)arg1 atTime:(double)arg2 animationCache:(id)arg3;
- (void)p_getValue:(id )arg1 animation:(id )arg2 animationPercent:(double )arg3 forKeyPath:(id)arg4 atTime:(double)arg5 animationCache:(id)arg6;
- (BOOL)TSD_containsAnimationForKeyPath:(id)arg1;
@end

