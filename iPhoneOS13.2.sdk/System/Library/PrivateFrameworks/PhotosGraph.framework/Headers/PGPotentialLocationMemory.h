//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGPotentialMemory.h>

@class NSArray, NSDate, NSMutableSet, NSString, PGGraphNode;

@interface PGPotentialLocationMemory : PGPotentialMemory
{
    NSMutableSet *_mutableMomentNodes;
    PGGraphNode *_cityNode;
    long long _year;
    NSArray *_assetsInCity;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property(retain) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain) NSArray *assetsInCity; // @synthesize assetsInCity=_assetsInCity;
@property(readonly) long long year; // @synthesize year=_year;
@property(readonly) PGGraphNode *cityNode; // @synthesize cityNode=_cityNode;
// - (void).cxx_destruct;
@property(readonly) NSString *city;
- (void)addMomentNode:(id)arg1;
- (id)initWithCityNode:(id)arg1 year:(long long)arg2;

@end

