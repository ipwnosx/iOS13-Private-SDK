//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableArray, NURuleSystem, PIReframeResult, PIStillReframerConfiguration, VNSaliencyImageObservation;

@interface PIStillReframer : NSObject
{
    BOOL _shouldAttemptReframe;
    BOOL _sceneContainsPet;
    BOOL _sceneContainsHuman;
    BOOL _sceneContainsMultipleSubjects;
    PIReframeResult *_result;
    PIStillReframerConfiguration *_configuration;
    NSArray *_ANODSubjects;
    VNSaliencyImageObservation *_saliencyObservation;
    NSMutableArray *_mutableSubjects;
    NURuleSystem *_ruleSystem;
    CGRect _overscanBounds;
    CGRect _viewBounds;
}

+ (id)detectedSubjectsForImage:(id)arg1 context:(id)arg2;
+ (NSUInteger)subjectDirectionForImageOrientation:(long long)arg1;
+ (id)keyForSubjectWithIndex:(NSUInteger)arg1 prefix:(id)arg2;
+ (id)defaultConfiguration;
@property(nonatomic) BOOL sceneContainsMultipleSubjects; // @synthesize sceneContainsMultipleSubjects=_sceneContainsMultipleSubjects;
@property(nonatomic) BOOL sceneContainsHuman; // @synthesize sceneContainsHuman=_sceneContainsHuman;
@property(nonatomic) BOOL sceneContainsPet; // @synthesize sceneContainsPet=_sceneContainsPet;
@property(readonly, nonatomic) NURuleSystem *ruleSystem; // @synthesize ruleSystem=_ruleSystem;
@property(readonly, copy, nonatomic) NSMutableArray *mutableSubjects; // @synthesize mutableSubjects=_mutableSubjects;
@property(readonly, nonatomic) BOOL shouldAttemptReframe; // @synthesize shouldAttemptReframe=_shouldAttemptReframe;
@property(readonly, nonatomic) VNSaliencyImageObservation *saliencyObservation; // @synthesize saliencyObservation=_saliencyObservation;
@property(readonly, copy, nonatomic) NSArray *ANODSubjects; // @synthesize ANODSubjects=_ANODSubjects;
@property(readonly, nonatomic) CGRect viewBounds; // @synthesize viewBounds=_viewBounds;
@property(readonly, nonatomic) CGRect overscanBounds; // @synthesize overscanBounds=_overscanBounds;
@property(readonly, nonatomic) PIStillReframerConfiguration *configuration; // @synthesize configuration=_configuration;
// - (void).cxx_destruct;
- (double)confidenceWithBounds:(CGRect)arg1;
- (BOOL)shouldAllowCandidateRect:(CGRect)arg1 forUnwantedSubjects:(id)arg2;
- (double)amountOfOverscanUsedByRect:(CGRect)arg1;
- (CGRect)candidateRectForSubject:(id)arg1;
- (CGRect)clamppedSubjectBoundsForEdgeBleed:(id)arg1;
- (BOOL)canIncludeSubject:(id)arg1 boundsPercentageInside:(double )arg2 expandedBoundsPercentageInside:(double )arg3;
- (CGRect)calculateReframedRect;
- (void)invalidateCaches;
@property(readonly, nonatomic) NSData *evaluationData;
@property(readonly, copy, nonatomic) NSArray *subjects;
@property(readonly, nonatomic) PIReframeResult *result; // @synthesize result=_result;
- (id)initWithConfiguration:(id)arg1 overscanBounds:(CGRect)arg2 viewBounds:(CGRect)arg3 subjects:(id)arg4;
- (id)initWithConfiguration:(id)arg1 expandedSubjectConfiguration:(id)arg2 overscanBounds:(CGRect)arg3 viewBounds:(CGRect)arg4 image:(id)arg5;

@end

