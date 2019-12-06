//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>


@class HMDNetworkRouterFirewallRuleWAN, NSSet, NSString;

@interface HMDAccessoryAllowedHost : HMFObject <NSSecureCoding>
{
    NSString *_jsonWANRule;
}

+ (BOOL)supportsSecureCoding;
+ (id)allowedHostsFromJSONFirewallWANRules:(id)arg1;
@property(readonly) NSString *jsonWANRule; // @synthesize jsonWANRule=_jsonWANRule;
// - (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)_encodeForSPIEntitledXPCTransportWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) NSUInteger purpose;
@property(readonly) NSSet *addresses;
@property(readonly) NSString *name;
@property(readonly, nonatomic) HMDNetworkRouterFirewallRuleWAN *wanRule;
- (id)initWithJSONFirewallWANRule:(id)arg1;

@end

