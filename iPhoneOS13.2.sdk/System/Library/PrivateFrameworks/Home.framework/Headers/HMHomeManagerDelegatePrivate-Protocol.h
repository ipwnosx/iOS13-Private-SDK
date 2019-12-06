//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HMHomeManagerDelegate-Protocol.h>

@class HMHomeManager, NSArray;

@protocol HMHomeManagerDelegatePrivate <HMHomeManagerDelegate>

@optional
- (void)homeManagerDidEndBatchNotifications:(HMHomeManager *)arg1;
- (void)homeManagerWillStartBatchNotifications:(HMHomeManager *)arg1;
- (void)homeManager:(HMHomeManager *)arg1 residentProvisioningStatusChanged:(NSUInteger)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateThisDeviceIsResidentCapable:(BOOL)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateAccessAllowedWhenLocked:(BOOL)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateResidentEnabledForThisDevice:(BOOL)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateStatus:(NSUInteger)arg2;
- (void)homeManagerDidUpdateDataSyncState:(HMHomeManager *)arg1;
- (void)homeManagerDidUpdateDataSyncInProgress:(HMHomeManager *)arg1;
- (void)homeManagerDidUpdateCurrentHome:(HMHomeManager *)arg1;
- (void)homeManagerDidUpdateApplicationData:(HMHomeManager *)arg1;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateStateForIncomingInvitations:(NSArray *)arg2;
@end

