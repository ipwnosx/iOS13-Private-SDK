//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardItem-Protocol.h>

@class NSArray, PKAccount, PKCreditAccountStatement, PKCreditAccountSummary, PKPaymentPass, PKPaymentTransactionGroup, PKPaymentWebService;

@interface PKDashboardBalanceSummaryItem : NSObject <PKDashboardItem>
{
    PKAccount *_account;
    PKPaymentPass *_paymentPass;
    PKPaymentWebService *_webService;
    NSUInteger _type;
    PKPaymentTransactionGroup *_transactionGroup;
    PKCreditAccountStatement *_statement;
    PKCreditAccountSummary *_summary;
    NSArray *_statements;
}

@property(retain, nonatomic) NSArray *statements; // @synthesize statements=_statements;
@property(retain, nonatomic) PKCreditAccountSummary *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) PKCreditAccountStatement *statement; // @synthesize statement=_statement;
@property(retain, nonatomic) PKPaymentTransactionGroup *transactionGroup; // @synthesize transactionGroup=_transactionGroup;
@property(nonatomic) NSUInteger type; // @synthesize type=_type;
@property(retain, nonatomic) PKPaymentWebService *webService; // @synthesize webService=_webService;
@property(retain, nonatomic) PKPaymentPass *paymentPass; // @synthesize paymentPass=_paymentPass;
@property(retain, nonatomic) PKAccount *account; // @synthesize account=_account;
// - (void).cxx_destruct;

@end

