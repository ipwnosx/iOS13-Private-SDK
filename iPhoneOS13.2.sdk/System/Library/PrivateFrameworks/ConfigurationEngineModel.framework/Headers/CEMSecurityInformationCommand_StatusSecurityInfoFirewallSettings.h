//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSNumber;

@interface CEMSecurityInformationCommand_StatusSecurityInfoFirewallSettings : CEMPayloadBase
{
    NSNumber *_statusFirewallEnabled;
    NSNumber *_statusBlockAllIncoming;
    NSNumber *_statusStealthMode;
    NSArray *_statusApplications;
}

+ (id)buildRequiredOnly;
+ (id)buildWithFirewallEnabled:(id)arg1 withBlockAllIncoming:(id)arg2 withStealthMode:(id)arg3 withApplications:(id)arg4;
+ (id)allowedStatusKeys;
@property(copy, nonatomic) NSArray *statusApplications; // @synthesize statusApplications=_statusApplications;
@property(copy, nonatomic) NSNumber *statusStealthMode; // @synthesize statusStealthMode=_statusStealthMode;
@property(copy, nonatomic) NSNumber *statusBlockAllIncoming; // @synthesize statusBlockAllIncoming=_statusBlockAllIncoming;
@property(copy, nonatomic) NSNumber *statusFirewallEnabled; // @synthesize statusFirewallEnabled=_statusFirewallEnabled;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializePayload;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;

@end

