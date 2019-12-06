//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGGraphIngestMoment-Protocol.h>

@class CLSClueCollection, CLSInvestigationPhotoKitFeeder, NSDate, NSNumber, NSString, PGManager;

@interface PGGraphIngestMomentContainer : NSObject <PGGraphIngestMoment>
{
    CLSClueCollection *_clueCollection;
    CLSInvestigationPhotoKitFeeder *_feeder;
    NSNumber *_isInterestingNumber;
    NSNumber *_isSmartInterestingNumber;
    NSNumber *_contentScoreNumber;
    PGManager *_manager;
}

@property(retain, nonatomic) PGManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) NSNumber *contentScoreNumber; // @synthesize contentScoreNumber=_contentScoreNumber;
@property(retain, nonatomic) NSNumber *isSmartInterestingNumber; // @synthesize isSmartInterestingNumber=_isSmartInterestingNumber;
@property(retain, nonatomic) NSNumber *isInterestingNumber; // @synthesize isInterestingNumber=_isInterestingNumber;
@property(retain, nonatomic) CLSInvestigationPhotoKitFeeder *feeder; // @synthesize feeder=_feeder;
@property(retain, nonatomic) CLSClueCollection *clueCollection; // @synthesize clueCollection=_clueCollection;
// - (void).cxx_destruct;
@property(readonly, nonatomic) double behavioralScore;
@property(readonly, nonatomic) NSUInteger numberOfRegularGemItems;
@property(readonly, nonatomic) NSUInteger numberOfShinyGemItems;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, nonatomic) BOOL containsNonJunkAssets;
@property(readonly, nonatomic) BOOL containsBetterScoringAsset;
@property(readonly, nonatomic) BOOL hasAssetsWithInterestingScenes;
@property(readonly, nonatomic) BOOL hasHigherThanImprovedAssets;
@property(readonly, nonatomic) double inhabitationScore;
@property(readonly, nonatomic) NSUInteger totalNumberOfPersons;
@property(readonly, nonatomic) NSUInteger numberOfItemsWithPersons;
@property(readonly, nonatomic) NSUInteger numberOfItems;
@property(readonly, nonatomic) NSDate *universalEndDate;
@property(readonly, nonatomic) NSDate *universalStartDate;
@property(readonly, nonatomic) NSDate *localEndDate;
@property(readonly, nonatomic) NSDate *localStartDate;
- (void)_computeScoresIfNeeded;
@property(readonly, nonatomic) double contentScore;
@property(readonly, nonatomic) BOOL isSmartInteresting;
@property(readonly, nonatomic) BOOL isInteresting;
- (id)initMomentContainerWithFeeder:(id)arg1 clueCollection:(id)arg2 manager:(id)arg3;

@end

