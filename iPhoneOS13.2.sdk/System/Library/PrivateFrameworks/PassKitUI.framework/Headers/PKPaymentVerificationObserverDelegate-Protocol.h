//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, PKPaymentVerificationObserver;

@protocol PKPaymentVerificationObserverDelegate <NSObject>
- (void)verificationObserverDidTimeout:(PKPaymentVerificationObserver *)arg1;
- (void)verificationObserver:(PKPaymentVerificationObserver *)arg1 didObserveVerificationCode:(NSString *)arg2;
@end

