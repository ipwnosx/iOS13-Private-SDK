//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeCore/STUserNotificationContext.h>

@class NSData, NSNumber, NSString;

@interface STWeeklyReportUserNotificationContext : STUserNotificationContext
{
    NSData *_weeklyReportData;
    double _deltaScreenTimeUsage;
    NSNumber *_totalUsage;
    NSString *_notificationBodyKey;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *notificationBodyKey; // @synthesize notificationBodyKey=_notificationBodyKey;
@property(copy, nonatomic) NSNumber *totalUsage; // @synthesize totalUsage=_totalUsage;
@property(nonatomic) double deltaScreenTimeUsage; // @synthesize deltaScreenTimeUsage=_deltaScreenTimeUsage;
@property(retain, nonatomic) NSData *weeklyReportData; // @synthesize weeklyReportData=_weeklyReportData;
// - (void).cxx_destruct;
- (void)customizeNotificationContent:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)setDeltaScreenTimeUsage:(double)arg1 totalUsage:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

