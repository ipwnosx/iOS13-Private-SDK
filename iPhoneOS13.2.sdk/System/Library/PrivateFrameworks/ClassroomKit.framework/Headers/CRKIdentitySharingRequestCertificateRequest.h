//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATTaskRequest.h"

@class NSString;

@interface CRKIdentitySharingRequestCertificateRequest : CATTaskRequest
{
    NSString *_recipient;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *recipient; // @synthesize recipient=_recipient;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

