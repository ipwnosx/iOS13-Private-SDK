//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMDeviceInformationCommand_StatusErrorResponses, CEMDeviceInformationCommand_StatusQueryResponses;

@interface CEMDeviceInformationCommand_Status : CEMPayloadBase
{
    CEMDeviceInformationCommand_StatusQueryResponses *_statusQueryResponses;
    CEMDeviceInformationCommand_StatusErrorResponses *_statusErrorResponses;
}

+ (id)buildRequiredOnlyWithQueryResponses:(id)arg1;
+ (id)buildWithQueryResponses:(id)arg1 withErrorResponses:(id)arg2;
+ (id)allowedReasons;
+ (id)allowedStatusKeys;
@property(copy, nonatomic) CEMDeviceInformationCommand_StatusErrorResponses *statusErrorResponses; // @synthesize statusErrorResponses=_statusErrorResponses;
@property(copy, nonatomic) CEMDeviceInformationCommand_StatusQueryResponses *statusQueryResponses; // @synthesize statusQueryResponses=_statusQueryResponses;
// - (void).cxx_destruct;
- (id)serializePayload;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;

@end

