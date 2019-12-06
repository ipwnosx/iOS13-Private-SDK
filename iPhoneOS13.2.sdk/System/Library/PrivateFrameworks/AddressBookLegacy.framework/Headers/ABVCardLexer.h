//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ABVCardWatchdogTimer, NSArray, NSMutableData;

@interface ABVCardLexer : NSObject
{
    NSMutableData *_data;
    char _bytes;
    NSUInteger _length;
    unsigned int _peakedPoint;
    unsigned int _cursor;
    BOOL _unicode;
    int _errorCount;
    NSArray *_activeTokenSets;
    ABVCardWatchdogTimer *_timer;
}

- (BOOL)atEOF;
- (BOOL)advancePastEOL;
- (BOOL)advancePastEOLSingle;
- (BOOL)advancePastEOLUnicode;
- (BOOL)advanceToEOL;
- (BOOL)advanceToEOLSingle;
- (BOOL)advanceToEOLUnicode;
- (BOOL)advanceToToken:(int)arg1 throughTypes:(int)arg2;
- (int)advanceToString;
- (int)advanceToSingleByteString;
- (int)advanceToUnicodeString;
- (void)advanceToPeakPoint;
- (id)nextBase64Data;
- (id)nextBase64Line:(BOOL )arg1;
- (id)nextSingleByteBase64Line:(BOOL )arg1;
- (id)nextUnicodeBase64Line:(BOOL )arg1;
- (id)nextArraySeperatedByToken:(int)arg1 stoppingAt:(int)arg2 inEncoding:(NSUInteger)arg3;
- (int)tokenAtCursor;
- (id)nextStringInEncoding:(NSUInteger)arg1 quotedPrintable:(BOOL)arg2 stopTokens:(int)arg3 trim:(BOOL)arg4;
- (void)_applyNextStringInEncoding:(NSUInteger)arg1 quotedPrintable:(BOOL)arg2 stopTokens:(int)arg3 trim:(BOOL)arg4 intoString:(id)arg5;
- (BOOL)_advancePastLineFoldingSequenceIfNeeded;
- (id)nextUnicodeStringStopTokens:(int)arg1 quotedPrintable:(BOOL)arg2 trim:(BOOL)arg3;
- (id)nextSingleByteStringInEncoding:(NSUInteger)arg1 quotedPrintable:(BOOL)arg2 stopTokens:(int)arg3 trim:(BOOL)arg4;
- (BOOL)advancedPastToken:(int)arg1;
- (id)nextEscapedCharacter;
- (id)nextQuotedPrintableData;
- (int)nextTokenPeak:(BOOL)arg1;
- (int)nextTokenPeakUnicode:(BOOL)arg1 length:(int)arg2;
- (int)nextTokenPeakSingle:(BOOL)arg1 length:(int)arg2;
- (id)tokenSetForLength:(int)arg1;
- (int)errorCount;
- (unsigned int)cursor;
- (void)dealloc;
- (id)initWithData:(id)arg1 watchdogTimer:(id)arg2;
- (id)tokenName:(int)arg1;

@end

