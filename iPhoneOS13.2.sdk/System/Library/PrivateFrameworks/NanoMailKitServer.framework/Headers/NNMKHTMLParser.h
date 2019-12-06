//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableData, NSString;

@interface NNMKHTMLParser : NSObject
{
    BOOL _containsBlacklistedElements;
    BOOL _parsingHead;
    BOOL _parsingBody;
    BOOL _cancelled;
    BOOL _isLastCharAddedLineBreak;
    NSString *_htmlBodyToParse;
    NSUInteger _encoding;
//    struct _xmlParserCtxt _parserContext;
    NSMutableData *_charactersBuffer;
    NSMutableArray *_stringAttributesStack;
    NSMutableArray *_isQuoteElementStack;
    NSUInteger _currentQuoteLevel;
    NSMutableArray *_listStack;
    NSUInteger _currentListLevel;
    NSString *_ignoringElementSubtree;
    NSUInteger _bodyTagStartIndex;
    NSString *_bodyTagStyle;
    NSUInteger _currentHeadTagStartIndex;
    NSUInteger _currentImgTagStartIndex;
    NSString *_currentImgTagSource;
//    struct _xmlSAXHandler _parsingSAXHandler;
}

@property(retain, nonatomic) NSString *currentImgTagSource; // @synthesize currentImgTagSource=_currentImgTagSource;
@property(nonatomic) NSUInteger currentImgTagStartIndex; // @synthesize currentImgTagStartIndex=_currentImgTagStartIndex;
@property(nonatomic) NSUInteger currentHeadTagStartIndex; // @synthesize currentHeadTagStartIndex=_currentHeadTagStartIndex;
@property(retain, nonatomic) NSString *bodyTagStyle; // @synthesize bodyTagStyle=_bodyTagStyle;
@property(nonatomic) NSUInteger bodyTagStartIndex; // @synthesize bodyTagStartIndex=_bodyTagStartIndex;
@property(retain, nonatomic) NSString *ignoringElementSubtree; // @synthesize ignoringElementSubtree=_ignoringElementSubtree;
@property(nonatomic) BOOL isLastCharAddedLineBreak; // @synthesize isLastCharAddedLineBreak=_isLastCharAddedLineBreak;
@property(nonatomic) NSUInteger currentListLevel; // @synthesize currentListLevel=_currentListLevel;
@property(retain, nonatomic) NSMutableArray *listStack; // @synthesize listStack=_listStack;
@property(nonatomic) NSUInteger currentQuoteLevel; // @synthesize currentQuoteLevel=_currentQuoteLevel;
@property(retain, nonatomic) NSMutableArray *isQuoteElementStack; // @synthesize isQuoteElementStack=_isQuoteElementStack;
@property(retain, nonatomic) NSMutableArray *stringAttributesStack; // @synthesize stringAttributesStack=_stringAttributesStack;
@property(retain, nonatomic) NSMutableData *charactersBuffer; // @synthesize charactersBuffer=_charactersBuffer;
// property(nonatomic) struct _xmlParserCtxt parserContext; // @synthesize parserContext=_parserContext;
// property(nonatomic) struct _xmlSAXHandler parsingSAXHandler; // @synthesize parsingSAXHandler=_parsingSAXHandler;
@property(nonatomic) NSUInteger encoding; // @synthesize encoding=_encoding;
@property(retain, nonatomic) NSString *htmlBodyToParse; // @synthesize htmlBodyToParse=_htmlBodyToParse;
@property(nonatomic) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) BOOL parsingBody; // @synthesize parsingBody=_parsingBody;
@property(nonatomic) BOOL parsingHead; // @synthesize parsingHead=_parsingHead;
@property(nonatomic) BOOL containsBlacklistedElements; // @synthesize containsBlacklistedElements=_containsBlacklistedElements;
// - (void).cxx_destruct;
- (void)_appendImageFromAttributes:(const char )arg1;
- (void)_appendString:(id)arg1;
- (void)_flushCharactersIfNeeded;
- (void)_appendCharacters:(const char )arg1 length:(int)arg2;
- (void)_requireNewLine;
- (void)_appendLineBreak;
- (void)_popStringAttributes;
- (void)_pushStringAttributes:(id)arg1;
- (id)_topStringAttributes;
- (void)_enumerateAttributes:(const char )arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)_valueForAttributeNamed:(id)arg1 inAttributes:(const char )arg2;
- (void)_stringAttributeForHyperlink:(id)arg1 attributes:(const char )arg2 stringAttributeKey:(id )arg3 stringAttributeValue:(id )arg4;
- (NSUInteger)_writingDirectionFromString:(id)arg1;
- (NSUInteger)_textAlignmentFromString:(id)arg1;
- (id)_stringAttributeValueForCSSStyleName:(id)arg1 inStyleAttribute:(id)arg2;
- (id)_stringAttributesForStyleAttribute:(id)arg1;
- (void)_stringAttributeForElement:(id)arg1 attributes:(const char )arg2 stringAttributeKey:(id )arg3 stringAttributeValue:(id )arg4;
- (BOOL)_isElementIgnorable:(id)arg1;
- (BOOL)_isElementBody:(id)arg1;
- (BOOL)_isElementHead:(id)arg1;
- (BOOL)_isElementHyperlink:(id)arg1;
- (BOOL)_isElementImage:(id)arg1;
- (BOOL)_isElementListItem:(id)arg1;
- (BOOL)_isElementList:(id)arg1 ordered:(BOOL )arg2;
- (BOOL)_isElementLineBreak:(id)arg1;
- (BOOL)_isElementQuoteElement:(id)arg1 attributes:(const char )arg2;
- (BOOL)_isElementDisplayedInBlock:(id)arg1;
//  (BOOL)_isErrorBlacklisted:(struct _xmlError )arg1;
- (BOOL)_isElementBlacklisted:(id)arg1 attributes:(const char )arg2;
- (void)processImgTagSource:(id)arg1 contentRange:(NSRange *)arg2;
- (void)processBodyHTMLContent:(id)arg1 style:(id)arg2 contentRange:(NSRange *)arg3;
- (void)processHeadHTMLTagContent:(id)arg1;
- (BOOL)caresAboutHTMLContentString;
- (void)appendString:(id)arg1 stringAttributes:(id)arg2;
- (void)appendImageWithSource:(id)arg1 width:(double)arg2 height:(double)arg3 stringAttributes:(id)arg4;
- (BOOL)isElementIgnorable:(id)arg1;
- (BOOL)isErrorTypeBlacklisted:(char )arg1;
- (BOOL)isElementBlacklisted:(id)arg1 attributeQueryBlock:(CDUnknownBlockType)arg2;
- (void)parseHTMLBody:(id)arg1 encoding:(NSUInteger)arg2;
- (id)init;

@end

