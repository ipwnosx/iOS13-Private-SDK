//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PFSinglePassVideoExportItemStatistics : NSObject
{
    float _frameRate;
    NSUInteger _lastOutputChunkTimestamp;
    NSMutableArray *_outputChunkMeasurements;
    NSUInteger _processedOutputTotalBytes;
    NSUInteger _processedVideoSampleBytes;
    NSUInteger _processedAdditionalSampleBytes;
    double _conversionDuration;
    double _lastProcessedInputFramePresentationTime;
    long long _processedOutputFrameCount;
    NSUInteger _targetOutputTotalBytes;
    double _targetPlaybackDuration;
}

// + (id)statisticsWithTargetPlaybackDuration:(CDStruct_1b6d18a9)arg1 frameRate:(float)arg2 targetOutputTotalBytes:(NSUInteger)arg3;
@property float frameRate; // @synthesize frameRate=_frameRate;
@property double targetPlaybackDuration; // @synthesize targetPlaybackDuration=_targetPlaybackDuration;
@property NSUInteger targetOutputTotalBytes; // @synthesize targetOutputTotalBytes=_targetOutputTotalBytes;
@property long long processedOutputFrameCount; // @synthesize processedOutputFrameCount=_processedOutputFrameCount;
@property double lastProcessedInputFramePresentationTime; // @synthesize lastProcessedInputFramePresentationTime=_lastProcessedInputFramePresentationTime;
@property double conversionDuration; // @synthesize conversionDuration=_conversionDuration;
@property NSUInteger processedAdditionalSampleBytes; // @synthesize processedAdditionalSampleBytes=_processedAdditionalSampleBytes;
@property NSUInteger processedVideoSampleBytes; // @synthesize processedVideoSampleBytes=_processedVideoSampleBytes;
@property NSUInteger processedOutputTotalBytes; // @synthesize processedOutputTotalBytes=_processedOutputTotalBytes;
@property(retain) NSMutableArray *outputChunkMeasurements; // @synthesize outputChunkMeasurements=_outputChunkMeasurements;
@property NSUInteger lastOutputChunkTimestamp; // @synthesize lastOutputChunkTimestamp=_lastOutputChunkTimestamp;
// - (void).cxx_destruct;
- (id)summaryDescription;
- (id)outputChunkMeasurementsDescription;
@property(readonly) long long effectiveEncodingBitRate;
@property(readonly) long long targetEncodingBitRate;
@property(readonly) float processingFramesPerSecond;
@property(readonly) NSUInteger averageOutputChunkBytes;
@property(readonly) double averageOutputChunkTimeInterval;
@property(readonly) NSUInteger processedOutputBytesPerSecond;
- (void)enumerateOutputChunkMeasurementsWithHandler:(CDUnknownBlockType)arg1;
- (void)addMeasurementForBytesDelivered:(NSUInteger)arg1;
- (id)init;

@end

