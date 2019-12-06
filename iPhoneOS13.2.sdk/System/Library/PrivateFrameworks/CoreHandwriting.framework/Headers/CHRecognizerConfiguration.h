//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLocale;

@interface CHRecognizerConfiguration : NSObject
{
    NSUInteger _language;
    NSUInteger _script;
    BOOL _shouldEnableCachingIfAvailable;
    int _mode;
    int _contentType;
    NSLocale *_locale;
}

+ (CGSize)defaultMinimumDrawingSize;
+ (id)configurationKeyForLocale:(id)arg1 mode:(int)arg2;
+ (BOOL)isLocaleSupported:(id)arg1 withMode:(int)arg2;
+ (BOOL)isLanguageSupported:(NSUInteger)arg1 withMode:(int)arg2;
+ (NSUInteger)supportedScriptForLocale:(id)arg1;
+ (NSUInteger)supportedLanguageForLocale:(id)arg1;
+ (void)_decodeLocale:(id)arg1 supportedLanguage:(NSUInteger )arg2 supportedScript:(NSUInteger )arg3;
+ (id)defaultLocaleForRecognitionType:(int)arg1 withMode:(int)arg2;
+ (int)validateRecognitionMode:(int)arg1;
+ (id)_stringForRecognitionScript:(NSUInteger)arg1;
+ (id)_stringForRecognitionLanguage:(NSUInteger)arg1;
+ (id)stringForRecognitionContentType:(int)arg1;
+ (id)stringForRecognitionMode:(int)arg1;
@property(readonly, nonatomic) BOOL shouldEnableCachingIfAvailable; // @synthesize shouldEnableCachingIfAvailable=_shouldEnableCachingIfAvailable;
@property(readonly, nonatomic) int contentType; // @synthesize contentType=_contentType;
@property(readonly, copy, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(readonly, nonatomic) int mode; // @synthesize mode=_mode;
- (long long)engineCandidateCount;
- (long long)maxRecognitionResultDefaultCount;
//  (struct CHNeuralNetwork )newFreeFormEngine;
- (id)newCutpointModel;
- (id)newStrokeTransitionModel;
//  (struct CHNeuralNetwork )newRecognitionEngine;
//  (struct VariantMap )newTransliterationVariantMap;
//  (struct Network )newRadicalClusterFST;
//  (struct Network )newGrammarFST;
- (id)newPatternFST;
//  (struct _CFBurstTrie )newOVSTrie;
- (void )newCharacterLanguageModelAndMap:(map_c92806bd )arg1;
- (id)newSpellChecker;
- (void )newLanguageModel;
- (void )newCJKStaticLexicon;
//  (struct _LXLexicon )newCustomLexicon:(id )arg1;
//  (const struct _LXLexicon )newStaticLexicon:(id )arg1;
- (id)linguisticResourcesFallbackLocale;
- (BOOL)shouldForwardMecabraOTAAssetsUpdate;
- (int)mecabraInputMethodType;
- (unsigned int)requiredInappropriateFilteringFlags;
- (BOOL)shouldTreatAllSmallStrokesAsPunctuation;
- (BOOL)shouldDetectRomanPunctuation;
- (BOOL)shouldDetectChinesePunctuation;
- (BOOL)shouldKeepOutOfPatternCandidates;
- (BOOL)shouldPromoteChineseCommonCharacters;
- (BOOL)shouldTransformCharacterProbabilitiesIntoLogScores;
- (BOOL)shouldReplaceInvalidTokenIDs;
- (BOOL)shouldUseTokenPrecedingSpaces;
- (BOOL)shouldPreserveLegacyTranscriptionPaths;
- (BOOL)shouldUseCaching;
- (BOOL)shouldTransliterateSentences;
- (BOOL)shouldTransliterateAndSynthetizeCandidates;
- (BOOL)shouldApplyCharacterLMRescoring;
- (BOOL)shouldApplyLMSorting;
- (BOOL)shouldApplyLMRescoring;
- (BOOL)shouldAutoCapitalize;
- (BOOL)shouldRelaxFinalCandidatesThresholding;
- (BOOL)shouldApplyCandidatesThresholding;
- (BOOL)shouldPenalizeLetterInsertion;
- (BOOL)shouldComputeStrokePenalties;
- (BOOL)shouldFallbackOnSingleCharacterExpansion;
- (BOOL)shouldPerformMultiWordsExpansion;
- (BOOL)shouldExpandNonSpaceSeparators;
- (BOOL)shouldPerformIntegratedLexiconExpansion;
- (BOOL)shouldPerformGlobalBestSearchWithSmallLattice;
- (BOOL)shouldPerformGlobalBestSearch;
- (BOOL)shouldPenalizePrefixes;
- (BOOL)shouldExpandCodePoints;
- (BOOL)shouldApplyDiacriticSensitivity;
- (BOOL)shouldApplyLexicalPenalty;
- (BOOL)shouldExpandLexiconInNetwork;
- (BOOL)shouldComposeLexiconWithNetwork;
@property(readonly, nonatomic) int contentTypeForNoSpaceRecognition;
- (BOOL)shouldPerformNoSpaceRecognition;
- (BOOL)shouldPerformRegularSpaceRecognition;
- (BOOL)shouldRefineChineseCharacterCandidates;
- (BOOL)shouldApplyChinesePostProcessing;
- (BOOL)shouldApplyRomanPostProcessing;
- (NSUInteger)supportedSegmentationStrategy;
- (BOOL)shouldEnforceGrammarOnTransliterations;
- (BOOL)shouldGenerateDigitLetterAlternatives;
- (id)configurationKey;
- (BOOL)isEqualToRecognizerConfiguration:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithMode:(int)arg1 locale:(id)arg2 contentType:(int)arg3 shouldEnableCachingIfAvailable:(BOOL)arg4;

@end

