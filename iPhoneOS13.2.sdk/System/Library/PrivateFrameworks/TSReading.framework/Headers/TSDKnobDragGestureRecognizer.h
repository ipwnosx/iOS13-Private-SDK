//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <TSReading/TSDAutoscrollDelegate-Protocol.h>
#import <TSReading/TSDTrackerManipulator-Protocol.h>

@class TSDAutoscroll, TSDInteractiveCanvasController, TSDKnobTracker, TSDRep, TSDiOSCanvasViewController, UITouch;

@interface TSDKnobDragGestureRecognizer : UIGestureRecognizer <TSDAutoscrollDelegate, TSDTrackerManipulator>
{
    TSDiOSCanvasViewController *mCVC;
    TSDInteractiveCanvasController *mICC;
    UITouch *mTouch;
    CGPoint mKnobToTouchOffset;
    TSDKnobTracker *mTracker;
    BOOL mKnobTouchHasMoved;
    BOOL mDelayHasElapsed;
    CGPoint mOriginalPointInWindow;
    UITouch *mSecondTouch;
    TSDRep *mLastHitRep;
    BOOL mTouchesMoved;
    TSDAutoscroll *mAutoscroll;
    CGPoint mAutoscrollPoint;
}

@property(readonly, nonatomic) TSDInteractiveCanvasController *interactiveCanvasController; // @synthesize interactiveCanvasController=mICC;
@property(nonatomic) CGPoint autoscrollPoint; // @synthesize autoscrollPoint=mAutoscrollPoint;
@property(retain, nonatomic) TSDAutoscroll *autoscroll; // @synthesize autoscroll=mAutoscroll;
- (CGPoint)p_pointInUnscaledCanvas;
- (BOOL)p_hitRepIsValid:(id)arg1;
- (int)allowedAutoscrollDirections;
- (double)unscaledStartAutoscrollThreshold;
- (void)autoscrollWillNotStart;
- (void)updateAfterAutoscroll:(id)arg1;
@property(readonly, nonatomic) TSDInteractiveCanvasController *icc;
- (void)p_triggerDelayedKnobTracking:(id)arg1;
- (void)p_requestDelayedKnobTracking:(double)arg1;
- (void)p_cancelDelayedKnobTracking;
- (void)operationDidEnd;
- (BOOL)readyToEndOperation;
- (id)tracker;
- (BOOL)allowTrackerManipulatorToTakeControl:(id)arg1;
- (void)cancelBecauseOfRotation;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (void)setState:(long long)arg1;
- (void)dealloc;
- (id)initWithInteractiveCanvasController:(id)arg1;

@end

