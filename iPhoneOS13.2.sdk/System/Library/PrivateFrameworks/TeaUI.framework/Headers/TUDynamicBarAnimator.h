//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink;
@protocol TUDynamicBarAnimatorDelegate;

@interface TUDynamicBarAnimator : NSObject
{
    double _topBarHeightForState[2];
    double _bottomBarOffsetForState[2];
    BOOL _dragging;
    CADisplayLink *_displayLink;
    double _targetTopBarHeight;
    double _unroundedTopBarHeight;
    double _lastUnroundedTopBarHeight;
    BOOL _didHideBarsByMoving;
    BOOL _didHideOrShowBarsExplicitly;
    double _lastOffset;
    BOOL _inSteadyState;
    long long _state;
    double _topBarHeight;
    double _bottomBarOffset;
    double _minimumTopBarHeight;
    double _maximumBottomBarOffset;
    id <TUDynamicBarAnimatorDelegate> _delegate;
}

@property(nonatomic) __weak id <TUDynamicBarAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double maximumBottomBarOffset; // @synthesize maximumBottomBarOffset=_maximumBottomBarOffset;
@property(nonatomic) double minimumTopBarHeight; // @synthesize minimumTopBarHeight=_minimumTopBarHeight;
@property(readonly, nonatomic) double bottomBarOffset; // @synthesize bottomBarOffset=_bottomBarOffset;
@property(readonly, nonatomic) double topBarHeight; // @synthesize topBarHeight=_topBarHeight;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
// - (void).cxx_destruct;
- (void)setBottomBarOffset:(double)arg1 forState:(long long)arg2;
@property(readonly, nonatomic) double minimumBottomBarOffset;
@property(readonly, nonatomic) double maximumTopBarHeight;
- (void)setTopBarHeight:(double)arg1 forState:(long long)arg2;
- (void)endScrollingWithTargetOffset:(double)arg1 velocity:(double)arg2;
- (void)updateScrollingWithOffset:(double)arg1;
- (void)beginScrollingWithOffset:(double)arg1;
- (void)_updateDisplayLink;
- (void)_displayLinkFired:(id)arg1;
- (double)_constrainTopBarHeight:(double)arg1;
- (BOOL)canTransitionToState:(long long)arg1;
@property(readonly, nonatomic) long long targetState;
- (void)_setInSteadyState:(BOOL)arg1;
- (void)_updateOutputs;
- (double)_bottomBarOffsetForTopBarHeight:(double)arg1;
- (void)_transitionToSteadyState;
- (void)attemptTransitionToState:(long long)arg1 animated:(BOOL)arg2;
- (void)_moveBarsWithDelta:(double)arg1;
- (id)init;

@end

