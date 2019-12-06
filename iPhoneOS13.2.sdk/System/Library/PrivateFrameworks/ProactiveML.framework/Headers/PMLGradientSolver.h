//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PMLModelRegressor, PMLModelWeights, PMLSparseMatrix;

@interface PMLGradientSolver : NSObject
{
    float _learningRate;
    float _stoppingThreshold;
    NSUInteger _minIterations;
    id /* CDUnknownBlockType */ _gradientCalculator;
    id /* CDUnknownBlockType */ _predictionCalculator;
    id /* CDUnknownBlockType */ _batchPredictionCalculator;
    BOOL _intercept;
    PMLModelWeights *_weights;
    PMLSparseMatrix *_covariates;
    PMLModelRegressor *_objective;
}

@property BOOL intercept; // @synthesize intercept=_intercept;
@property(retain, nonatomic) PMLModelRegressor *objective; // @synthesize objective=_objective;
@property(retain, nonatomic) PMLSparseMatrix *covariates; // @synthesize covariates=_covariates;
@property(retain, nonatomic) PMLModelWeights *weights; // @synthesize weights=_weights;
// - (void).cxx_destruct;
- (id)batchPredict:(id)arg1;
- (float)predict:(id)arg1;
- (float)meanSquaredError;
- (void)solveForCovariates:(id)arg1 objectives:(id)arg2;
- (void)solveWithAvgGradient:(float )arg1 maxNumberOfIterations:(NSUInteger)arg2;
- (id)computeAvgGradientWithIterations:(NSUInteger)arg1;
- (void)solve;
- (id)init;
- (id)initWithLearningRate:(float)arg1 minIterations:(NSUInteger)arg2 stoppingThreshold:(float)arg3 weights:(id)arg4 intercept:(BOOL)arg5 gradientCalculator:(CDUnknownBlockType)arg6 predictionCalculator:(CDUnknownBlockType)arg7 batchPredictionCalculator:(CDUnknownBlockType)arg8;

@end

