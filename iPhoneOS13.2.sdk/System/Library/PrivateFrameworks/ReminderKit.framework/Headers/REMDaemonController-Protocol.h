//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString;
@protocol REMXPCChangeTrackingPerformer, REMXPCDebugPerformer, REMXPCIndexingPerformer, REMXPCStorePerformer, REMXPCSyncInterfacePerformer;

@protocol REMDaemonController <NSObject>
- (void)invalidate;
- (void)asyncIndexingPerformerWithReason:(NSString *)arg1 loadHandler:(void (^)(id <REMXPCIndexingPerformer>))arg2 errorHandler:(void (^)(NSError *))arg3;
- (id <REMXPCIndexingPerformer>)syncIndexingPerformerWithReason:(NSString *)arg1 errorHandler:(void (^)(NSError *))arg2;
- (void)asyncSyncInterfacePerformerWithReason:(NSString *)arg1 loadHandler:(void (^)(id <REMXPCSyncInterfacePerformer>))arg2 errorHandler:(void (^)(NSError *))arg3;
- (id <REMXPCSyncInterfacePerformer>)syncSyncInterfacePerformerWithReason:(NSString *)arg1 errorHandler:(void (^)(NSError *))arg2;
- (void)asyncStorePerformerWithReason:(NSString *)arg1 loadHandler:(void (^)(id <REMXPCStorePerformer>))arg2 errorHandler:(void (^)(NSError *))arg3;
- (id <REMXPCStorePerformer>)syncStorePerformerWithReason:(NSString *)arg1 errorHandler:(void (^)(NSError *))arg2;
- (id <REMXPCDebugPerformer>)syncDebugPerformerWithReason:(NSString *)arg1 errorHandler:(void (^)(NSError *))arg2;
- (id <REMXPCChangeTrackingPerformer>)syncChangeTrackingPerformerWithReason:(NSString *)arg1 errorHandler:(void (^)(NSError *))arg2;
@end

