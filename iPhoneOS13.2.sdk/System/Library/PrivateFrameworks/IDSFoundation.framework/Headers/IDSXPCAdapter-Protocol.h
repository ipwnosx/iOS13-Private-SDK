//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSObject;
@protocol IDSXPCConnectionProtocol, OS_dispatch_queue;

@protocol IDSXPCAdapter <NSObject>
- (id <IDSXPCConnectionProtocol>)createServiceConnectionWithServiceName:(const char )arg1 invalidationHandler:(void (^)(void))arg2 terminationHandler:(void (^)(void))arg3 peerEventHandler:(void (^)(NSObject<OS_xpc_object> *, NSObject<OS_xpc_object> *))arg4 peerQueue:(NSObject<OS_dispatch_queue> *)arg5;
@end

