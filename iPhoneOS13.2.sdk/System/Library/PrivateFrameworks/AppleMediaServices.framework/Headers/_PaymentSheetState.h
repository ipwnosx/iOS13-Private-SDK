//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSBiometricsSignatureResult, AMSPaymentSheetMetricsEvent, NSError, NSString;

__attribute__((visibility("hidden")))
@interface _PaymentSheetState : NSObject
{
    BOOL _didAuthorizePayment;
    BOOL _didBiometricLockout;
    BOOL _didPresent;
    NSError *_error;
    AMSPaymentSheetMetricsEvent *_event;
    NSString *_passwordEquivalentToken;
    NSString *_paymentToken;
    AMSBiometricsSignatureResult *_signatureResult;
}

@property(retain, nonatomic) AMSBiometricsSignatureResult *signatureResult; // @synthesize signatureResult=_signatureResult;
@property(retain, nonatomic) NSString *paymentToken; // @synthesize paymentToken=_paymentToken;
@property(retain, nonatomic) NSString *passwordEquivalentToken; // @synthesize passwordEquivalentToken=_passwordEquivalentToken;
@property(retain, nonatomic) AMSPaymentSheetMetricsEvent *event; // @synthesize event=_event;
@property(nonatomic) BOOL didPresent; // @synthesize didPresent=_didPresent;
@property(nonatomic) BOOL didBiometricLockout; // @synthesize didBiometricLockout=_didBiometricLockout;
@property(nonatomic) BOOL didAuthorizePayment; // @synthesize didAuthorizePayment=_didAuthorizePayment;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
// - (void).cxx_destruct;
- (id)init;

@end

