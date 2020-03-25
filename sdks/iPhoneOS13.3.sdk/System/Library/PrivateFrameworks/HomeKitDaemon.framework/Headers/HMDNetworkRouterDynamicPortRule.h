//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDNetworkRouterLANRule-Protocol.h>
#import <HomeKitDaemon/HMDTLVProtocol-Protocol.h>

@class HMDNetworkRouterAdvertisementProtocol, HMDNetworkRouterLANIdentifierList, HMDNetworkRouterProtocol, HMDNetworkRouterRuleDirection, HMDNetworkRouterServiceType, HMDTLVUnsignedNumberValue, NSString;

@interface HMDNetworkRouterDynamicPortRule : NSObject <HMDNetworkRouterLANRule, NSCopying, HMDTLVProtocol>
{
    HMDNetworkRouterRuleDirection *_direction;
    HMDNetworkRouterLANIdentifierList *_lanIdentifierList;
    HMDNetworkRouterProtocol *_protocol;
    HMDNetworkRouterAdvertisementProtocol *_advertisementProtocol;
    HMDTLVUnsignedNumberValue *_flags;
    HMDNetworkRouterServiceType *_serviceType;
}

+ (id)parsedFromData:(id)arg1 error:(id )arg2;
+ (id)ruleFromFirewallRuleLAN:(id)arg1;
@property(retain, nonatomic) HMDNetworkRouterServiceType *serviceType; // @synthesize serviceType=_serviceType;
@property(retain, nonatomic) HMDTLVUnsignedNumberValue *flags; // @synthesize flags=_flags;
@property(retain, nonatomic) HMDNetworkRouterAdvertisementProtocol *advertisementProtocol; // @synthesize advertisementProtocol=_advertisementProtocol;
@property(retain, nonatomic) HMDNetworkRouterProtocol *protocol; // @synthesize protocol=_protocol;
@property(retain, nonatomic) HMDNetworkRouterLANIdentifierList *lanIdentifierList; // @synthesize lanIdentifierList=_lanIdentifierList;
@property(retain, nonatomic) HMDNetworkRouterRuleDirection *direction; // @synthesize direction=_direction;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializeWithError:(id )arg1;
- (BOOL)parseFromData:(id)arg1 error:(id )arg2;
- (id)initWithDirection:(id)arg1 lanIdentifierList:(id)arg2 protocol:(id)arg3 advertisementProtocol:(id)arg4 flags:(id)arg5 serviceType:(id)arg6;
- (id)init;
- (void)addTo:(id)arg1;

@end
