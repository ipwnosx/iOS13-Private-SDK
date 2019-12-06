//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AFSpeechAudioAnalytics, AFSpeechPackage, AFXPCWrapper, NSArray, NSDictionary, NSError, NSFileHandle, NSString, SASMultilingualSpeechRecognized, SASSpeechPartialResult;

@protocol AFDictationServiceDelegate <NSObject>
- (oneway void)languageDetectorFailedWithError:(NSError *)arg1;
- (oneway void)speechDidRecognizeMultilingualSpeech:(SASMultilingualSpeechRecognized *)arg1;
- (oneway void)speechDidDetectLanguage:(NSString *)arg1 confidenceScores:(NSDictionary *)arg2 isConfident:(BOOL)arg3;
- (oneway void)speechDidRecognizePackage:(AFSpeechPackage *)arg1;
- (oneway void)speechDidReceiveSearchResults:(NSArray *)arg1 recognitionText:(NSString *)arg2 stable:(BOOL)arg3 final:(BOOL)arg4;
- (oneway void)speechDidFinishWritingAudioFile:(NSFileHandle *)arg1 error:(NSError *)arg2;
- (oneway void)speechRecognitionDidFinishWithError:(NSError *)arg1;
- (oneway void)speechDidRecognizeTranscriptionObjects:(NSArray *)arg1 usingSpeechModel:(NSString *)arg2;
- (oneway void)speechDidProcessAudioDuration:(double)arg1;
- (oneway void)speechDidRecognizeTokens:(NSArray *)arg1 usingSpeechModel:(NSString *)arg2;
- (oneway void)speechDidRecognizePartialResult:(SASSpeechPartialResult *)arg1;
- (oneway void)speechDidRecognizePhrases:(NSArray *)arg1 utterances:(NSArray *)arg2 usingSpeechModel:(NSString *)arg3 correctionContext:(NSDictionary *)arg4 audioAnalytics:(AFSpeechAudioAnalytics *)arg5;
- (oneway void)speechRecordingDidFail:(NSError *)arg1;
- (oneway void)speechRecordingDidCancel;
- (oneway void)speechRecordingDidEnd;
- (oneway void)speechRecordingDidBegin;
- (oneway void)speechRecordingWillBeginWithInputAudioPowerXPCWrapper:(AFXPCWrapper *)arg1;
@end

