//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentCheckMerchantRequest : PKPaymentWebServiceRequest
{
    NSString *_merchantIdentifier;
    NSString *_domainName;
}

@property(copy, nonatomic) NSString *domainName; // @synthesize domainName=_domainName;
@property(copy, nonatomic) NSString *merchantIdentifier; // @synthesize merchantIdentifier=_merchantIdentifier;
// - (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1;
- (id)initWithMerchantIdentifier:(id)arg1 domainName:(id)arg2;

@end

