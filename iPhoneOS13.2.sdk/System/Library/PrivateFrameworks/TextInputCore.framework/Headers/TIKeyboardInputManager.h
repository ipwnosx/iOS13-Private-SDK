//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/TIKeyboardInputManagerBase.h>

#import <TextInputCore/TILanguageSelectionControllerDelegate-Protocol.h>
#import <TextInputCore/TIRevisionHistoryDelegate-Protocol.h>

@class NSArray, NSCharacterSet, NSMutableDictionary, NSMutableSet, NSMutableString, TIAutocorrectionList, TIAutoshiftRegularExpressionLoader, TICharacterSetDescription, TIEmojiCandidateGenerator, TIInputContextHistory, TIKeyboardCandidate, TIKeyboardFeatureSpecialization, TIKeyboardInputManagerConfig, TIKeyboardInputManagerState, TIKeyboardLayout, TIKeyboardLayoutState, TIKeyboardState, TILRUDictionary, TILanguageSelectionController, TIRevisionHistory, TISKMetricCollector, TISmartPunctuationOptions, TISmartSelector, TITextCheckerExemptions, TITypingSessionMonitor, TIUserModel;
@protocol TICandidateHandler;

@interface TIKeyboardInputManager : TIKeyboardInputManagerBase <TIRevisionHistoryDelegate, TILanguageSelectionControllerDelegate>
{
//    struct TIInputManager m_impl;
    NSMutableString *m_composedText;
    NSUInteger m_initialSelectedIndex;
    TIKeyboardLayout *_keyLayout;
    TIKeyboardLayoutState *_layoutState;
    TIKeyboardInputManagerState *_currentState;
    TIKeyboardFeatureSpecialization *_keyboardFeatureSpecialization;
    NSCharacterSet *_allowPredictionCharacterSet;
    NSMutableDictionary *_cachedLayoutTags;
//    struct shared_ptr<KB::TypologyLogger> m_typology_recorder;
    shared_ptr_e9f752ce m_lightweight_language_model;
    TILanguageSelectionController *_languageSelectionController;
    TIEmojiCandidateGenerator *_emojiCandidateGenerator;
    TIInputContextHistory *_synchronizedInputContextHistory;
    TICharacterSetDescription *_wordCharacters;
    TICharacterSetDescription *_closingQuotes;
    TICharacterSetDescription *_openingQuotes;
    TISmartPunctuationOptions *_smartOptions;
    int _lastHitTestKeycode;
    BOOL _didInitialSync;
    BOOL _wordLearningEnabled;
    BOOL _isEditingWordPrefix;
    TIKeyboardState *_keyboardState;
    TIKeyboardInputManagerConfig *_config;
    id /* CDUnknownBlockType */ _candidateGenerationCompletionHandler;
    TIRevisionHistory *_revisionHistory;
    TILRUDictionary *_autocorrectionHistory;
    TILRUDictionary *_recentAutocorrections;
    TILRUDictionary *_recentPredictiveInputSelections;
    TILRUDictionary *_rejectedAutocorrections;
    TILRUDictionary *_autocorrectionForCurrentStem;
    TILRUDictionary *_rejectedDisplayedAutocorrectionsForCurrentStem;
    TILRUDictionary *_autocorrectionListsSuggestedForCurrentInput;
    TILRUDictionary *_autocorrectionListsForWordsInDocument;
    TIAutoshiftRegularExpressionLoader *_autoshiftRegexLoader;
    TITextCheckerExemptions *_textCheckerExemptions;
    long long _userInterfaceIdiom;
    NSUInteger _linguisticResourceStatus;
    long long _deleteKeyCount;
    TIKeyboardCandidate *_hitTestCorrectedInputMatchingCandidate;
    TIKeyboardCandidate *_lastAcceptedText;
    NSMutableSet *_rejectedConversionsForCurrentContinuousPath;
    TITypingSessionMonitor *_typingSessionMonitor;
    TIUserModel *_userModel;
    TISmartSelector *_smartSelector;
    TISKMetricCollector *_skMetricCollector;
    id /* CDUnknownBlockType */ _proactiveSuggestionsGenerationBlock;
    TIAutocorrectionList *_lastContinuousPathAutocorrection;
    id <TICandidateHandler> _candidateHandlerForOpenRequest;
    NSUInteger _lastNumCandidatesRequest;
    NSRange * _candidateRange;
}

