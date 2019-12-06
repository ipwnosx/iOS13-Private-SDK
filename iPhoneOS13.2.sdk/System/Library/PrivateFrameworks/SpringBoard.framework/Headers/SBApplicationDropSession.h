//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSSceneIdentity, NSSet, NSString, SBActivationSettings, SBApplication, SBSAppDragLocalContext, UIDraggingSystemSession;
@protocol OS_dispatch_group, UIDragDropSession;

@interface SBApplicationDropSession : NSObject
{
    NSObject<OS_dispatch_group> *_activationSettingsGroup;
    BOOL _notificationDrag;
    BOOL _windowTearOff;
    SBActivationSettings *_activationSettings;
    SBApplication *_application;
    FBSSceneIdentity *_sceneIdentity;
    id <UIDragDropSession> _uiDragDropSession;
    UIDraggingSystemSession *_systemSession;
    SBSAppDragLocalContext *_localContext;
    NSSet *_launchActions;
    NSString *_targetContentIdentifier;
}

+ (void)_getUserActivityDropSessionWithUIDragDropSession:(id)arg1 dragItem:(id)arg2 systemSession:(id)arg3 targetApplication:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)_getURLDropSessionWithUIDragDropSession:(id)arg1 dragItem:(id)arg2 systemSession:(id)arg3 targetApplication:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)_getFileDropSessionWithUIDragDropSession:(id)arg1 dragItem:(id)arg2 systemSession:(id)arg3 targetApplication:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)_applicationForHandlingDragItem:(id)arg1 URL:(id)arg2 error:(id )arg3;
+ (id)_applicationProxyForIdentifiers:(id)arg1 forURL:(id)arg2 passingTest:(CDUnknownBlockType)arg3 error:(id )arg4;
+ (BOOL)_itemProviderRequiresOpenInPlace:(id)arg1;
+ (BOOL)_dragItemRepresentsAcceptableFileDrag:(id)arg1;
+ (id)_applicationForIconLeafIdentifier:(id)arg1;
+ (void)_getUserNotificationDropSessionWithUIDragDropSession:(id)arg1 systemSession:(id)arg2 dragItem:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)_getLocalAppDropSessionWithUIDragDropSession:(id)arg1 dragItem:(id)arg2 systemSession:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)getDropSessionWithUIDropSession:(id)arg1 sceneProvider:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)dropSessionWithWindowUIDragSession:(id)arg1;
+ (BOOL)canHandleUIDragDropSession:(id)arg1;
@property(copy, nonatomic) NSString *targetContentIdentifier; // @synthesize targetContentIdentifier=_targetContentIdentifier;
@property(readonly, nonatomic) NSSet *launchActions; // @synthesize launchActions=_launchActions;
@property(readonly, nonatomic) SBSAppDragLocalContext *localContext; // @synthesize localContext=_localContext;
@property(readonly, nonatomic, getter=isWindowTearOff) BOOL windowTearOff; // @synthesize windowTearOff=_windowTearOff;
@property(readonly, nonatomic, getter=isNotificationDrag) BOOL notificationDrag; // @synthesize notificationDrag=_notificationDrag;
@property(readonly, nonatomic) UIDraggingSystemSession *systemSession; // @synthesize systemSession=_systemSession;
@property(readonly, nonatomic) id <UIDragDropSession> uiDragDropSession; // @synthesize uiDragDropSession=_uiDragDropSession;
@property(retain, nonatomic) FBSSceneIdentity *sceneIdentity; // @synthesize sceneIdentity=_sceneIdentity;
@property(readonly, nonatomic) SBApplication *application; // @synthesize application=_application;
// - (void).cxx_destruct;
@property(readonly, nonatomic) long long dropZones;
- (void)calculateSceneIdentityWithSceneProvider:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) SBActivationSettings *activationSettings; // @synthesize activationSettings=_activationSettings;
- (id)initWithUIDragDropSession:(id)arg1 systemSession:(id)arg2 application:(id)arg3 activity:(id)arg4 activityData:(id)arg5;
- (id)initWithUIDragDropSession:(id)arg1 systemSession:(id)arg2 application:(id)arg3 targetContentIdentifier:(id)arg4 URL:(id)arg5 requiresOpenInPlace:(BOOL)arg6;
- (id)initWithUIDragDropSession:(id)arg1 systemSession:(id)arg2 application:(id)arg3 targetContentIdentifier:(id)arg4 localContext:(id)arg5;
- (id)initWithUIDragDropSession:(id)arg1 systemSession:(id)arg2 application:(id)arg3 targetContentIdentifier:(id)arg4;
- (id)_initWithUIDragDropSession:(id)arg1 application:(id)arg2 targetContentIdentifier:(id)arg3;
- (BOOL)_isApplicationBoundToVisibleIcon;

@end

