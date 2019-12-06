//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSBackingStoreRecord-Protocol.h>

@class NSNumber, NSString;

@interface DNDSScheduleSettingsRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord>
{
    NSNumber *_lastUpdatedTimestamp;
    NSNumber *_scheduleEnabledSetting;
    NSNumber *_timePeriodStartTimeHour;
    NSNumber *_timePeriodStartTimeMinute;
    NSNumber *_timePeriodEndTimeHour;
    NSNumber *_timePeriodEndTimeMinute;
    NSNumber *_bedtimeBehaviorEnabledSetting;
}

+ (id)newWithDictionaryRepresentation:(id)arg1;
+ (id)migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(NSUInteger)arg2 toVersionNumber:(NSUInteger)arg3;
+ (id)recordForLegacyBehaviorOverride:(id)arg1 lastUpdated:(id)arg2;
+ (id)_recordWithEncodedInfo:(id)arg1 error:(id )arg2;
@property(readonly, copy, nonatomic) NSNumber *bedtimeBehaviorEnabledSetting; // @synthesize bedtimeBehaviorEnabledSetting=_bedtimeBehaviorEnabledSetting;
@property(readonly, copy, nonatomic) NSNumber *timePeriodEndTimeMinute; // @synthesize timePeriodEndTimeMinute=_timePeriodEndTimeMinute;
@property(readonly, copy, nonatomic) NSNumber *timePeriodEndTimeHour; // @synthesize timePeriodEndTimeHour=_timePeriodEndTimeHour;
@property(readonly, copy, nonatomic) NSNumber *timePeriodStartTimeMinute; // @synthesize timePeriodStartTimeMinute=_timePeriodStartTimeMinute;
@property(readonly, copy, nonatomic) NSNumber *timePeriodStartTimeHour; // @synthesize timePeriodStartTimeHour=_timePeriodStartTimeHour;
@property(readonly, copy, nonatomic) NSNumber *scheduleEnabledSetting; // @synthesize scheduleEnabledSetting=_scheduleEnabledSetting;
@property(readonly, copy, nonatomic) NSNumber *lastUpdatedTimestamp; // @synthesize lastUpdatedTimestamp=_lastUpdatedTimestamp;
// - (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
- (id)_initWithLastUpdatedTimestamp:(id)arg1 scheduleEnabledSetting:(id)arg2 timePeriodStartTimeHour:(id)arg3 timePeriodStartTimeMinute:(id)arg4 timePeriodEndTimeHour:(id)arg5 timePeriodEndTimeMinute:(id)arg6 bedtimeBehaviorEnabledSetting:(id)arg7;
- (id)_initWithRecord:(id)arg1;
- (id)init;
- (id)legacyBehaviorOverride;

@end

