//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol ASDInGameAnalyticsServiceProtocol
- (void)heartBeatForSessionID:(NSString *)arg1 withCompletionHandler:(void (^)(NSError *))arg2;
- (void)gamePlayDidEndWithReason:(long long)arg1 andSessionID:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)gamePlayDidBeginWithCompletionHandler:(void (^)(NSString *, NSError *))arg1;
@end

