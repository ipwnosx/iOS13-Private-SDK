//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentDataItem.h>

@class PKBankAccountInformation, PKCurrencyAmount;

@interface PKBankAccountDataItem : PKPaymentDataItem
{
    PKCurrencyAmount *_peerPaymentBalance;
    PKBankAccountInformation *_PKBankAccountInformation;
}

+ (long long)dataType;
@property(retain, nonatomic) PKBankAccountInformation *PKBankAccountInformation; // @synthesize PKBankAccountInformation=_PKBankAccountInformation;
@property(retain, nonatomic) PKCurrencyAmount *peerPaymentBalance; // @synthesize peerPaymentBalance=_peerPaymentBalance;
// - (void).cxx_destruct;
@property(readonly, nonatomic) PKBankAccountInformation *bankAccountInformation;
- (BOOL)isValidWithError:(id )arg1;
- (id)initWithModel:(id)arg1;

@end

