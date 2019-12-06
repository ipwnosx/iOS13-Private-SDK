//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentRequestUpdate.h>


@class NSArray, NSString, PKPeerPaymentQuote;

@interface PKPaymentRequestPaymentMethodUpdate : PKPaymentRequestUpdate <NSSecureCoding>
{
    NSArray *_errors;
    PKPeerPaymentQuote *_peerPaymentQuote;
    NSString *_installmentGroupIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *installmentGroupIdentifier; // @synthesize installmentGroupIdentifier=_installmentGroupIdentifier;
@property(retain, nonatomic) PKPeerPaymentQuote *peerPaymentQuote; // @synthesize peerPaymentQuote=_peerPaymentQuote;
@property(copy, nonatomic) NSArray *errors; // @synthesize errors=_errors;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaymentSummaryItems:(id)arg1;
- (id)initWithErrors:(id)arg1 paymentSummaryItems:(id)arg2;

@end

