//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/REMLModelProperties-Protocol.h>

@class NSString, REConcurrentDictionary;
@protocol RERelevanceEngineMetricsRecorder;

@interface REMLModel : NSObject <REMLModelProperties>
{
    REConcurrentDictionary *_predictionCache;
    BOOL _wantsPredictionCache;
    BOOL _implementsDebugSaving;
    BOOL _allowsExploreExploit;
    float _exploreExploitModulator;
    float _priorMean;
    float _varianceEpsilon;
    float _simulationExploreExploitModulator;
    id <RERelevanceEngineMetricsRecorder> _metricsRecorder;
    NSString *_metricsInteraction;
}

+ (NSUInteger)maxFeatureCount;
+ (NSUInteger)featureBitWidth;
+ (id)modelWithFeatureSet:(id)arg1 priorMean:(float)arg2 modelVarianceEpsilon:(float)arg3;
@property(retain, nonatomic) NSString *metricsInteraction; // @synthesize metricsInteraction=_metricsInteraction;
@property(retain, nonatomic) id <RERelevanceEngineMetricsRecorder> metricsRecorder; // @synthesize metricsRecorder=_metricsRecorder;
@property(nonatomic) float simulationExploreExploitModulator; // @synthesize simulationExploreExploitModulator=_simulationExploreExploitModulator;
@property(nonatomic) float varianceEpsilon; // @synthesize varianceEpsilon=_varianceEpsilon;
@property(nonatomic) float priorMean; // @synthesize priorMean=_priorMean;
@property(nonatomic) float exploreExploitModulator; // @synthesize exploreExploitModulator=_exploreExploitModulator;
@property(nonatomic) BOOL allowsExploreExploit; // @synthesize allowsExploreExploit=_allowsExploreExploit;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSUInteger maxFeatureCount;
@property(readonly, nonatomic) NSUInteger featureBitWidth;
@property(readonly, nonatomic) NSString *name;
- (void)logCoreAnalyticsMetrics;
- (BOOL)requiresDirectory;
- (NSUInteger)_getTotalPositiveCount;
@property(readonly, nonatomic) NSUInteger totalPositiveCount;
- (NSUInteger)_getTotalExampleCount;
@property(readonly, nonatomic) NSUInteger totalExampleCount;
- (float)_getNormalizedEntropy;
@property(readonly, nonatomic) float normalizedEntropy;
- (float)_getAveragePrediction;
@property(readonly, nonatomic) float averagePrediction;
- (long long)_getNumberOfCoordinates;
@property(readonly, nonatomic) long long getNumberOfCoordinates;
- (void)_clearModel;
- (void)clearModel;
- (BOOL)_saveDebugModelToURL:(id)arg1 error:(id )arg2;
- (BOOL)_loadModelFromURL:(id)arg1 error:(id )arg2;
- (BOOL)loadModelFromURL:(id)arg1 error:(id )arg2;
- (BOOL)_saveModelToURL:(id)arg1 error:(id )arg2;
- (BOOL)saveModelToURL:(id)arg1 error:(id )arg2;
- (id)_predictWithFeatures:(id)arg1;
- (id)predictionSetWithFeatures:(id)arg1;
- (id)predictWithFeatures:(id)arg1;
- (void)_clearCache;
- (void)_trainWithFeatures:(id)arg1 positiveEvent:(id)arg2;
- (void)trainWithFeatures:(id)arg1 positiveEvent:(id)arg2;
- (BOOL)wantsPredictionCache;
- (void)setWantsPredictionCache:(BOOL)arg1;
- (id)initWithFeatureSet:(id)arg1 priorMean:(float)arg2 modelVarianceEpsilon:(float)arg3;
- (id)init;

@end

