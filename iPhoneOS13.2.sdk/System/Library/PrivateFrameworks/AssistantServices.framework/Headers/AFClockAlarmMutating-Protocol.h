//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDate, NSString, NSURL, NSUUID;

@protocol AFClockAlarmMutating <NSObject>
- (void)setLastModifiedDate:(NSDate *)arg1;
- (void)setDismissedDate:(NSDate *)arg1;
- (void)setFiredDate:(NSDate *)arg1;
- (void)setIsSnoozed:(BOOL)arg1;
- (void)setIsEnabled:(BOOL)arg1;
- (void)setRepeatOptions:(NSUInteger)arg1;
- (void)setMinute:(NSUInteger)arg1;
- (void)setHour:(NSUInteger)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setIsFiring:(BOOL)arg1;
- (void)setAlarmURL:(NSURL *)arg1;
- (void)setAlarmID:(NSUUID *)arg1;
@end

