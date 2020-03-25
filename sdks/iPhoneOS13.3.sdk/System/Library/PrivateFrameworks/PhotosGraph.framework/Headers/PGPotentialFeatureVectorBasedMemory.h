//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGPotentialMemory.h>

@class NSDictionary, NSIndexSet, NSSet;

@interface PGPotentialFeatureVectorBasedMemory : PGPotentialMemory
{
    BOOL _isBirthday;
    NSDictionary *_matchingKeywords;
    NSDictionary *_referenceKeywords;
    NSDictionary *_momentKeywords;
    NSSet *_peopleNodes;
    NSIndexSet *_sortedCriteria;
    double _matchingScore;
    double _contentScore;
    double _neighborScore;
}

@property double neighborScore; // @synthesize neighborScore=_neighborScore;
@property double contentScore; // @synthesize contentScore=_contentScore;
@property double matchingScore; // @synthesize matchingScore=_matchingScore;
@property(retain) NSIndexSet *sortedCriteria; // @synthesize sortedCriteria=_sortedCriteria;
@property BOOL isBirthday; // @synthesize isBirthday=_isBirthday;
@property(retain) NSSet *peopleNodes; // @synthesize peopleNodes=_peopleNodes;
@property(retain) NSDictionary *momentKeywords; // @synthesize momentKeywords=_momentKeywords;
@property(retain) NSDictionary *referenceKeywords; // @synthesize referenceKeywords=_referenceKeywords;
@property(retain) NSDictionary *matchingKeywords; // @synthesize matchingKeywords=_matchingKeywords;
// - (void).cxx_destruct;

@end
