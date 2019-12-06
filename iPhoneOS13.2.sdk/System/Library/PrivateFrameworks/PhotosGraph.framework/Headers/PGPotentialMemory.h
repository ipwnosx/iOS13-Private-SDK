//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, NSDate, NSDictionary, NSSet, NSString, PGGraphMomentNode, PGMemoryGenerator, PHAssetCollection;

@interface PGPotentialMemory : NSObject
{
    PHAssetCollection *_assetCollection;
    PGGraphMomentNode *_momentNode;
    NSSet *_momentNodes;
    long long _sourceType;
    NSUInteger _category;
    NSUInteger _subcategory;
    double _score;
    NSDate *_localDate;
    CLLocation *_location;
    NSSet *_peopleUUIDs;
    NSString *_eventName;
    double _contentScore;
    NSDate *_localStartDate;
    NSDate *_localEndDate;
    NSDate *_universalStartDate;
    NSDate *_universalEndDate;
    NSSet *_features;
    NSSet *_momentIDs;
    NSDictionary *_numberOfAssetsByMomentIDs;
    PGPotentialMemory *_upgradedPotentialMemory;
    PGMemoryGenerator *_upgradedMemoryGenerator;
}

@property(retain, nonatomic) PGMemoryGenerator *upgradedMemoryGenerator; // @synthesize upgradedMemoryGenerator=_upgradedMemoryGenerator;
@property(retain, nonatomic) PGPotentialMemory *upgradedPotentialMemory; // @synthesize upgradedPotentialMemory=_upgradedPotentialMemory;
@property(readonly) NSDictionary *numberOfAssetsByMomentIDs; // @synthesize numberOfAssetsByMomentIDs=_numberOfAssetsByMomentIDs;
@property(readonly) NSSet *momentIDs; // @synthesize momentIDs=_momentIDs;
@property(retain) NSSet *features; // @synthesize features=_features;
@property double contentScore; // @synthesize contentScore=_contentScore;
@property(retain) NSString *eventName; // @synthesize eventName=_eventName;
@property(retain) NSSet *peopleUUIDs; // @synthesize peopleUUIDs=_peopleUUIDs;
@property(retain) CLLocation *location; // @synthesize location=_location;
@property(retain) NSDate *localDate; // @synthesize localDate=_localDate;
@property double score; // @synthesize score=_score;
@property NSUInteger subcategory; // @synthesize subcategory=_subcategory;
@property NSUInteger category; // @synthesize category=_category;
@property long long sourceType; // @synthesize sourceType=_sourceType;
@property(retain) NSSet *momentNodes; // @synthesize momentNodes=_momentNodes;
@property(retain) PGGraphMomentNode *momentNode; // @synthesize momentNode=_momentNode;
@property(retain) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
// - (void).cxx_destruct;
- (id)buildAssetCollectionUsingMemoryController:(id)arg1 withMinimumNumberOfAssets:(NSUInteger)arg2;
- (double)computeContentScoreUsingMemoryController:(id)arg1;
- (void)_resetOverlapCheck;
- (void)_prepareForOverlapCheck;
@property(readonly) NSDate *universalEndDate; // @synthesize universalEndDate=_universalEndDate;
@property(readonly) NSDate *universalStartDate; // @synthesize universalStartDate=_universalStartDate;
@property(readonly) NSDate *localEndDate; // @synthesize localEndDate=_localEndDate;
@property(readonly) NSDate *localStartDate; // @synthesize localStartDate=_localStartDate;
- (id)initWithCategory:(NSUInteger)arg1 subcategory:(NSUInteger)arg2 momentNodes:(id)arg3 sourceType:(long long)arg4;
- (id)initWithCategory:(NSUInteger)arg1 subcategory:(NSUInteger)arg2 momentNode:(id)arg3;
- (id)initWithCategory:(NSUInteger)arg1 subcategory:(NSUInteger)arg2;

@end

