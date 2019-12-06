//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSNumber, NSString;

@interface CEMNetworkVPNDeclaration_PPP : CEMPayloadBase
{
    NSString *_payloadAuthName;
    NSString *_payloadAuthPassword;
    NSNumber *_payloadTokenCard;
    NSString *_payloadCommRemoteAddress;
    NSArray *_payloadAuthEAPPlugins;
    NSArray *_payloadAuthProtocol;
    NSNumber *_payloadCCPMPPE40Enabled;
    NSNumber *_payloadCCPMPPE128Enabled;
    NSNumber *_payloadCCPEnabled;
    NSNumber *_payloadDisconnectOnIdle;
    NSNumber *_payloadDisconnectOnIdleTimer;
}

+ (id)buildRequiredOnly;
+ (id)buildWithAuthName:(id)arg1 withAuthPassword:(id)arg2 withTokenCard:(id)arg3 withCommRemoteAddress:(id)arg4 withAuthEAPPlugins:(id)arg5 withAuthProtocol:(id)arg6 withCCPMPPE40Enabled:(id)arg7 withCCPMPPE128Enabled:(id)arg8 withCCPEnabled:(id)arg9 withDisconnectOnIdle:(id)arg10 withDisconnectOnIdleTimer:(id)arg11;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSNumber *payloadDisconnectOnIdleTimer; // @synthesize payloadDisconnectOnIdleTimer=_payloadDisconnectOnIdleTimer;
@property(copy, nonatomic) NSNumber *payloadDisconnectOnIdle; // @synthesize payloadDisconnectOnIdle=_payloadDisconnectOnIdle;
@property(copy, nonatomic) NSNumber *payloadCCPEnabled; // @synthesize payloadCCPEnabled=_payloadCCPEnabled;
@property(copy, nonatomic) NSNumber *payloadCCPMPPE128Enabled; // @synthesize payloadCCPMPPE128Enabled=_payloadCCPMPPE128Enabled;
@property(copy, nonatomic) NSNumber *payloadCCPMPPE40Enabled; // @synthesize payloadCCPMPPE40Enabled=_payloadCCPMPPE40Enabled;
@property(copy, nonatomic) NSArray *payloadAuthProtocol; // @synthesize payloadAuthProtocol=_payloadAuthProtocol;
@property(copy, nonatomic) NSArray *payloadAuthEAPPlugins; // @synthesize payloadAuthEAPPlugins=_payloadAuthEAPPlugins;
@property(copy, nonatomic) NSString *payloadCommRemoteAddress; // @synthesize payloadCommRemoteAddress=_payloadCommRemoteAddress;
@property(copy, nonatomic) NSNumber *payloadTokenCard; // @synthesize payloadTokenCard=_payloadTokenCard;
@property(copy, nonatomic) NSString *payloadAuthPassword; // @synthesize payloadAuthPassword=_payloadAuthPassword;
@property(copy, nonatomic) NSString *payloadAuthName; // @synthesize payloadAuthName=_payloadAuthName;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;

@end

