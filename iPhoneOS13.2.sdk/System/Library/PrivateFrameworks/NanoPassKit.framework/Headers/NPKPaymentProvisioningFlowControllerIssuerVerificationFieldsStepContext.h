//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class NSArray, PKPaymentPass;

@interface NPKPaymentProvisioningFlowControllerIssuerVerificationFieldsStepContext : NPKPaymentProvisioningFlowStepContext
{
    PKPaymentPass *_paymentPass;
    NSArray *_verificationFields;
}

@property(retain, nonatomic) NSArray *verificationFields; // @synthesize verificationFields=_verificationFields;
@property(retain, nonatomic) PKPaymentPass *paymentPass; // @synthesize paymentPass=_paymentPass;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithRequestContext:(id)arg1;

@end

