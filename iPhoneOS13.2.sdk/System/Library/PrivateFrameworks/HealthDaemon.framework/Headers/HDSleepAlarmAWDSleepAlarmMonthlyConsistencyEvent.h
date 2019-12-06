//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class HDSleepAlarmAWDSleepAlarmStatistics, NSString;

@interface HDSleepAlarmAWDSleepAlarmMonthlyConsistencyEvent : PBCodable <NSCopying>
{
    long long _bedtimeAlarmNightCount;
    long long _bedtimeChangesCount;
    long long _thirdPartySleepTrackerNightCount;
    NSUInteger _timestamp;
    HDSleepAlarmAWDSleepAlarmStatistics *_bedtimeChangesMinutesStatistics;
    HDSleepAlarmAWDSleepAlarmStatistics *_bedtimeCorrectionMinutesStatistics;
    NSString *_thirdPartyBundleIdentifier;
    NSString *_thirdPartyDeviceManufacturer;
    NSString *_thirdPartyDeviceModel;
   struct {
        unsigned int bedtimeAlarmNightCount:1;
        unsigned int bedtimeChangesCount:1;
        unsigned int thirdPartySleepTrackerNightCount:1;
        unsigned int timestamp:1;
    } _has;
}

@property(retain, nonatomic) NSString *thirdPartyDeviceManufacturer; // @synthesize thirdPartyDeviceManufacturer=_thirdPartyDeviceManufacturer;
@property(retain, nonatomic) NSString *thirdPartyDeviceModel; // @synthesize thirdPartyDeviceModel=_thirdPartyDeviceModel;
@property(retain, nonatomic) HDSleepAlarmAWDSleepAlarmStatistics *bedtimeChangesMinutesStatistics; // @synthesize bedtimeChangesMinutesStatistics=_bedtimeChangesMinutesStatistics;
@property(retain, nonatomic) HDSleepAlarmAWDSleepAlarmStatistics *bedtimeCorrectionMinutesStatistics; // @synthesize bedtimeCorrectionMinutesStatistics=_bedtimeCorrectionMinutesStatistics;
@property(retain, nonatomic) NSString *thirdPartyBundleIdentifier; // @synthesize thirdPartyBundleIdentifier=_thirdPartyBundleIdentifier;
@property(nonatomic) long long thirdPartySleepTrackerNightCount; // @synthesize thirdPartySleepTrackerNightCount=_thirdPartySleepTrackerNightCount;
@property(nonatomic) long long bedtimeChangesCount; // @synthesize bedtimeChangesCount=_bedtimeChangesCount;
@property(nonatomic) long long bedtimeAlarmNightCount; // @synthesize bedtimeAlarmNightCount=_bedtimeAlarmNightCount;
@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasThirdPartyDeviceManufacturer;
@property(readonly, nonatomic) BOOL hasThirdPartyDeviceModel;
@property(readonly, nonatomic) BOOL hasBedtimeChangesMinutesStatistics;
@property(readonly, nonatomic) BOOL hasBedtimeCorrectionMinutesStatistics;
@property(readonly, nonatomic) BOOL hasThirdPartyBundleIdentifier;
@property(nonatomic) BOOL hasThirdPartySleepTrackerNightCount;
@property(nonatomic) BOOL hasBedtimeChangesCount;
@property(nonatomic) BOOL hasBedtimeAlarmNightCount;
@property(nonatomic) BOOL hasTimestamp;

@end

