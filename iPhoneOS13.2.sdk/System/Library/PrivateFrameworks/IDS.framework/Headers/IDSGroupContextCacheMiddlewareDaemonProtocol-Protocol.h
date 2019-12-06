//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class ENGroupID, ENStableGroupID;

@protocol IDSGroupContextCacheMiddlewareDaemonProtocol
- (void)deleteAllCachedValuesForGroupWithID:(ENGroupID *)arg1 WithCompletion:(void (^)(void))arg2;
- (void)deleteAllKnownGroupsWithCompletion:(void (^)(void))arg1;
- (void)fetchAllKnownGroups:(void (^)(NSArray *))arg1;
- (void)latestCachedGroupWithStableID:(ENStableGroupID *)arg1 completion:(void (^)(ENGroup *))arg2;
@end

