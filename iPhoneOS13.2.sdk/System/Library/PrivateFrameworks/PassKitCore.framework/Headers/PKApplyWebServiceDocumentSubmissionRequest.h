//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKApplyWebServiceRequest.h>

@class NSArray, NSData, NSString, NSURL;

@interface PKApplyWebServiceDocumentSubmissionRequest : PKApplyWebServiceRequest
{
    NSString *_applicationIdentifier;
    NSUInteger _featureIdentifier;
    NSURL *_baseURL;
    NSData *_frontImageData;
    NSData *_backImageData;
    NSString *_documentCountryCode;
    NSUInteger _documentType;
    NSArray *_certificates;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSArray *certificates; // @synthesize certificates=_certificates;
@property(nonatomic) NSUInteger documentType; // @synthesize documentType=_documentType;
@property(copy, nonatomic) NSString *documentCountryCode; // @synthesize documentCountryCode=_documentCountryCode;
@property(copy, nonatomic) NSData *backImageData; // @synthesize backImageData=_backImageData;
@property(copy, nonatomic) NSData *frontImageData; // @synthesize frontImageData=_frontImageData;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(nonatomic) NSUInteger featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
// - (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

