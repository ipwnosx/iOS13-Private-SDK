//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKitUI/WFAudioInputViewController.h>

#import <ActionKitUI/WFAudioRecorderDelegate-Protocol.h>

@class UIButton, WFAudioRecorder;

__attribute__((visibility("hidden")))
@interface WFAudioRecorderViewController : WFAudioInputViewController <WFAudioRecorderDelegate>
{
    BOOL _startImmediately;
    BOOL _isFinishing;
    id /* CDUnknownBlockType */ _completionHandler;
    double _recordingDuration;
    WFAudioRecorder *_audioRecorder;
    UIButton *_inputButton;
}

@property(nonatomic) BOOL isFinishing; // @synthesize isFinishing=_isFinishing;
@property(nonatomic) __weak UIButton *inputButton; // @synthesize inputButton=_inputButton;
@property(retain, nonatomic) WFAudioRecorder *audioRecorder; // @synthesize audioRecorder=_audioRecorder;
@property(nonatomic) double recordingDuration; // @synthesize recordingDuration=_recordingDuration;
@property(nonatomic) BOOL startImmediately; // @synthesize startImmediately=_startImmediately;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionHandler; // @synthesize completionHandler=_completionHandler;
// - (void).cxx_destruct;
- (void)audioRecorder:(id)arg1 didFinishWithDestinationURL:(id)arg2 error:(id)arg3;
- (void)audioRecorder:(id)arg1 didProgressToTime:(double)arg2;
- (void)inputButtonTapped;
- (void)finishRecording;
- (void)startRecording;
- (void)viewWillAppear:(BOOL)arg1;
- (void)handleTap;
- (void)viewDidLoad;
- (id)initWithOutputFormat:(long long)arg1 destinationURL:(id)arg2;

@end

