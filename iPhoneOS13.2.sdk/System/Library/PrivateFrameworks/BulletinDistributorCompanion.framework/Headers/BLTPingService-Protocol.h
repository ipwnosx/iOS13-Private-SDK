//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class BLTPBBulletinSummary, NSSet, NSString;

@protocol BLTPingService <NSObject>
- (void)subscribeWithMachServiceName:(NSString *)arg1;
- (void)sendBulletinSummary:(BLTPBBulletinSummary *)arg1;
- (void)getWillNanoPresentNotificationForSectionID:(NSString *)arg1 subsectionIDs:(NSSet *)arg2 completion:(void (^)(BOOL))arg3;
- (void)unsubscribeFromSectionID:(NSString *)arg1;
- (void)subscribeToSectionID:(NSString *)arg1 forFullBulletins:(BOOL)arg2 withAck:(BOOL)arg3 ackAllowedOnLocalConnection:(BOOL)arg4;
@end

