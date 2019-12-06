//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PXScrollViewControllerObserver-Protocol.h>

@class NSString, NSTimer, PXScrollViewController;

@interface PXScrollViewSpeedometer : PXObservable <PXScrollViewControllerObserver>
{
    BOOL _hasRampedUpForCurrentAnimatedScroll;
    PXScrollViewController *_scrollViewController;
    long long _regime;
    long long _previousRegime;
    double __lastTime;
    NSTimer *__timeoutTimer;
    long long __nextRegime;
    long long __nextRegimeCount;
    CGPoint _scrollVelocity;
    CGPoint _lastScrollDirection;
    CGPoint _scrollAcceleration;
    CGRect __lastVisibleRect;
}

@property(nonatomic) BOOL hasRampedUpForCurrentAnimatedScroll; // @synthesize hasRampedUpForCurrentAnimatedScroll=_hasRampedUpForCurrentAnimatedScroll;
@property(nonatomic) CGPoint scrollAcceleration; // @synthesize scrollAcceleration=_scrollAcceleration;
@property(nonatomic, setter=_setNextRegimeCount:) long long _nextRegimeCount; // @synthesize _nextRegimeCount=__nextRegimeCount;
@property(nonatomic, setter=_setNextRegime:) long long _nextRegime; // @synthesize _nextRegime=__nextRegime;
@property(retain, nonatomic, setter=_setTimeoutTimer:) NSTimer *_timeoutTimer; // @synthesize _timeoutTimer=__timeoutTimer;
@property(nonatomic, setter=_setLastTime:) double _lastTime; // @synthesize _lastTime=__lastTime;
@property(nonatomic, setter=_setLastVisibleRect:) CGRect _lastVisibleRect; // @synthesize _lastVisibleRect=__lastVisibleRect;
@property(nonatomic) CGPoint lastScrollDirection; // @synthesize lastScrollDirection=_lastScrollDirection;
@property(readonly, nonatomic) long long previousRegime; // @synthesize previousRegime=_previousRegime;
@property(readonly, nonatomic) long long regime; // @synthesize regime=_regime;
@property(nonatomic) CGPoint scrollVelocity; // @synthesize scrollVelocity=_scrollVelocity;
@property(readonly, nonatomic) PXScrollViewController *scrollViewController; // @synthesize scrollViewController=_scrollViewController;
// - (void).cxx_destruct;
- (void)_handleTimeoutTimer:(id)arg1;
- (void)_rescheduleTimeout;
- (void)_handleScrubbingTimeout;
- (void)_scheduleScrubbingTimeout;
- (double)fastUpperThreshold;
- (double)fastLowerThreshold;
- (double)mediumUpperThreshold;
- (double)mediumLowerThreshold;
- (void)_setPreviousRegime:(long long)arg1;
- (void)_setRegime:(long long)arg1;
- (void)_handleScrollEvent:(id)arg1 didScrollingEnd:(BOOL)arg2;
- (void)scrollViewControllerDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewControllerWillBeginScrollingAnimation:(id)arg1 towardsContentEdges:(NSUInteger)arg2;
- (void)scrollViewControllerDidEndScrolling:(id)arg1;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;
- (void)_updateScrollRegime;
- (void)didPerformChanges;
@property(readonly, copy) NSString *description;
- (id)mutableChangeObject;
- (id)init;
- (id)initWithScrollController:(id)arg1;

@end

