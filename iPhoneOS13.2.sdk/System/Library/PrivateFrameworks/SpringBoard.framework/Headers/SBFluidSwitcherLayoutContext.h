//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/SBMainDisplayWorkspaceAppInteractionEventSourceObserving-Protocol.h>

@class NSDate, NSString, SBAppLayout, SBFluidSwitcherGesture, SBHomeGestureSettings, SBMainDisplayLayoutState, SBWorkspaceApplicationSceneTransitionContext;

@interface SBFluidSwitcherLayoutContext : NSObject <BSDescriptionProviding, SBMainDisplayWorkspaceAppInteractionEventSourceObserving>
{
    BOOL _hasUserInteractedWithActiveApplication;
    SBFluidSwitcherGesture *_activeGesture;
    SBWorkspaceApplicationSceneTransitionContext *_activeTransitionContext;
    SBMainDisplayLayoutState *_currentLayoutState;
    SBMainDisplayLayoutState *_previousLayoutState;
    long long _previousInterfaceOrientation;
    SBAppLayout *_currentAppLayout;
    SBAppLayout *_transitioningFromAppLayout;
    SBAppLayout *_transitioningToAppLayout;
    NSDate *_lastTransitionCompletionDate;
    SBHomeGestureSettings *_homeGestureSettings;
}

@property(retain, nonatomic) SBHomeGestureSettings *homeGestureSettings; // @synthesize homeGestureSettings=_homeGestureSettings;
@property(nonatomic) BOOL hasUserInteractedWithActiveApplication; // @synthesize hasUserInteractedWithActiveApplication=_hasUserInteractedWithActiveApplication;
@property(retain, nonatomic) NSDate *lastTransitionCompletionDate; // @synthesize lastTransitionCompletionDate=_lastTransitionCompletionDate;
@property(retain, nonatomic) SBAppLayout *transitioningToAppLayout; // @synthesize transitioningToAppLayout=_transitioningToAppLayout;
@property(retain, nonatomic) SBAppLayout *transitioningFromAppLayout; // @synthesize transitioningFromAppLayout=_transitioningFromAppLayout;
@property(retain, nonatomic) SBAppLayout *currentAppLayout; // @synthesize currentAppLayout=_currentAppLayout;
@property(nonatomic) long long previousInterfaceOrientation; // @synthesize previousInterfaceOrientation=_previousInterfaceOrientation;
@property(retain, nonatomic) SBMainDisplayLayoutState *previousLayoutState; // @synthesize previousLayoutState=_previousLayoutState;
@property(retain, nonatomic) SBMainDisplayLayoutState *currentLayoutState; // @synthesize currentLayoutState=_currentLayoutState;
@property(readonly, nonatomic) SBWorkspaceApplicationSceneTransitionContext *activeTransitionContext; // @synthesize activeTransitionContext=_activeTransitionContext;
@property(retain, nonatomic) SBFluidSwitcherGesture *activeGesture; // @synthesize activeGesture=_activeGesture;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)eventSource:(id)arg1 userTouchedApplication:(id)arg2;
- (BOOL)_shouldUpdateSwitcherModelBasedOnTimeOrUserInteraction;
- (BOOL)shouldAddAppLayoutToFront:(id)arg1 forTransitionWithContext:(id)arg2 currentAppLayouts:(id)arg3 transitionCompleted:(BOOL)arg4;
- (BOOL)shouldAddAppLayoutToFront:(id)arg1 whenBeginningGestureOfType:(long long)arg2;
@property(readonly, nonatomic) NSUInteger supportedOrientationsForGesture;
@property(readonly, nonatomic) double secondsSinceLastTransitionCompletion;
- (void)didEndTransitioningToLayoutStateWithContext:(id)arg1;
- (void)willBeginTransitioningToLayoutStateWithContext:(id)arg1;
@property(readonly, nonatomic) SBMainDisplayLayoutState *transitioningToLayoutState;
@property(readonly, nonatomic) SBMainDisplayLayoutState *transitioningFromLayoutState;
@property(readonly, nonatomic) SBMainDisplayLayoutState *layoutState;
- (id)initWithLayoutState:(id)arg1;

@end

