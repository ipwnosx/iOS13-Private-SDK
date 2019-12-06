//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMAccountCardDAVDeclaration_CommunicationServiceRulesDefaultServiceHandlers;

@interface CEMAccountCardDAVDeclaration_CommunicationServiceRules : CEMPayloadBase
{
    CEMAccountCardDAVDeclaration_CommunicationServiceRulesDefaultServiceHandlers *_payloadDefaultServiceHandlers;
}

+ (id)buildRequiredOnly;
+ (id)buildWithDefaultServiceHandlers:(id)arg1;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) CEMAccountCardDAVDeclaration_CommunicationServiceRulesDefaultServiceHandlers *payloadDefaultServiceHandlers; // @synthesize payloadDefaultServiceHandlers=_payloadDefaultServiceHandlers;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;

@end

