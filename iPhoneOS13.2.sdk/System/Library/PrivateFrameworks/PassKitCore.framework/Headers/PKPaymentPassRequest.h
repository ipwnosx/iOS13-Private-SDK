//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentPassRequest : PKPaymentWebServiceRequest
{
    NSString *_passTypeID;
    NSString *_serialNumber;
}

@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(copy, nonatomic) NSString *passTypeID; // @synthesize passTypeID=_passTypeID;
// - (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;
- (id)initWithPassTypeID:(id)arg1 serialNumber:(id)arg2;

@end

