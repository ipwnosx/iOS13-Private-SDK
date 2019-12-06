//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AVAudioRecorder, NSError;

@protocol AVAudioRecorderDelegate <NSObject>

@optional
- (void)audioRecorderEndInterruption:(AVAudioRecorder *)arg1;
- (void)audioRecorderEndInterruption:(AVAudioRecorder *)arg1 withFlags:(NSUInteger)arg2;
- (void)audioRecorderEndInterruption:(AVAudioRecorder *)arg1 withOptions:(NSUInteger)arg2;
- (void)audioRecorderBeginInterruption:(AVAudioRecorder *)arg1;
- (void)audioRecorderEncodeErrorDidOccur:(AVAudioRecorder *)arg1 error:(NSError *)arg2;
- (void)audioRecorderDidFinishRecording:(AVAudioRecorder *)arg1 successfully:(BOOL)arg2;
@end

