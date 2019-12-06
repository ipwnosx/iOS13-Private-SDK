//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMAssetBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class CEMAssetBaseDescriptor, CEMAssetBaseReference, NSString;

@interface CEMBookEnterpriseDeclaration : CEMAssetBase <CEMRegisteredTypeProtocol>
{
    CEMAssetBaseDescriptor *_payloadDescriptor;
    CEMAssetBaseReference *_payloadReference;
    NSString *_payloadKind;
    NSString *_payloadVersion;
    NSString *_payloadAuthor;
    NSString *_payloadTitle;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withReference:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withReference:(id)arg3 withKind:(id)arg4 withVersion:(id)arg5 withAuthor:(id)arg6 withTitle:(id)arg7;
+ (id)allowedPayloadKeys;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSString *payloadTitle; // @synthesize payloadTitle=_payloadTitle;
@property(copy, nonatomic) NSString *payloadAuthor; // @synthesize payloadAuthor=_payloadAuthor;
@property(copy, nonatomic) NSString *payloadVersion; // @synthesize payloadVersion=_payloadVersion;
@property(copy, nonatomic) NSString *payloadKind; // @synthesize payloadKind=_payloadKind;
@property(copy, nonatomic) CEMAssetBaseReference *payloadReference; // @synthesize payloadReference=_payloadReference;
@property(copy, nonatomic) CEMAssetBaseDescriptor *payloadDescriptor; // @synthesize payloadDescriptor=_payloadDescriptor;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;

@end

