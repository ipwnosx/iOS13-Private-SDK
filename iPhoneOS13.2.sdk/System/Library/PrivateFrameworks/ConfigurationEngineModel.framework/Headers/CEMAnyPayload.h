//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSDictionary;

@interface CEMAnyPayload : CEMPayloadBase
{
    NSDictionary *_payloadKeys;
}

+ (id)buildFromDictionary:(id)arg1;
@property(copy) NSDictionary *payloadKeys; // @synthesize payloadKeys=_payloadKeys;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (id)serializePayload;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;

@end

