//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/STTelephonyStateObserver-Protocol.h>

@class CoreTelephonyClient, NSString, NWSystemPathMonitor, SBAlertItem, SBBluetoothController, STTelephonyStateProvider, STWifiStatusDomain, TUCall;
@protocol OS_dispatch_queue;

@interface SBTelephonyManager : NSObject <STTelephonyStateObserver>
{
//    struct __CTServerConnection _serverConnection;
    BOOL _containsCellularRadio;
    BOOL _hasCellularTelephony;
    BOOL _hasCellularData;
    unsigned int _usingVPN:1;
    NSObject<OS_dispatch_queue> *_wirelessModemDynamicStoreQueue;
//    struct __SCDynamicStore _queue_wirelessModemDynamicStore;
//    struct __CFString _queue_wirelessModemDynamicStoreSharingKey;
    BOOL _isNetworkTethering;
    int _numberOfNetworkTetheredDevices;
    unsigned int _hasShownWaitingAlert:1;
    SBAlertItem *_activationAlertItem;
    int _numActivationFailures;
    int _inEmergencyCallbackMode;
    unsigned int _loggingCallAudio:1;
    void _queue_fastDormancySuspendAssertion;
    NWSystemPathMonitor *_systemPathMonitor;
    TUCall *_incomingCall;
    TUCall *_activeCall;
    TUCall *_heldCall;
    TUCall *_outgoingCall;
    CoreTelephonyClient *_coreTelephonyClient;
    STTelephonyStateProvider *_telephonyStateProvider;
    STWifiStatusDomain *_wifiDomain;
    SBBluetoothController *_bluetoothController;
    NSString *_cachedSlot1CountryCode;
    NSString *_cachedSlot2CountryCode;
    NSString *_cachedSlot1SIMStatus;
    NSString *_cachedSlot2SIMStatus;
}

