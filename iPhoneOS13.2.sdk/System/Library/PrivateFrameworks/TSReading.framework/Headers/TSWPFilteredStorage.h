//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSWPTextSource-Protocol.h>

@class TSWPDeletionRangeMap, TSWPStorage;

@interface TSWPFilteredStorage : NSObject <TSWPTextSource>
{
    TSWPStorage *_storage;
    TSWPDeletionRangeMap *_rangeMap;
    NSUInteger _length;
    NSUInteger _storageLength;
}

- (NSRange *)rangeForSelectionAtCharIndex:(NSUInteger)arg1 caretIndex:(NSUInteger)arg2;
- (NSRange *)whiteSpaceRangeAtCharIndex:(NSUInteger)arg1 includingBreaks:(BOOL)arg2;
- (NSUInteger)nextCharacterIndex:(NSUInteger)arg1;
- (NSUInteger)previousCharacterIndex:(NSUInteger)arg1;
- (NSRange *)scanBackwardForWordAtCharIndex:(NSUInteger)arg1;
- (NSUInteger)storageLength;
- (BOOL)hasSmartFieldsInRange:(NSRange *)arg1;
- (void)enumerateSmartFieldsWithAttributeKind:(unsigned int)arg1 inRange:(NSRange *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateWithAttributeKind:(unsigned int)arg1 inRange:(NSRange *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)substringWithRange:(NSRange *)arg1;
- (BOOL)adjustRangesByDelta:(long long)arg1;
- (BOOL)isWritingDirectionRightToLeftForParagraphAtCharIndex:(NSUInteger)arg1;
- (id)paragraphStyleAtCharIndex:(NSUInteger)arg1 effectiveRange:(NSRange * )arg2;
- (NSUInteger)charIndexRemappedFromStorage:(NSUInteger)arg1;
- (NSRange *)charRangeMappedFromStorage:(NSRange *)arg1;
- (NSRange *)charRangeMappedToStorage:(NSRange *)arg1;
- (NSUInteger)charIndexMappedFromStorage:(NSUInteger)arg1;
- (NSUInteger)charIndexMappedToStorage:(NSUInteger)arg1;
// - (struct __CFDictionary )createFilteredCoreTextAttributes:(struct __CFDictionary )arg1 effectiveRange:(NSRange * )arg2 filterDelegate:(id)arg3;
- (double)filteredCoreTextAttributesFontScaleEffectiveRange:(NSRange * )arg1 filterDelegate:(id)arg2;
- (id)objectAtLocationPriorToMappedCharIndex:(NSUInteger)arg1 forAttributeKind:(unsigned int)arg2 effectiveRange:(NSRange * )arg3;
// - (long long)hyphenationLocationBeforeIndex:(long long)arg1 inRange:(NSRange *)arg2 locale:(struct __CFLocale )arg3 hyphenChar:(unsigned int )arg4;
- (NSRange *)wordAtCharIndex:(NSUInteger)arg1 includePreviousWord:(BOOL)arg2;
- (id)characterStyleAtCharIndex:(NSUInteger)arg1 effectiveRange:(NSRange * )arg2;
- (id)attachmentOrFootnoteAtCharIndex:(NSUInteger)arg1;
- (id)attachmentAtCharIndex:(NSUInteger)arg1;
- (id)footnoteReferenceAtCharIndex:(NSUInteger)arg1;
- (id)smartFieldsWithAttributeKind:(unsigned int)arg1 intersectingRange:(NSRange *)arg2;
- (id)smartFieldAtCharIndex:(NSUInteger)arg1 attributeKind:(unsigned int)arg2 effectiveRange:(NSRange * )arg3;
- (void)attributesAtCharIndex:(NSUInteger)arg1 attributesOfInterest:(BOOL [19])arg2 attributesTable:(id [19])arg3 effectiveRange:(NSRange * )arg4;
- (BOOL)hasColumnStyleForParagraphBreakAtCharIndex:(NSUInteger)arg1;
- (BOOL)hasColumnBreakAtCharIndex:(NSUInteger)arg1;
- (void)getCharacters:(unsigned short )arg1 range:(NSRange *)arg2;
- (unsigned short)characterAtIndex:(NSUInteger)arg1;
- (id)string;
- (NSUInteger)length;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 subRange:(NSRange *)arg2 removeRanges:(id)arg3;
- (id)initWithStorage:(id)arg1 subRange:(NSRange *)arg2;

@end

