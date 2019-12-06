//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATTaskRequest.h"

@class NSData, NSSet;

@interface CRKIdentitySharingSendCertificateRequest : CATTaskRequest
{
    NSSet *_recipients;
    NSData *_activeCertificateData;
    NSData *_stagedCertificateData;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSData *stagedCertificateData; // @synthesize stagedCertificateData=_stagedCertificateData;
@property(retain, nonatomic) NSData *activeCertificateData; // @synthesize activeCertificateData=_activeCertificateData;
@property(retain, nonatomic) NSSet *recipients; // @synthesize recipients=_recipients;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

