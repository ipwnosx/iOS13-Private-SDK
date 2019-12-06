//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGMeaningfulEventSetTrait.h>

@interface PGMeaningfulEventSceneSetTrait : PGMeaningfulEventSetTrait
{
    BOOL _accumulateHighConfidenceAssetCounts;
    NSUInteger _minimumNumberOfHighConfidenceAssets;
    NSUInteger _minimumNumberOfNegativeHighConfidenceAssets;
    double _minimumRatioOfHighConfidenceAssets;
}

@property(nonatomic) BOOL accumulateHighConfidenceAssetCounts; // @synthesize accumulateHighConfidenceAssetCounts=_accumulateHighConfidenceAssetCounts;
@property(nonatomic) double minimumRatioOfHighConfidenceAssets; // @synthesize minimumRatioOfHighConfidenceAssets=_minimumRatioOfHighConfidenceAssets;
@property(nonatomic) NSUInteger minimumNumberOfNegativeHighConfidenceAssets; // @synthesize minimumNumberOfNegativeHighConfidenceAssets=_minimumNumberOfNegativeHighConfidenceAssets;
@property(nonatomic) NSUInteger minimumNumberOfHighConfidenceAssets; // @synthesize minimumNumberOfHighConfidenceAssets=_minimumNumberOfHighConfidenceAssets;
- (id)debugDescriptionWithMomentNode:(id)arg1;
- (id)initWithNodes:(id)arg1 negativeNodes:(id)arg2;
- (id)initWithNodes:(id)arg1;

@end

