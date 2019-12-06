//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXMediaUtilities/AXMOutputComponent.h>

#import <AXMediaUtilities/AVSpeechSynthesizerDelegate-Protocol.h>

@class AVSpeechSynthesizer;

@interface AXMSpeechComponent : AXMOutputComponent <AVSpeechSynthesizerDelegate>
{
    AVSpeechSynthesizer *_synthesizer;
    id /* CDUnknownBlockType */ _currentRequestCompletionBlock;
}

+ (BOOL)isSupported;
@property(copy, nonatomic) id /* CDUnknownBlockType */ currentRequestCompletionBlock; // @synthesize currentRequestCompletionBlock=_currentRequestCompletionBlock;
@property(retain, nonatomic) AVSpeechSynthesizer *synthesizer; // @synthesize synthesizer=_synthesizer;
// - (void).cxx_destruct;
- (void)speechSynthesizer:(id)arg1 didContinueSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didPauseSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didStartSpeechUtterance:(id)arg2;
- (void)stopSpeakingAtNextWord;
- (void)stopSpeakingImmediately;
- (void)handleRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)canHandleRequest:(id)arg1;
- (id)init;

@end

