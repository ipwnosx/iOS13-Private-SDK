//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBMainDisplayWorkspaceAppInteractionEventSourceObserving-Protocol.h>

@class NSMutableOrderedSet, NSOrderedSet, NSSet, NSTimer, SBApplicationController, SBHomeGestureSettings;
@protocol BSInvalidatable, SBRecentDisplayItemsControllerDelegate;

@interface SBRecentDisplayItemsController : NSObject <SBMainDisplayWorkspaceAppInteractionEventSourceObserving>
{
    NSMutableOrderedSet *_recentDisplayItems;
    long long _removalPersonality;
    long long _movePersonality;
    NSSet *_relevantTransitionFromSources;
    NSUInteger _maxDisplayItems;
    SBApplicationController *_appController;
    id <BSInvalidatable> _stateCaptureInvalidatable;
    NSTimer *_delayAfterTransitionTimer;
    SBHomeGestureSettings *_homeGestureSettings;
    id <SBRecentDisplayItemsControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SBRecentDisplayItemsControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)_addStateCaptureHandler;
- (void)_disallowAppFromAppearingWhileHidden:(id)arg1;
- (void)_allowAppToAppearWhileHidden:(id)arg1;
- (void)_removeDisplayItem:(id)arg1;
- (void)_moveDisplayItemToFront:(id)arg1;
- (void)_addDisplayItemToFront:(id)arg1;
- (void)_addOrMoveDisplayItemToFront:(id)arg1;
- (id)_displayItemForLayoutElement:(id)arg1;
- (id)_allDisplayItemsPassingTest:(CDUnknownBlockType)arg1;
- (id)_allDisplayItemsForUniqueID:(id)arg1;
- (id)_allDisplayItemsForBundleID:(id)arg1;
- (id)_firstDisplayItemForBundleID:(id)arg1;
- (id)_firstDisplayItemForUniqueID:(id)arg1;
- (BOOL)_isDisallowedDisplayItem:(id)arg1;
- (BOOL)_displayItemIsExecutableOnCurrentPlatform:(id)arg1;
- (void)_setupDelayAfterTransitionTimerForActivatingElement:(id)arg1;
- (void)_clearDelayAfterTransitionTimer;
- (void)eventSource:(id)arg1 applicationsBecameVisible:(id)arg2;
- (void)eventSource:(id)arg1 userQuitApplicationInSwitcher:(id)arg2;
- (void)eventSource:(id)arg1 didBeginTransitionToMode:(long long)arg2 withLayoutState:(id)arg3 activatingElement:(id)arg4 triggeredBy:(long long)arg5;
- (void)eventSource:(id)arg1 didFinishTransitionToMode:(long long)arg2 withLayoutState:(id)arg3 activatingElement:(id)arg4 triggeredBy:(long long)arg5;
- (void)eventSource:(id)arg1 keyboardFocusChangedToApplication:(id)arg2;
- (void)eventSource:(id)arg1 userTouchedApplication:(id)arg2;
- (void)eventSource:(id)arg1 applicationsBecameHidden:(id)arg2;
- (void)eventSource:(id)arg1 userDeletedApplications:(id)arg2;
- (void)eventSource:(id)arg1 userRemovedSuggestions:(id)arg2;
- (void)dealloc;
- (void)reset;
- (void)removeDisplayItem:(id)arg1;
@property(copy, nonatomic) NSOrderedSet *recentDisplayItems;
- (id)init;
- (id)initWithRemovalPersonality:(long long)arg1 movePersonality:(long long)arg2 transitionFromSources:(id)arg3 maxDisplayItems:(NSUInteger)arg4 eventSource:(id)arg5 applicationController:(id)arg6;

@end

