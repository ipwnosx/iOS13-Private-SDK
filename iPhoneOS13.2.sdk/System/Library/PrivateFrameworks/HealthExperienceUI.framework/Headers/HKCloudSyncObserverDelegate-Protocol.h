//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HKCloudSyncObserver, HKCloudSyncObserverStatus, NSError, NSProgress;

@protocol HKCloudSyncObserverDelegate <NSObject>
- (void)cloudSyncObserverStatusUpdated:(HKCloudSyncObserver *)arg1 status:(HKCloudSyncObserverStatus *)arg2;
- (void)cloudSyncObserverSyncCompleted:(HKCloudSyncObserver *)arg1;
- (void)cloudSyncObserver:(HKCloudSyncObserver *)arg1 syncFailedWithError:(NSError *)arg2;
- (void)cloudSyncObserver:(HKCloudSyncObserver *)arg1 syncDidStartWithProgress:(NSProgress *)arg2;
@end

