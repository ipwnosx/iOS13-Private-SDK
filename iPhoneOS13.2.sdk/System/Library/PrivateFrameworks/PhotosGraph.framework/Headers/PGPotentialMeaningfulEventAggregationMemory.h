//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGPotentialMemory.h>

@class NSArray, NSMutableSet, NSSet, NSString;

@interface PGPotentialMeaningfulEventAggregationMemory : PGPotentialMemory
{
    NSMutableSet *_meaningfulEvents;
    NSMutableSet *_mutableMomentNodes;
    NSUInteger _meaning;
    NSString *_key;
    NSArray *_relevantAssets;
}

@property(retain, nonatomic) NSArray *relevantAssets; // @synthesize relevantAssets=_relevantAssets;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSSet *meaningfulEvents; // @synthesize meaningfulEvents=_meaningfulEvents;
@property(readonly) NSUInteger meaning; // @synthesize meaning=_meaning;
// - (void).cxx_destruct;
- (double)score;
- (id)peopleUUIDs;
- (void)addMeaningfulEvent:(id)arg1 controller:(id)arg2;
- (id)initWithMeaning:(NSUInteger)arg1 features:(id)arg2;

@end

