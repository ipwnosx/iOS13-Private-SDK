//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, STBlueprintUsageLimitScheduleSimpleItem;

@interface STBlueprintUsageLimitScheduleRepresentation : NSObject
{
    STBlueprintUsageLimitScheduleSimpleItem *_simpleSchedule;
    NSArray *_customScheduleItems;
}

@property(copy, nonatomic) NSArray *customScheduleItems; // @synthesize customScheduleItems=_customScheduleItems;
@property(retain, nonatomic) STBlueprintUsageLimitScheduleSimpleItem *simpleSchedule; // @synthesize simpleSchedule=_simpleSchedule;
// - (void).cxx_destruct;

@end

