//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSDictionary, NSNumber;

@protocol ASDIAPHistoryServiceProtocol
- (void)getAppStoreConsumedIntroOfferFamilyIdsWithResultHandler:(void (^)(NSArray *, _Bool, NSError *))arg1;
- (void)getCachedSubscriptionEntitlementsForSegment:(unsigned long long)arg1 withReplyHandler:(void (^)(NSArray *, _Bool, NSError *))arg2;
- (void)getSubscriptionEntitlementsForSegment:(unsigned long long)arg1 ignoreCaches:(_Bool)arg2 withReplyHandler:(void (^)(NSArray *, _Bool, _Bool, NSError *))arg3;
- (void)setSubscriptionEntitlementsWithDictionary:(NSDictionary *)arg1 forAccountID:(NSNumber *)arg2 segment:(unsigned long long)arg3;
- (void)refreshIAPsForActiveAccountWithReplyHandler:(void (^)(NSError *))arg1;
- (void)getIAPsForActiveAccountWithAdamIDs:(NSArray *)arg1 withReplyHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)getAllIAPsForActiveAccountWithReplyHandler:(void (^)(NSArray *, NSError *))arg1;
@end
