//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSSet;

@interface PGFeatureVectorBasedMemoryGenerator : PGMemoryGenerator
{
    NSSet *_featureVectors;
    NSUInteger _relatedType;
    NSUInteger _memoryCategory;
    NSUInteger _memorySubcategory;
    double _minimumPeopleMatchingScore;
    double _maximumLocationMatchingDistance;
    double _minimumLocationMatchingScore;
}

@property(nonatomic) double minimumLocationMatchingScore; // @synthesize minimumLocationMatchingScore=_minimumLocationMatchingScore;
@property(nonatomic) double maximumLocationMatchingDistance; // @synthesize maximumLocationMatchingDistance=_maximumLocationMatchingDistance;
@property(nonatomic) double minimumPeopleMatchingScore; // @synthesize minimumPeopleMatchingScore=_minimumPeopleMatchingScore;
@property(nonatomic) NSUInteger memorySubcategory; // @synthesize memorySubcategory=_memorySubcategory;
@property(nonatomic) NSUInteger memoryCategory; // @synthesize memoryCategory=_memoryCategory;
@property(nonatomic) NSUInteger relatedType; // @synthesize relatedType=_relatedType;
@property(retain, nonatomic) NSSet *featureVectors; // @synthesize featureVectors=_featureVectors;
// - (void).cxx_destruct;
- (id)_potentialMemoriesForDryTesting;
- (id)_createMemoryDebugWithPotentialMemory:(id)arg1;
- (NSUInteger)_postProcessMatch:(id)arg1;
- (id)generateMemories:(NSUInteger)arg1;
- (id)initWithController:(id)arg1;

@end

