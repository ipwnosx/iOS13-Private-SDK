//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSDictionary, NSString, SBDeviceApplicationSceneHandle;

@protocol SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride 
- (long long)_fallbackInterfaceOrientation;
- (_Bool)_statusBarAppearsOutsideOfAJailedApp;
- (_Bool)_suppressInheritedPartStyles;
- (NSString *)statusBarSceneIdentifier;
- (SBDeviceApplicationSceneHandle *)statusBarControllingSceneHandle;
- (struct CGRect)statusBarAvoidanceFrame;
- (int)statusBarStyleOverridesToSuppress;
- (long long)_statusBarOrientationGivenFallbackOrientation:(long long)arg1;
- (_Bool)_statusBarHiddenGivenFallbackOrientation:(long long)arg1;
- (double)_statusBarAlpha;
- (long long)_statusBarStyleForPartWithIdentifier:(NSString *)arg1 suppressingInherited:(_Bool)arg2;
- (NSDictionary *)_statusBarPartStyles;
- (long long)_statusBarStyle;
@end
