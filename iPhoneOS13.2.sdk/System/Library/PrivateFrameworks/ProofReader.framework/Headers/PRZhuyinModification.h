//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProofReader/PRModification.h>

@class NSString;

@interface PRZhuyinModification : PRModification
{
    NSRange * _range;
    NSString *_replacementString;
    NSUInteger _modificationType;
    NSRange * _syllableRange;
    NSRange * _additionalSyllableRange;
    double _modificationScore;
    NSUInteger _syllableCountScore;
    unsigned char _letters[5];
    BOOL _producesPartialSyllable;
}

- (BOOL)_shouldAppendLetter:(unsigned char)arg1;
- (BOOL)producesPartialSyllable;
- (NSUInteger)syllableCountScore;
- (double)modificationScore;
- (NSRange *)combinedSyllableRange;
- (NSRange *)additionalSyllableRange;
- (NSRange *)syllableRange;
- (NSUInteger)modificationType;
- (id)replacementString;
- (NSRange *)range;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithRange:(NSRange *)arg1 replacementString:(id)arg2 modificationType:(NSUInteger)arg3 syllableRange:(NSRange *)arg4 modificationScore:(double)arg5 syllableCountScore:(NSUInteger)arg6 syllableLetters:(const char )arg7 producesPartialSyllable:(BOOL)arg8;
- (id)initWithRange:(NSRange *)arg1 replacementString:(id)arg2 modificationType:(NSUInteger)arg3 syllableRange:(NSRange *)arg4 additionalSyllableRange:(NSRange *)arg5 modificationScore:(double)arg6 syllableCountScore:(NSUInteger)arg7 syllableLetters:(const char )arg8 producesPartialSyllable:(BOOL)arg9;

@end

