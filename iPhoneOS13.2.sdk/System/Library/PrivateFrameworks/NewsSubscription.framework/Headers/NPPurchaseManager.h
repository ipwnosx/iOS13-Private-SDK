//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface NPPurchaseManager : NSObject
{
    MISSING_TYPE *purchaseManager;
    MISSING_TYPE *transactionObservers;
    MISSING_TYPE *purchaseObservers;
}

// - (void).cxx_destruct;
- (id)init;
- (BOOL)startBundlePurchaseWithPurchaseModel:(id)arg1 purchaseContext:(id)arg2 error:(id )arg3;
- (BOOL)startPurchaseWithPurchaseModel:(id)arg1 purchaseContext:(id)arg2 error:(id )arg3;
- (id)purchaseMetadataWithPurchaseID:(id)arg1 restorePurchase:(BOOL)arg2;
- (void)removeTransactionObserver:(id)arg1;
- (void)addTransactionObserver:(id)arg1;
- (void)removePurchaseObserver:(id)arg1;
- (void)addPurchaseObserver:(id)arg1;

@end

