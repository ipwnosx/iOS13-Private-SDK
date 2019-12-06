//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface PVContext : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _quarantineTwinsOnAssetEnabled;
    BOOL _faceClusteringDisabled;
    BOOL _personBuildingDisabled;
    BOOL _personBuilderMergeCandidatesDisabled;
    float _faceClusteringThreshold;
    float _faceClusteringJunkThreshold;
    float _faceClusteringAgeThreshold;
    float _faceMergeFaceprintDistanceThreshold;
    float _facePrimarySuggestionsThreshold;
    unsigned int _faceAlgorithmUmbrellaVersion;
    unsigned int _sceneAlgorithmUmbrellaVersion;
    NSUInteger _minimumSuggestionSize;
    NSUInteger _minFaceCountToTriggerClustering;
    NSUInteger _maxFaceCountForClustering;
    NSUInteger _minimumFaceGroupSizeForCreatingMergeCandidates;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned int sceneAlgorithmUmbrellaVersion; // @synthesize sceneAlgorithmUmbrellaVersion=_sceneAlgorithmUmbrellaVersion;
@property(nonatomic) unsigned int faceAlgorithmUmbrellaVersion; // @synthesize faceAlgorithmUmbrellaVersion=_faceAlgorithmUmbrellaVersion;
@property(nonatomic) NSUInteger minimumFaceGroupSizeForCreatingMergeCandidates; // @synthesize minimumFaceGroupSizeForCreatingMergeCandidates=_minimumFaceGroupSizeForCreatingMergeCandidates;
@property(nonatomic) BOOL personBuilderMergeCandidatesDisabled; // @synthesize personBuilderMergeCandidatesDisabled=_personBuilderMergeCandidatesDisabled;
@property(nonatomic) BOOL personBuildingDisabled; // @synthesize personBuildingDisabled=_personBuildingDisabled;
@property(nonatomic) BOOL faceClusteringDisabled; // @synthesize faceClusteringDisabled=_faceClusteringDisabled;
@property(nonatomic) NSUInteger maxFaceCountForClustering; // @synthesize maxFaceCountForClustering=_maxFaceCountForClustering;
@property(nonatomic) NSUInteger minFaceCountToTriggerClustering; // @synthesize minFaceCountToTriggerClustering=_minFaceCountToTriggerClustering;
@property(nonatomic) BOOL quarantineTwinsOnAssetEnabled; // @synthesize quarantineTwinsOnAssetEnabled=_quarantineTwinsOnAssetEnabled;
@property(nonatomic) NSUInteger minimumSuggestionSize; // @synthesize minimumSuggestionSize=_minimumSuggestionSize;
@property(nonatomic) float facePrimarySuggestionsThreshold; // @synthesize facePrimarySuggestionsThreshold=_facePrimarySuggestionsThreshold;
@property(nonatomic) float faceMergeFaceprintDistanceThreshold; // @synthesize faceMergeFaceprintDistanceThreshold=_faceMergeFaceprintDistanceThreshold;
@property(nonatomic) float faceClusteringAgeThreshold; // @synthesize faceClusteringAgeThreshold=_faceClusteringAgeThreshold;
@property(nonatomic) float faceClusteringJunkThreshold; // @synthesize faceClusteringJunkThreshold=_faceClusteringJunkThreshold;
@property(nonatomic) float faceClusteringThreshold; // @synthesize faceClusteringThreshold=_faceClusteringThreshold;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

