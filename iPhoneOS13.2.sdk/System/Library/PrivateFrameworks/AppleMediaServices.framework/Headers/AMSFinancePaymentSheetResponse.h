//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSFinanceAuthenticateResponse, AMSPaymentSheetRequest;

__attribute__((visibility("hidden")))
@interface AMSFinancePaymentSheetResponse : NSObject
{
    AMSPaymentSheetRequest *_paymentSheetRequest;
    AMSFinanceAuthenticateResponse *_authenticateResponse;
}

+ (id)_greyAttributedStringForAttributedString:(id)arg1 range:(NSRange *)arg2;
+ (id)_attributedStringForStringArray:(id)arg1 useGrey:(BOOL)arg2 account:(id)arg3 shouldUppercase:(BOOL)arg4;
+ (id)_attributedStringForSalableInfoStringArray:(id)arg1 account:(id)arg2 shouldUppercase:(BOOL)arg3;
+ (long long)_confirmationTitleForString:(id)arg1;
+ (long long)_salableIconForString:(id)arg1;
+ (long long)_payeeInferredFromEnumeratedTitle:(id)arg1;
+ (long long)_payeeForRequestorValue:(id)arg1;
+ (id)_createRequestFromDictionary:(id)arg1 confirmationOnly:(BOOL)arg2 authenticateResponse:(id)arg3 taskInfo:(id)arg4;
@property(readonly, nonatomic) AMSFinanceAuthenticateResponse *authenticateResponse; // @synthesize authenticateResponse=_authenticateResponse;
@property(readonly, nonatomic) AMSPaymentSheetRequest *paymentSheetRequest; // @synthesize paymentSheetRequest=_paymentSheetRequest;
// - (void).cxx_destruct;
- (id)performWithTaskInfo:(id)arg1;
- (id)initWithDialogDictionary:(id)arg1 confirmationOnly:(BOOL)arg2 taskInfo:(id)arg3;

@end

