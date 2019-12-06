//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/POPPropertyAnimation.h>

@interface POPSpringAnimation : POPPropertyAnimation
{
}

+ (id)animationWithPropertyNamed:(id)arg1;
+ (id)animation;
+ (void)convertTension:(double)arg1 friction:(double)arg2 toBounciness:(double )arg3 speed:(double )arg4;
+ (void)convertBounciness:(double)arg1 speed:(double)arg2 toTension:(double )arg3 friction:(double )arg4 mass:(double )arg5;
- (void)_appendDescription:(id)arg1 debug:(BOOL)arg2;
- (void)_updatedDynamicsMass;
- (void)_updatedDynamicsFriction;
- (void)_updatedDynamicsTension;
- (void)setSolver:(SpringSolver_fe820e75 )arg1;
- (SpringSolver_fe820e75 )solver;
@property(nonatomic) double springBounciness;
@property(nonatomic) double springSpeed;
@property(nonatomic) double dynamicsMass;
@property(nonatomic) double dynamicsFriction;
@property(nonatomic) double dynamicsTension;
@property(copy, nonatomic) id velocity;
- (void)dealloc;
- (id)init;
- (void)_initState;
// - (id)copyWithZone:(_NSZone )arg1;

@end

