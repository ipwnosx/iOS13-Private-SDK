//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PGGraph, PGSearchComputationCache;

@interface PGZeroKeywordComputer : NSObject
{
    PGGraph *_graph;
    PGSearchComputationCache *_searchComputationCache;
}

+ (id)zeroKeywordLog;
@property(readonly, nonatomic) PGSearchComputationCache *searchComputationCache; // @synthesize searchComputationCache=_searchComputationCache;
@property(readonly) PGGraph *graph; // @synthesize graph=_graph;
// - (void).cxx_destruct;
- (id)densestCloseLocationNodeForNode:(id)arg1 locationMask:(NSUInteger)arg2;
- (id)meaningNodeZeroKeywordForDisplayMeaningNode:(id)arg1 collectionUUIDsToAvoid:(id)arg2;
- (id)_tripZeroKeywordWithScore:(out double )arg1;
- (id)tripRankedKeyword;
- (id)tripZeroKeyword;
- (id)sceneZeroKeywordsWithOptions:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)eventZeroKeywordsWithOptions:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)locationZeroKeywordsWithOptions:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (BOOL)_conflictBetweenLocationOrAreaNode:(id)arg1 andOtherLocationOrAreaNodes:(id)arg2;
- (id)socialGroupKeywordsWithOptions:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)peopleZeroKeywordsWithOptions:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)_zeroKeywordsWithOptions:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)zeroKeywordsWithOptions:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)initWithGraph:(id)arg1 searchComputationCache:(id)arg2;
- (id)_zeroKeywordDisplayMeaningNodeForMeaningNode:(id)arg1;
- (id)contextualDateZeroKeywordsWithOptions:(id)arg1;
- (id)contextualMeaningAndTripZeroKeywordsWithOptions:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)contextualSceneZeroKeywordsWithOptions:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)contextualSeasonZeroKeywordsWithOptions:(id)arg1;
- (id)contextualHolidayZeroKeywordsWithOptions:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)_timeBasedContextualLocationNodeWithDate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)_locationBasedContextualLocationNodeWithLocation:(id)arg1 date:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)contextualLocationNodesWithOptions:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)contextualSocialGroupZeroKeywordsWithOptions:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)contextualPersonZeroKeywordsWithOptions:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;

@end

