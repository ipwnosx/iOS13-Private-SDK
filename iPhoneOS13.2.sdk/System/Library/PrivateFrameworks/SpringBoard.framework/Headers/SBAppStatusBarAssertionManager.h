//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>

@class NSHashTable, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSPointerArray, NSString, SBAppStatusBarSettings;
@protocol BSInvalidatable;

@interface SBAppStatusBarAssertionManager : NSObject <BSDescriptionProviding, UIStatusBarManager>
{
    NSHashTable *_disableAlphaChangeAssertions;
    NSHashTable *_disableUserInteractionChangeAssertions;
    NSMutableOrderedSet *_windowLevelOverrideReasons;
    NSMutableDictionary *_windowLevelOverrideMap;
    NSPointerArray *_statusBarSettingsAssertionsByLevel[11];
    SBAppStatusBarSettings *_currentStatusBarSettings;
    NSMutableDictionary *_edgeInsetsDictionary;
    NSMutableSet *_activeLayoutLayers;
    NSMutableDictionary *_orientationWindowDictionary;
    double _defaultWindowLevel;
    id <BSInvalidatable> _stateCaptureAssertion;
    NSHashTable *_observers;
    BOOL _changingStatusBarStyle;
    BOOL _changingStatusBarAlpha;
    NSUInteger _statusBarAlphaAnimationCount;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)_updateStatusBarOrientationForTopMostActiveLayer;
- (void)_applyEdgeInsetsToStatusBar;
- (void)_updateWindowLevel;
- (void)_setStatusBarValueForPropertyWithAssertions:(id)arg1 setter:(CDUnknownBlockType)arg2;
- (id)_descriptionForPropertyWithAssertions:(id)arg1;
- (void)_evaluateSettingsWithStyleAnimations:(id)arg1;
- (void)_cleanUpAllStatusBarSettingsAssertions;
- (void)_statusBarUpdatedFromSettings:(id)arg1 toSettings:(id)arg2 withAnimations:(id)arg3;
- (id)_styleRequestForSettings:(id)arg1;
- (void)_resolveEffectiveStatusBarStyleForSettings:(id)arg1;
- (void)_enumerateAssertionsToLevel:(NSUInteger)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_modifiedStatusBarSettingsAssertion:(id)arg1 withAnimationParameters:(id)arg2;
- (void)_modifiedStatusBarSettingsAssertion:(id)arg1;
- (void)_removeStatusBarSettingsAssertion:(id)arg1 withAnimationParameters:(id)arg2;
- (void)_removeStatusBarSettingsAssertion:(id)arg1;
- (void)_addStatusBarSettingsAssertion:(id)arg1 withAnimationParameters:(id)arg2;
- (void)_addStatusBarSettingsAssertion:(id)arg1;
- (void)_removeDisableAppStatusBarUserInteractionChangesAssertion:(id)arg1;
- (void)_addDisableAppStatusBarUserInteractionChangesAssertion:(id)arg1;
- (void)_removeDisableAppStatusBarAlphaChangesAssertion:(id)arg1;
- (void)_addDisableAppStatusBarAlphaChangesAssertion:(id)arg1;
- (BOOL)statusBar:(id)arg1 shouldRequestStyle:(long long)arg2 animationParameters:(id)arg3 forced:(BOOL)arg4;
- (BOOL)statusBar:(id)arg1 shouldRequestStyleAttributes:(id)arg2 animationParameters:(id)arg3 forced:(BOOL)arg4;
- (BOOL)statusBar:(id)arg1 shouldSetAlpha:(double)arg2;
@property(readonly, copy) NSString *description;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (int)statusBar:(id)arg1 effectiveStyleOverridesForRequestedStyle:(long long)arg2 overrides:(int)arg3;
- (id)statusBarSettingsForLevel:(NSUInteger)arg1;
- (id)currentStatusBarSettings;
- (id)currentEffectiveStatusBarStyleRequest;
- (id)effectiveStatusBarStyleRequestWithSettings:(id)arg1;
- (id)effectiveStatusBarStyleRequestForLevel:(NSUInteger)arg1;
@property(readonly, nonatomic) UIEdgeInsets statusBarEdgeInsets;
- (void)setStatusBarEdgeInsets:(UIEdgeInsets)arg1 forLayoutLayer:(NSUInteger)arg2;
- (void)removeActiveLayoutLayer:(NSUInteger)arg1;
- (void)addActiveLayoutLayer:(NSUInteger)arg1;
@property(readonly, nonatomic) NSUInteger topmostActiveLayoutLayer;
- (id)orientationWindowForLayoutLayer:(NSUInteger)arg1;
- (BOOL)statusBarOrientationShouldFollowWindow:(id)arg1;
- (void)setOrientationWindow:(id)arg1 forStatusBarLayoutLayer:(NSUInteger)arg2;
- (void)removeWindowLevelOverrideReason:(id)arg1;
- (void)setWindowLevel:(double)arg1 forOverrideReason:(id)arg2;
- (void)setDefaultWindowLevel:(double)arg1;
- (BOOL)isStatusBarUserInteractionEnabled;
- (void)setStatusBarUserInteractionEnabled:(BOOL)arg1;
- (BOOL)isStatusBarHidden;
- (void)dealloc;
- (id)init;

@end

