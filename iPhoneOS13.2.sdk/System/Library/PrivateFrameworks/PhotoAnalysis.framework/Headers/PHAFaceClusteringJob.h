//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoAnalysis/PHAVisionServiceFaceProcessingWorkerAdditionalJob.h>

@class PHAVisionServiceFaceProcessingWorkerJobKeepAlive;

@interface PHAFaceClusteringJob : PHAVisionServiceFaceProcessingWorkerAdditionalJob
{
    PHAVisionServiceFaceProcessingWorkerJobKeepAlive *_keepAlive;
}

// - (void).cxx_destruct;
- (BOOL)stopJob:(id )arg1;
- (BOOL)startJob:(id )arg1;
- (void)_handleClusteringCompletion;
- (void)_stopJobKeepAlive;
- (void)_startJobKeepAlive;
- (float)completionScore;
- (id)initWithFaceProcessingWorker:(id)arg1 jobScenario:(NSUInteger)arg2;

@end

