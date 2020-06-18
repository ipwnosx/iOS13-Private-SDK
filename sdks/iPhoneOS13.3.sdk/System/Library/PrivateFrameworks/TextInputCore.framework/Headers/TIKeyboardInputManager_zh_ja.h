//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/TIKeyboardInputManager.h>

@class MCDrawInput, MCKeyboardInput, NSArray, NSCharacterSet, NSMutableArray, NSMutableDictionary, NSString, TIKeyboardTouchEvent, TIWordSearch, TIWordSearchCandidateResultSet;

@interface TIKeyboardInputManager_zh_ja : TIKeyboardInputManager
{
    BOOL _hasCommittedPartialCandidate;
    BOOL _hasBackspacedIntoInputString;
    BOOL _preservesComposingInput;
    int _lastCommittedCandidateType;
    NSMutableArray *_touchDataArray;
    MCKeyboardInput *_composingInput;
    RefPtr_54d74a7c _baseLayout;
    TIKeyboardInputManager_zh_ja *chainedKeyboardInputManager;
    TIKeyboardInputManager_zh_ja *_composingKeyboardInputManager;
    NSArray *_clearedGeometryDataArray;
    NSArray *_clearedTouchDataArray;
    NSString *_currentClientIdentifier;
    NSString *_currentRecipientIdentifier;
    TIKeyboardTouchEvent *_previousTouchEvent;
    MCDrawInput *_cancelledDrawInput;
    RefPtr_54d74a7c _favoniusLayoutForCharacterKeysFrame;
    id /* CDUnknownBlockType */ _compositionCompletionHandler;
    TIWordSearch *_wordSearch;
    TIWordSearchCandidateResultSet *_wordSearchCandidateResultSet;
    MCKeyboardInput *_previouslyDeletedTypeInput;
    MCKeyboardInput *_previouslyProcessedDeleteInput;
    NSMutableArray *_geometryDataArray;
    NSMutableDictionary *_touchDownEvents;
    NSMutableDictionary *_touchUpEvents;
    CGRect _currentLayoutCharacterKeysFrame;
}

