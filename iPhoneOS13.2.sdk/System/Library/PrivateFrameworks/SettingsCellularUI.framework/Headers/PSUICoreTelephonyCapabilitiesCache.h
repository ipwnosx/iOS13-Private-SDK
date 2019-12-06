//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SettingsCellularUI/CoreTelephonyClientCapabilitiesDelegate-Protocol.h>

@class CoreTelephonyClient, NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PSUICoreTelephonyCapabilitiesCache : NSObject <CoreTelephonyClientCapabilitiesDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    CoreTelephonyClient *_client;
    NSMutableDictionary *_volteCapabilityDict;
    NSMutableDictionary *_volteCapabilityInfoDict;
    NSMutableDictionary *_volteEnabledDict;
}

+ (id)sharedInstance;
@property(retain) NSMutableDictionary *volteEnabledDict; // @synthesize volteEnabledDict=_volteEnabledDict;
@property(copy) NSMutableDictionary *volteCapabilityInfoDict; // @synthesize volteCapabilityInfoDict=_volteCapabilityInfoDict;
@property(retain) NSMutableDictionary *volteCapabilityDict; // @synthesize volteCapabilityDict=_volteCapabilityDict;
@property(retain, nonatomic) CoreTelephonyClient *client; // @synthesize client=_client;
// - (void).cxx_destruct;
- (void)context:(id)arg1 capabilitiesChanged:(id)arg2;
- (BOOL)singleSimCanSetCapabilityVoLTE;
- (void)setCapabilityVoLTE:(id)arg1 enabled:(BOOL)arg2;
- (BOOL)capabilityEnabledVoLTE:(id)arg1;
- (void)fetchCapabilityEnabledVoLTE;
- (BOOL)canChangeVoLTESettingEnableStillProvisioning:(id)arg1;
- (BOOL)cannotChangeVoLTESettingCallCarrier:(id)arg1;
- (BOOL)canSetCapabilityVoLTE:(id)arg1;
- (void)fetchCanSetCapabilityVoLTE;
- (void)willEnterForeground;
- (id)init;
- (id)initPrivate;

@end

