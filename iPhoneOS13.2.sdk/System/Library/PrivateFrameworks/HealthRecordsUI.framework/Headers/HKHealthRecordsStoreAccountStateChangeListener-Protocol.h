//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HKClinicalAccount, HKHealthRecordsStore;

@protocol HKHealthRecordsStoreAccountStateChangeListener <NSObject>
- (void)healthRecordsStore:(HKHealthRecordsStore *)arg1 accountDidChange:(HKClinicalAccount *)arg2 changeType:(long long)arg3;
@end

