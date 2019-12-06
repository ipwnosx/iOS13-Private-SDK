//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSDate, NSString, REMChangeToken, REMChangeTrackingState;
@protocol REMChangeTrackingClientIdentifying;

@protocol REMXPCChangeTrackingPerformer
- (void)fetchAuxiliaryChangeInfos:(NSArray *)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)deleteHistoryBeforeDate:(NSDate *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)deleteHistoryBeforeToken:(REMChangeToken *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)fetchHistoryAfterDate:(NSDate *)arg1 completionHandler:(void (^)(REMChangeSet *, NSError *))arg2;
- (void)fetchHistoryAfterToken:(REMChangeToken *)arg1 completionHandler:(void (^)(REMChangeSet *, NSError *))arg2;
- (void)saveTrackingState:(REMChangeTrackingState *)arg1 withClientID:(id <REMChangeTrackingClientIdentifying>)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)getTrackingStateWithClientID:(id <REMChangeTrackingClientIdentifying>)arg1 completion:(void (^)(REMChangeTrackingState *, NSError *))arg2;
- (void)currentChangeTokenForAccountID:(NSString *)arg1 completion:(void (^)(REMChangeToken *))arg2;
- (void)currentChangeTokenForAccountTypes:(long long)arg1 completion:(void (^)(REMChangeToken *))arg2;
- (void)currentChangeToken:(void (^)(REMChangeToken *))arg1;
@end

