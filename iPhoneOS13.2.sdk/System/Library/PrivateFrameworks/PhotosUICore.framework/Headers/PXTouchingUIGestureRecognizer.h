//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol PXTouchingUIGestureRecognizerDelegate;

@interface PXTouchingUIGestureRecognizer : UIGestureRecognizer
{
    BOOL __willBegin;
    BOOL __didBegin;
    double _minimumTouchDuration;
    double _maximumTouchMovement;
    id <PXTouchingUIGestureRecognizerDelegate> _touchDelegate;
    NSUInteger __touchCount;
    NSUInteger __beginRequestID;
    CGPoint __initialPointInView;
}

@property(nonatomic, setter=_setInitialPointInView:) CGPoint _initialPointInView; // @synthesize _initialPointInView=__initialPointInView;
@property(nonatomic, setter=_setDidBegin:) BOOL _didBegin; // @synthesize _didBegin=__didBegin;
@property(nonatomic, setter=_setWillBegin:) BOOL _willBegin; // @synthesize _willBegin=__willBegin;
@property(nonatomic, setter=_setBeginRequestID:) NSUInteger _beginRequestID; // @synthesize _beginRequestID=__beginRequestID;
@property(nonatomic, setter=_setTouchCount:) NSUInteger _touchCount; // @synthesize _touchCount=__touchCount;
@property(nonatomic) __weak id <PXTouchingUIGestureRecognizerDelegate> touchDelegate; // @synthesize touchDelegate=_touchDelegate;
@property(nonatomic) double maximumTouchMovement; // @synthesize maximumTouchMovement=_maximumTouchMovement;
@property(nonatomic) double minimumTouchDuration; // @synthesize minimumTouchDuration=_minimumTouchDuration;
// - (void).cxx_destruct;
- (void)reset;
- (void)setState:(long long)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_beginWithRequestID:(NSUInteger)arg1;
- (void)_decrementTouchesBy:(NSUInteger)arg1;
- (void)_incrementTouchesBy:(NSUInteger)arg1;
- (CGPoint)initialLocationInView:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

