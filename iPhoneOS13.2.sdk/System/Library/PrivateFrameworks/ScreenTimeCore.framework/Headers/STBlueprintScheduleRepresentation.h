//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSArray, STBlueprintScheduleSimpleItem;

@interface STBlueprintScheduleRepresentation : NSObject <NSCopying>
{
    STBlueprintScheduleSimpleItem *_simpleSchedule;
    NSArray *_customScheduleItems;
}

@property(copy, nonatomic) NSArray *customScheduleItems; // @synthesize customScheduleItems=_customScheduleItems;
@property(retain, nonatomic) STBlueprintScheduleSimpleItem *simpleSchedule; // @synthesize simpleSchedule=_simpleSchedule;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
