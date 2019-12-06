//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFSecurityService-Protocol.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AFSecurityConnection : NSObject <AFSecurityService>
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

// - (void).cxx_destruct;
- (void)_dispatchCallbackForProcessedDataMap:(id)arg1 errorMap:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_dispatchCallbackForProcessedData:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_processDataMap:(id)arg1 usingProcedure:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_processData:(id)arg1 usingProcedure:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_connectionInvalidated;
- (void)_connectionInterrupted;
- (void)_invalidateConnection;
- (id)_connection;
- (oneway void)setKeychainValue:(id)arg1 forKey:(id)arg2 accountIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (oneway void)processDataMap:(id)arg1 usingProcedure:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (oneway void)processData:(id)arg1 usingProcedure:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)invalidate;
- (void)dealloc;
- (id)init;

@end

