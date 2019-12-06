//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, PGMoodVector;

@interface PGMemoryDebug : NSObject
{
    NSDictionary *_matchingKeywords;
    NSDictionary *_referenceKeywords;
    NSDictionary *_eventKeywords;
    NSDictionary *_additionalInfoKeywords;
    double _contentScore;
    double _meanContentScore;
    double _matchingScore;
    double _graphScore;
    double _neighborScore;
    NSArray *_meaningLabels;
    double _collectionMeaningScore;
    double _collectionContentScore;
    NSArray *_collectionMeaningLabels;
    NSUInteger _numberOfPeople;
    NSUInteger _numberOfMoments;
    NSUInteger _numberOfCollections;
    NSUInteger _numberOfRelevantAssets;
    NSUInteger _suggestedMood;
    NSUInteger _recommendedMoods;
    NSUInteger _forbiddenMoods;
    PGMoodVector *_positiveMoodVector;
    PGMoodVector *_negativeMoodVector;
    PGMoodVector *_historyWeightedPositiveMoodVector;
    NSArray *_moodKeywords;
}

@property(retain, nonatomic) NSArray *moodKeywords; // @synthesize moodKeywords=_moodKeywords;
@property(retain, nonatomic) PGMoodVector *historyWeightedPositiveMoodVector; // @synthesize historyWeightedPositiveMoodVector=_historyWeightedPositiveMoodVector;
@property(retain, nonatomic) PGMoodVector *negativeMoodVector; // @synthesize negativeMoodVector=_negativeMoodVector;
@property(retain, nonatomic) PGMoodVector *positiveMoodVector; // @synthesize positiveMoodVector=_positiveMoodVector;
@property(nonatomic) NSUInteger forbiddenMoods; // @synthesize forbiddenMoods=_forbiddenMoods;
@property(nonatomic) NSUInteger recommendedMoods; // @synthesize recommendedMoods=_recommendedMoods;
@property(nonatomic) NSUInteger suggestedMood; // @synthesize suggestedMood=_suggestedMood;
@property(nonatomic) NSUInteger numberOfRelevantAssets; // @synthesize numberOfRelevantAssets=_numberOfRelevantAssets;
@property(nonatomic) NSUInteger numberOfCollections; // @synthesize numberOfCollections=_numberOfCollections;
@property(nonatomic) NSUInteger numberOfMoments; // @synthesize numberOfMoments=_numberOfMoments;
@property(nonatomic) NSUInteger numberOfPeople; // @synthesize numberOfPeople=_numberOfPeople;
@property(retain, nonatomic) NSArray *collectionMeaningLabels; // @synthesize collectionMeaningLabels=_collectionMeaningLabels;
@property(nonatomic) double collectionContentScore; // @synthesize collectionContentScore=_collectionContentScore;
@property(nonatomic) double collectionMeaningScore; // @synthesize collectionMeaningScore=_collectionMeaningScore;
@property(retain, nonatomic) NSArray *meaningLabels; // @synthesize meaningLabels=_meaningLabels;
@property(nonatomic) double neighborScore; // @synthesize neighborScore=_neighborScore;
@property(nonatomic) double graphScore; // @synthesize graphScore=_graphScore;
@property(nonatomic) double matchingScore; // @synthesize matchingScore=_matchingScore;
@property(nonatomic) double meanContentScore; // @synthesize meanContentScore=_meanContentScore;
@property(nonatomic) double contentScore; // @synthesize contentScore=_contentScore;
@property(retain, nonatomic) NSDictionary *additionalInfoKeywords; // @synthesize additionalInfoKeywords=_additionalInfoKeywords;
@property(retain, nonatomic) NSDictionary *eventKeywords; // @synthesize eventKeywords=_eventKeywords;
@property(retain, nonatomic) NSDictionary *referenceKeywords; // @synthesize referenceKeywords=_referenceKeywords;
@property(retain, nonatomic) NSDictionary *matchingKeywords; // @synthesize matchingKeywords=_matchingKeywords;
// - (void).cxx_destruct;

@end

