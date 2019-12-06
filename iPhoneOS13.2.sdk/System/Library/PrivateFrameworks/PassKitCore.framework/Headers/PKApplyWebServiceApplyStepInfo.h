//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PKApplyWebServiceApplyStepInfo : NSObject
{
    NSString *_conversationIdentifier;
    NSUInteger _contextType;
    NSArray *_pages;
    NSString *_coreIDVSessionID;
    NSString *_coreIDVServiceProviderName;
    NSString *_coreIDVTier;
    NSArray *_encryptionCertificates;
    NSString *_encryptionVersion;
}

@property(readonly, copy, nonatomic) NSString *encryptionVersion; // @synthesize encryptionVersion=_encryptionVersion;
@property(readonly, copy, nonatomic) NSArray *encryptionCertificates; // @synthesize encryptionCertificates=_encryptionCertificates;
@property(readonly, copy, nonatomic) NSString *coreIDVTier; // @synthesize coreIDVTier=_coreIDVTier;
@property(readonly, copy, nonatomic) NSString *coreIDVServiceProviderName; // @synthesize coreIDVServiceProviderName=_coreIDVServiceProviderName;
@property(readonly, copy, nonatomic) NSString *coreIDVSessionID; // @synthesize coreIDVSessionID=_coreIDVSessionID;
@property(readonly, copy, nonatomic) NSArray *pages; // @synthesize pages=_pages;
@property(readonly, nonatomic) NSUInteger contextType; // @synthesize contextType=_contextType;
@property(copy, nonatomic) NSString *conversationIdentifier; // @synthesize conversationIdentifier=_conversationIdentifier;
// - (void).cxx_destruct;
- (void)_handleCertificates:(id)arg1;
- (id)initWithJSONObject:(id)arg1 featureApplication:(id)arg2;

@end

