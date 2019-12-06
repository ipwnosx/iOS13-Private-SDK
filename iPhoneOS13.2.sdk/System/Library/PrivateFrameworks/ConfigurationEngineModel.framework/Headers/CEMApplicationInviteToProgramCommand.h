//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMCommandBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSString;

@interface CEMApplicationInviteToProgramCommand : CEMCommandBase <CEMRegisteredTypeProtocol>
{
    NSString *_payloadProgramID;
    NSString *_payloadInvitationURL;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withProgramID:(id)arg2 withInvitationURL:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 withProgramID:(id)arg2 withInvitationURL:(id)arg3;
+ (id)allowedPayloadKeys;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSString *payloadInvitationURL; // @synthesize payloadInvitationURL=_payloadInvitationURL;
@property(copy, nonatomic) NSString *payloadProgramID; // @synthesize payloadProgramID=_payloadProgramID;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;
- (int)executionLevel;
- (BOOL)mustBeSupervised;

@end

