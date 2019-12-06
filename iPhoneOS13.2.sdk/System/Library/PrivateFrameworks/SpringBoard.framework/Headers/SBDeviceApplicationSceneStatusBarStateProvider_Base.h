//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBApplicationSceneStatusBarDescribing-Protocol.h>
#import <SpringBoard/SBApplicationSceneStatusBarDescribingInternal-Protocol.h>
#import <SpringBoard/SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride-Protocol.h>

@class NSMutableArray, NSString, SBDeviceApplicationSceneHandle;

@interface SBDeviceApplicationSceneStatusBarStateProvider_Base : NSObject <SBApplicationSceneStatusBarDescribingInternal, SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride, SBApplicationSceneStatusBarDescribing>
{
    NSMutableArray *_observers;
}

// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)_allObservers;
- (long long)_fallbackInterfaceOrientation;
- (BOOL)_statusBarAppearsOutsideOfAJailedApp;
- (BOOL)_suppressInheritedPartStyles;
- (long long)_statusBarOrientationGivenFallbackOrientation:(long long)arg1;
- (BOOL)_statusBarHiddenGivenFallbackOrientation:(long long)arg1;
- (double)_statusBarAlpha;
- (long long)_statusBarStyleForPartWithIdentifier:(id)arg1 suppressingInherited:(BOOL)arg2;
- (id)_statusBarPartStyles;
- (long long)_statusBarStyle;
@property(readonly, nonatomic) NSString *statusBarSceneIdentifier;
@property(readonly, nonatomic) SBDeviceApplicationSceneHandle *statusBarControllingSceneHandle;
@property(readonly, nonatomic) CGRect statusBarAvoidanceFrame;
@property(readonly, nonatomic) int statusBarStyleOverridesToSuppress;
@property(readonly, nonatomic) long long statusBarOrientation;
@property(readonly, nonatomic) BOOL statusBarHidden;
@property(readonly, nonatomic) double statusBarAlpha;
- (long long)statusBarStyleForPartWithIdentifier:(id)arg1;
- (id)statusBarPartStyles;
@property(readonly, nonatomic) long long statusBarStyle;
- (id)_observerRecords;
- (void)enumerateObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)removeStatusBarObserver:(id)arg1;
- (void)addStatusBarObserver:(id)arg1;
- (id)init;

@end

