//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class EKAlarm, EKCalendarItem, EKEvent;

@protocol CALNRemoteMutator <NSObject>
- (BOOL)deleteEvent:(EKEvent *)arg1 withSpan:(long long)arg2;
- (void)setParticipantStatus:(long long)arg1 span:(long long)arg2 event:(EKEvent *)arg3;
- (void)setSnoozeTimeInterval:(double)arg1 alarm:(EKAlarm *)arg2 calendarItem:(EKCalendarItem *)arg3;
@end

