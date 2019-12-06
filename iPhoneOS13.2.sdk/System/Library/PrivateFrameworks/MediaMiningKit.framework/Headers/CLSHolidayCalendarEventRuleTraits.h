//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface CLSHolidayCalendarEventRuleTraits : NSObject
{
    BOOL _containsMePerson;
    NSUInteger _numberOfPeople;
    NSUInteger _peopleTrait;
    NSUInteger _locationTrait;
    NSSet *_categories;
}

@property(retain, nonatomic) NSSet *categories; // @synthesize categories=_categories;
@property(nonatomic) NSUInteger locationTrait; // @synthesize locationTrait=_locationTrait;
@property(nonatomic) NSUInteger peopleTrait; // @synthesize peopleTrait=_peopleTrait;
@property(nonatomic) NSUInteger numberOfPeople; // @synthesize numberOfPeople=_numberOfPeople;
@property(nonatomic) BOOL containsMePerson; // @synthesize containsMePerson=_containsMePerson;
// - (void).cxx_destruct;
- (id)description;
- (id)init;

@end

