//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBFluidSwitcherViewController.h>

#import <SpringBoard/SBSwitcherAppSuggestionViewControllerDelegate-Protocol.h>

@class SBSwitcherAppSuggestionViewController;

@interface SBDeckSwitcherViewController : SBFluidSwitcherViewController <SBSwitcherAppSuggestionViewControllerDelegate>
{
    SBSwitcherAppSuggestionViewController *_appSuggestionController;
}

@property(retain, nonatomic) SBSwitcherAppSuggestionViewController *appSuggestionController; // @synthesize appSuggestionController=_appSuggestionController;
// - (void).cxx_destruct;
- (long long)orientationForSuggestionViewController:(id)arg1;
- (void)suggestionViewController:(id)arg1 activatedSuggestion:(id)arg2;
- (void)_setBestAppSuggestion:(id)arg1 animationCompletion:(CDUnknownBlockType)arg2;
- (void)setBestAppSuggestion:(id)arg1;
- (id)bestAppSuggestion;
- (id)handleGestureDidBegin:(id)arg1;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)performTransitionWithContext:(id)arg1 animated:(BOOL)arg2 alongsideAnimationHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)viewWillLayoutSubviews;
- (id)initWithRootModifier:(id)arg1 liveContentOverlayCoordinator:(id)arg2 debugName:(id)arg3;

@end

