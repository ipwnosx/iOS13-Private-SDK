//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DoNotDisturb/DNDScheduleSettings.h>

@class NSDate;

@interface DNDSScheduleSettings : DNDScheduleSettings
{
    NSDate *_creationDate;
}

+ (BOOL)supportsSecureCoding;
+ (id)settingsWithClientSettings:(id)arg1 creationDate:(id)arg2;
+ (id)defaultScheduleSettings;
+ (id)settingsForRecord:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
// - (void).cxx_destruct;
- (id)replacementObjectForCoder:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithScheduleEnabledSetting:(NSUInteger)arg1 timePeriod:(id)arg2 bedtimeBehaviorEnabledSetting:(NSUInteger)arg3 creationDate:(id)arg4;
- (id)makeRecord;

@end

