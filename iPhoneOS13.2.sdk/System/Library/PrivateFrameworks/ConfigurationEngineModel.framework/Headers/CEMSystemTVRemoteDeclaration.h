//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray;

@interface CEMSystemTVRemoteDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSArray *_payloadAllowedRemotes;
    NSArray *_payloadAllowedTVs;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withAllowedRemotes:(id)arg2 withAllowedTVs:(id)arg3;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSArray *payloadAllowedTVs; // @synthesize payloadAllowedTVs=_payloadAllowedTVs;
@property(copy, nonatomic) NSArray *payloadAllowedRemotes; // @synthesize payloadAllowedRemotes=_payloadAllowedRemotes;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;
- (id)assetReferences;
- (int)activationLevel;
- (BOOL)mustBeSupervised;
- (BOOL)multipleAllowed;

@end

