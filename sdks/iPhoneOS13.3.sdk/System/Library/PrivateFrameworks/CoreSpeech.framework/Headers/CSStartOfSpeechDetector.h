//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/EARCaesuraSilencePosteriorGeneratorDelegate-Protocol.h>

@class EARCaesuraSilencePosteriorGenerator, NSString;
@protocol CSStartOfSpeechDetectorDelegate, OS_dispatch_queue;

@interface CSStartOfSpeechDetector : NSObject <EARCaesuraSilencePosteriorGeneratorDelegate>
{
    BOOL _startDetected;
    float _prevAudioProcessedMs;
    id <CSStartOfSpeechDetectorDelegate> _delegate;
    EARCaesuraSilencePosteriorGenerator *_caesuraSPG;
    NSString *_configFile;
    NSUInteger _minSpeechFrames;
    NSUInteger _curSpeechFrames;
    NSUInteger _numLeadingFrames;
    NSUInteger _samplingRate;
    NSObject<OS_dispatch_queue> *_spgQueue;
    NSObject<OS_dispatch_queue> *_sosQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sosQueue; // @synthesize sosQueue=_sosQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *spgQueue; // @synthesize spgQueue=_spgQueue;
@property(nonatomic) NSUInteger samplingRate; // @synthesize samplingRate=_samplingRate;
@property(nonatomic) float prevAudioProcessedMs; // @synthesize prevAudioProcessedMs=_prevAudioProcessedMs;
@property(nonatomic) NSUInteger numLeadingFrames; // @synthesize numLeadingFrames=_numLeadingFrames;
@property(nonatomic) NSUInteger curSpeechFrames; // @synthesize curSpeechFrames=_curSpeechFrames;
@property(nonatomic) NSUInteger minSpeechFrames; // @synthesize minSpeechFrames=_minSpeechFrames;
@property(nonatomic) BOOL startDetected; // @synthesize startDetected=_startDetected;
@property(retain, nonatomic) NSString *configFile; // @synthesize configFile=_configFile;
@property(retain, nonatomic) EARCaesuraSilencePosteriorGenerator *caesuraSPG; // @synthesize caesuraSPG=_caesuraSPG;
@property(nonatomic) __weak id <CSStartOfSpeechDetectorDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)clientSilenceFeaturesAvailable:(id)arg1;
- (void)endAudio;
- (void)addAudio:(id)arg1 numSamples:(NSUInteger)arg2;
- (void)resetForNewRequest;
- (id)initWithConfig:(id)arg1 samplingRate:(NSUInteger)arg2 minSpeechFrames:(NSUInteger)arg3 numLeadingFrames:(NSUInteger)arg4 delegate:(id)arg5;

@end
