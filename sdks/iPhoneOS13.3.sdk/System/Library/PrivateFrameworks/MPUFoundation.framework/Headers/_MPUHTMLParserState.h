//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MPUFoundation/MPUHTMLParserState-Protocol.h>

@class MPUHTMLParser, NSData, NSMutableArray, NSMutableAttributedString;
@protocol MPUHTMLParserDelegate;

@interface _MPUHTMLParserState : NSObject <MPUHTMLParserState>
{
    NSData *_data;
    void _selfRef;
    MPUHTMLParser *_parser;
    id <MPUHTMLParserDelegate> _delegate;
    NSMutableArray *_errors;
    NSMutableAttributedString *_attributedString;
    NSMutableArray *_attributeDictionaries;
    NSMutableArray *_tagStack;
    NSMutableArray *_stringStack;
    struct {
        unsigned int providesDefaultAttributes:1;
        unsigned int providesTagAttributes:1;
        unsigned int providesPrependTagString:1;
    } _delegateCapabilites;
}

// - (void).cxx_destruct;
- (id)tagStack;
- (id)attributes;
- (id)attributedString;
- (BOOL)parse:(id )arg1;
- (id)initWithParser:(id)arg1 data:(id)arg2;
- (id)currentTagAttributes;
- (void)_appendString:(id)arg1;
// - (void)_error:(long long)arg1 msg:(const char )arg2 args:(struct __va_list_tag [1])arg3;
- (void)_characters:(const char )arg1 length:(int)arg2;
- (void)_endElement:(const char )arg1;
- (void)_startElement:(const char )arg1 attrs:(const char )arg2;
- (void)_endDocument;
- (void)_startDocument;

@end

