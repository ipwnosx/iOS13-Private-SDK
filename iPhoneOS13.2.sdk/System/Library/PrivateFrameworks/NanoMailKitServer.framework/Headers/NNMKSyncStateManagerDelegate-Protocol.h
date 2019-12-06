//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class BBBulletin, NSString;
@protocol NNMKSyncStateManager;

@protocol NNMKSyncStateManagerDelegate <NSObject>
- (BOOL)syncStateManagerShouldAddFavoriteSubsectionForMailboxId:(NSString *)arg1;
- (void)syncStateManager:(id <NNMKSyncStateManager>)arg1 didAcknowledgeForwardNotificationPayload:(void (^)(BOOL))arg2 forBulletin:(BBBulletin *)arg3;
- (void)syncStateManagerDidInvalidateSyncSession:(id <NNMKSyncStateManager>)arg1 syncSessionIdentifier:(NSString *)arg2;
- (void)syncStateManagerDidBeginSyncSession:(id <NNMKSyncStateManager>)arg1 syncSessionType:(NSString *)arg2 syncSessionIdentifier:(NSString *)arg3;
- (void)syncStateManagerDidChangePairedDevice:(id <NNMKSyncStateManager>)arg1;
- (void)syncStateManagerDidUnpair:(id <NNMKSyncStateManager>)arg1;
@end

