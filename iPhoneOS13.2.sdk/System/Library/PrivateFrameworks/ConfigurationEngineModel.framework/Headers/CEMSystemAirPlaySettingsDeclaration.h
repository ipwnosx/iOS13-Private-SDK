//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber;

@interface CEMSystemAirPlaySettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadForceAirPlayOutgoingRequestsPairingPassword;
    NSNumber *_payloadForceAirPlayIncomingRequestsPairingPassword;
    NSNumber *_payloadAllowAirPlayIncomingRequests;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withForceAirPlayOutgoingRequestsPairingPassword:(id)arg2 withForceAirPlayIncomingRequestsPairingPassword:(id)arg3 withAllowAirPlayIncomingRequests:(id)arg4;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSNumber *payloadAllowAirPlayIncomingRequests; // @synthesize payloadAllowAirPlayIncomingRequests=_payloadAllowAirPlayIncomingRequests;
@property(copy, nonatomic) NSNumber *payloadForceAirPlayIncomingRequestsPairingPassword; // @synthesize payloadForceAirPlayIncomingRequestsPairingPassword=_payloadForceAirPlayIncomingRequestsPairingPassword;
@property(copy, nonatomic) NSNumber *payloadForceAirPlayOutgoingRequestsPairingPassword; // @synthesize payloadForceAirPlayOutgoingRequestsPairingPassword=_payloadForceAirPlayOutgoingRequestsPairingPassword;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;
- (id)assetReferences;
- (int)activationLevel;
- (BOOL)mustBeSupervised;
- (BOOL)multipleAllowed;

@end

