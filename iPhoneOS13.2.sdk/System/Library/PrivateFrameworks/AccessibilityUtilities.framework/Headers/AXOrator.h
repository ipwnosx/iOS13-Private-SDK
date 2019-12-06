//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/AVSpeechSynthesizerDelegate-Protocol.h>

@class AVSpeechSynthesizer, AVSpeechUtterance, AXDispatchTimer, AXLanguageTag, AXLanguageTaggedContent, NSArray, NSMutableArray, NSString;
@protocol AXOratorDelegate;

@interface AXOrator : NSObject <AVSpeechSynthesizerDelegate>
{
    AVSpeechUtterance *_statusUtterance;
    BOOL _contentIsSpeakable;
    AXDispatchTimer *_audioSessionTimer;
    BOOL _spellOutContent;
    BOOL _shouldSpeakNextItemOnResume;
    BOOL _preferredLanguageWasSpecified;
    BOOL _isProcessingContentForSpeech;
    id <AXOratorDelegate> _delegate;
    long long _speakingContext;
    AXLanguageTaggedContent *_selectedContent;
    double _audioSessionInactiveTimeout;
    NSString *_voiceIdentifier;
    AXLanguageTaggedContent *_speakingContent;
    NSArray *_speakingContentTokenRanges;
    NSUInteger _numberOfTokensToSkip;
    AVSpeechSynthesizer *_speechSynthesizer;
    NSMutableArray *_speechSequenceItems;
    NSString *_lastUtteranceLanguageCode;
    AVSpeechUtterance *_lastUtterance;
    AXLanguageTag *_lastUtteranceLanguageTag;
    NSString *_currentLanguageCode;
    NSMutableArray *_additionalContentToProcess;
    NSRange * _lastSpokenSubstringRange;
    NSRange * _lastUtteranceSubstringRange;
}

@property(retain, nonatomic) NSMutableArray *additionalContentToProcess; // @synthesize additionalContentToProcess=_additionalContentToProcess;
@property(nonatomic) BOOL isProcessingContentForSpeech; // @synthesize isProcessingContentForSpeech=_isProcessingContentForSpeech;
@property(nonatomic) BOOL preferredLanguageWasSpecified; // @synthesize preferredLanguageWasSpecified=_preferredLanguageWasSpecified;
@property(retain, nonatomic) NSString *currentLanguageCode; // @synthesize currentLanguageCode=_currentLanguageCode;
@property(nonatomic) BOOL shouldSpeakNextItemOnResume; // @synthesize shouldSpeakNextItemOnResume=_shouldSpeakNextItemOnResume;
@property(retain, nonatomic) AXLanguageTag *lastUtteranceLanguageTag; // @synthesize lastUtteranceLanguageTag=_lastUtteranceLanguageTag;
@property(retain, nonatomic) AVSpeechUtterance *lastUtterance; // @synthesize lastUtterance=_lastUtterance;
@property(nonatomic) NSRange * lastUtteranceSubstringRange; // @synthesize lastUtteranceSubstringRange=_lastUtteranceSubstringRange;
@property(retain, nonatomic) NSString *lastUtteranceLanguageCode; // @synthesize lastUtteranceLanguageCode=_lastUtteranceLanguageCode;
@property(retain, nonatomic) NSMutableArray *speechSequenceItems; // @synthesize speechSequenceItems=_speechSequenceItems;
@property(retain, nonatomic) AVSpeechSynthesizer *speechSynthesizer; // @synthesize speechSynthesizer=_speechSynthesizer;
@property(nonatomic) NSUInteger numberOfTokensToSkip; // @synthesize numberOfTokensToSkip=_numberOfTokensToSkip;
@property(retain, nonatomic) NSArray *speakingContentTokenRanges; // @synthesize speakingContentTokenRanges=_speakingContentTokenRanges;
@property(retain, nonatomic) AXLanguageTaggedContent *speakingContent; // @synthesize speakingContent=_speakingContent;
@property(retain, nonatomic) NSString *voiceIdentifier; // @synthesize voiceIdentifier=_voiceIdentifier;
@property(nonatomic) double audioSessionInactiveTimeout; // @synthesize audioSessionInactiveTimeout=_audioSessionInactiveTimeout;
@property(nonatomic) BOOL spellOutContent; // @synthesize spellOutContent=_spellOutContent;
@property(retain, nonatomic) AXLanguageTaggedContent *selectedContent; // @synthesize selectedContent=_selectedContent;
@property(nonatomic) long long speakingContext; // @synthesize speakingContext=_speakingContext;
@property(nonatomic) NSRange * lastSpokenSubstringRange; // @synthesize lastSpokenSubstringRange=_lastSpokenSubstringRange;
@property(nonatomic) __weak id <AXOratorDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(NSRange *)arg2 utterance:(id)arg3;
- (void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didStartSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didContinueSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didPauseSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;
- (BOOL)_successWithCode:(long long)arg1 error:(id )arg2;
- (BOOL)_canSpeakTaggedContent:(id)arg1;
- (void)_updateAudioSessionCategory;
- (void)_clearAllContentState;
- (void)_tokenizeContentIfNeeded;
- (BOOL)_skipByUnit:(BOOL)arg1 boundary:(NSUInteger)arg2;
- (void)_speakNextTokenFromCurrentTokenIndex:(long long)arg1 forward:(BOOL)arg2 boundary:(NSUInteger)arg3;
- (long long)_currentTokenIndex:(BOOL)arg1;
- (void)_respeakUtteranceIfNeeded;
- (id)_speechSequenceItemsStartingAtContentLocation:(NSUInteger)arg1;
- (BOOL)_changeSpeakingSpeed:(double)arg1 usingLanugageSpecificRate:(BOOL)arg2;
- (BOOL)_useLanguageSpecificSpeakingRate;
- (void)_speakNextItemInSequence;
- (void)_processAdditionalContentInPreparationForSpeech;
- (id)_getLangCodeForItem:(id)arg1;
- (void)_updateSequenceForSpellOutBehavior;
- (void)_startSpeakingSequence;
- (void)clearSelectedContent;
- (BOOL)canResumeWithContent:(id)arg1;
- (BOOL)contentIsSpeakable;
- (void)speakStatusWithLanguage:(id)arg1 rate:(id)arg2;
- (BOOL)rewindWithBoundary:(NSUInteger)arg1;
- (BOOL)fastForwardWithBoundary:(NSUInteger)arg1;
- (BOOL)speakSlower;
- (BOOL)speakFaster;
- (BOOL)setSpeakingRate:(double)arg1;
- (double)currentSpeechRateForAdjustment;
- (BOOL)isSpeaking;
- (BOOL)isPaused;
- (float)speechRate;
- (BOOL)resumeSpeakingAfterDelay:(double)arg1 error:(id )arg2;
- (BOOL)resumeSpeaking:(id )arg1;
- (BOOL)stopSpeaking:(id )arg1;
- (BOOL)pauseSpeaking:(id )arg1;
- (BOOL)startSpeakingWithPreferredLanguage:(id)arg1 delayBeforeStart:(double)arg2 error:(id )arg3;
- (BOOL)startSpeakingWithPreferredLanguage:(id)arg1 error:(id )arg2;
- (void)addAdditionalContentToSpeechQueue:(id)arg1;
@property(copy, nonatomic) NSString *content;
- (id)init;

@end

