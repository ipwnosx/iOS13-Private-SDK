//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSObject, PLClientServerTransaction, PLDelayedSaveActionsDetail;
@protocol OS_xpc_object;

@protocol PLChangePublisher <NSObject>
- (void)unpauseLaunchEventNotifications;
- (void)pauseLaunchEventNotifications;
- (PLClientServerTransaction *)publishChangeEvent:(NSObject<OS_xpc_object> *)arg1 delayedSaveActionsDetail:(PLDelayedSaveActionsDetail *)arg2 transaction:(PLClientServerTransaction *)arg3;
@end