+ (Class)wordSearchClass;
+ (id)initializedClients;
+ (id)offlineLearningHandleForInputMode:(id)arg1;
+ (id)dummyTouchData;
+ (id)dummyGeometryData;
+ (void)removeDynamicDictionaryForInputMode:(id)arg1;
+ (id)inputMethodWithChainedKeyboardInputManager:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *touchUpEvents; // @synthesize touchUpEvents=_touchUpEvents;
@property(readonly, nonatomic) NSMutableDictionary *touchDownEvents; // @synthesize touchDownEvents=_touchDownEvents;
@property(readonly, nonatomic) NSMutableArray *geometryDataArray; // @synthesize geometryDataArray=_geometryDataArray;
@property(retain, nonatomic) MCKeyboardInput *previouslyProcessedDeleteInput; // @synthesize previouslyProcessedDeleteInput=_previouslyProcessedDeleteInput;
@property(retain, nonatomic) MCKeyboardInput *previouslyDeletedTypeInput; // @synthesize previouslyDeletedTypeInput=_previouslyDeletedTypeInput;
@property(retain, nonatomic) TIWordSearchCandidateResultSet *wordSearchCandidateResultSet; // @synthesize wordSearchCandidateResultSet=_wordSearchCandidateResultSet;
@property(readonly, nonatomic) TIWordSearch *wordSearch; // @synthesize wordSearch=_wordSearch;
@property(copy, nonatomic) id /* CDUnknownBlockType */ compositionCompletionHandler; // @synthesize compositionCompletionHandler=_compositionCompletionHandler;
@property(nonatomic) RefPtr_54d74a7c favoniusLayoutForCharacterKeysFrame; // @synthesize favoniusLayoutForCharacterKeysFrame=_favoniusLayoutForCharacterKeysFrame;
@property(retain, nonatomic) MCDrawInput *cancelledDrawInput; // @synthesize cancelledDrawInput=_cancelledDrawInput;
@property(retain, nonatomic) TIKeyboardTouchEvent *previousTouchEvent; // @synthesize previousTouchEvent=_previousTouchEvent;
@property(nonatomic) BOOL preservesComposingInput; // @synthesize preservesComposingInput=_preservesComposingInput;
@property(nonatomic) int lastCommittedCandidateType; // @synthesize lastCommittedCandidateType=_lastCommittedCandidateType;
@property(nonatomic) BOOL hasBackspacedIntoInputString; // @synthesize hasBackspacedIntoInputString=_hasBackspacedIntoInputString;
@property(nonatomic) BOOL hasCommittedPartialCandidate; // @synthesize hasCommittedPartialCandidate=_hasCommittedPartialCandidate;
@property(copy, nonatomic) NSString *currentRecipientIdentifier; // @synthesize currentRecipientIdentifier=_currentRecipientIdentifier;
@property(copy, nonatomic) NSString *currentClientIdentifier; // @synthesize currentClientIdentifier=_currentClientIdentifier;
@property(retain, nonatomic) NSArray *clearedTouchDataArray; // @synthesize clearedTouchDataArray=_clearedTouchDataArray;
@property(retain, nonatomic) NSArray *clearedGeometryDataArray; // @synthesize clearedGeometryDataArray=_clearedGeometryDataArray;
@property(retain, nonatomic) TIKeyboardInputManager_zh_ja *composingKeyboardInputManager; // @synthesize composingKeyboardInputManager=_composingKeyboardInputManager;
@property(readonly, nonatomic) TIKeyboardInputManager_zh_ja *chainedKeyboardInputManager; // @synthesize chainedKeyboardInputManager;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)lastAcceptedCandidateCorrected;
- (void)candidateRejected:(id)arg1;
- (void)textAccepted:(id)arg1 fromPredictiveInputBar:(BOOL)arg2 withInput:(id)arg3;
- (void)setOriginalInput:(id)arg1;
- (BOOL)_adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 granularity:(int)arg2;
- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 granularity:(int)arg2;
- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1;
- (void)skipHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2;
- (long long)performHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2;
- (id)generateRefinementsForCandidate:(id)arg1;
- (id)generateReplacementsForString:(id)arg1 keyLayout:(id)arg2;
- (void)generateCandidatesWithKeyboardState:(id)arg1 candidateRange:(NSRange)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (BOOL)alreadyGeneratedCandidates;
- (BOOL)supportsCandidateGeneration;
- (void)generateAutocorrectionsWithKeyboardState:(id)arg1 candidateRange:(NSRange)arg2 candidateHandler:(id)arg3;
- (id)keyboardConfiguration;
- (void)updateProactiveCandidatesForCandidateResultSet:(id)arg1 withInput:(id)arg2;
- (void)addProactiveTriggers:(id)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)segmentsFromCandidate:(id)arg1 phraseBoundary:(BOOL)arg2;
- (void )mecabraCandidateRefFromCandidate:(id)arg1;
- (id)candidateResultSetFromWordSearchCandidateResultSet:(id)arg1;
- (void)deleteFromInputWithContext:(id)arg1;
- (void)updateDocumentContext;
- (id)handleKeyboardInput:(id)arg1;
- (void)incrementUsageTrackingKeysForDeleteFromInput;
- (void)updateUsageStatisticsForCandidate:(id)arg1 isPartial:(BOOL)arg2;
- (void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(BOOL)arg3;
- (int)mecabraTextContentTypeFromTITextContentType:(id)arg1;
- (void)setLanguageModelAdaptationContext;
@property(readonly, nonatomic) BOOL supportsPerRecipientLearning;
- (BOOL)updateLanguageModelForKeyboardState;
- (BOOL)shouldUpdateLanguageModel;
- (id)adaptationContextReadingForReanalysisString:(id)arg1 fromRecentlyCommittedCandidates:(id)arg2;
- (void)handlePerformBackgroundMaintenanceNotification;
- (id)inputsToReject;
- (id)wordSeparator;
- (void)resume;
- (void)suspend;
- (void)insertDummyTouchDataAtIndex:(NSUInteger)arg1;
- (void)insertDummyGeometryDataAtIndex:(NSUInteger)arg1;
- (void)storeLanguageModelDynamicDataIncludingCache;
- (void)logCommittedCandidate:(id)arg1 partial:(BOOL)arg2;
- (void)logAllCandidates;
- (void)logDocumentContext;
- (void)logInputString;
- (void)saveTouchDataForEvent:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)touchDataForPathIndex:(long long)arg1;
- (long long)addTouch:(id)arg1 shouldHitTest:(BOOL)arg2;
@property(readonly, nonatomic) CGRect currentLayoutCharacterKeysFrame; // @synthesize currentLayoutCharacterKeysFrame=_currentLayoutCharacterKeysFrame;
- (BOOL)needsTouchEvents;
- (void)clearInput;
- (id)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2;
- (id)convertInputsToSyntheticInputUptoCount:(int)arg1;
- (void)updateComposedText;
- (void)savePartialGeometryData;
- (void)padGeometryForInput:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)restoreGeometryForInput:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)saveGeometryForInput:(id)arg1 atIndex:(NSUInteger)arg2;
@property(readonly, nonatomic) NSCharacterSet *validCharacterSetForAutocorrection;
- (NSRange)analysisStringRange;
- (id)geometryModelData;
@property(readonly, nonatomic) NSMutableArray *touchDataArray; // @synthesize touchDataArray=_touchDataArray;
@property(readonly, nonatomic) struct __Mecabra mecabra;
- (NSUInteger)autoquoteType;
- (BOOL)shouldClearInputOnMarkedTextOutOfSync;
@property(readonly, nonatomic) RefPtr_54d74a7c baseLayout; // @synthesize baseLayout=_baseLayout;
- (BOOL)shouldDelayUpdateComposedText;
- (BOOL)isProgressivelyPathing;
@property(readonly, nonatomic) BOOL usesComposingInput;
@property(readonly, nonatomic) MCKeyboardInput *composingInput; // @synthesize composingInput=_composingInput;
- (void)dealloc;
- (id)initWithConfig:(id)arg1 keyboardState:(id)arg2;
- (void)cancelComposition;
- (void)completeComposition;
- (void)_completeComposition:(BOOL)arg1;
- (void)composeTextWith:(id)arg1;
- (void)commitComposition;
- (void)composeText:(id /* CDUnknownBlockType */)arg1;
- (id)initWithKeyboardInputManagerToChain:(id)arg1;

@end

