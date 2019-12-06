//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKBusinessChatContext-Protocol.h>

@class PKPaymentPass;

@interface PKBusinessChatPhysicalCardContext : NSObject <PKBusinessChatContext>
{
    PKPaymentPass *_paymentPass;
    long long _intent;
}

// - (void).cxx_destruct;
- (BOOL)requiresAuthorization;
- (id)bodyText;
- (id)groupParameters;
- (id)intentParameters;
- (id)businessIdentifier;
- (id)initWithPaymentPass:(id)arg1 intent:(long long)arg2;

@end

