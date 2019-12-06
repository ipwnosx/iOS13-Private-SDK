//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDTLVProtocol-Protocol.h>

@class NSString;

@interface HMDNetworkRouterAdvertisementProtocol : NSObject <NSCopying, HMDTLVProtocol>
{
    long long _advertisementProtocol;
}

+ (id)parsedFromData:(id)arg1 error:(id )arg2;
+ (id)protocolFromFirewallRuleAdvertisingProtocol:(unsigned char)arg1;
@property(nonatomic) long long advertisementProtocol; // @synthesize advertisementProtocol=_advertisementProtocol;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializeWithError:(id )arg1;
- (BOOL)parseFromData:(id)arg1 error:(id )arg2;
- (id)initWithAdvertisementProtocol:(long long)arg1;
- (id)init;

@end

