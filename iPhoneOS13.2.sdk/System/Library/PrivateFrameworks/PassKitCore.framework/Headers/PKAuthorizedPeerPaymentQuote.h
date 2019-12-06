//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, NSDictionary, PKContact, PKPeerPaymentQuote;

@interface PKAuthorizedPeerPaymentQuote : NSObject <NSSecureCoding>
{
    PKPeerPaymentQuote *_peerPaymentQuote;
    PKContact *_contact;
    NSData *_transactionData;
    NSDictionary *_certificates;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSDictionary *certificates; // @synthesize certificates=_certificates;
@property(readonly, nonatomic) NSData *transactionData; // @synthesize transactionData=_transactionData;
@property(retain, nonatomic) PKContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) PKPeerPaymentQuote *peerPaymentQuote; // @synthesize peerPaymentQuote=_peerPaymentQuote;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithQuote:(id)arg1 transactionData:(id)arg2 certificates:(id)arg3;

@end

