//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSUUID, PSYInitialSyncStateObserver;

@protocol PSYInitialSyncStateObserverDelegate <NSObject>

@optional
- (void)initialSyncStateObserverClientCanRetryFailedRequests:(PSYInitialSyncStateObserver *)arg1;
- (void)initialSyncStateObserver:(PSYInitialSyncStateObserver *)arg1 syncDidCompleteForPairingIdentifier:(NSUUID *)arg2;
- (void)initialSyncStateObserver:(PSYInitialSyncStateObserver *)arg1 syncDidResetForPairingIdentifier:(NSUUID *)arg2;
- (void)initialSyncStateObserver:(PSYInitialSyncStateObserver *)arg1 initialSyncDidCompleteForPairingIdentifier:(NSUUID *)arg2;
@end

