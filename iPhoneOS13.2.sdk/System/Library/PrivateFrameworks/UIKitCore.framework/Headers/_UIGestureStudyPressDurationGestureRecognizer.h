//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIGestureRecognizer.h"

__attribute__((visibility("hidden")))
@interface _UIGestureStudyPressDurationGestureRecognizer : UIGestureRecognizer
{
    double _allowableMovement;
    double _startTimestamp;
    double _maxObservedTouchForce;
    CGPoint _originalLocation;
}

@property(nonatomic) double maxObservedTouchForce; // @synthesize maxObservedTouchForce=_maxObservedTouchForce;
@property(nonatomic) CGPoint originalLocation; // @synthesize originalLocation=_originalLocation;
@property(nonatomic) double startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(nonatomic) double allowableMovement; // @synthesize allowableMovement=_allowableMovement;
@property(readonly, nonatomic) double movement;
@property(readonly, nonatomic) double duration;
- (CGPoint)locationInCoordinateSpace:(id)arg1;
- (void)reset;
@property(readonly, nonatomic) BOOL hasForce;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (BOOL)movementExceededLimit:(double)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

