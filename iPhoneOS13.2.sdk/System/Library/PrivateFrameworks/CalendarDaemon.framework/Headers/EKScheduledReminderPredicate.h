//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarDaemon/EKPredicate.h>

@class NSDate;

@interface EKScheduledReminderPredicate : EKPredicate
{
    NSDate *_day;
    NSUInteger _maxResults;
}

+ (id)predicateForScheduledRemindersInCalendars:(id)arg1 onDay:(id)arg2;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) NSUInteger maxResults; // @synthesize maxResults=_maxResults;
@property(retain, nonatomic) NSDate *day; // @synthesize day=_day;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyMatchingItemsWithDatabase:(struct CalDatabase )arg1;

@end

