//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface NSError (HomeKitCKError)
//  (id)errorWithSQLite3Statement:(struct sqlite3_stmt )arg1;
//  (id)errorWithSQLite3Context:(struct sqlite3 )arg1 statement:(const char )arg2;
//  (id)errorWithSQLite3Context:(struct sqlite3 )arg1;
+ (id)hmd_HTTPMessageTransportErrorWithCode:(long long)arg1;
+ (id)hmPrivateErrorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)hmInternalErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)hmPrivateErrorWithCode:(long long)arg1;
+ (id)hmInternalErrorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)hmInternalErrorWithCode:(long long)arg1;
+ (id)hmErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)hmErrorWithCode:(long long)arg1;
+ (id)hmErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4;
+ (id)hmErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4 underlyingError:(id)arg5;
- (id)convertToCKError;
- (BOOL)isNonRecoverableCKError;
- (BOOL)isCKError;
- (id)hmErrorFromCKError;
- (id)conciseCKError;
- (id)actualCKErrorFromCKErrorPartialFailure:(id)arg1;
@property(readonly, nonatomic, getter=isHMError) BOOL hmError;
@end

