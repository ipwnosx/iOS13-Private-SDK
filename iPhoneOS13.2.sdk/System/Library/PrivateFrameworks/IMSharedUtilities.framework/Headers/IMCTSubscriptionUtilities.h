//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMSharedUtilities/CoreTelephonyClientCarrierBundleDelegate-Protocol.h>
#import <IMSharedUtilities/CoreTelephonyClientDelegate-Protocol.h>

@class CoreTelephonyClient, IDSPhoneSubscriptionSelector, IMCTXPCServiceSubscriptionInfo, NSArray, NSMutableDictionary, NSString;

@interface IMCTSubscriptionUtilities : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientDelegate>
{
    CoreTelephonyClient *_coreTelephonyClient;
    NSMutableDictionary *_cachedCarrierSettings;
    IMCTXPCServiceSubscriptionInfo *_ctSubscriptionInfo;
    IDSPhoneSubscriptionSelector *_phoneSubscriptionSelector;
    NSArray *_registeredSIMIDs;
    NSArray *_registeredPhoneNumbers;
    NSArray *_registeredSubscriptions;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSArray *registeredSubscriptions; // @synthesize registeredSubscriptions=_registeredSubscriptions;
@property(copy, nonatomic) NSArray *registeredPhoneNumbers; // @synthesize registeredPhoneNumbers=_registeredPhoneNumbers;
@property(copy, nonatomic) NSArray *registeredSIMIDs; // @synthesize registeredSIMIDs=_registeredSIMIDs;
@property(retain, nonatomic) IDSPhoneSubscriptionSelector *phoneSubscriptionSelector; // @synthesize phoneSubscriptionSelector=_phoneSubscriptionSelector;
@property(retain, nonatomic) IMCTXPCServiceSubscriptionInfo *ctSubscriptionInfo; // @synthesize ctSubscriptionInfo=_ctSubscriptionInfo;
@property(retain, nonatomic) NSMutableDictionary *cachedCarrierSettings; // @synthesize cachedCarrierSettings=_cachedCarrierSettings;
@property(retain, nonatomic) CoreTelephonyClient *coreTelephonyClient; // @synthesize coreTelephonyClient=_coreTelephonyClient;
// - (void).cxx_destruct;
- (void)subscriptionInfoDidChange;
- (void)_resetSubscriptionInfo;
- (BOOL)deviceSupportsMultipleSubscriptions;
- (void)carrierBundleChange:(id)arg1;
- (NSUInteger)numberOfSubscriptions;
@property(readonly, copy, nonatomic) NSString *ctPhoneNumber;
- (id)ctSubscriptionInfoWithError:(id)arg1;
@property(readonly, nonatomic) NSArray *ctServiceSubscriptions;
- (id)copyBundleValueForSubscriptionContext:(id)arg1 keyHierarchy:(id)arg2 bundleType:(long long)arg3 defaultValue:(id)arg4 valueIfError:(id)arg5;
- (id)copyCarrierBundleValueForSubscriptionContext:(id)arg1 keyHierarchy:(id)arg2 defaultValue:(id)arg3 valueIfError:(id)arg4;
- (id)copyOperatorBundleValueForSubscriptionContext:(id)arg1 keyHierarchy:(id)arg2 defaultValue:(id)arg3 valueIfError:(id)arg4;
- (id)_getCachedSettingOrReadFromBundleForCarrierBundleKey:(id)arg1 bundleType:(long long)arg2 forContext:(id)arg3 defaultValue:(id)arg4;
- (void)_setCachedCarrierSettingValue:(id)arg1 bundleKey:(id)arg2 uniqueID:(id)arg3;
- (id)_getCachedCarrierSettingValueForBundleKey:(id)arg1 uniqueID:(id)arg2;
- (id)_cachedCarrierKeyForKeyHierarchy:(id)arg1 bundleType:(long long)arg2;
- (id)stringForBundleType:(long long)arg1;
- (void)_setCarrierSettings:(id)arg1 uniqueID:(id)arg2;
- (id)_getCarrierSettingsForUniqueID:(id)arg1;
- (void)_resetCachedCarrierSettingsForUniqueID:(id)arg1;
- (id)_createSettingsDictionaryForUniqueID:(id)arg1;
- (id)_cachedCarrierSettingsUniqueIDKeyForSubscriptionContext:(id)arg1;
- (id)newSubscriptionContextWithPhoneNumber:(id)arg1 labelID:(id)arg2 isDefaultVoice:(id)arg3 isDefaultData:(id)arg4 slot:(long long)arg5;
- (id)newSubscriptionContextWithSlot:(long long)arg1;
- (id)init;

@end

