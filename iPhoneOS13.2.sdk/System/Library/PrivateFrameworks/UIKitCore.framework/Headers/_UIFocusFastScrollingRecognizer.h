//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIFocusEnginePanGestureTouchObserver-Protocol.h>

@class NSMapTable, NSTimer, UIScrollView, _UIFocusEnginePanGestureRecognizer, _UIFocusFastScrollingTouchSequence;
@protocol _UIFocusFastScrollingRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface _UIFocusFastScrollingRecognizer : NSObject <_UIFocusEnginePanGestureTouchObserver>
{
    _UIFocusEnginePanGestureRecognizer *_panGesture;
    _UIFocusFastScrollingTouchSequence *_currentTouch;
    NSMapTable *_swipeSequences;
    NSTimer *_swipeIntervalTimer;
    UIScrollView *_previewingScrollView;
    NSTimer *_previewingTouchTimer;
    NSUInteger _spatialFocusUpdateCount;
    BOOL _enabled;
    id <_UIFocusFastScrollingRecognizerDelegate> _delegate;
}

+ (id)recognizerWithPanGesture:(id)arg1;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <_UIFocusFastScrollingRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)focusEnginePanGesture:(id)arg1 touchCancelledAtDigitizerLocation:(CGPoint)arg2;
- (void)focusEnginePanGesture:(id)arg1 touchEndedAtDigitizerLocation:(CGPoint)arg2;
- (void)focusEnginePanGesture:(id)arg1 touchMovedToDigitizerLocation:(CGPoint)arg2;
- (void)focusEnginePanGesture:(id)arg1 touchBeganAtDigitizerLocation:(CGPoint)arg2;
- (void)_deactivatePreviewingScrollViewIfNecessary;
- (void)_activatePreviewingScrollView;
- (void)_activatePreviewingScrollViewAfterDelay;
- (void)_notifyDelegateWithScrollView:(id)arg1 scrollingStyle:(long long)arg2 heading:(NSUInteger)arg3;
- (BOOL)_scrollViewIsEligibleForFastScrolling:(id)arg1 alongHeading:(NSUInteger)arg2;
- (id)_scrollViewsContainingCurrentlyFocusedItem;
- (BOOL)_attemptToImmediatelyRecognizeEdgeGesture;
- (id)_deepestEligibleScrollViewContainingFocusedItem:(NSUInteger)arg1;
- (BOOL)_swipeSequenceCanBeginFastScrolling:(id)arg1;
- (void)_updateActiveSwipeSequencesForScrollViews:(id)arg1;
- (NSUInteger)_bestHeadingForAccumulator:(CGVector)arg1;
- (void)_swipeIntervalElapsed:(id)arg1;
- (void)_stopSwipeIntervalTimer;
- (void)_startSwipeIntervalTimer;
- (void)_swipeOccuredAlongHeading:(NSUInteger)arg1;
- (void)_touchSequenceDidEnd:(id)arg1;
- (void)reset;
- (void)_handlePanGesture:(id)arg1;
- (void)joystickMovementWithHeading:(NSUInteger)arg1 didRepeat:(NSUInteger)arg2;
- (void)directionalPressWithHeading:(NSUInteger)arg1 didRepeat:(NSUInteger)arg2;
- (void)_focusDidUpate:(id)arg1;
- (void)dealloc;
- (id)initWithPanGesture:(id)arg1;

@end

