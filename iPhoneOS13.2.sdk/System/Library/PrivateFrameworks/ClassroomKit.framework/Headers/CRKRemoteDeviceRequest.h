//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATTaskRequest.h"

@class NSString;

@interface CRKRemoteDeviceRequest : CATTaskRequest
{
    NSString *_deviceIdentifier;
    CATTaskRequest *_remoteRequest;
}

+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;
@property(retain, nonatomic) CATTaskRequest *remoteRequest; // @synthesize remoteRequest=_remoteRequest;
@property(copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

