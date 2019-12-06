//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUCoreTelephonyClient-Protocol.h>
#import <TelephonyUtilities/TUEmergencyCoreTelephonyClient-Protocol.h>
#import <TelephonyUtilities/TUTTYCoreTelephonyClient-Protocol.h>

@class CoreTelephonyClient;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TUCoreTelephonyClient : NSObject <TUTTYCoreTelephonyClient, TUEmergencyCoreTelephonyClient, TUCoreTelephonyClient>
{
    NSObject<OS_dispatch_queue> *_queue;
    CoreTelephonyClient *_client;
}

+ (id)sharedRTTTelephonyUtilities;
+ (Class)RTTTelephonyUtilitiesClass;
+ (Class)RTTSettingsClass;
@property(readonly, nonatomic) CoreTelephonyClient *client; // @synthesize client=_client;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
// - (void).cxx_destruct;
- (id)subscriptionForUUID:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (id)init;
- (NSUInteger)preferredTransportMethodForSubscription:(id)arg1;
- (BOOL)isTTYSoftwareSupportedForSubscriptionUUID:(id)arg1;
- (BOOL)isTTYSoftwareSupportedForSubscription:(id)arg1;
- (BOOL)isTTYSoftwareEnabledForSubscriptionUUID:(id)arg1;
- (BOOL)isTTYSoftwareEnabledForSubscription:(id)arg1;
- (BOOL)isTTYSoftwareAvailableForSubscriptionUUID:(id)arg1;
- (BOOL)isTTYSoftwareAvailableForSubscription:(id)arg1;
- (BOOL)isTTYHardwareSupportedForSubscriptionUUID:(id)arg1;
- (BOOL)isTTYHardwareSupportedForSubscription:(id)arg1;
- (BOOL)isTTYHardwareEnabledForSubscriptionUUID:(id)arg1;
- (BOOL)isTTYHardwareEnabledForSubscription:(id)arg1;
- (BOOL)isTTYHardwareAvailableForSubscriptionUUID:(id)arg1;
- (BOOL)isTTYHardwareAvailableForSubscription:(id)arg1;
- (BOOL)isTTYSupportedForSubscriptionUUID:(id)arg1;
- (BOOL)isTTYSupportedForSubscription:(id)arg1;
- (BOOL)isTTYEnabledForSubscriptionUUID:(id)arg1;
- (BOOL)isTTYEnabledForSubscription:(id)arg1;
- (BOOL)isRTTSupportedForSubscriptionUUID:(id)arg1;
- (BOOL)isRTTSupportedForSubscription:(id)arg1;
- (BOOL)shouldShowEmergencyCallbackModeAlertForSubscription:(id)arg1 error:(id )arg2;
- (BOOL)shouldShowEmergencyCallbackModeAlertForSubscriptionUUID:(id)arg1 error:(id )arg2;
- (BOOL)isWhitelistedEmergencyNumberForDigits:(id)arg1 subscription:(id)arg2 error:(id )arg3;
- (BOOL)isWhitelistedEmergencyNumberForDigits:(id)arg1 subscriptionUUID:(id)arg2 error:(id )arg3;
- (BOOL)isEmergencyNumberForDigits:(id)arg1 subscription:(id)arg2 error:(id )arg3;
- (BOOL)isEmergencyNumberForDigits:(id)arg1 subscriptionUUID:(id)arg2 error:(id )arg3;
- (BOOL)inEmergencyMode;

@end

