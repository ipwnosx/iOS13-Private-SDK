//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol DNDSAssertionSyncManager;

@protocol DNDSAssertionSyncManagerDelegate <NSObject>
- (void)syncManager:(id <DNDSAssertionSyncManager>)arg1 performModeAssertionUpdatesWithHandler:(BOOL (^)(id <DNDSModeAssertionUpdateContext>))arg2;
@end

