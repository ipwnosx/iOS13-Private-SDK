//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGBehavioralAlgorithm-Protocol.h>

@class NSDictionary, NSSet, PGGraph;

@interface PGAssetFeatureBehavioralProcessor : NSObject <PGBehavioralAlgorithm>
{
    PGGraph *_graph;
    NSSet *_goldAssets;
    NSDictionary *_personFeatures;
    NSDictionary *_sceneFeatures;
    double _similarityScoreNormalizer;
}

@property(nonatomic) double similarityScoreNormalizer; // @synthesize similarityScoreNormalizer=_similarityScoreNormalizer;
@property(retain, nonatomic) NSDictionary *sceneFeatures; // @synthesize sceneFeatures=_sceneFeatures;
@property(retain, nonatomic) NSDictionary *personFeatures; // @synthesize personFeatures=_personFeatures;
@property(retain, nonatomic) NSSet *goldAssets; // @synthesize goldAssets=_goldAssets;
@property(retain, nonatomic) PGGraph *graph; // @synthesize graph=_graph;
// - (void).cxx_destruct;
- (id)dataToPersist;
- (void)personAndSceneFeaturesFromGoldAssetsUsingBlock:(CDUnknownBlockType)arg1;
- (id)_semanticScoreByAssetUUIDForAssets:(id)arg1 normalize:(BOOL)arg2;
- (float)semanticScoreForAsset:(id)arg1;
- (id)semanticScoreByAssetUUIDForAssets:(id)arg1;
- (void)preprocessWithProgressBlock:(CDUnknownBlockType)arg1;
- (id)initWithGoldAssets:(id)arg1 graph:(id)arg2 persistedData:(id)arg3;
- (id)initWithGoldAssets:(id)arg1 graph:(id)arg2;

@end

