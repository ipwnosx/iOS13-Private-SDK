//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface NSError (VVError)
+ (id)errorWithStreamDomain:(long long)arg1 code:(int)arg2 localizedDescription:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(int)arg2 localizedDescription:(id)arg3;
- (BOOL)shouldPresentErrorForTaskType:(long long)arg1;
- (BOOL)isSecurityError;
- (BOOL)isServerError;
- (BOOL)isConnectivityError;
- (BOOL)isInvalidSubscriberError;
- (BOOL)isNewPasswordError;
- (BOOL)isExpiredPasswordError;
- (BOOL)isPasswordMismatchError;
- (BOOL)isStreamDomain:(long long)arg1 error:(int)arg2;
- (BOOL)isEqualToError:(id)arg1;
@end

