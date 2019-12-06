//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLMomentGenerationUtils : NSObject
{
}

+ (BOOL)isNearFrequentLocationForMoment:(id)arg1 frequentLocations:(id)arg2;
+ (BOOL)isAtFrequentLocationForMoment:(id)arg1 frequentLocations:(id)arg2;
+ (id)frequentLocationsOverlappingStartDate:(id)arg1 endDate:(id)arg2 frequentLocations:(id)arg3;
+ (id)sortedOverlappingFrequentLocations:(id)arg1;
+ (BOOL)isTopFrequentLocationForMoment:(id)arg1 frequentLocations:(id)arg2;
+ (unsigned short)locationTypeForLocation:(id)arg1 usingLocationsOfInterest:(id)arg2 routineIsAvailable:(BOOL)arg3;
+ (unsigned short)processedLocationTypeForMoment:(id)arg1 locationsOfInterest:(id)arg2 frequentLocations:(id)arg3 routineIsAvailable:(BOOL)arg4;
+ (void)processLocationIfNecessaryInMoment:(id)arg1 usingManager:(id)arg2 frequentLocations:(id)arg3 frequentLocationsDidChange:(BOOL)arg4;

@end

