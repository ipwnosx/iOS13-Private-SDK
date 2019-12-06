//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RERelevanceEngineSubsystem.h>

#import <RelevanceEngine/REElementRelevanceProviderGenerator-Protocol.h>
#import <RelevanceEngine/RERelevanceProviderEnvironmentProperties-Protocol.h>

@class NSDictionary, NSHashTable, NSLock, NSMapTable, NSMutableArray, NSMutableSet, REDependencyGraph, REFeatureSet, REUpNextDisjointSet, REUpNextScheduler;
@protocol RERelevanceProviderEnvironmentDelegate;

@interface RERelevanceProviderEnvironment : RERelevanceEngineSubsystem <RERelevanceProviderEnvironmentProperties, REElementRelevanceProviderGenerator>
{
    NSMutableArray *_relevanceManagers;
    NSMapTable *_relevanceClassManagerMap;
    NSMapTable *_relevanceHistogramMap;
    REUpNextDisjointSet *_relevanceProviderSet;
    REDependencyGraph *_dependencyGraph;
    NSMapTable *_relevanceValues;
    NSHashTable *_customProviders;
    NSLock *_relevanceValuesLock;
    REFeatureSet *_supportedFeatures;
    REUpNextScheduler *_scheduler;
    NSHashTable *_providersToUpdate;
    NSMutableSet *_providerManagersToUpdate;
    NSMutableArray *_updateCompletionBlocks;
    BOOL _allowsLocationUse;
    id <RERelevanceProviderEnvironmentDelegate> _delegate;
}

@property(nonatomic) BOOL allowsLocationUse; // @synthesize allowsLocationUse=_allowsLocationUse;
@property(nonatomic) __weak id <RERelevanceProviderEnvironmentDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *allProviderValues;
@property(readonly, nonatomic) REFeatureSet *supportedFeatures;
- (id)createRelevaneProviderWithType:(id)arg1 withOptions:(id)arg2;
- (id)encodeRelevaneProvider:(id)arg1;
- (id)_relevaneProviderWithType:(id)arg1 withOptions:(id)arg2;
- (id)featuresForRelevanceProvider:(id)arg1;
- (void)_scaleRelevanceProviderValues:(id)arg1 values:(id)arg2;
- (id)relevancesForRelevanceProvider:(id)arg1;
- (id)relevancesForRelevanceProvider:(id)arg1 usingContext:(id)arg2;
- (BOOL)isRelevanceProviderHistoric:(id)arg1;
- (void)relateRelevanceProvider:(id)arg1 toRelevanceProvider:(id)arg2;
- (BOOL)isRelevanceProviderLoaded:(id)arg1;
- (BOOL)containsRelevanceProvider:(id)arg1;
- (void)removeRelevanceProvider:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addRelevanceProvider:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSUInteger relevanceProviderCount;
- (id)_histogramForFeature:(id)arg1;
- (id)_histogramForProvider:(id)arg1;
- (id)_providerManagerForProvider:(id)arg1;
- (void)_addRelevanceValue:(id)arg1 forProvider:(id)arg2;
- (void)_removeRelevanceValueForProvider:(id)arg1;
- (void)_queue_performUpdate:(CDUnknownBlockType)arg1;
- (void)resume;
- (void)pause;
- (void)dealloc;
- (id)initWithRelevanceEngine:(id)arg1;
- (void)accessHistogramForFeature:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)scheduleUpdateForRelevanceProviderManager:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)scheduleUpdateForRelevanceProvider:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)immediateUpdateForRelevanceProviderManager:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)isSupportedRelevanceProvider:(id)arg1;
- (id)currentRelevanceProvidersState;

@end

