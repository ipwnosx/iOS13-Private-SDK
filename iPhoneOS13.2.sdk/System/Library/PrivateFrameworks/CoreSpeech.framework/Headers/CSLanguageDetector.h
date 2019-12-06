//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSStartOfSpeechDetectorDelegate-Protocol.h>
#import <CoreSpeech/_EARLanguageDetectorDelegate-Protocol.h>

@class CSAsset, CSAudioCircularBuffer, CSStartOfSpeechDetector, NSMutableArray, NSString, _EARLanguageDetector, _EARLanguageDetectorAudioBuffer;
@protocol CSLanguageDetectorDelegate, OS_dispatch_queue;

@interface CSLanguageDetector : NSObject <_EARLanguageDetectorDelegate, CSStartOfSpeechDetectorDelegate>
{
    BOOL _startOfSpeechDetected;
    BOOL _needsToUpdateModel;
    int _notifyToken;
    _EARLanguageDetector *_languageDetector;
    _EARLanguageDetectorAudioBuffer *_audioBuffer;
    CSStartOfSpeechDetector *_startOfSpeechDetector;
    CSAudioCircularBuffer *_circBuffer;
    long long _currentState;
    NSMutableArray *_latestDetectedLanguages;
    NSUInteger _numLatestLanguages;
    NSString *_languageDetectorAssetHash;
    CSAsset *_currentAsset;
    NSString *_interactionID;
    NSObject<OS_dispatch_queue> *_queue;
    id <CSLanguageDetectorDelegate> _delegate;
}

@property(nonatomic) __weak id <CSLanguageDetectorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSString *interactionID; // @synthesize interactionID=_interactionID;
@property(retain, nonatomic) CSAsset *currentAsset; // @synthesize currentAsset=_currentAsset;
@property(copy, nonatomic) NSString *languageDetectorAssetHash; // @synthesize languageDetectorAssetHash=_languageDetectorAssetHash;
@property(nonatomic) NSUInteger numLatestLanguages; // @synthesize numLatestLanguages=_numLatestLanguages;
@property(retain, nonatomic) NSMutableArray *latestDetectedLanguages; // @synthesize latestDetectedLanguages=_latestDetectedLanguages;
@property(nonatomic) int notifyToken; // @synthesize notifyToken=_notifyToken;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(nonatomic) BOOL needsToUpdateModel; // @synthesize needsToUpdateModel=_needsToUpdateModel;
@property(nonatomic) BOOL startOfSpeechDetected; // @synthesize startOfSpeechDetected=_startOfSpeechDetected;
@property(retain, nonatomic) CSAudioCircularBuffer *circBuffer; // @synthesize circBuffer=_circBuffer;
@property(retain, nonatomic) CSStartOfSpeechDetector *startOfSpeechDetector; // @synthesize startOfSpeechDetector=_startOfSpeechDetector;
@property(retain, nonatomic) _EARLanguageDetectorAudioBuffer *audioBuffer; // @synthesize audioBuffer=_audioBuffer;
@property(retain, nonatomic) _EARLanguageDetector *languageDetector; // @synthesize languageDetector=_languageDetector;
// - (void).cxx_destruct;
- (void)startOfSpeechDetector:(id)arg1 foundStartSampleAt:(NSUInteger)arg2;
- (void)languageDetectorDidCompleteProcessing:(id)arg1 loggingInfo:(id)arg2;
- (void)languageDetector:(id)arg1 result:(id)arg2;
- (void)_logLanguageDetectorMetricsForLoggingInfo:(id)arg1;
- (void)_logSoSResult:(id)arg1 toPath:(id)arg2;
- (id)_getDefaultValues;
- (id)_readJsonDictionaryAt:(id)arg1;
- (void)_setNumLatestLangFromConfigFile:(id)arg1;
- (id)_constructLangPriors;
- (void)setMostRecentRecognitionLanguage:(id)arg1;
- (void)_recordRecognitionLanguage:(id)arg1;
- (void)recordRecognitionLanguage:(id)arg1;
- (void)_initializeStartOfSpeechDetector:(id)arg1;
- (void)setInteractionIDforCurrentRequest:(id)arg1;
- (void)cancelCurrentRequest;
- (void)_resetStartOfSpeechDetector;
- (void)endAudio;
- (void)addSamples:(id)arg1 numSamples:(NSUInteger)arg2;
- (void)resetForNewRequest:(id)arg1;
- (void)_setupLanguageDetectorWithOption:(id)arg1;
- (void)_startMonitorLanguageDetectorAssetDownload;
- (void)dealloc;
- (id)init;

@end

