//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarDaemon/CADPredicate.h>

#import <CalendarDaemon/EKDefaultPropertiesLoading-Protocol.h>

@class NSDate;

@interface CADEventTimeWindowPredicate : CADPredicate <NSSecureCoding, EKDefaultPropertiesLoading>
{
    BOOL _mustStartInInterval;
    CADPredicate *_wrappedPredicate;
    NSDate *_startDate;
    NSDate *_endDate;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL mustStartInInterval; // @synthesize mustStartInInterval=_mustStartInInterval;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) CADPredicate *wrappedPredicate; // @synthesize wrappedPredicate=_wrappedPredicate;
// - (void).cxx_destruct;
- (id)defaultPropertiesToLoad;
- (BOOL)shouldLoadDefaultProperties;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyMatchingItemsWithDatabase:(struct CalDatabase )arg1;
- (id)predicateFormat;
- (id)initWithPredicate:(id)arg1 limitWithStartDate:(id)arg2 endDate:(id)arg3 mustStartInInterval:(BOOL)arg4;

@end

