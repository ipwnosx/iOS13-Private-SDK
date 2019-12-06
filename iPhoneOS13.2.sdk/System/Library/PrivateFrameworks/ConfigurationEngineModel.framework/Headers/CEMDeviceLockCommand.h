//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMCommandBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSString;

@interface CEMDeviceLockCommand : CEMCommandBase <CEMRegisteredTypeProtocol>
{
    NSString *_payloadMessage;
    NSString *_payloadPhoneNumber;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withMessage:(id)arg2 withPhoneNumber:(id)arg3;
+ (id)allowedPayloadKeys;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSString *payloadPhoneNumber; // @synthesize payloadPhoneNumber=_payloadPhoneNumber;
@property(copy, nonatomic) NSString *payloadMessage; // @synthesize payloadMessage=_payloadMessage;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;
- (int)executionLevel;
- (BOOL)mustBeSupervised;

@end

