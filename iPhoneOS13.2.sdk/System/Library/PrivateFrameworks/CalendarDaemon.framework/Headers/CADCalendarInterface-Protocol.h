//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CADObjectID, NSArray;

@protocol CADCalendarInterface
- (void)CADCalendar:(CADObjectID *)arg1 removeAllCalendarItems:(void (^)(int))arg2;
- (void)CADCalendar:(CADObjectID *)arg1 hasReminders:(void (^)(int, BOOL))arg2;
- (void)CADCalendar:(CADObjectID *)arg1 hasEvents:(void (^)(int, BOOL))arg2;
- (void)CADDatabaseGetCalendarsWithFaultedProperties:(NSArray *)arg1 reply:(void (^)(int, NSArray *, NSArray *))arg2;
@end

