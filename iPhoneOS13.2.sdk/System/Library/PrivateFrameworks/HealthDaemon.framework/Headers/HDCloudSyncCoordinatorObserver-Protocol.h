//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class HDCloudSyncCoordinator, NSDate, NSError;

@protocol HDCloudSyncCoordinatorObserver
- (void)cloudSyncCoordinatorObserver:(HDCloudSyncCoordinator *)arg1 didUpdateErrorRequiringUserAction:(NSError *)arg2;
- (void)cloudSyncCoordinatorObserver:(HDCloudSyncCoordinator *)arg1 didUpdateRestoreCompletionDate:(NSDate *)arg2;
- (void)cloudSyncCoordinatorObserver:(HDCloudSyncCoordinator *)arg1 didUpdateLastPushDate:(NSDate *)arg2 lastPullDate:(NSDate *)arg3;
- (void)cloudSyncCoordinatorObserver:(HDCloudSyncCoordinator *)arg1 didUpdateSyncEnabled:(BOOL)arg2;
@end

