//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol PLXPCProxyCreating <NSObject>
- (id)_unboostingRemoteObjectProxy;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(void (^)(NSError *))arg1;
- (id)remoteObjectProxyWithErrorHandler:(void (^)(NSError *))arg1;

@optional
- (void)addBarrierBlock:(void (^)(void))arg1;
@end

