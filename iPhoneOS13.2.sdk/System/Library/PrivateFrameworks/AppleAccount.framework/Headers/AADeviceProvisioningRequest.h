//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AARequest.h>

@class NSData, NSString;

@interface AADeviceProvisioningRequest : AARequest
{
    NSString *_dsid;
    NSString *_url;
    NSData *_data;
}

// - (void).cxx_destruct;
- (id)urlRequest;
- (id)urlString;
- (id)initWithDSID:(id)arg1 URLString:(id)arg2 requestData:(id)arg3;

@end

