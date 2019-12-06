//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, NSString, PKSecureElementCertificateSet;

@interface PKWrappedPayment : NSObject <NSSecureCoding>
{
    NSString *_transactionIdentifier;
    NSData *_transactionData;
    NSData *_transactionInstructionsSignature;
    PKSecureElementCertificateSet *_certificates;
    NSString *_merchantCountryCode;
    NSString *_kextBlacklistVersion;
    NSData *_enrollmentSignature;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSData *enrollmentSignature; // @synthesize enrollmentSignature=_enrollmentSignature;
@property(copy, nonatomic) NSString *kextBlacklistVersion; // @synthesize kextBlacklistVersion=_kextBlacklistVersion;
@property(copy, nonatomic) NSString *merchantCountryCode; // @synthesize merchantCountryCode=_merchantCountryCode;
@property(copy, nonatomic) PKSecureElementCertificateSet *certificates; // @synthesize certificates=_certificates;
@property(copy, nonatomic) NSData *transactionInstructionsSignature; // @synthesize transactionInstructionsSignature=_transactionInstructionsSignature;
@property(copy, nonatomic) NSData *transactionData; // @synthesize transactionData=_transactionData;
@property(copy, nonatomic) NSString *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
// - (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

