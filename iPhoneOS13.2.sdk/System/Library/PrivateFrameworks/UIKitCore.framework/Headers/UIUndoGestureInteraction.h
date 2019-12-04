//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIEditingOverlayInteractionWithView-Protocol.h>
#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/UIInteraction-Protocol.h>
#import <UIKitCore/UIInteractiveUndoHUDActionDelegate-Protocol.h>

@class NSLayoutConstraint, NSString, UIDelayedAction, UIKBTextEditingTraits, UIKBUndoInteractionHUD, UIKBUndoStateHUD, UILayoutGuide, UITapGestureRecognizer, UIUndoGestureObserver, UIUndoGestureRecognizer, UIUndoLongPressGestureRecognizer, UIUndoPinchGestureRecognizer, UIView;

__attribute__((visibility("hidden")))
@interface UIUndoGestureInteraction : NSObject <UIInteractiveUndoHUDActionDelegate, UIGestureRecognizerDelegate, UIEditingOverlayInteractionWithView, UIInteraction>
{
    _Bool _interactiveHUDIsVisible;
    _Bool _undoStateHUDIsAnimating;
    _Bool _multiPinchTimerOn;
    UIView *_view;
    UIUndoGestureObserver *_observerGesture;
    UITapGestureRecognizer *_threeFingerSingleTap;
    UITapGestureRecognizer *_threeFingerDoubleTap;
    UIUndoGestureRecognizer *_threeFingerSlide;
    UIUndoLongPressGestureRecognizer *_threeFingerLongPress;
    UIUndoPinchGestureRecognizer *_threeFingerPinch;
    UIKBUndoInteractionHUD *_undoInteractiveHUD;
    UIKBUndoStateHUD *_undoStateHUD;
    NSLayoutConstraint *_undoStateHUDTopConstraint;
    NSLayoutConstraint *_undoStateHUDCenterConstraint;
    NSLayoutConstraint *_undoHUDContainerWidthConstraint;
    NSLayoutConstraint *_undoHUDContainerHeightConstraint;
    UIDelayedAction *_undoStateHUDDismissTimer;
    long long _currentAppearance;
    UILayoutGuide *_layoutGuide;
    long long _previousRecognizedPanDirection;
    UIDelayedAction *_multiPansTimer;
    double _remainingDistanceToTravel;
    long long _beginPanDirection;
    unsigned long long _panDownStateChangedCounter;
    double _lastTapTimestamp;
    double _initPinchableDistance;
    double _previousPinchPerimeter;
    long long _potentialPinchDirection;
    UIKBTextEditingTraits *_editingTraits;
    struct CGPoint _previousPanLocation;
    struct CGPoint _beginPanLocation;
    struct CGRect _currentActuallSceneBounds;
}

