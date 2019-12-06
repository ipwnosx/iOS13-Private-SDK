//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, _UIVelocityIntegrator;
@protocol _UIPlatterMenuPanningTransformerDelegate;

__attribute__((visibility("hidden")))
@interface _UIPlatterMenuPanningTransformer : NSObject
{
    int _axisLock;
    int _overrideLockAxis;
    id <_UIPlatterMenuPanningTransformerDelegate> _delegate;
    double _minimumXVelocityForAxisLock;
    double _lastAxisLockTime;
    NSDate *_timeForLastDirectionalChange;
    NSDate *_panBeginTime;
    _UIVelocityIntegrator *_velocityIntegrator;
    CGPoint _transitionZonePosition;
    CGSize _transitionZoneSize;
    CGPoint _lastTouchPosition;
    CGVector _lastOffset;
    CGPoint _lastTransformedPoint;
    CGPoint _panBeginTouchPosition;
    CGPoint _lastDirectionChangeTouchPosition;
    CGRect _transitionZoneRect;
}

+ (id)transformerWithAxisTransitionZonePosition:(CGPoint)arg1 axisTransitionZoneSize:(CGSize)arg2;
@property(retain, nonatomic) _UIVelocityIntegrator *velocityIntegrator; // @synthesize velocityIntegrator=_velocityIntegrator;
@property(retain, nonatomic) NSDate *panBeginTime; // @synthesize panBeginTime=_panBeginTime;
@property(nonatomic) CGPoint lastDirectionChangeTouchPosition; // @synthesize lastDirectionChangeTouchPosition=_lastDirectionChangeTouchPosition;
@property(nonatomic) CGPoint panBeginTouchPosition; // @synthesize panBeginTouchPosition=_panBeginTouchPosition;
@property(nonatomic) CGPoint lastTransformedPoint; // @synthesize lastTransformedPoint=_lastTransformedPoint;
@property(retain, nonatomic) NSDate *timeForLastDirectionalChange; // @synthesize timeForLastDirectionalChange=_timeForLastDirectionalChange;
@property(nonatomic) CGVector lastOffset; // @synthesize lastOffset=_lastOffset;
@property(nonatomic) double lastAxisLockTime; // @synthesize lastAxisLockTime=_lastAxisLockTime;
@property(nonatomic) int overrideLockAxis; // @synthesize overrideLockAxis=_overrideLockAxis;
@property(nonatomic) int axisLock; // @synthesize axisLock=_axisLock;
@property(nonatomic) CGRect transitionZoneRect; // @synthesize transitionZoneRect=_transitionZoneRect;
@property(nonatomic) CGPoint lastTouchPosition; // @synthesize lastTouchPosition=_lastTouchPosition;
@property(nonatomic) CGSize transitionZoneSize; // @synthesize transitionZoneSize=_transitionZoneSize;
@property(nonatomic) CGPoint transitionZonePosition; // @synthesize transitionZonePosition=_transitionZonePosition;
@property(nonatomic) double minimumXVelocityForAxisLock; // @synthesize minimumXVelocityForAxisLock=_minimumXVelocityForAxisLock;
@property(nonatomic) __weak id <_UIPlatterMenuPanningTransformerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)didEndPanningWithTouchPosition:(CGPoint)arg1 currentTransformedPosition:(CGPoint)arg2;
- (void)didPanWithTouchPosition:(CGPoint)arg1 currentTransformedPosition:(CGPoint)arg2;
- (void)didBeginPanningWithTouchPosition:(CGPoint)arg1 currentTransformedPosition:(CGPoint)arg2;
@property(readonly, nonatomic) CGVector velocity;
@property(readonly, nonatomic) CGVector offset;
- (void)_enterYLockedState;
- (void)lockIntoYAxis;
- (double)timeIntervalSinceLastDirectionChange;
- (id)initWithAxisTransitionZonePosition:(CGPoint)arg1 axisTransitionZoneSize:(CGSize)arg2;

@end

