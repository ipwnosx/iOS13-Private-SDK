//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray;

@interface CEMActivationBasicDeclaration_Status : CEMPayloadBase
{
    NSArray *_statusInstalledConfigurations;
}

+ (id)buildRequiredOnly;
+ (id)buildWithInstalledConfigurations:(id)arg1;
+ (id)allowedReasons;
+ (id)allowedStatusKeys;
@property(copy, nonatomic) NSArray *statusInstalledConfigurations; // @synthesize statusInstalledConfigurations=_statusInstalledConfigurations;
// - (void).cxx_destruct;
- (id)serializePayload;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;

@end

