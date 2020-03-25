//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface SAConnectionPolicy : AceObject <SAAceSerializable>
{
}

+ (id)connectionPolicyWithDictionary:(id)arg1 context:(id)arg2;
+ (id)connectionPolicy;
@property(copy, nonatomic) NSNumber *timeToLive;
@property(copy, nonatomic) NSArray *routes;
@property(copy, nonatomic) NSString *policyId;
@property(copy, nonatomic) NSNumber *mptcpFallbackPort;
@property(copy, nonatomic) NSNumber *globalTimeout;
@property(nonatomic) BOOL enabled;
@property(copy, nonatomic) NSNumber *enableTcpFastOpen;
@property(copy, nonatomic) NSNumber *enableTLS13ZeroRTT;
@property(copy, nonatomic) NSNumber *enableTLS13;
@property(copy, nonatomic) NSNumber *enableOptimisticDNS;
@property(copy, nonatomic) NSNumber *disableMPTCP;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
