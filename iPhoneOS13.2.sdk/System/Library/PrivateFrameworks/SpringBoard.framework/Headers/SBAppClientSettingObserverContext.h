//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSSceneTransitionContext, FBScene, SBApplication, SBDeviceApplicationSceneHandle, UIApplicationSceneClientSettings, UIApplicationSceneSettings;

@interface SBAppClientSettingObserverContext : NSObject
{
    FBScene *_scene;
    SBApplication *_app;
    SBDeviceApplicationSceneHandle *_sceneHandle;
    UIApplicationSceneSettings *_settings;
    UIApplicationSceneClientSettings *_oldClientSettings;
    UIApplicationSceneClientSettings *_updatedClientSettings;
    FBSSceneTransitionContext *_transition;
}

@property(retain, nonatomic) FBSSceneTransitionContext *transition; // @synthesize transition=_transition;
@property(retain, nonatomic) UIApplicationSceneClientSettings *updatedClientSettings; // @synthesize updatedClientSettings=_updatedClientSettings;
@property(retain, nonatomic) UIApplicationSceneClientSettings *oldClientSettings; // @synthesize oldClientSettings=_oldClientSettings;
@property(retain, nonatomic) UIApplicationSceneSettings *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle; // @synthesize sceneHandle=_sceneHandle;
@property(retain, nonatomic) SBApplication *app; // @synthesize app=_app;
@property(retain, nonatomic) FBScene *scene; // @synthesize scene=_scene;
// - (void).cxx_destruct;

@end

