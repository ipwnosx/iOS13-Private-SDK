//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplicationDisplay-Protocol.h>

@class NSDate, NSString, NSTimeZone;

@protocol NTKWorldClockComplicationDisplay <NTKComplicationDisplay>
- (void)setOverrideDate:(NSDate *)arg1;
- (void)setTimeZone:(NSTimeZone *)arg1;

@optional
- (void)endTimeTravelAnimated:(BOOL)arg1;
- (void)startTimeTravelAnimated:(BOOL)arg1;
- (void)setLongCity:(NSString *)arg1;
- (void)setShortCity:(NSString *)arg1;
@end

