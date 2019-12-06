//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemManager.h>

@class HFItem, HFStaticItemProvider, HMAssistantAccessControl, HMHome, HMUser, HUPersonalRequestsDevicesItemModule;

@interface HUPersonalRequestsEditorItemManager : HFItemManager
{
    BOOL _onlyShowDeviceSwitches;
    HUPersonalRequestsDevicesItemModule *_prDevicesModule;
    HFItem *_requireAuthenticationForSecureRequestsItem;
    HFItem *_neverRequireAuthenticationItem;
    HMHome *_homeForUser;
    HFStaticItemProvider *_staticItemProvider;
}

@property(nonatomic) BOOL onlyShowDeviceSwitches; // @synthesize onlyShowDeviceSwitches=_onlyShowDeviceSwitches;
@property(readonly, nonatomic) HFStaticItemProvider *staticItemProvider; // @synthesize staticItemProvider=_staticItemProvider;
@property(readonly, nonatomic) HMHome *homeForUser; // @synthesize homeForUser=_homeForUser;
@property(readonly, nonatomic) HFItem *neverRequireAuthenticationItem; // @synthesize neverRequireAuthenticationItem=_neverRequireAuthenticationItem;
@property(readonly, nonatomic) HFItem *requireAuthenticationForSecureRequestsItem; // @synthesize requireAuthenticationForSecureRequestsItem=_requireAuthenticationForSecureRequestsItem;
@property(retain, nonatomic) HUPersonalRequestsDevicesItemModule *prDevicesModule; // @synthesize prDevicesModule=_prDevicesModule;
// - (void).cxx_destruct;
- (id)_commitUpdateToAccessControl:(id)arg1;
@property(nonatomic) BOOL personalRequestsAuthenticationRequired;
- (void)_unregisterForExternalUpdates;
- (void)_registerForExternalUpdates;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (BOOL)_arePersonalRequestsEnabled;
@property(readonly, nonatomic) HMAssistantAccessControl *accessControl;
@property(readonly, nonatomic) HMUser *user;
- (id)initWithDelegate:(id)arg1 userItem:(id)arg2 onlyShowDeviceSwitches:(BOOL)arg3;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;

@end

