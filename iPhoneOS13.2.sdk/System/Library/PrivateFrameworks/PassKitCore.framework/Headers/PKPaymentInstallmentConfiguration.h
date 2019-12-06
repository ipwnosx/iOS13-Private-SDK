//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, NSDecimalNumber, NSString;

@interface PKPaymentInstallmentConfiguration : NSObject <NSSecureCoding>
{
    BOOL _inStorePurchase;
    long long _feature;
    NSData *_merchandisingImageData;
    NSDecimalNumber *_openToBuyThresholdAmount;
    NSDecimalNumber *_bindingTotalAmount;
    NSString *_currencyCode;
    NSString *_installmentMerchantIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *installmentMerchantIdentifier; // @synthesize installmentMerchantIdentifier=_installmentMerchantIdentifier;
@property(nonatomic, getter=isInStorePurchase) BOOL inStorePurchase; // @synthesize inStorePurchase=_inStorePurchase;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(retain, nonatomic) NSDecimalNumber *bindingTotalAmount; // @synthesize bindingTotalAmount=_bindingTotalAmount;
@property(retain, nonatomic) NSDecimalNumber *openToBuyThresholdAmount; // @synthesize openToBuyThresholdAmount=_openToBuyThresholdAmount;
@property(copy, nonatomic) NSData *merchandisingImageData; // @synthesize merchandisingImageData=_merchandisingImageData;
@property(nonatomic) long long feature; // @synthesize feature=_feature;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqualToInstallmentConfiguration:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;

@end