+ (id)sharedTelephonyManagerCreatingIfNecessary:(BOOL)arg1;
+ (id)sharedTelephonyManager;
//  (struct __CTServerConnection )defaultTelephonyCenter;
@property(copy, nonatomic) NSString *cachedSlot2SIMStatus; // @synthesize cachedSlot2SIMStatus=_cachedSlot2SIMStatus;
@property(copy, nonatomic) NSString *cachedSlot1SIMStatus; // @synthesize cachedSlot1SIMStatus=_cachedSlot1SIMStatus;
@property(copy, nonatomic) NSString *cachedSlot2CountryCode; // @synthesize cachedSlot2CountryCode=_cachedSlot2CountryCode;
@property(copy, nonatomic) NSString *cachedSlot1CountryCode; // @synthesize cachedSlot1CountryCode=_cachedSlot1CountryCode;
@property(readonly, nonatomic) SBBluetoothController *bluetoothController; // @synthesize bluetoothController=_bluetoothController;
@property(readonly, nonatomic) STWifiStatusDomain *wifiDomain; // @synthesize wifiDomain=_wifiDomain;
@property(readonly, nonatomic) STTelephonyStateProvider *telephonyStateProvider; // @synthesize telephonyStateProvider=_telephonyStateProvider;
@property(retain, nonatomic) CoreTelephonyClient *coreTelephonyClient; // @synthesize coreTelephonyClient=_coreTelephonyClient;
@property(retain, nonatomic) TUCall *outgoingCall; // @synthesize outgoingCall=_outgoingCall;
@property(retain, nonatomic) TUCall *heldCall; // @synthesize heldCall=_heldCall;
@property(retain, nonatomic) TUCall *activeCall; // @synthesize activeCall=_activeCall;
@property(retain, nonatomic) TUCall *incomingCall; // @synthesize incomingCall=_incomingCall;
// - (void).cxx_destruct;
- (void)preHeatDataLinkForDomains:(id)arg1;
- (void)_setIsNetworkTethering:(BOOL)arg1 withNumberOfDevices:(int)arg2;
- (int)numberOfNetworkTetheredDevices;
- (BOOL)isNetworkTethering;
- (id)carrierDisabledApplicationIDs;
- (void)carrierBundleInfoDidChangeForStateProvider:(id)arg1 slot:(long long)arg2;
- (void)subscriptionInfoDidChangeForStateProvider:(id)arg1 slot:(long long)arg2;
- (long long)_subscriptionSlotIfSIMPresent:(long long)arg1;
- (long long)_anySubscriptionSlotWithSIMPresent;
- (long long)_dataConnectedSubscriptionSlot;
- (long long)_dataPreferredSubscriptionSlotIfSIMPresent;
- (long long)_otherSubscriptionSlotIfSIMPresent:(long long)arg1;
- (long long)_secondarySubscriptionSlot;
- (long long)_primarySubscriptionSlot;
- (id)_secondaryMobileEquipmentInfo;
- (id)_secondaryCarrierBundleInfo;
- (id)_secondarySubscriptionInfo;
- (id)_primaryMobileEquipmentInfo;
- (id)_primaryCarrierBundleInfo;
- (id)_primarySubscriptionInfo;
- (void)_setIsInEmergencyCallbackMode:(unsigned char)arg1;
- (BOOL)isInEmergencyCallbackMode;
- (BOOL)isEmergencyCallActive;
- (void)_provisioningUpdateWithStatus:(int)arg1 slot:(long long)arg2;
- (void)_setCurrentActivationAlertItem:(id)arg1;
- (BOOL)isUsingVPNConnection;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (BOOL)isTTYEnabled;
- (BOOL)hasNonCellularNetworkConnection;
- (BOOL)isUsingSlowDataConnection;
- (void)setNetworkRegistrationEnabled:(BOOL)arg1;
- (BOOL)isNetworkRegistrationEnabled;
- (void)dumpBasebandState:(id)arg1;
- (void)disconnectCallAndActivateHeld;
- (void)disconnectAllCalls;
- (void)swapCalls;
- (void)disconnectDisplayedCall;
- (void)disconnectIncomingCall;
- (BOOL)isEndpointOnCurrentDevice;
- (BOOL)inCall;
- (NSUInteger)faceTimeAudioCallCount;
- (NSUInteger)telephonyCallCount;
- (NSUInteger)_callCountForService:(int)arg1;
- (id)_callsForService:(int)arg1;
- (id)_subscriptionInfoForCall:(id)arg1;
@property(nonatomic, getter=isCellDataSwitchingEnabled) BOOL cellDataSwitchingEnabled;
@property(readonly, nonatomic) NSUInteger dataConnectionAvailabilityWithCurrentCalls;
- (BOOL)inCallUsingSpeakerOrReceiver;
- (BOOL)multipleCallsExist;
- (BOOL)outgoingCallExists;
- (BOOL)incomingCallExists;
- (BOOL)heldCallExists;
- (BOOL)activeCallExists;
- (id)displayedCall;
- (void)telephonyAudioChangeHandler;
- (NSUInteger)callCount;
- (void)callEventHandler:(id)arg1;
- (void)handleCallControlFailure:(id)arg1;
- (void)_updateNetworkLocale;
- (BOOL)updateLocale;
- (void)_updateState;
- (void)updateCalls;
- (void)setFastDormancySuspended:(BOOL)arg1;
//  (void)queue_setFastDormancySuspended:(BOOL)arg1 withConnection:(struct __CTServerConnection )arg2;
- (id)_phoneApp;
- (void)updateSpringBoard;
- (double)inCallDuration;
- (BOOL)emergencyCallSupported;
- (BOOL)hasCellularData;
- (BOOL)hasCellularTelephony;
- (BOOL)containsCellularRadio;
- (void)_handleTelephonyDaemonRestart;
// - (void)_serverConnectionDidError:(CDStruct_1ef3fb1f)arg1;
- (void)_avSystemControllerDidError:(id)arg1;
//  (struct __CTServerConnection )_serverConnection;
- (void)_performQueryInBackground:(CDUnknownBlockType)arg1 withMainQueueResultHandler:(CDUnknownBlockType)arg2;
- (id)_backgroundQueryQueue;
- (id)initWithStateProvider:(id)arg1 wifiDomain:(id)arg2 bluetoothController:(id)arg3;
- (id)init;

@end

