//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSDate, NSDecimalNumber, NSString, PKCreditAccountStatement;

@interface PKInstallmentPlanPayment : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_identifier;
    NSString *_statementIdentifier;
    NSString *_currencyCode;
    NSDecimalNumber *_originalAmountDue;
    NSDecimalNumber *_amountDue;
    NSDecimalNumber *_amountPaid;
    NSDate *_dueDate;
    NSArray *_lineItems;
    NSUInteger _paymentNumber;
    NSUInteger _paymentCount;
    PKCreditAccountStatement *_statement;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) PKCreditAccountStatement *statement; // @synthesize statement=_statement;
@property(nonatomic) NSUInteger paymentCount; // @synthesize paymentCount=_paymentCount;
@property(nonatomic) NSUInteger paymentNumber; // @synthesize paymentNumber=_paymentNumber;
@property(copy, nonatomic) NSArray *lineItems; // @synthesize lineItems=_lineItems;
@property(retain, nonatomic) NSDate *dueDate; // @synthesize dueDate=_dueDate;
@property(retain, nonatomic) NSDecimalNumber *amountPaid; // @synthesize amountPaid=_amountPaid;
@property(retain, nonatomic) NSDecimalNumber *amountDue; // @synthesize amountDue=_amountDue;
@property(retain, nonatomic) NSDecimalNumber *originalAmountDue; // @synthesize originalAmountDue=_originalAmountDue;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(copy, nonatomic) NSString *statementIdentifier; // @synthesize statementIdentifier=_statementIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqualToInstallmentPlanPayment:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *localizedDisplay;
@property(readonly, nonatomic, getter=isPaid) BOOL paid;
- (id)initWithDictionary:(id)arg1;

@end

