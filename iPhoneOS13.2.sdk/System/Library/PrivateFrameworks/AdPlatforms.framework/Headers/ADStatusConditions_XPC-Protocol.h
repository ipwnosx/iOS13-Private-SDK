//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, NSUUID;

@protocol ADStatusConditions_XPC
- (void)isStatusConditionRegistered:(NSUUID *)arg1 bundleIdentifier:(NSString *)arg2 completionHandler:(void (^)(BOOL, NSError *))arg3;
- (void)clearStatusCondition:(NSUUID *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)setStatusCondition:(NSUUID *)arg1 completionHandler:(void (^)(NSError *))arg2;
@end

