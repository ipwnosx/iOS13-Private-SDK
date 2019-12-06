//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CRCtcPath : NSObject
{
//    struct vector<unsigned int, std::__1::allocator<unsigned int>> _tokenString;
//    struct vector<unsigned int, std::__1::allocator<unsigned int>> _histWordTokenIDs;
    NSUInteger _beginningCurrentWord;
//    struct vector<NSRange *, std::__1::allocator<NSRange *>> _whitespaceRanges;
    NSUInteger _numCustomWords;
    NSString *_string;
    double _probBlank;
    double _probNonBlank;
    double _probLexHist;
    double _probLexCurrWord;
    double _probCharNGram;
    double _probWM;
//    struct _LXCursor _lxStaticCursor;
//    struct _LXCursor _lxDynamicCursor;
}

//  (BOOL)_isWordCustom:(id)arg1 dynamicLexicon:(struct _LXLexicon )arg2;
+ (unsigned int)normalizeLMTokenIDForWord:(id)arg1 withTokenID:(unsigned int)arg2 outScore:(double )arg3 wordModel:(void )arg4;
+ (double)lmProbForString:(id)arg1 forPath:(id)arg2 originalWordRanges:(id)arg3 originalWordIDs:(id)arg4 wordRanges:(id)arg5 wordIDs:(id)arg6 wordModel:(void )arg7;
+ (void)useLMTokenizerOnString:(id)arg1 outTokenIDs:(id )arg2 outTokenRanges:(id )arg3 wordModel:(void )arg4 locale:(id)arg5;
+ (id)_getQueue;
+ (void)updateWMProbForPath:(id)arg1 stemmingFromPath:(id)arg2 wordModel:(void )arg3 locale:(id)arg4 forChar:(unsigned short)arg5;
//  (void)updateLexiconProbForPath:(id)arg1 stemmingFromPath:(id)arg2 staticLexicon:(struct _LXLexicon )arg3 dynamicLexicon:(struct _LXLexicon )arg4 forChar:(unsigned short)arg5;
+ (void)updateNGramProbForPath:(id)arg1 stemmingFromPath:(id)arg2 withModel:(void )arg3 forChar:(unsigned short)arg4;
// property(nonatomic) struct _LXCursor lxDynamicCursor; // @synthesize lxDynamicCursor=_lxDynamicCursor;
// property(nonatomic) struct _LXCursor lxStaticCursor; // @synthesize lxStaticCursor=_lxStaticCursor;
@property double probWM; // @synthesize probWM=_probWM;
@property double probCharNGram; // @synthesize probCharNGram=_probCharNGram;
@property double probLexCurrWord; // @synthesize probLexCurrWord=_probLexCurrWord;
@property double probLexHist; // @synthesize probLexHist=_probLexHist;
@property double probNonBlank; // @synthesize probNonBlank=_probNonBlank;
@property double probBlank; // @synthesize probBlank=_probBlank;
@property(retain) NSString *string; // @synthesize string=_string;
- (id).cxx_construct;
// - (void).cxx_destruct;
//  (BOOL)containsCustomWords:(struct _LXLexicon )arg1;
//  (id)pathByExtendingWithCharacter:(unsigned short)arg1 characterNGramModel:(void )arg2 staticLexicon:(struct _LXLexicon )arg3 dynamicLexicon:(struct _LXLexicon )arg4 wordModel:(void )arg5 locale:(id)arg6 forTimeSample:(NSUInteger)arg7;
- (void)updateWhitespacesForTimeSample:(NSUInteger)arg1;
- (id)childPathWithBlankProb:(double)arg1;
- (void)merge:(id)arg1 replaceWhiteSpaces:(BOOL)arg2;
- (long long)compare:(id)arg1;
- (id)whiteSpaceRangesExcludingTrailing;
@property(readonly) double probTotalNorm;
@property(readonly) double probLM;
@property(readonly) double probTotal;
- (void)dealloc;
- (id)init;

@end

