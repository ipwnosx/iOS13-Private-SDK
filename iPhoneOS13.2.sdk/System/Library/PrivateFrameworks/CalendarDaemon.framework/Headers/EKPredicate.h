//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarDaemon/CADPredicate.h>


@class NSArray, NSDate, NSSet, NSString, NSTimeZone;

@interface EKPredicate : CADPredicate <NSSecureCoding>
{
    NSString *_uuid;
    NSTimeZone *_timeZone;
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_calendars;
    NSString *_title;
    NSSet *_restrictedCalendarRowIDs;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSSet *restrictedCalendarRowIDs; // @synthesize restrictedCalendarRowIDs=_restrictedCalendarRowIDs;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *calendars; // @synthesize calendars=_calendars;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
// - (void).cxx_destruct;
- (id)predicateFormat;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCalendars:(id)arg1;

@end

