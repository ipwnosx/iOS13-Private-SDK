//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LoginKit/LKLoginControllerProtocol-Protocol.h>

@class NSString;

@protocol LKLoginDaemonProtocol <LKLoginControllerProtocol>
- (void)updateGlobalDefaultsValue:(id)arg1 forKey:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)checkInWithCurrentEnvironment:(NSUInteger)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)isReadyToLogoutWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)isReadyToLoginWithCompletionHandler:(void (^)(NSError *))arg1;
@end

