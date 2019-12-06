//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/SBFScreenWakeAnimationTarget-Protocol.h>

@class SBFLockScreenDateView, UIView, UIVisualEffectView;

@interface SBFLockScreenWakeAnimator : NSObject <SBFScreenWakeAnimationTarget>
{
    long long _wakeState;
    UIVisualEffectView *_wakeEffectView;
    UIView *_superviewForDateViewAnimation;
    SBFLockScreenDateView *_dateView;
}

@property(retain, nonatomic) SBFLockScreenDateView *dateView; // @synthesize dateView=_dateView;
@property(retain, nonatomic) UIView *superviewForDateViewAnimation; // @synthesize superviewForDateViewAnimation=_superviewForDateViewAnimation;
@property(nonatomic) __weak UIVisualEffectView *wakeEffectView; // @synthesize wakeEffectView=_wakeEffectView;
@property(nonatomic) long long wakeState; // @synthesize wakeState=_wakeState;
// - (void).cxx_destruct;
- (id)_wakeEffectsForPersistentWakeState:(long long)arg1;
- (id)_wakeEffectsForAnimatingWakeState:(long long)arg1;
- (long long)_targetWakeStateForFadeIn:(BOOL)arg1;
- (void)updateWakeEffectsForWake:(BOOL)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateWakeEffectsForWake:(BOOL)arg1;

@end

