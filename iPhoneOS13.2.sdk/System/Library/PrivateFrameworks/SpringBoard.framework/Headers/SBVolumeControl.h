//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>
#import <SpringBoard/SBAVSystemControllerCacheObserver-Protocol.h>
#import <SpringBoard/SBVolumeHUDViewControllerDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSMutableSet, NSString, SBAVSystemControllerCache, SBHUDController, SBRingerControl, SBVolumeHUDSettings;
@protocol OS_dispatch_queue;

@interface SBVolumeControl : NSObject <SBVolumeHUDViewControllerDelegate, PTSettingsKeyObserver, SBAVSystemControllerCacheObserver>
{
    SBHUDController *_hudController;
    SBVolumeHUDSettings *_volumeHUDSettings;
    SBRingerControl *_ringerControl;
    BOOL _debounce;
    NSUInteger _mode;
    NSMutableArray *_activeAudioRoutes;
    NSMutableSet *_alwaysHiddenCategories;
    NSString *_lastEventCategory;
    BOOL _hudHandledLastVolumeChange;
    BOOL _euDevice;
    BOOL _userAcknowledgedEUVolumeLimit;
    BOOL _lastVolumeChangedWasBlocked;
    BOOL _volumeDownButtonIsDown;
    BOOL _volumeUpButtonIsDown;
    BOOL _controlCenterIsPresented;
    int _anyCallActive;
//    struct os_unfair_lock_s _effectiveVolumeLock;
    float _effectiveVolume;
    NSObject<OS_dispatch_queue> *_avSystemControllerQueue;
    SBAVSystemControllerCache *_avCache;
    int _darwinNotificationToken;
    NSString *_lastDisplayedCategory;
}

+ (BOOL)_isVolumeChangeAllowedForState:(id)arg1 error:(out id )arg2;
+ (id)sharedInstance;
@property(readonly, nonatomic) NSString *lastDisplayedCategory; // @synthesize lastDisplayedCategory=_lastDisplayedCategory;
// - (void).cxx_destruct;
- (BOOL)_shouldRouteChangeResultInPresentingVolumeHUDWhenTransitioningFrom:(id)arg1 toAudioRoutes:(id)arg2;
- (void)cache:(id)arg1 didUpdateVolumeLimitEnforced:(BOOL)arg2;
- (void)cache:(id)arg1 didUpdateActiveAudioRoutingWithRoute:(id)arg2 routeAttributes:(id)arg3 activeOutputDevices:(id)arg4;
- (void)_updateEUVolumeSettings;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)volumeHUDViewControllerRequestsDismissal:(id)arg1;
- (void)_dispatchAVSystemControllerSync:(CDUnknownBlockType)arg1;
- (void)_dispatchAVSystemControllerAsync:(CDUnknownBlockType)arg1;
- (id)avSystemControllerDispatchQueue;
- (void)_resetMediaServerConnection;
- (void)_serverConnectionDied:(id)arg1;
- (void)_effectiveVolumeChanged:(id)arg1;
- (long long)_audioRouteTypeForTelephonyDeviceType:(long long)arg1;
- (long long)_audioRouteTypeForActiveAudioRoute:(id)arg1 withAttributes:(id)arg2;
- (long long)_audioRouteTypeForOutputDevice:(id)arg1;
- (BOOL)_outputDevicesRepresentWirelessSplitterGroup:(id)arg1;
- (void)_updateAudioRoutesIfNecessary:(BOOL)arg1 forRoute:(id)arg2 withAttributes:(id)arg3 andOutputDevices:(id)arg4;
- (BOOL)_isVolumeHUDVisibleOrFading;
- (BOOL)_isVolumeHUDVisible;
- (void)_presentVolumeHUDWithVolume:(float)arg1;
- (void)_presentVolumeHUDIfDisplayableOrRefreshIfPresented:(id)arg1;
- (id)_configureVolumeHUDViewControllerWithVolume:(float)arg1;
- (BOOL)_turnOnScreenIfNecessaryForEULimit:(BOOL)arg1;
- (float)_calcButtonRepeatDelay;
- (void)changeVolumeByDelta:(float)arg1;
- (void)_userAcknowledgedEUEnforcement:(float)arg1;
- (BOOL)_HUDIsDisplayableForCategory:(id)arg1;
- (BOOL)_isHUDDisplayable;
- (BOOL)_HUDIsDisplayableInCurrentSpringBoardContext;
- (BOOL)_HUDIsDisplayableForLastEventCategory;
- (BOOL)_isCategoryAlwaysHidden:(id)arg1;
- (float)_volumeStepUp:(BOOL)arg1;
- (void)_sendEUVolumeLimitAcknowledgementIfNecessary;
- (float)_getMediaVolumeForIAP;
- (void)_setMediaVolumeForIAP:(float)arg1;
- (void)_controlCenterDidDismiss:(id)arg1;
- (void)_controlCenterWillPresent:(id)arg1;
- (void)setActiveCategoryVolume:(float)arg1;
- (BOOL)userHasAcknowledgedEUVolumeLimit;
- (id)acquireVolumeHUDHiddenAssertionForReason:(id)arg1;
- (void)hideVolumeHUDIfVisible;
- (id)existingVolumeHUDViewController;
- (id)presentedVolumeHUDViewController;
- (void)clearAlwaysHiddenCategories;
- (void)removeAlwaysHiddenCategory:(id)arg1;
@property(readonly, nonatomic) NSArray *activeAudioRouteTypes;
- (void)cancelVolumeEvent;
- (void)handleVolumeButtonWithType:(long long)arg1 down:(BOOL)arg2;
- (void)decreaseVolume;
- (void)increaseVolume;
- (void)setVolume:(float)arg1 forCategory:(id)arg2;
- (void)_updateEffectiveVolume:(float)arg1;
- (float)_effectiveVolume;
- (void)toggleMute;
- (void)addAlwaysHiddenCategory:(id)arg1;
- (float)euVolumeLimit;
- (BOOL)isEUVolumeLimitEnforced;
- (BOOL)isEUDevice;
- (BOOL)isEUVolumeLimitEnabled;
- (BOOL)isEUVolumeLimitSet;
- (BOOL)wouldShowAtLeastAYellowWarningForVolume:(float)arg1;
- (float)volumeStepDown;
- (float)volumeStepUp;
- (id)initWithHUDController:(id)arg1 ringerControl:(id)arg2;

@end

