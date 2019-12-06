//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIClickInteractionDelegate-Protocol.h>
#import <UIKitCore/_UIPreviewInteractionImpl-Protocol.h>

@class UIDragInteraction, UIPreviewInteraction, UIView, _UIClickInteraction, _UIPreviewInteractionHighlighter, _UIPreviewInteractionPresentationAssistant, _UIRelationshipGestureRecognizer, _UIStateMachine;
@protocol UIInteractionEffect, UIPreviewInteractionDelegate, UIPreviewInteractionDelegatePrivate, _UIPreviewInteractionTouchForceProviding;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionClickImpl : NSObject <_UIClickInteractionDelegate, UIInteraction_Private, UIGestureRecognizerDelegate, _UIPreviewInteractionImpl, UIInteraction>
{
    struct {
        BOOL shouldBegin;
        BOOL didUpdateCommitTransition;
        BOOL highlighterForPreviewTransition;
        BOOL viewControllerPresentationForPresentingViewController;
        BOOL shouldFinishTransitionToPreview;
        BOOL targetedPreviewForPreviewingAtLocation;
        BOOL overrideViewForCommitPhase;
    } _delegateImplements;
    id <UIPreviewInteractionDelegate> _delegate;
    id <UIPreviewInteractionDelegatePrivate> _privateDelegate;
    UIView *_view;
    id <_UIPreviewInteractionTouchForceProviding> _touchForceProvider;
    UIPreviewInteraction *_previewInteraction;
    id <UIInteractionEffect> _interactionEffect;
    _UIStateMachine *_stateMachine;
    _UIClickInteraction *_previewClickInteraction;
    _UIClickInteraction *_commitClickInteraction;
    _UIRelationshipGestureRecognizer *_exclusionRelationshipGestureRecognizer;
    _UIPreviewInteractionPresentationAssistant *_presentationAssistant;
    _UIPreviewInteractionHighlighter *_highlighter;
    UIDragInteraction *_associatedDragInteraction;
}

@property(nonatomic) __weak UIDragInteraction *associatedDragInteraction; // @synthesize associatedDragInteraction=_associatedDragInteraction;
@property(retain, nonatomic) _UIPreviewInteractionHighlighter *highlighter; // @synthesize highlighter=_highlighter;
@property(retain, nonatomic) _UIPreviewInteractionPresentationAssistant *presentationAssistant; // @synthesize presentationAssistant=_presentationAssistant;
@property(retain, nonatomic) _UIRelationshipGestureRecognizer *exclusionRelationshipGestureRecognizer; // @synthesize exclusionRelationshipGestureRecognizer=_exclusionRelationshipGestureRecognizer;
@property(retain, nonatomic) _UIClickInteraction *commitClickInteraction; // @synthesize commitClickInteraction=_commitClickInteraction;
@property(retain, nonatomic) _UIClickInteraction *previewClickInteraction; // @synthesize previewClickInteraction=_previewClickInteraction;
@property(retain, nonatomic) _UIStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) id <UIInteractionEffect> interactionEffect; // @synthesize interactionEffect=_interactionEffect;
@property(nonatomic) __weak UIPreviewInteraction *previewInteraction; // @synthesize previewInteraction=_previewInteraction;
@property(retain, nonatomic) id <_UIPreviewInteractionTouchForceProviding> touchForceProvider; // @synthesize touchForceProvider=_touchForceProvider;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic) __weak id <UIPreviewInteractionDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)_gestureRecognizerForExclusionRelationship;
- (void)_toBeRemoved_CallHighlighterCompletion;
- (void)_toBeRemoved_CreateHighlighterIfPossible;
- (void)_delegateUpdateCommitTransitionWithProgress:(double)arg1 ended:(BOOL)arg2;
- (void)_delegateUpdatePreviewTransitionWithProgress:(double)arg1 ended:(BOOL)arg2;
- (void)_endInteractionEffectIfNeeded;
- (void)_prepareInteractionEffect;
- (void)_endInteractionDidComplete:(BOOL)arg1 wasCancelledByClient:(BOOL)arg2;
- (NSUInteger)_handleTransitionToPossibleByEndingWithContext:(id)arg1;
- (NSUInteger)_handleTransitionToPossibleByCommitting;
- (void)_handleDidTransitionToPreview;
- (NSUInteger)_handleTransitionToPreview;
- (NSUInteger)_handleTransitionToHighlight;
- (NSUInteger)_handleTransitionToActive;
- (BOOL)_isPaused;
@property(readonly, nonatomic) NSUInteger currentState;
- (void)_prepareStateMachine;
- (void)clickInteractionDidClickUp:(id)arg1;
- (void)clickInteractionDidClickDown:(id)arg1;
- (id)highlightEffectForClickInteraction:(id)arg1;
- (void)clickInteractionDidEnd:(id)arg1;
- (BOOL)clickInteractionShouldBegin:(id)arg1;
@property(readonly, nonatomic) __weak id <UIPreviewInteractionDelegatePrivate> privateDelegate; // @synthesize privateDelegate=_privateDelegate;
- (BOOL)_performPresentationIfPossible;
- (BOOL)_canPerformPresentation;
- (void)_startPreviewAtLocation:(CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (void)didMoveToView:(id)arg1;
- (void)willMoveToView:(id)arg1;
- (void)cancelInteraction;
- (CGPoint)locationInCoordinateSpace:(id)arg1;
- (void)dealloc;
- (id)initWithView:(id)arg1 previewInteraction:(id)arg2;

@end

