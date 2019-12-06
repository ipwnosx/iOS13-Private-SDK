//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMNetworkVPNDeclaration_OnDemandRulesElementActionParameters, NSArray, NSString;

@interface CEMNetworkVPNDeclaration_OnDemandRulesElement : CEMPayloadBase
{
    NSArray *_payloadDNSDomainMatch;
    NSArray *_payloadDNSServerAddressMatch;
    NSString *_payloadURLStringProbe;
    NSString *_payloadAction;
    CEMNetworkVPNDeclaration_OnDemandRulesElementActionParameters *_payloadActionParameters;
    NSString *_payloadInterfaceTypeMatch;
    NSArray *_payloadSSIDMatch;
}

+ (id)buildRequiredOnlyWithAction:(id)arg1;
+ (id)buildWithDNSDomainMatch:(id)arg1 withDNSServerAddressMatch:(id)arg2 withURLStringProbe:(id)arg3 withAction:(id)arg4 withActionParameters:(id)arg5 withInterfaceTypeMatch:(id)arg6 withSSIDMatch:(id)arg7;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSArray *payloadSSIDMatch; // @synthesize payloadSSIDMatch=_payloadSSIDMatch;
@property(copy, nonatomic) NSString *payloadInterfaceTypeMatch; // @synthesize payloadInterfaceTypeMatch=_payloadInterfaceTypeMatch;
@property(copy, nonatomic) CEMNetworkVPNDeclaration_OnDemandRulesElementActionParameters *payloadActionParameters; // @synthesize payloadActionParameters=_payloadActionParameters;
@property(copy, nonatomic) NSString *payloadAction; // @synthesize payloadAction=_payloadAction;
@property(copy, nonatomic) NSString *payloadURLStringProbe; // @synthesize payloadURLStringProbe=_payloadURLStringProbe;
@property(copy, nonatomic) NSArray *payloadDNSServerAddressMatch; // @synthesize payloadDNSServerAddressMatch=_payloadDNSServerAddressMatch;
@property(copy, nonatomic) NSArray *payloadDNSDomainMatch; // @synthesize payloadDNSDomainMatch=_payloadDNSDomainMatch;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;

@end

