//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreTransactionBlock;

@interface HMDBackingStoreLogAddTransactionOperation : HMDBackingStoreOperation
{
    HMDBackingStoreTransactionBlock *_transaction;
    long long _pushFlags;
}

@property(nonatomic) long long pushFlags; // @synthesize pushFlags=_pushFlags;
@property(retain, nonatomic) HMDBackingStoreTransactionBlock *transaction; // @synthesize transaction=_transaction;
// - (void).cxx_destruct;
- (id)mainReturningError;
- (id)initWithTransaction:(id)arg1;

@end

