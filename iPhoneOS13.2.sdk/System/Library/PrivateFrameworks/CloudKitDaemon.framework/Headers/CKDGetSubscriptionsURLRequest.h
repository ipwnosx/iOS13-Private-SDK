//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDGetSubscriptionsURLRequest : CKDURLRequest
{
    NSMutableArray *_subscriptions;
    id /* CDUnknownBlockType */ _subscriptionFetchedBlock;
    NSArray *_subscriptionIDs;
    NSMutableDictionary *_subscriptionIDByRequestID;
}

@property(retain, nonatomic) NSMutableDictionary *subscriptionIDByRequestID; // @synthesize subscriptionIDByRequestID=_subscriptionIDByRequestID;
@property(retain, nonatomic) NSArray *subscriptionIDs; // @synthesize subscriptionIDs=_subscriptionIDs;
@property(copy, nonatomic) id /* CDUnknownBlockType */ subscriptionFetchedBlock; // @synthesize subscriptionFetchedBlock=_subscriptionFetchedBlock;
@property(retain, nonatomic) NSMutableArray *subscriptions; // @synthesize subscriptions=_subscriptions;
// - (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (int)operationType;
- (id)initWithSubscriptionIDs:(id)arg1;

@end