+ (id)offlineLearningHandleForInputMode:(id)arg1;
+ (int)shiftContextForShiftState:(int)arg1 autocapitalizationType:(NSUInteger)arg2;
+ (void)clearRecentsFileForIdentifier:(id)arg1;
+ (id)recentsFilePathForIdentifier:(id)arg1;
+ (void)removeAllDynamicDictionaries;
+ (void)removeDynamicDictionaryForInputMode:(id)arg1;
+ (id)dynamicDictionaryFilePathForInputMode:(id)arg1;
+ (id)userDictionaryWordKeyPairsFilePath;
+ (id)keyboardUserDirectory;
+ (void)resetResponseKit;
@property(nonatomic) NSUInteger lastNumCandidatesRequest; // @synthesize lastNumCandidatesRequest=_lastNumCandidatesRequest;
@property(retain, nonatomic) id <TICandidateHandler> candidateHandlerForOpenRequest; // @synthesize candidateHandlerForOpenRequest=_candidateHandlerForOpenRequest;
@property(retain, nonatomic) TIAutocorrectionList *lastContinuousPathAutocorrection; // @synthesize lastContinuousPathAutocorrection=_lastContinuousPathAutocorrection;
@property(copy, nonatomic) id /* CDUnknownBlockType */ proactiveSuggestionsGenerationBlock; // @synthesize proactiveSuggestionsGenerationBlock=_proactiveSuggestionsGenerationBlock;
@property(retain, nonatomic) TISKMetricCollector *skMetricCollector; // @synthesize skMetricCollector=_skMetricCollector;
@property(retain, nonatomic) TISmartSelector *smartSelector; // @synthesize smartSelector=_smartSelector;
@property(retain, nonatomic) TIUserModel *userModel; // @synthesize userModel=_userModel;
@property(retain, nonatomic) TITypingSessionMonitor *typingSessionMonitor; // @synthesize typingSessionMonitor=_typingSessionMonitor;
@property(retain, nonatomic) NSMutableSet *rejectedConversionsForCurrentContinuousPath; // @synthesize rejectedConversionsForCurrentContinuousPath=_rejectedConversionsForCurrentContinuousPath;
@property(copy, nonatomic) TIKeyboardCandidate *lastAcceptedText; // @synthesize lastAcceptedText=_lastAcceptedText;
@property(retain, nonatomic) TIKeyboardCandidate *hitTestCorrectedInputMatchingCandidate; // @synthesize hitTestCorrectedInputMatchingCandidate=_hitTestCorrectedInputMatchingCandidate;
@property(nonatomic) long long deleteKeyCount; // @synthesize deleteKeyCount=_deleteKeyCount;
@property(readonly, nonatomic) NSUInteger linguisticResourceStatus; // @synthesize linguisticResourceStatus=_linguisticResourceStatus;
@property(nonatomic) long long userInterfaceIdiom; // @synthesize userInterfaceIdiom=_userInterfaceIdiom;
@property(readonly, nonatomic) TITextCheckerExemptions *textCheckerExemptions; // @synthesize textCheckerExemptions=_textCheckerExemptions;
@property(retain, nonatomic) TIAutoshiftRegularExpressionLoader *autoshiftRegexLoader; // @synthesize autoshiftRegexLoader=_autoshiftRegexLoader;
@property(nonatomic) BOOL isEditingWordPrefix; // @synthesize isEditingWordPrefix=_isEditingWordPrefix;
@property(readonly, nonatomic) TILRUDictionary *autocorrectionListsForWordsInDocument; // @synthesize autocorrectionListsForWordsInDocument=_autocorrectionListsForWordsInDocument;
@property(readonly, nonatomic) TILRUDictionary *autocorrectionListsSuggestedForCurrentInput; // @synthesize autocorrectionListsSuggestedForCurrentInput=_autocorrectionListsSuggestedForCurrentInput;
@property(retain, nonatomic) TILRUDictionary *rejectedDisplayedAutocorrectionsForCurrentStem; // @synthesize rejectedDisplayedAutocorrectionsForCurrentStem=_rejectedDisplayedAutocorrectionsForCurrentStem;
@property(retain, nonatomic) TILRUDictionary *autocorrectionForCurrentStem; // @synthesize autocorrectionForCurrentStem=_autocorrectionForCurrentStem;
@property(readonly, nonatomic) TILRUDictionary *rejectedAutocorrections; // @synthesize rejectedAutocorrections=_rejectedAutocorrections;
@property(readonly, nonatomic) TILRUDictionary *recentPredictiveInputSelections; // @synthesize recentPredictiveInputSelections=_recentPredictiveInputSelections;
@property(readonly, nonatomic) TILRUDictionary *recentAutocorrections; // @synthesize recentAutocorrections=_recentAutocorrections;
@property(readonly, nonatomic) TILRUDictionary *autocorrectionHistory; // @synthesize autocorrectionHistory=_autocorrectionHistory;
@property(readonly, nonatomic) TIRevisionHistory *revisionHistory; // @synthesize revisionHistory=_revisionHistory;
@property(copy, nonatomic) id /* CDUnknownBlockType */ candidateGenerationCompletionHandler; // @synthesize candidateGenerationCompletionHandler=_candidateGenerationCompletionHandler;
@property(nonatomic) NSRange * candidateRange; // @synthesize candidateRange=_candidateRange;
@property(nonatomic, getter=isWordLearningEnabled) BOOL wordLearningEnabled; // @synthesize wordLearningEnabled=_wordLearningEnabled;
@property(readonly, nonatomic) TIKeyboardInputManagerConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) TIKeyboardState *keyboardState; // @synthesize keyboardState=_keyboardState;
- (id).cxx_construct;
// - (void).cxx_destruct;
@property(readonly, nonatomic) TIEmojiCandidateGenerator *emojiCandidateGenerator;
- (void)didUpdateInputModeProbabilities:(id)arg1;
- (void)didUpdateInputModes:(id)arg1;
- (id)primaryInputMode;
@property(readonly, nonatomic) TILanguageSelectionController *languageSelectionController;
- (id)resourceInputModes;
- (void)installTypologyTraceLogger;
- (BOOL)acceptsRange:(NSRange *)arg1 inString:(id)arg2;
- (BOOL)acceptsCharacter:(unsigned int)arg1;
- (id)candidateResultSet;
- (BOOL)doesSelectedTextGenerateEmojiCandidates;
- (id)typedStringForEmptyAutocorrection;
- (BOOL)shouldGeneratePredictionsForCurrentContext;
@property(readonly, nonatomic) NSCharacterSet *allowPredictionCharacterSet;
- (void)reconcileConversions:(id)arg1;
- (id)extendedAutocorrection:(id)arg1 spanningInputsForCandidates:(id)arg2 emojis:(id)arg3;
- (id)completionCandidates:(NSUInteger)arg1;
- (int)shiftContext;
- (id)autocorrectionListForEmptyInputWithDesiredCandidateCount:(NSUInteger)arg1;
- (id)indexesOfDuplicatesInCandidates:(id)arg1;
- (id)continuousPathCandidates:(NSUInteger)arg1;
- (id)predictionCandidates:(NSUInteger)arg1 predictionType:(int)arg2;
- (BOOL)shouldInsertSpaceBeforePredictions;
- (BOOL)stringEndsWithClosingQuote:(id)arg1;
- (NSRange *)rangeOfUnclosedQuoteMatchingQuote:(id)arg1 inString:(id)arg2 range:(NSRange *)arg3;
- (BOOL)shouldAutocapitalizePredictionAfterSpace;
- (BOOL)shouldGenerateSuggestionsForSelectedText;
//  (void)reconcileCandidates:(struct CandidateCollection )arg1 forTypedString:(struct String )arg2 withPhraseCandidate:(struct Candidate )arg3 replacing:(const struct String )arg4;
- (id)autocorrectionListForSelectedText;
- (void)generateCannedResponseCandidatesAsyncForString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)cannedResponseCandidatesForString:(id)arg1;
- (void)updateResponseModelForKeyboardState:(id)arg1;
//  (BOOL)shouldAllowContextTokenID:(struct TITokenID)arg1;
- (BOOL)shouldDropInputStem;
- (BOOL)suggestionBlacklistMatchesStrings:(id)arg1;
- (BOOL)usesRetrocorrection;
- (id)shortcutConversionForInput:(id)arg1 andExistingString:(id)arg2 existingStringStartsInMiddleOfWord:(BOOL)arg3;
- (id)shortcutConversionForString:(id)arg1 stringStartsInMiddleOfWord:(BOOL)arg2;
- (NSRange *)shortcutSearchRangeForString:(id)arg1;
- (BOOL)shouldSkipShortcutConversionForDocumentState:(id)arg1;
- (void)enumerateWordSuffixesOfString:(id)arg1 inRange:(NSRange *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (BOOL)supportsShortcutConversion;
//  (id)autocorrectionCandidateForInput:(id)arg1 withCandidate:(const struct Candidate )arg2 insertingSpace:(BOOL)arg3 sharedPrefixLength:(NSUInteger)arg4;
//  (id)autocorrectionCandidateForInput:(id)arg1 withCandidate:(const struct Candidate )arg2;
- (BOOL)isEditingExistingWord;
//  (id)phraseCandidateCompletedByWord:(const struct String )arg1 allowNoSuggest:(BOOL)arg2 forAutocorrection:(BOOL)arg3 shiftContext:(int)arg4;
//  (NSUInteger)prefixLengthOfInput:(id)arg1 sharedWithCandidates:(const struct CandidateCollection )arg2;
//  (NSUInteger)prefixLengthOfInput:(id)arg1 sharedWithCandidate:(const struct Candidate )arg2;
- (void)checkAutocorrectionDictionaries;
- (void)setAutoshiftFromInputContext;
- (BOOL)canStartSentenceAfterString:(id)arg1;
- (BOOL)_canStartSentenceAfterString:(id)arg1 maxRecursionDepth:(NSUInteger)arg2;
- (BOOL)spaceAndNextInputWouldStartSentence;
- (BOOL)nextInputWouldStartSentenceAfterInput:(id)arg1;
- (id)sentenceTrailingCharacters;
- (id)sentenceDelimitingCharacters;
- (id)sentencePrefixingCharacters;
- (id)wordCharacters;
//  (const struct USet )precomposedCharacterSet;
- (id)nonstopPunctuationCharacters;
- (void)updateForRevisitedString:(id)arg1;
- (id)autocorrectionRecordForWord:(id)arg1;
- (void)recordRejectedAutocorrectionForAcceptedText:(id)arg1 fromPredictiveInputBar:(BOOL)arg2;
- (void)recordAcceptedAutocorrection:(id)arg1 fromPredictiveInputBar:(BOOL)arg2;
- (id)revisionListFromAutocorrectionList:(id)arg1 afterAcceptingCandidate:(id)arg2;
- (id)originatingAutocorrectionListForCandidate:(id)arg1;
- (BOOL)isContinuousPathCandidate:(id)arg1 replacementForOriginalConversion:(id)arg2;
- (void)recordSuggestedAutocorrectionList:(id)arg1;
- (void)candidateRejected:(id)arg1;
//  (BOOL)shouldExpectSentenceBoundaryAfterContext:(const struct TITokenID )arg1 contextLength:(NSUInteger)arg2;
//  (struct TITokenID)tokenIDForWordSeparator:(unsigned short)arg1;
//  (struct TITokenID)addWord:(id)arg1 context:(const struct TITokenID )arg2 contextLength:(NSUInteger)arg3 surfaceFormPtr:(id )arg4;
//  (struct TITokenID)findTokenIDForWord:(id)arg1 context:(const struct TITokenID )arg2 contextLength:(NSUInteger)arg3 tokenLookupMode:(unsigned int)arg4;
//  (struct TITokenID)findTokenIDForWord:(id)arg1 context:(const struct TITokenID )arg2 contextLength:(NSUInteger)arg3 tokenLookupMode:(unsigned int)arg4 surfaceFormPtr:(id )arg5 hasCaseInsensitiveStaticVariant:(BOOL )arg6;
- (void)learnRecentMessageUserIsRespondingTo;
- (void)synchronizeConversationHistoryWithInputContextHistory:(id)arg1;
- (void)resetConversationHistory;
- (void)addItemToConversationHistoryWithText:(id)arg1 timestamp:(id)arg2 senderID:(id)arg3;
//  (void)registerNegativeEvidence:(id)arg1 tokenID:(struct TITokenID)arg2 context:(const struct TITokenID )arg3 contextLength:(NSUInteger)arg4 intendedTokenID:(struct TITokenID )arg5 hint:(int)arg6;
//  (void)decrementLanguageModelCount:(id)arg1 tokenID:(struct TITokenID)arg2 context:(const struct TITokenID )arg3 contextLength:(NSUInteger)arg4;
//  (void)incrementLanguageModelCount:(id)arg1 tokenID:(struct TITokenID)arg2 context:(const struct TITokenID )arg3 contextLength:(NSUInteger)arg4 saveToDifferentialPrivacy:(int)arg5;
- (BOOL)shouldLearnWord:(id)arg1;
- (BOOL)shouldSuppressLanguageSelectionEvidence;
- (BOOL)shouldSuppressLearning;
- (BOOL)shouldSuppressTokenIDLookups;
- (BOOL)shouldAllowCorrectionOfAcceptedCandidate:(id)arg1;
- (void)displayedCandidateRejected;
- (void)setOriginalInput:(id)arg1;
- (id)currentWordStem;
- (id)inputStem;
- (id)inputString;
- (unsigned int)inputCount;
- (unsigned int)inputIndex;
- (void)setInputIndex:(unsigned int)arg1;
- (void)updateInputContext;
- (id)internalInputContext;
- (id)inputContext;
- (void)acceptInput;
- (void)clearIgnoredSuggestionForCurrentInput;
- (void)clearInput;
- (id)deleteFromInput:(NSUInteger )arg1;
- (void)setInput:(id)arg1;
- (void)didDropInputStem;
- (void)willDropInputStem;
- (void)dropInput;
- (void)dropInputPrefix:(unsigned int)arg1;
- (void)trimInputAfterLathamConversion;
- (id)trimmedInputStemAfterLathamConversion;
- (void)trimInput;
- (BOOL)canRetrocorrectInputAtIndex:(unsigned int)arg1;
- (BOOL)canTrimInputAtIndex:(unsigned int)arg1;
- (NSUInteger)internalIndexOfInputStemSuffix:(id)arg1;
- (NSUInteger)countOfWordsIninputStem:(id)arg1;
- (id)trimmedInputStem;
- (NSUInteger)maxPriorWordTokensAfterTrimming;
//  (struct LanguageModelContext)sentenceContextForInputStem:(id)arg1;
- (BOOL)canComputeSentenceContextForInputStem:(id)arg1;
- (void)setInputStringFromDocumentState:(id)arg1 isDeleteEvent:(BOOL)arg2;
- (NSRange *)inputStringRangeFromRevisionHistory;
- (NSRange *)acceptableRangeFromRange:(NSRange *)arg1 inText:(id)arg2 withSelectionLocation:(NSUInteger)arg3;
- (NSRange *)legacyInputRangeForTokenRange:(NSRange *)arg1;
- (unsigned int)simulateAutoshiftIfNecessaryForFlags:(unsigned int)arg1;
- (BOOL)hasLegacyInputString;
- (BOOL)hasLegacyInputStem;
- (id)addInput:(id)arg1 flags:(unsigned int)arg2 point:(CGPoint)arg3 firstDelete:(NSUInteger )arg4;
- (void)mobileAssetsChanged:(id)arg1;
- (void)setLinguisticResourceStatus:(NSUInteger)arg1 reason:(id)arg2;
- (shared_ptr_e9f752ce)loadedLightweightLanguageModel;
- (void)loadFavoniusTypingModel;
- (BOOL)updateLanguageModelForKeyboardState;
- (id)dynamicResourcePath;
- (id)pathToDynamicDictionary;
@property(readonly, nonatomic) NSArray *languageModelAssets;
- (id)languageModelAssetsForInputMode:(id)arg1;
- (id)dynamicDictionaryPathForInputMode:(id)arg1;
- (id)pathToPhraseDictionary;
- (id)phraseDictionaryPathForInputMode:(id)arg1;
- (id)pathToDeltaStaticDictionary;
- (id)deltaDictionaryPathForInputMode:(id)arg1;
- (id)pathToStaticDictionary;
- (id)staticDictionaryPathForInputMode:(id)arg1;
- (id)dictionaryPathForContentType:(id)arg1 inputMode:(id)arg2 filePrefix:(id)arg3;
- (void)loadDictionaries;
// - (CDStruct_69b8fb94)lexiconInformation;
- (id)dictionaryInputMode;
//  (struct TIInputManager )initImplementation;
- (id)externalStringForDictionaryString:(id)arg1;
- (id)dictionaryStringForExternalString:(id)arg1;
- (BOOL)dictionaryUsesExternalEncoding;
- (unsigned int)externalIndexToInternal:(unsigned int)arg1;
- (unsigned int)internalIndexToExternal:(unsigned int)arg1;
- (id)internalStringToExternal:(id)arg1;
- (id)externalStringToInternal:(id)arg1;
- (void)updateComposedText;
- (BOOL)deletesComposedTextByComposedCharacterSequence;
- (BOOL)acceptInputString:(id)arg1;
- (BOOL)stringEndsWord:(id)arg1;
- (id)remainingInput;
- (id)didAcceptCandidate:(id)arg1;
- (void)clearInputContext;
- (BOOL)removeSuffixOfInputContext:(id)arg1;
- (void)appendToInputContext:(id)arg1;
- (void)inputLocationChanged;
- (id)deletedSuffixOfInputContext:(id)arg1 whenDeletingFromInputString:(id)arg2 withInputIndex:(NSUInteger)arg3 deletionCount:(NSUInteger)arg4;
- (id)suffixOfDesiredString:(id)arg1 toAppendToInputString:(id)arg2 withInputIndex:(NSUInteger)arg3 afterDeletionCount:(NSUInteger )arg4;
- (BOOL)shouldInsertSpaceBeforeInput:(id)arg1;
- (void)textAccepted:(id)arg1 fromPredictiveInputBar:(BOOL)arg2 withInput:(id)arg3;
- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 granularity:(int)arg2;
- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1;
- (NSRange *)smartSelectionRangeForTextInDocument:(id)arg1 inRange:(NSRange *)arg2 language:(id)arg3 tokenizedRanges:(id)arg4 options:(NSUInteger)arg5;
- (void)skipHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2;
- (long long)performHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2;
@property(retain, nonatomic) TIKeyboardLayout *keyLayout;
- (id)generateReplacementsForString:(id)arg1 keyLayout:(id)arg2;
- (id)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2;
- (void)candidatesOfferedFeedback:(id)arg1 keyboardState:(id)arg2;
- (void)generateCandidatesWithKeyboardState:(id)arg1 candidateRange:(NSRange *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)generateAutocorrectionsWithKeyboardState:(id)arg1 candidateRange:(NSRange *)arg2 candidateHandler:(id)arg3;
- (id)generateOneTimeCodeCandidatesWithKeyboardState:(id)arg1;
- (id)generateAutofillFormWithKeyboardState:(id)arg1;
- (void)trackProactiveMetrics:(id)arg1 keyboardState:(id)arg2;
- (void)deleteFromInputWithContext:(id)arg1;
- (void)continuousPathCandidateRejected:(id)arg1;
- (void)addInput:(id)arg1 withContext:(id)arg2;
- (id)handleKeyboardInput:(id)arg1;
- (id)keyboardConfiguration;
- (void)logDiscoverabilityEvent:(int)arg1 userInfo:(id)arg2;
- (void)syncToKeyboardState:(id)arg1;
- (BOOL)documentState:(id)arg1 matchesDocumentState:(id)arg2;
- (void)resume;
- (void)releaseMRLBuffers;
- (void)runMaintenanceTask;
- (void)suspend;
- (id)currentInputModeIdentifier;
- (void)acceptCurrentCandidateIfSelectedWithContext:(id)arg1;
- (void)acceptCurrentCandidateWithContext:(id)arg1;
- (id)candidateResultSetFromCandidates:(id)arg1 proactiveTriggers:(id)arg2;
- (id)candidateResultSetFromCandidates:(id)arg1;
- (id)sortMethodsShowExtensionCandidates;
- (id)sortMethodIndexes;
- (id)sortMethodsGroupsForCandidates:(id)arg1;
- (id)sortMethodTitles;
- (BOOL)shouldSkipCandidateSelection;
- (id)markedText;
- (void)setMarkedText;
- (void)setPhraseBoundaryIfNecessary;
- (BOOL)shouldDelayUpdateComposedText;
- (BOOL)shouldClearInputOnMarkedTextOutOfSync;
- (BOOL)isProgressivelyPathing;
- (id)contextBeforeWithDesiredLength:(NSUInteger)arg1;
- (id)inputStringFromDocumentState:(id)arg1;
- (id)inputsToReject;
- (BOOL)shouldAddModifierSymbolsToWordCharacters;
- (id)keyboardBehaviors;
- (id)rawInputString;
- (BOOL)shouldCommitInputString;
- (BOOL)keyboardConfigurationAssertDefaultKeyPlane;
- (id)keyboardConfigurationAccentKeyString;
- (id)keyboardConfigurationLayoutTag;
- (id)layoutTagsForLayout:(id)arg1;
- (void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(BOOL)arg3;
- (BOOL)updateAdaptationContextToKeyboardState:(id)arg1 from:(id)arg2;
- (void)willChangeToKeyboardState:(id)arg1 afterContextChange:(BOOL)arg2;
- (void)syncInputStringToKeyboardState:(id)arg1 afterContextChange:(BOOL)arg2;
- (void)syncMarkedTextForKeyboardState:(id)arg1 afterContextChange:(BOOL)arg2;
- (void)syncToLayoutState:(id)arg1;
- (void)incrementUsageTrackingKeysForDeleteFromInput;
- (void)incrementUsageTrackingKeyForAppWithIsSentence:(BOOL)arg1;
- (void)incrementUsageTrackingKey:(id)arg1;
- (void)incrementUsageTrackingKeyForAutocorrectionStatistic:(id)arg1 autocorrectionTypes:(unsigned int)arg2;
- (id)usageTrackingKeyForStatistic:(id)arg1;
- (BOOL)closeCandidateGenerationContextWithResults:(id)arg1;
- (void)openCandidateGenerationContextWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)shouldUpdateLanguageModel;
- (BOOL)shouldUpdateDictionary;
- (void)updateDictionaryAndLanguageModel;
- (BOOL)isLinguisticResourceUpdateScheduled;
- (void)scheduleLinguisticResourceUpdateWithReason:(id)arg1;
- (void)scheduleLinguisticResourceUpdate;
- (void)refreshInputManagerState;
@property(readonly, nonatomic) TISmartPunctuationOptions *smartOptions;
@property(readonly, nonatomic) TIKeyboardInputManagerState *currentState;
- (id)newInputManagerState;
@property(readonly, nonatomic) TIKeyboardFeatureSpecialization *keyboardFeatureSpecialization;
- (void)dealloc;
- (id)initWithConfig:(id)arg1 keyboardState:(id)arg2;
- (id)initWithInputMode:(id)arg1 keyboardState:(id)arg2;
- (BOOL)usesPunctuationKeysForRowNavigation;
- (BOOL)supportsNumberKeySelection;
- (id)indexTitlesForGroupTitles:(id)arg1 sortingMethod:(id)arg2;
- (void)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2;
- (BOOL)alwaysShowExtensionCandidatesForSortingMethod:(id)arg1;
- (id)titleForSortingMethod:(id)arg1;
- (id)sortingMethods;
- (id)openingQuotes;
- (id)closingQuotes;
- (id)terminatorsPrecedingAutospace;
- (id)terminatorsDeletingAutospace;
- (id)terminatorsPreventingAutocorrection;
- (BOOL)nextInputWouldStartSentence;
- (id)wordSeparator;
- (id)replacementForDoubleSpace;
- (BOOL)suppressCompletionsForFieldEditor;
- (BOOL)suppliesCompletions;
- (id)searchStringForMarkedText;
- (id)shadowTyping;
- (NSUInteger)initialCandidateBatchCount;
- (NSUInteger)initialSelectedIndex;
- (id)defaultCandidate;
- (BOOL)suppressPlaceholderCandidate;
- (NSUInteger)autoquoteType;
- (BOOL)usesAutoDeleteWord;
- (BOOL)newInputAcceptsUserSelectedCandidate;
- (BOOL)commitsAcceptedCandidate;
- (BOOL)shouldFixupIncompleteRomaji;
- (double)continuousPathLanguageWeight;
- (BOOL)usesContinuousPath;
- (BOOL)usesCandidateSelection;
- (BOOL)supportsSetPhraseBoundary;
- (NSUInteger)phraseBoundary;
- (void)setPhraseBoundary:(NSUInteger)arg1;
- (id)candidatesForString:(id)arg1;
- (id)candidates;
- (id)autocorrectionListWithCandidateCount:(NSUInteger)arg1;
- (id)autocorrectionList;
//  (void)transferErrorCorrectionFlagsToInputCandidate:(struct Candidate )arg1;
- (id)autocorrection;
- (void)setLearnsCorrection:(BOOL)arg1;
- (void)setInSplitKeyboardMode:(BOOL)arg1;
- (BOOL)inHardwareKeyboardMode;
- (void)setInHardwareKeyboardMode:(BOOL)arg1;
- (void)setKeyboardEventsLagging:(BOOL)arg1;
- (void)setAutocapitalizationType:(NSUInteger)arg1;
- (void)setAutocapitalizationEnabled:(BOOL)arg1;
- (void)setAutoCorrects:(BOOL)arg1;
- (BOOL)ignoresDeadKeys;
- (BOOL)supportsLearning;
- (BOOL)shouldExtendPriorWord;
- (BOOL)doesComposeText;
- (void)dynamicDictionariesRemoved:(id)arg1;
- (void)releaseDynamicLanguageModel;
- (void)clearDynamicDictionary;
- (id)keyEventMap;
- (long long)addTouch:(id)arg1 shouldHitTest:(BOOL)arg2;
- (BOOL)canHandleKeyHitTest;
- (id)shortcutConversionForDocumentState:(id)arg1;
- (id)shortcutCompletionsForDocumentState:(id)arg1;
- (NSUInteger)maximumShortcutLengthAllowed;
- (void)addSynthesizedTouchToInput:(id)arg1;
- (BOOL)isHardwareKeyboardAutocorrectionEnabled;
- (id)generateAndRenderProactiveSuggestionsWithTriggers:(id)arg1 withAdditionalPredictions:(id)arg2 withInput:(id)arg3;
- (void)generateAndRenderProactiveSuggestionsWithTriggers:(id)arg1 withAdditionalPredictions:(id)arg2 withInput:(id)arg3 async:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (BOOL)enablesProactiveQuickType;
- (id)getTestingStateObject;
- (NSUInteger)userFrequencyOfWord:(id)arg1 lexiconID:(unsigned int)arg2;
- (NSUInteger)userFrequencyOfWord:(id)arg1;
- (RefPtr_9bddf3b2)getDictionary;
- (BOOL)dictionaryContainsWord:(id)arg1;
- (id)configurationPropertyList;
- (void)logToTypologyRecorderWithString:(id)arg1;
- (BOOL)isTypologyEnabled;
- (void)storeLanguageModelDynamicDataIncludingCache;
- (void)clearHumanReadableTrace;
- (id)humanReadableTrace;

@end

