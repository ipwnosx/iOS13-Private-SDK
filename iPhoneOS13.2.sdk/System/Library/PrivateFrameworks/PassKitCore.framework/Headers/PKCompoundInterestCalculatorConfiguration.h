//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCalendar, NSDate, NSDecimalNumber, NSTimeZone;

@interface PKCompoundInterestCalculatorConfiguration : NSObject
{
    NSCalendar *_calendar;
    BOOL _inGrace;
    BOOL _isInDisasterRecovery;
    NSUInteger _calculationMethod;
    NSDecimalNumber *_apr;
    long long _compoundingPeriods;
    NSDate *_periodStartDate;
    NSDate *_periodEndDate;
    NSDecimalNumber *_periodStartingBalance;
    NSDecimalNumber *_remainingPeriodStartingBalance;
    NSDecimalNumber *_remainingPeriodMinimumPayment;
    NSDecimalNumber *_remainingPeriodMinimumPaymentExcludedFromInterestCalculation;
    NSDecimalNumber *_currentBalance;
    NSDecimalNumber *_unpostedInterest;
    NSDate *_unpostedInterestTimestamp;
    NSArray *_periodTransactions;
    NSArray *_futurePayments;
    NSTimeZone *_productTimeZone;
}

+ (id)configurationWithCreditAccount:(id)arg1;
@property(retain, nonatomic) NSTimeZone *productTimeZone; // @synthesize productTimeZone=_productTimeZone;
@property(copy, nonatomic) NSArray *futurePayments; // @synthesize futurePayments=_futurePayments;
@property(copy, nonatomic) NSArray *periodTransactions; // @synthesize periodTransactions=_periodTransactions;
@property(retain, nonatomic) NSDate *unpostedInterestTimestamp; // @synthesize unpostedInterestTimestamp=_unpostedInterestTimestamp;
@property(retain, nonatomic) NSDecimalNumber *unpostedInterest; // @synthesize unpostedInterest=_unpostedInterest;
@property(nonatomic) BOOL isInDisasterRecovery; // @synthesize isInDisasterRecovery=_isInDisasterRecovery;
@property(nonatomic) BOOL inGrace; // @synthesize inGrace=_inGrace;
@property(retain, nonatomic) NSDecimalNumber *currentBalance; // @synthesize currentBalance=_currentBalance;
@property(retain, nonatomic) NSDecimalNumber *remainingPeriodMinimumPaymentExcludedFromInterestCalculation; // @synthesize remainingPeriodMinimumPaymentExcludedFromInterestCalculation=_remainingPeriodMinimumPaymentExcludedFromInterestCalculation;
@property(retain, nonatomic) NSDecimalNumber *remainingPeriodMinimumPayment; // @synthesize remainingPeriodMinimumPayment=_remainingPeriodMinimumPayment;
@property(retain, nonatomic) NSDecimalNumber *remainingPeriodStartingBalance; // @synthesize remainingPeriodStartingBalance=_remainingPeriodStartingBalance;
@property(retain, nonatomic) NSDecimalNumber *periodStartingBalance; // @synthesize periodStartingBalance=_periodStartingBalance;
@property(retain, nonatomic) NSDate *periodEndDate; // @synthesize periodEndDate=_periodEndDate;
@property(retain, nonatomic) NSDate *periodStartDate; // @synthesize periodStartDate=_periodStartDate;
@property(nonatomic) long long compoundingPeriods; // @synthesize compoundingPeriods=_compoundingPeriods;
@property(retain, nonatomic, setter=setAPR:) NSDecimalNumber *apr; // @synthesize apr=_apr;
@property(nonatomic) NSUInteger calculationMethod; // @synthesize calculationMethod=_calculationMethod;
// - (void).cxx_destruct;
- (id)description;
- (void)updateWithCreditAccount:(id)arg1;
- (id)init;

@end

