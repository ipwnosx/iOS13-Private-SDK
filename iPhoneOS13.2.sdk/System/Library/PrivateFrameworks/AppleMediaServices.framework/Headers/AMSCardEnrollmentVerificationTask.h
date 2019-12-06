//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

#import <AppleMediaServices/AMSBagConsumer-Protocol.h>

@interface AMSCardEnrollmentVerificationTask : AMSTask <AMSBagConsumer>
{
}

+ (id)_performSilentEnrollmentPaymentSessionWithContext:(id)arg1;
+ (id)_bagKeySet;
+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
+ (id)performPaymentVerificationForPayment:(id)arg1 isDefault:(BOOL)arg2 bag:(id)arg3;
+ (id)performPaymentVerificationForPayment:(id)arg1 isDefault:(BOOL)arg2;
+ (void)verifyPayment:(id)arg1 isDefault:(BOOL)arg2 bag:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)verifyPayment:(id)arg1 isDefault:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;

@end

