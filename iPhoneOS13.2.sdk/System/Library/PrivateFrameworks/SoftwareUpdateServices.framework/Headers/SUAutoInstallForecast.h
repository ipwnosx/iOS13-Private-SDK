//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDate, _SUAutoInstallForecastDateCache;

@interface SUAutoInstallForecast : NSObject <NSSecureCoding, NSCopying>
{
    NSDate *_unlockStartDate;
    NSDate *_unlockEndDate;
    NSDate *_suStartDate;
    NSDate *_suEndDate;
    NSDate *_firstUnlock;
    _SUAutoInstallForecastDateCache *_lazy_forecastDateCache;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSDate *firstUnlock; // @synthesize firstUnlock=_firstUnlock;
@property(retain, nonatomic) NSDate *suEndDate; // @synthesize suEndDate=_suEndDate;
@property(retain, nonatomic) NSDate *suStartDate; // @synthesize suStartDate=_suStartDate;
@property(retain, nonatomic) NSDate *unlockEndDate; // @synthesize unlockEndDate=_unlockEndDate;
@property(retain, nonatomic) NSDate *unlockStartDate; // @synthesize unlockStartDate=_unlockStartDate;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)_isDateExpired:(id)arg1;
- (id)_forecastDateCache;
- (id)_roundedEndTime;
- (id)_roundedStartTime;
- (BOOL)_isForecastLogicallyExpired;
- (id)_calendar;
- (BOOL)isEqual:(id)arg1;
- (id)description;
@property(readonly, nonatomic) long long scheduleType;
- (void)dealloc;
- (id)init;

@end

