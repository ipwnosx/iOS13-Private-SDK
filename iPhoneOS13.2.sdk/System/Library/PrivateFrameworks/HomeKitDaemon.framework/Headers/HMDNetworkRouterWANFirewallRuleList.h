//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDTLVProtocol-Protocol.h>

@class NSMutableArray, NSString;

@interface HMDNetworkRouterWANFirewallRuleList : NSObject <NSCopying, HMDTLVProtocol>
{
    NSMutableArray *_portRules;
    NSMutableArray *_icmpRules;
}

+ (id)parsedFromData:(id)arg1 error:(id )arg2;
@property(retain, nonatomic) NSMutableArray *icmpRules; // @synthesize icmpRules=_icmpRules;
@property(retain, nonatomic) NSMutableArray *portRules; // @synthesize portRules=_portRules;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializeWithError:(id )arg1;
- (BOOL)parseFromData:(id)arg1 error:(id )arg2;
- (id)initWithPortRules:(id)arg1 icmpRules:(id)arg2;
- (id)init;

@end