+ (void)presentProductivityGestureTutorialInlineWithCompletion:(id /* block */)arg1;
+ (void)presentProductivityGestureTutorialIfNeededWithCompletion:(id /* block */)arg1;
+ (id)iWorkFamily;
@property(retain, nonatomic) UIKBTextEditingTraits *editingTraits; // @synthesize editingTraits=_editingTraits;
@property(nonatomic) long long potentialPinchDirection; // @synthesize potentialPinchDirection=_potentialPinchDirection;
@property(nonatomic) double previousPinchPerimeter; // @synthesize previousPinchPerimeter=_previousPinchPerimeter;
@property(nonatomic) double initPinchableDistance; // @synthesize initPinchableDistance=_initPinchableDistance;
@property(nonatomic) _Bool multiPinchTimerOn; // @synthesize multiPinchTimerOn=_multiPinchTimerOn;
@property(nonatomic) double lastTapTimestamp; // @synthesize lastTapTimestamp=_lastTapTimestamp;
@property(nonatomic) _Bool undoStateHUDIsAnimating; // @synthesize undoStateHUDIsAnimating=_undoStateHUDIsAnimating;
@property(nonatomic) unsigned long long panDownStateChangedCounter; // @synthesize panDownStateChangedCounter=_panDownStateChangedCounter;
@property(nonatomic) long long beginPanDirection; // @synthesize beginPanDirection=_beginPanDirection;
@property(nonatomic) struct CGPoint beginPanLocation; // @synthesize beginPanLocation=_beginPanLocation;
@property(nonatomic) struct CGPoint previousPanLocation; // @synthesize previousPanLocation=_previousPanLocation;
@property(nonatomic) double remainingDistanceToTravel; // @synthesize remainingDistanceToTravel=_remainingDistanceToTravel;
@property(retain, nonatomic) UIDelayedAction *multiPansTimer; // @synthesize multiPansTimer=_multiPansTimer;
@property(nonatomic) long long previousRecognizedPanDirection; // @synthesize previousRecognizedPanDirection=_previousRecognizedPanDirection;
@property(nonatomic) _Bool interactiveHUDIsVisible; // @synthesize interactiveHUDIsVisible=_interactiveHUDIsVisible;
@property(retain, nonatomic) UILayoutGuide *layoutGuide; // @synthesize layoutGuide=_layoutGuide;
@property(nonatomic) struct CGRect currentActuallSceneBounds; // @synthesize currentActuallSceneBounds=_currentActuallSceneBounds;
@property(nonatomic) long long currentAppearance; // @synthesize currentAppearance=_currentAppearance;
@property(retain, nonatomic) UIDelayedAction *undoStateHUDDismissTimer; // @synthesize undoStateHUDDismissTimer=_undoStateHUDDismissTimer;
@property(retain, nonatomic) NSLayoutConstraint *undoHUDContainerHeightConstraint; // @synthesize undoHUDContainerHeightConstraint=_undoHUDContainerHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *undoHUDContainerWidthConstraint; // @synthesize undoHUDContainerWidthConstraint=_undoHUDContainerWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *undoStateHUDCenterConstraint; // @synthesize undoStateHUDCenterConstraint=_undoStateHUDCenterConstraint;
@property(retain, nonatomic) NSLayoutConstraint *undoStateHUDTopConstraint; // @synthesize undoStateHUDTopConstraint=_undoStateHUDTopConstraint;
@property(retain, nonatomic) UIKBUndoStateHUD *undoStateHUD; // @synthesize undoStateHUD=_undoStateHUD;
@property(retain, nonatomic) UIKBUndoInteractionHUD *undoInteractiveHUD; // @synthesize undoInteractiveHUD=_undoInteractiveHUD;
@property(retain, nonatomic) UIUndoPinchGestureRecognizer *threeFingerPinch; // @synthesize threeFingerPinch=_threeFingerPinch;
@property(retain, nonatomic) UIUndoLongPressGestureRecognizer *threeFingerLongPress; // @synthesize threeFingerLongPress=_threeFingerLongPress;
@property(retain, nonatomic) UIUndoGestureRecognizer *threeFingerSlide; // @synthesize threeFingerSlide=_threeFingerSlide;
@property(retain, nonatomic) UITapGestureRecognizer *threeFingerDoubleTap; // @synthesize threeFingerDoubleTap=_threeFingerDoubleTap;
@property(retain, nonatomic) UITapGestureRecognizer *threeFingerSingleTap; // @synthesize threeFingerSingleTap=_threeFingerSingleTap;
@property(retain, nonatomic) UIUndoGestureObserver *observerGesture; // @synthesize observerGesture=_observerGesture;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void)pasteOperation;
- (void)copyOperation;
- (void)cutOperation;
- (_Bool)canPaste;
- (_Bool)canCopy;
- (_Bool)canCut;
- (id)responderForOperation:(SEL)arg1 withSender:(id)arg2;
- (id)currentResponder;
- (void)redo:(_Bool)arg1;
- (void)undo:(_Bool)arg1;
- (_Bool)canRedo;
- (_Bool)canUndo;
- (void)animateSpringCoverWithSuccess:(_Bool)arg1 direction:(long long)arg2 remainingDistanceToTravel:(double)arg3;
- (void)fullyCloseCoverWithComplete:(id /* block */)arg1;
- (void)fullyOpenAndCloseCoverWithBeginDirection:(long long)arg1;
- (_Bool)performActionWithDirection:(long long)arg1;
- (long long)undoControlTypeWithDirection:(long long)arg1;
- (void)_endPan:(id)arg1;
- (void)_updateUndoPan:(id)arg1;
- (void)_startUndoPan:(id)arg1;
- (void)disableEnclosingScrollViewScrolling;
- (id)scrollViewForInputDelegate;
- (_Bool)undoGestureIsMoving:(id)arg1;
- (long long)slideDirectionWithGesture:(id)arg1;
- (void)_cancelPinch:(id)arg1;
- (void)_endPinch:(id)arg1;
- (void)_updatePinch:(id)arg1;
- (void)_startPinch:(id)arg1;
- (id)interactiveHUDButtonForDirection:(long long)arg1;
- (void)threeFingerPinch:(id)arg1;
- (void)tooSlow:(id)arg1;
- (void)startMultiPinchTimer:(double)arg1;
- (void)clearMultiPinchTimer;
- (void)threeFingerLongPress:(id)arg1;
- (void)threeFingerSlide:(id)arg1;
- (void)threeFingerDoubleTap:(id)arg1;
- (void)threeFingerDoubleTapUndoAction;
- (void)threeFingerSingleTap:(id)arg1;
- (void)deactiveActiveKeysIfNeeded:(id)arg1;
- (void)observerGestureHandler:(id)arg1;
- (void)multiPansTimerElaspsed:(id)arg1;
- (void)clearMultiPansTimer;
- (void)touchMultiPansTimer;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)bundleIniWorkFamily:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)textEditingOperationsAvailableWithGestureRecognizer:(id)arg1;
- (_Bool)editingInteractionOptionsAllowGestureRecognizerToBegin:(id)arg1;
- (_Bool)undoManagerOperationsCutCopyPasteAvailable;
- (_Bool)undoManagerOperationsUndoRedoAvailable;
- (id)_undoManagerFlattenedGroupingInfo;
- (unsigned long long)privateEditingInteractionOptions;
- (id)_undoManager;
- (void)_removeGestureRecognizers;
- (void)_addGestureRecognizers;
- (void)_createGestureRecognizersIfNecessary;
- (void)undoStateHUDDismissTimerElaspsed:(id)arg1;
- (void)clearUndoStateHUDDismissTimer;
- (void)touchUndoStateHUDDismissTimer;
- (void)setUndoStateHUDVisibility:(_Bool)arg1 withType:(long long)arg2 available:(_Bool)arg3;
- (void)setUndoInteractiveHUDVisibility:(_Bool)arg1;
- (void)setUndoHUDType:(long long)arg1 visibility:(_Bool)arg2;
- (void)animateDisplayingStateHUD;
- (void)animateInStateHUD;
- (void)layoutUndoHUDSliderDetails;
- (_Bool)currentStateHUDVisible;
- (void)_createAndUpdateUndoStateHUDIfNecessary;
- (_Bool)currentInteractiveHUDVisible;
- (void)_createAndUpdateUndoInteractiveHUDIfNecessary;
- (_Bool)needUpdateHUDForContainerChange;
- (void)layoutUndoStateHUD;
- (void)layoutUndoInteractiveHUD;
- (_Bool)isRTLMode;
- (struct CGRect)actualSceneBounds;
- (double)currentTime;
- (long long)keyboardAppearance;
- (void)clearHUDViews;
- (void)applicationWillSuspend;
- (void)removeAllHUDOnContainerChange;
- (void)editingOverlayContainerDidChangeToSceneBounds:(struct CGRect)arg1;
- (void)didMoveToView:(id)arg1;
- (void)willMoveToView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
