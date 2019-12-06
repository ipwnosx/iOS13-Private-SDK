//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class NSDecimalNumber, NSString, PKPaymentMerchantSession;

@interface PKPaymentAuthorizationPrepareTransactionDetailsStateParam : PKPaymentAuthorizationStateParam
{
    PKPaymentMerchantSession *_merchantSession;
    NSString *_secureElementIdentifier;
    NSDecimalNumber *_transactionAmount;
    NSString *_currencyCode;
}

+ (id)paramWithMerchantSession:(id)arg1 secureElementIdentifier:(id)arg2 transactionAmount:(id)arg3 currencyCode:(id)arg4;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(copy, nonatomic) NSDecimalNumber *transactionAmount; // @synthesize transactionAmount=_transactionAmount;
@property(copy, nonatomic) NSString *secureElementIdentifier; // @synthesize secureElementIdentifier=_secureElementIdentifier;
@property(retain, nonatomic) PKPaymentMerchantSession *merchantSession; // @synthesize merchantSession=_merchantSession;
// - (void).cxx_destruct;
- (id)description;

@end

