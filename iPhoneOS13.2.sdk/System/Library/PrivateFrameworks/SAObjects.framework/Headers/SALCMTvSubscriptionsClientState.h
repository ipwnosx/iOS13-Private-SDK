//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAAceClientState.h>

@class NSArray;

@interface SALCMTvSubscriptionsClientState : SAAceClientState
{
}

+ (id)tvSubscriptionsClientStateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)tvSubscriptionsClientState;
+ (id)uniqueObjectIdentifier;
+ (id)syncKey;
+ (id)persistencePolicy;
+ (id)deliveryDeadline;
@property(copy, nonatomic) NSArray *subscriptions;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

