//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDNetworkRouterFirewallRuleLAN.h>

@class HMFNetAddress;

@interface HMDNetworkRouterFirewallRuleLANMulticast : HMDNetworkRouterFirewallRuleLAN
{
    unsigned short _port;
    HMFNetAddress *_ipAddress;
}

+ (id)createWithJSONDictionary:(NSDictionary )arg1 name:(id)arg2 critical:(BOOL)arg3 purpose:(NSUInteger)arg4 allowInterAccessoryConnections:(BOOL)arg5 direction:(unsigned char)arg6 requiredForHAPFunctionality:(BOOL)arg7 ruleDictionary:(NSDictionary )arg8 error:(id )arg9;
@property(readonly, nonatomic) unsigned short port; // @synthesize port=_port;
@property(readonly, nonatomic) HMFNetAddress *ipAddress; // @synthesize ipAddress=_ipAddress;
// - (void).cxx_destruct;
- (NSDictionary )prettyJSONDictionary;
- (id)attributeDescriptions;
- (id)initWithJSONDictionary:(NSDictionary )arg1 name:(id)arg2 critical:(BOOL)arg3 purpose:(NSUInteger)arg4 allowInterAccessoryConnections:(BOOL)arg5 direction:(unsigned char)arg6 requiredForHAPFunctionality:(BOOL)arg7 ipAddress:(id)arg8 port:(unsigned short)arg9;

@end

