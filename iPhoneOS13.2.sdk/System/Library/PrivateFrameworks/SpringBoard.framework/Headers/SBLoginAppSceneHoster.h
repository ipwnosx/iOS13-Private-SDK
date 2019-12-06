//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/FBSceneObserver-Protocol.h>
#import <SpringBoard/SBLoginAppSceneHoster-Protocol.h>

@class FBApplicationUpdateScenesTransaction, FBScene, NSString, SBApplication, SBDeviceApplicationSceneHandle, SBSUILoginUISceneClientSettingsDiffInspector, UIView;
@protocol SBLoginAppSceneHosterDelegate, UIScenePresenter;

@interface SBLoginAppSceneHoster : NSObject <FBSceneObserver, SBLoginAppSceneHoster>
{
    FBScene *_scene;
    id <UIScenePresenter> _scenePresenter;
    FBApplicationUpdateScenesTransaction *_sceneCreateTransaction;
    long long _cachedActivationOrientationForInitialClientSettings;
    SBSUILoginUISceneClientSettingsDiffInspector *_appClientSettingsDiffInspector;
    SBDeviceApplicationSceneHandle *_sceneHandle;
    BOOL _deferHIDEvents;
    BOOL _hidEventDeferralsInstalled;
    id <SBLoginAppSceneHosterDelegate> _delegate;
}

@property(nonatomic) __weak id <SBLoginAppSceneHosterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL deferHIDEvents; // @synthesize deferHIDEvents=_deferHIDEvents;
// - (void).cxx_destruct;
- (void)sceneDidInvalidate:(id)arg1;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)_updateHIDEventDeferralsIfNecessary;
- (id)_appClientSettingsDiffInspector;
@property(readonly, nonatomic) SBApplication *hostedApp; // @dynamic hostedApp;
@property(readonly, nonatomic) NSString *hostedSceneIdentifier;
@property(readonly, nonatomic) NSString *hostedAppBundleID;
@property(readonly, nonatomic) UIView *contentView;
- (void)updateSettingsWithTransitionBlock:(CDUnknownBlockType)arg1;
- (void)killLoginApp;
- (void)launchLoginAppWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

