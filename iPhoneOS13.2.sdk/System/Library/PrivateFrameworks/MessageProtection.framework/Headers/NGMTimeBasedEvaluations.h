//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface NGMTimeBasedEvaluations : NSObject
{
    NSDate *_date;
}

+ (BOOL)prekeyShouldBeRolled:(id)arg1;
+ (BOOL)prekeyCanBeDeleted:(id)arg1;
+ (BOOL)validateFetchedPrekeyTimestamp:(double)arg1 forEvaluationType:(NSUInteger)arg2;
+ (id)debugDescriptionForAction:(NSUInteger)arg1;
+ (double)timeIntervalAllowedForAction:(NSUInteger)arg1;
+ (id)oldestDateAllowedToSendTo;
+ (void)setNowDate:(id)arg1;
+ (id)nowDate;
+ (id)sharedManager;
@property(retain) NSDate *date; // @synthesize date=_date;
// - (void).cxx_destruct;

@end

