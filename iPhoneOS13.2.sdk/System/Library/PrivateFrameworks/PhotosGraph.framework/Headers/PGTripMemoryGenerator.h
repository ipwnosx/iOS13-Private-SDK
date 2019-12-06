//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSDate, PGGraphHighlightGroupNode;

@interface PGTripMemoryGenerator : PGFeaturedMemoryGenerator
{
    NSUInteger _numberOfUntimelyRejects;
    NSDate *_lowerBoundLocalDate;
    PGGraphHighlightGroupNode *_tripNode;
    NSUInteger _subcategory;
}

@property(readonly) NSUInteger subcategory; // @synthesize subcategory=_subcategory;
@property(retain, nonatomic) PGGraphHighlightGroupNode *tripNode; // @synthesize tripNode=_tripNode;
@property(retain, nonatomic) NSDate *lowerBoundLocalDate; // @synthesize lowerBoundLocalDate=_lowerBoundLocalDate;
// - (void).cxx_destruct;
- (id)_potentialMemoriesForDryTesting;
- (id)_tripNodeForPotentialMemory:(id)arg1;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (id)potentialMemoryWithTripNode:(id)arg1;
- (id)initWithSubcategory:(NSUInteger)arg1 controller:(id)arg2;

@end

