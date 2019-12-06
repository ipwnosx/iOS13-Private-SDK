//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface CSSpIdVTTextDependentSpeakerRecognizer : NSObject
{
    BOOL _tdPsrCanProcessRequest;
    float _lastRequestSatScore;
    NSString *_tdSATModelFilePath;
    long long _getSATVectorCount;
    NSData *_speakerVector;
}

+ (BOOL)psrTdAssetExistsAtResourcePath:(id)arg1;
@property(retain, nonatomic) NSData *speakerVector; // @synthesize speakerVector=_speakerVector;
@property(readonly, nonatomic) float lastRequestSatScore; // @synthesize lastRequestSatScore=_lastRequestSatScore;
@property(readonly, nonatomic) long long getSATVectorCount; // @synthesize getSATVectorCount=_getSATVectorCount;
@property(readonly, nonatomic) NSString *tdSATModelFilePath; // @synthesize tdSATModelFilePath=_tdSATModelFilePath;
@property(readonly, nonatomic) BOOL tdPsrCanProcessRequest; // @synthesize tdPsrCanProcessRequest=_tdPsrCanProcessRequest;
// - (void).cxx_destruct;
- (float)scoreSpeakerVector:(id)arg1 withDimensions:(NSUInteger)arg2;
- (void)logWithAudioFilepath:(id)arg1;
- (void)deleteVectorAtIndex:(int)arg1;
- (void)deleteExistingSATModel;
- (void)updateSAT;
- (float)satScore;
- (void)endAudio;
- (void)processAudio:(id)arg1 numSamples:(NSUInteger)arg2;
- (void)resetForNewRequest;
- (double)getRejectLoggingThreshold;
- (double)getCombinationWeight;
- (double)getThresholdSAT;
- (id)initWithResourcePath:(id)arg1 satDirectory:(id)arg2 assetHash:(id)arg3 shouldCreateModelDir:(BOOL)arg4 delegate:(id)arg5;

@end

