//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKApplyWebServiceRequest.h>

@class NSArray, NSString, NSURL;

@interface PKApplyWebServiceApplyRequest : PKApplyWebServiceRequest
{
    BOOL _isInstallment;
    NSString *_applicationIdentifier;
    NSUInteger _featureIdentifier;
    NSArray *_certificates;
    NSURL *_baseURL;
    NSString *_coreIDVNextStepToken;
    NSString *_previousContextIdentifier;
    NSString *_actionIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL isInstallment; // @synthesize isInstallment=_isInstallment;
@property(copy, nonatomic) NSString *actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;
@property(copy, nonatomic) NSString *previousContextIdentifier; // @synthesize previousContextIdentifier=_previousContextIdentifier;
@property(copy, nonatomic) NSString *coreIDVNextStepToken; // @synthesize coreIDVNextStepToken=_coreIDVNextStepToken;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(copy, nonatomic) NSArray *certificates; // @synthesize certificates=_certificates;
@property(nonatomic) NSUInteger featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
// - (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

