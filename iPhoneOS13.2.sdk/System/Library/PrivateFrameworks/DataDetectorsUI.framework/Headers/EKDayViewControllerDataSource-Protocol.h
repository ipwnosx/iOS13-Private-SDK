//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CalendarOccurrencesCollection, EKDayViewController, NSDate;

@protocol EKDayViewControllerDataSource <NSObject>
- (BOOL)dayViewControllerShouldRespondToApplicationDidBecomeActiveStateChange:(EKDayViewController *)arg1;
- (CalendarOccurrencesCollection *)dayViewController:(EKDayViewController *)arg1 eventsForStartDate:(NSDate *)arg2 endDate:(NSDate *)arg3;
@end

