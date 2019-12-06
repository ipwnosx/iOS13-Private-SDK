//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUPrimaryStateIconContentView.h>


@class HULockIconStateTransition, HUShapeLayerView, HUVisualEffectContainerView, UIVisualEffectView;

@interface HULockIconContentView : HUPrimaryStateIconContentView <CAAnimationDelegate>
{
    HUShapeLayerView *_lockBodyView;
    HUVisualEffectContainerView *_lockBodyContainerView;
    HUShapeLayerView *_lockKeyholeFillView;
    HUVisualEffectContainerView *_lockKeyholeContainerView;
    HUShapeLayerView *_lockShackleView;
    UIVisualEffectView *_lockShackleContainerView;
    HULockIconStateTransition *_activeTransition;
    NSUInteger _lockState;
    CGSize _lastLayoutSize;
}

+ (id)_lockShacklePathForBounds:(CGRect)arg1;
+ (id)_lockKeyholePathForBounds:(CGRect)arg1;
@property(nonatomic) CGSize lastLayoutSize; // @synthesize lastLayoutSize=_lastLayoutSize;
@property(nonatomic) NSUInteger lockState; // @synthesize lockState=_lockState;
@property(retain, nonatomic) HULockIconStateTransition *activeTransition; // @synthesize activeTransition=_activeTransition;
@property(retain, nonatomic) UIVisualEffectView *lockShackleContainerView; // @synthesize lockShackleContainerView=_lockShackleContainerView;
@property(retain, nonatomic) HUShapeLayerView *lockShackleView; // @synthesize lockShackleView=_lockShackleView;
@property(retain, nonatomic) HUVisualEffectContainerView *lockKeyholeContainerView; // @synthesize lockKeyholeContainerView=_lockKeyholeContainerView;
@property(retain, nonatomic) HUShapeLayerView *lockKeyholeFillView; // @synthesize lockKeyholeFillView=_lockKeyholeFillView;
@property(retain, nonatomic) HUVisualEffectContainerView *lockBodyContainerView; // @synthesize lockBodyContainerView=_lockBodyContainerView;
@property(retain, nonatomic) HUShapeLayerView *lockBodyView; // @synthesize lockBodyView=_lockBodyView;
// - (void).cxx_destruct;
- (id)_viewForTransitionAnimationType:(NSUInteger)arg1;
- (id)_viewsAnimatedForStateTransition;
- (void)_removeAllTransitionAnimations;
- (void)_removePendingBounceAnimations;
- (void)_applyAnimation:(id)arg1 ofType:(NSUInteger)arg2 animated:(BOOL)arg3;
- (void)_translateShackleForLockState:(NSUInteger)arg1 animated:(BOOL)arg2;
- (void)_rotateShackleForLockState:(NSUInteger)arg1 animated:(BOOL)arg2;
- (void)_performTransitionToLockState:(NSUInteger)arg1 animated:(BOOL)arg2;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)updateColorsForDisplayStyle:(NSUInteger)arg1;
- (void)updateIconFromState:(long long)arg1 toState:(long long)arg2 animated:(BOOL)arg3;
- (id)managedVisualEffectViews;
- (BOOL)wantsManagedVibrancyEffect;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

