//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMutableDictionary, PPMutableAggregatedItem, PPNamedEntity;

@interface _PPNamedEntityNormalization : NSObject
{
    NSMutableDictionary *countByCategory;
    NSCountedSet *countByName;
    PPMutableAggregatedItem *aggregatedRecord;
    PPNamedEntity *entity;
}

// - (void).cxx_destruct;
- (id)dominantEntityName;
- (NSUInteger)dominantCategory;
- (id)initWithRecords:(id)arg1 scoringDate:(id)arg2 perRecordDecayRate:(float)arg3 decayRate:(float)arg4;

@end

