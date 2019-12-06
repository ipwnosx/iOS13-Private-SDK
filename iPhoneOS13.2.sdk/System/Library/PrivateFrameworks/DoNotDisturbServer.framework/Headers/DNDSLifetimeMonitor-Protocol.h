//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSDate;
@protocol DNDSLifetimeMonitorDataSource, DNDSLifetimeMonitorDelegate;

@protocol DNDSLifetimeMonitor <NSObject>
@property(nonatomic) __weak id <DNDSLifetimeMonitorDelegate> delegate;
@property(nonatomic) __weak id <DNDSLifetimeMonitorDataSource> dataSource;
@property(readonly, copy, nonatomic) NSArray *activeLifetimeAssertionUUIDs;
- (void)refreshMonitorForDate:(NSDate *)arg1;
@end

