//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CPLErrors : NSObject
{
}

+ (id)errorsForIdentifiers:(id)arg1 error:(id)arg2;
+ (id)unsafeResources:(id)arg1 withError:(id)arg2 realPrune:(BOOL)arg3 resourceStorage:(id)arg4;
+ (id)unsafeResources:(id)arg1 withError:(id)arg2 resourceStorage:(id)arg3;
+ (id)sessionHasBeenDeferredError;
+ (id)missingError;
// + (id)cplErrorWithCode:(long long)arg1 underlyingError:(id)arg2 userInfo:(id)arg3 description:(id)arg4 arguments:(struct __va_list_tag [1])arg5;
+ (id)cplErrorWithCode:(long long)arg1 underlyingError:(id)arg2 userInfo:(id)arg3 description:(id)arg4;
// + (id)cplErrorWithCode:(long long)arg1 underlyingError:(id)arg2 description:(id)arg3 arguments:(struct __va_list_tag [1])arg4;
+ (id)cplErrorWithCode:(long long)arg1 underlyingError:(id)arg2 description:(id)arg3;
// + (id)cplErrorWithCode:(long long)arg1 description:(id)arg2 arguments:(struct __va_list_tag [1])arg3;
+ (id)cplErrorWithCode:(long long)arg1 description:(id)arg2;
+ (id)operationCancelledError;
+ (id)posixErrorForURL:(id)arg1;
+ (id)invalidDaemonErrorWithConnectionError:(id)arg1;
+ (id)invalidCloudCacheErrorWithReason:(id)arg1;
+ (id)invalidClientCacheErrorWithReason:(id)arg1;
+ (id)libraryClosedError;
+ (id)transportErrorFromTransportError:(id)arg1;
+ (id)readOnlyError;
+ (id)unknownPrimaryScope;
+ (id)invalidScopeErrorWithScopeIndex:(long long)arg1;
+ (id)invalidScopeErrorWithScopeIdentifier:(id)arg1;
+ (id)invalidScopeErrorWithScopedIdentifier:(id)arg1;
+ (id)unknownError;
+ (id)notImplementedError;
+ (id)versionMismatchError;
+ (id)underlyingErrorWithReason:(id)arg1;
+ (id)incorrectMachineStateErrorWithReason:(id)arg1;
+ (id)incorrectParametersErrorForParameter:(id)arg1;

@end

