//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSDGestureDelegate-Protocol.h>

@class NSMutableArray, TSDInteractiveCanvasController, TSUNoCopyDictionary;

@interface TSDGestureDispatcher : NSObject <TSDGestureDelegate>
{
    TSDInteractiveCanvasController *_interactiveCanvasController;
    NSMutableArray *_simultaneitySets;
    TSUNoCopyDictionary *_priorityMap;
    BOOL _runningTargetHandleGesture;
    NSMutableArray *_gesturesInFlight;
    NSMutableArray *_targetsInFlight;
    BOOL _gestureDidFire;
}

@property(nonatomic) TSDInteractiveCanvasController *interactiveCanvasController; // @synthesize interactiveCanvasController=_interactiveCanvasController;
- (void)p_gestureNoLongerInFlight:(id)arg1;
- (void)didReset:(id)arg1;
- (void)gestureRemovedFromView:(id)arg1;
- (BOOL)gestureActionShouldBegin:(id)arg1;
- (id)p_getGestureTarget:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)prioritizeRecognizer:(id)arg1 overRecognizer:(id)arg2;
- (void)allowSimultaneousRecognitionByRecognizers:(id)arg1;
- (BOOL)handleGesture:(id)arg1 withTarget:(id)arg2;
- (void)handleGesture:(id)arg1;
- (void)teardown;
- (void)dealloc;
- (id)initWithInteractiveCanvasController:(id)arg1;

@end

