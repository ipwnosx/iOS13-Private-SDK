//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface PKCloudStoreError : NSError
{
}

+ (BOOL)_isCloudKitErrorDomain:(id)arg1;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
- (id)_allPartialErrors;
- (long long)_code;
- (BOOL)isInitializationTimeOutError;
- (BOOL)isPCSError;
- (BOOL)isKeychainSyncingInProgress;
- (BOOL)isNetworkUnavailable;
- (BOOL)isManateeNotAvailableError;
- (BOOL)isUnrecoverableDecryptionError;
- (BOOL)isPartialError;
- (BOOL)isZoneNotFoundError;
- (BOOL)isChangeTokenExpired;
- (id)initWithError:(id)arg1;
- (id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;

@end

