//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKDServerConfiguration;

__attribute__((visibility("hidden")))
@interface CKDGlobalConfigurationURLRequest : CKDURLRequest
{
    CKDServerConfiguration *_configuration;
}

@property(retain, nonatomic) CKDServerConfiguration *configuration; // @synthesize configuration=_configuration;
// - (void).cxx_destruct;
- (void)requestDidParsePlistObject:(id)arg1;
- (BOOL)hasRequestBody;
- (id)httpMethod;
- (id)url;
- (long long)partitionType;
- (long long)serverType;
- (id)additionalHeaderValues;
- (BOOL)allowsAnonymousAccount;
- (BOOL)requiresDeviceID;
- (BOOL)requiresConfiguration;

@end

