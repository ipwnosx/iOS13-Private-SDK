//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, PRErrorModel;

__attribute__((visibility("hidden")))
@interface PRCandidateList : NSObject
{
    NSMutableArray *_candidates;
    NSUInteger _maxCount;
    NSRange * _defaultReplacementRange;
    PRErrorModel *_errorModel;
    NSArray *_capitalizationDictionaryArray;
}

- (id)candidateWithString:(id)arg1;
- (NSRange *)defaultReplacementRange;
- (BOOL)isFull;
- (NSUInteger)maxCount;
- (NSUInteger)count;
- (id)candidateStrings;
- (id)candidates;
- (void)addTranspositionCandidateWithBuffer:(char )arg1 encoding:(unsigned int)arg2 transform:(NSUInteger)arg3 intendedFirstCharacter:(unsigned short)arg4 intendedSecondCharacter:(unsigned short)arg5;
- (void)addReplacementCandidateWithBuffer:(char )arg1 encoding:(unsigned int)arg2 transform:(NSUInteger)arg3 intendedCharacter:(unsigned short)arg4 actualCharacter:(unsigned short)arg5;
- (void)addCandidateWithBuffer:(char )arg1 encoding:(unsigned int)arg2 transform:(NSUInteger)arg3 errorType:(NSUInteger)arg4;
- (void)addCandidateWithBuffer:(char )arg1 encoding:(unsigned int)arg2 errorType:(NSUInteger)arg3;
- (void)addCandidateWithString:(id)arg1 errorType:(NSUInteger)arg2;
- (void)addCandidateWithString:(id)arg1 replacementRange:(NSRange *)arg2 errorType:(NSUInteger)arg3;
- (void)addCandidateWithWords:(id)arg1 replacementRange:(NSRange *)arg2 errorType:(NSUInteger)arg3;
- (void)addCandidate:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithMaxCount:(NSUInteger)arg1 defaultReplacementRange:(NSRange *)arg2 customErrorModel:(id)arg3 capitalizationDictionaryArray:(id)arg4;

@end

