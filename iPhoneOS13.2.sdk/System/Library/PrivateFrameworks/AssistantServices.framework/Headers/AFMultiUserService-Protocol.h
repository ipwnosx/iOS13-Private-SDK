//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString;

@protocol AFMultiUserService <NSObject>
- (oneway void)getConformingSharedUserIds:(void (^)(NSDictionary *, NSError *))arg1;
- (oneway void)getConformingSharedUserIdForHomeUserId:(NSString *)arg1 completion:(void (^)(NSString *, NSString *, NSError *))arg2;
- (oneway void)getSharedUserIdForHomeUserId:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (oneway void)getHomeUserIdForSharedUserId:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
@end

