//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface ECEncodedWordEncoder : NSObject
{
    NSUInteger _stringEncoding;
    NSString *_language;
    NSString *_string;
    NSString *_characterSet;
    long long _encodedWordEncoding;
    NSData *_decodedText;
    NSUInteger _singleEncodedWordLength;
}

@property(nonatomic) NSUInteger singleEncodedWordLength; // @synthesize singleEncodedWordLength=_singleEncodedWordLength;
@property(copy, nonatomic) NSData *decodedText; // @synthesize decodedText=_decodedText;
@property(nonatomic) long long encodedWordEncoding; // @synthesize encodedWordEncoding=_encodedWordEncoding;
@property(copy, nonatomic) NSString *characterSet; // @synthesize characterSet=_characterSet;
@property(readonly, copy, nonatomic) NSString *string; // @synthesize string=_string;
@property(readonly, copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(readonly, nonatomic) NSUInteger stringEncoding; // @synthesize stringEncoding=_stringEncoding;
// - (void).cxx_destruct;
- (const char )_findNextByteThatNeedsQEncodingBetweenStartByte:(const char )arg1 endByte:(const char )arg2;
- (void)_writeQEncodedTextAndEndSequenceToHeaderBytes:(char )arg1 fromDecodedBytes:(const char )arg2 length:(NSUInteger)arg3;
- (NSUInteger)_lengthOfQEncodedTextForBytes:(const char )arg1 length:(NSUInteger)arg2;
- (BOOL)_getBytesWithoutSplittingComposedCharacters:(void )arg1 targetQEncodedTextLength:(NSUInteger)arg2 usedLength:(NSUInteger )arg3 splitComposedCharacterSequence:(BOOL )arg4 usedQEncodedTextLength:(NSUInteger )arg5 extraLength:(NSUInteger )arg6 extraQEncodedTextLength:(NSUInteger )arg7 fromString:(id)arg8 stringEncoding:(NSUInteger)arg9 range:(NSRange *)arg10 remainingRange:(NSRange * )arg11;
- (NSUInteger)_qEncodeToHeaderData:(id)arg1 currentLineLength:(NSUInteger)arg2;
- (NSUInteger)_bEncodeToHeaderData:(id)arg1 currentLineLength:(NSUInteger)arg2;
- (NSUInteger)_writeEncodedWordPreambleToBuffer:(char )arg1 length:(NSUInteger)arg2;
- (NSUInteger)encodeToHeaderData:(id)arg1 currentLineLength:(NSUInteger)arg2;
- (void)_prepareForEncoding;
@property(readonly, nonatomic) NSUInteger minimumLengthOfEncodedWord;
- (id)description;
- (id)init;
- (id)initWithString:(id)arg1 stringEncoding:(NSUInteger)arg2 language:(id)arg3;

@end

