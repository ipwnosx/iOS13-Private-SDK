//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/CSStatusBarControlling-Protocol.h>

@class NSCountedSet, NSNumber, SBAppStatusBarSettingsAssertion, SBMainStatusBarContentAssertion, SBMainStatusBarStateProvider, _UILegibilitySettings;

@interface SBDashBoardStatusBarController : NSObject <CSStatusBarControlling>
{
    NSCountedSet *_statusBarHiddenReasons;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
    SBAppStatusBarSettingsAssertion *_statusBarParametersAssertion;
    SBMainStatusBarContentAssertion *_statusBarContentAssertion;
    SBMainStatusBarStateProvider *_lazy_stateProvider;
}

// - (void).cxx_destruct;
- (id)_stateProvider;
- (void)disableStatusBarItem:(int)arg1 requestor:(id)arg2;
- (void)enableStatusBarItem:(int)arg1 requestor:(id)arg2;
- (void)updateStatusBarTimeEnabled;
- (void)enableStatusBarTime:(BOOL)arg1 crossfade:(BOOL)arg2 crossfadeDuration:(double)arg3;
@property(readonly, nonatomic) _UILegibilitySettings *statusBarLegibilitySettings;
@property(readonly, nonatomic) long long statusBarStyle;
@property(readonly, nonatomic) NSNumber *statusBarAlpha;
- (void)clearStatusBarParameters;
- (void)setStatusBarAlpha:(id)arg1 style:(long long)arg2 legibilitySettings:(id)arg3;
- (void)setStatusBarHidden:(BOOL)arg1 forReason:(id)arg2;
- (void)destroyFakeStatusBar:(id)arg1;
- (id)createFakeStatusBarWithReason:(id)arg1 withFrame:(CGRect)arg2;
- (id)effectiveStatusBarStyleRequestForAlpha:(id)arg1 style:(long long)arg2 legibilitySettings:(id)arg3;
- (void)dealloc;
- (id)init;

@end

