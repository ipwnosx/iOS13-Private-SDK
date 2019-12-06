//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PKMerchant, PKPaymentTransaction;

@interface PKPaymentTransactionCellControllerIconRequest : NSObject
{
    PKPaymentTransaction *_transaction;
    PKMerchant *_merchant;
    NSString *_cacheKey;
    NSArray *_completionHandlers;
    CGSize _size;
}

@property(retain, nonatomic) NSArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(retain, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(nonatomic) CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) PKMerchant *merchant; // @synthesize merchant=_merchant;
@property(retain, nonatomic) PKPaymentTransaction *transaction; // @synthesize transaction=_transaction;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;

@end

