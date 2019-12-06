//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOCelestialRiseTransitSet, NSDate;

__attribute__((visibility("hidden")))
@interface GEOAlmanacRiseTransitSet : NSObject
{
    GEOCelestialRiseTransitSet *_celestialRiseTransitSet;
    NSUInteger _firstEventType;
    NSUInteger _lastEventType;
}

// - (void).cxx_destruct;
- (id)description;
- (BOOL)isCompatibleWith:(id)arg1;
- (long long)compareToDate:(id)arg1;
@property(readonly, nonatomic) NSDate *lastEventDate;
@property(readonly, nonatomic) NSDate *firstEventDate;
@property(readonly, nonatomic) NSUInteger lastEventType;
@property(readonly, nonatomic) NSUInteger firstEventType;
- (void)_calculateFirstAndLastEvents;
// @property(readonly, nonatomic) struct CAARiseTransitSetDetails riseTransitSet;
@property(readonly, nonatomic) NSDate *set;
@property(readonly, nonatomic) NSDate *transit;
@property(readonly, nonatomic) NSDate *rise;
- (id)initWith:(id)arg1;

@end

