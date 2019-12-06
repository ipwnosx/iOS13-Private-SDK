//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoFoundation/PFLoggerBackend-Protocol.h>

@protocol OS_os_transaction;

@interface PFLoggerBackendAdapter : NSObject <PFLoggerBackend>
{
    _Atomic NSUInteger _pendingTransactionCount;
    NSObject<OS_os_transaction> *_transaction;
    BOOL _runningUnderDebugger;
}

+ (long long)parseByteSizeValueForKey:(id)arg1 inString:(id)arg2;
+ (long long)allFileSizeMaxBytesFromString:(id)arg1;
+ (long long)fileSizeMaxBytesFromString:(id)arg1;
+ (id)pathWithoutParametersFromString:(id)arg1;
+ (id)backendsFromUserDefaultsWithLogLevel:(int)arg1;
@property BOOL runningUnderDebugger; // @synthesize runningUnderDebugger=_runningUnderDebugger;
// - (void).cxx_destruct;
- (void)flushWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL outputsToDebuggerConsole;
@property(readonly, nonatomic) BOOL formatsMessage;
@property(readonly, nonatomic) BOOL allowsConcurrentAccess;
- (void)endTransaction;
- (void)beginTransaction;
// - (void)logFromCodeLocation:(CDStruct_98c8119d)arg1 facility:(id)arg2 subsystem:(id)arg3 level:(int)arg4 message:(id)arg5 format:(id)arg6 args:(struct __va_list_tag [1])arg7;
- (id)init;

@end

