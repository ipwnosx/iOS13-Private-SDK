//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FCTagSubscriptionOrderAssigner : NSObject
{
    long long _initialOrder;
    long long _orderSpacing;
}

@property(readonly, nonatomic) long long orderSpacing; // @synthesize orderSpacing=_orderSpacing;
@property(readonly, nonatomic) long long initialOrder; // @synthesize initialOrder=_initialOrder;
- (id)_assignOrderToSubscriptions:(id)arg1 withInitialOrder:(long long)arg2 orderSpacing:(long long)arg3;
- (id)_assignOrderToSubscriptionsInOpenRange:(id)arg1;
- (id)_assignOrderToSubscriptions:(id)arg1 inOpenEndRangeWithPreviousValue:(long long)arg2;
- (id)_assignOrderToSubscriptions:(id)arg1 inOpenStartRangeWithNextValue:(long long)arg2;
- (id)_assignOrderToSubscriptions:(id)arg1 inClosedRangeWithPreviousValue:(long long)arg2 nextValue:(long long)arg3;
- (id)assignOrderToTagSubscriptions:(id)arg1;
- (id)initWithInitialOrder:(long long)arg1 orderSpacing:(long long)arg2;
- (id)init;

@end

