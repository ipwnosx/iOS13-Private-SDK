//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NTKBatteryUtilities : NSObject
{
}

+ (id)modularRingColorForLevel:(float)arg1;
+ (id)colorForLevel:(float)arg1 andState:(long long)arg2;
+ (id)chargingStringForState:(long long)arg1 longText:(BOOL)arg2;
+ (id)chargingStringForState:(long long)arg1;
+ (BOOL)chargingForState:(long long)arg1;

@end

