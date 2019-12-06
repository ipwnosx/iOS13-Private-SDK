//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSError, NSString, VSInstrumentMetrics, VSPresynthesizedAudioRequest, VSSpeechRequest, VSSpeechSynthesizer;

@protocol VSSpeechSynthesizerDelegate <NSObject>

@optional
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 willSpeakRangeOfSpeechString:(NSRange *)arg2;
- (void)speechSynthesizerDidContinueSpeaking:(VSSpeechSynthesizer *)arg1;
- (void)speechSynthesizerDidPauseSpeaking:(VSSpeechSynthesizer *)arg1;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didFinishSpeakingRequest:(VSSpeechRequest *)arg2 successfully:(BOOL)arg3 withError:(NSError *)arg4;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didFinishSpeaking:(BOOL)arg2 withError:(NSError *)arg3;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didFinishSpeaking:(BOOL)arg2 phonemesSpoken:(NSString *)arg3 withError:(NSError *)arg4;
- (void)speechSynthesizerDidStartSpeaking:(VSSpeechSynthesizer *)arg1;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didStopPresynthesizedAudioRequestAtEnd:(BOOL)arg2 error:(NSError *)arg3;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didFinishSynthesisRequest:(VSSpeechRequest *)arg2 withError:(NSError *)arg3;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didFinishPresynthesizedAudioRequest:(VSPresynthesizedAudioRequest *)arg2 withInstrumentMetrics:(VSInstrumentMetrics *)arg3 error:(NSError *)arg4;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didStopPresynthesizedAudioRequest:(VSPresynthesizedAudioRequest *)arg2 atEnd:(BOOL)arg3 error:(NSError *)arg4;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didStartPresynthesizedAudioRequest:(VSPresynthesizedAudioRequest *)arg2;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didFinishSynthesisRequest:(VSSpeechRequest *)arg2 withInstrumentMetrics:(VSInstrumentMetrics *)arg3 error:(NSError *)arg4;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 willSpeakRangeOfSpeechString:(NSRange *)arg2 forRequest:(VSSpeechRequest *)arg3;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didContinueSpeakingRequest:(VSSpeechRequest *)arg2;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didPauseSpeakingRequest:(VSSpeechRequest *)arg2;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didFinishSpeakingRequest:(VSSpeechRequest *)arg2 withInstrumentMetrics:(VSInstrumentMetrics *)arg3;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didFinishSpeakingRequest:(VSSpeechRequest *)arg2 successfully:(BOOL)arg3 phonemesSpoken:(NSString *)arg4 withError:(NSError *)arg5;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 withRequest:(VSSpeechRequest *)arg2 didReceiveTimingInfo:(NSArray *)arg3;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didStartSpeakingRequest:(VSSpeechRequest *)arg2;
@end

