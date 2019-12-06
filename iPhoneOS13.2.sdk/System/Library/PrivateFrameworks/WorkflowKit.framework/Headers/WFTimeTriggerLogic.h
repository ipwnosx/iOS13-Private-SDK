//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface WFTimeTriggerLogic : NSObject
{
    NSDate *_currentSunriseTime;
    NSDate *_currentSunsetTime;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSDate *currentSunsetTime; // @synthesize currentSunsetTime=_currentSunsetTime;
@property(retain, nonatomic) NSDate *currentSunriseTime; // @synthesize currentSunriseTime=_currentSunriseTime;
// - (void).cxx_destruct;
- (id)adjustedTime:(id)arg1 byOffset:(NSUInteger)arg2;
- (id)triggersFromTriggers:(id)arg1 thatShouldFireAtDate:(id)arg2;
- (id)nextFireDateForTrigger:(id)arg1;

@end

