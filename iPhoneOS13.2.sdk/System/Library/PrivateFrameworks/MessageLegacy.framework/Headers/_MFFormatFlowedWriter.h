//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MFPlainTextDocument, NSMutableString;

@interface _MFFormatFlowedWriter : NSObject
{
    MFPlainTextDocument *_inputDocument;
    unsigned int _encoding;
    NSMutableString *_outputString;
    NSMutableString *_quotedString;
    unsigned int _addedTrailingSpaces:1;
    NSMutableString *_lineString;
}

+ (id)newWithPlainTextDocument:(id)arg1 encoding:(unsigned int)arg2;
- (BOOL)addedTrailingSpaces;
- (id)quotedString;
- (id)outputString;
- (void)_outputQuotedParagraph:(id)arg1 range:(NSRange *)arg2 withQuoteLevel:(unsigned int)arg3;
- (NSUInteger)_findLineBreakInRange:(NSRange *)arg1 maxCharWidthCount:(NSUInteger)arg2 endIsURL:(BOOL)arg3;
- (void)dealloc;

@end

