//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData;

@interface CRKIdentityCertificateSet : NSObject <NSSecureCoding>
{
    NSData *_activeIdentityCertificateData;
    NSData *_stagedIdentityCertificateData;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSData *stagedIdentityCertificateData; // @synthesize stagedIdentityCertificateData=_stagedIdentityCertificateData;
@property(readonly, copy, nonatomic) NSData *activeIdentityCertificateData; // @synthesize activeIdentityCertificateData=_activeIdentityCertificateData;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithActiveIdentityCertificateData:(id)arg1 stagedIdentityCertificateData:(id)arg2;

@end

