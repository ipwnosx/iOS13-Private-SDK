//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/KSXMLWriter.h>

@class NSMutableArray, NSMutableSet, NSString;

@interface KSHTMLWriter : KSXMLWriter
{
    NSString *_docType;
    BOOL _isXHTML;
    NSMutableSet *_IDs;
    NSMutableArray *_classNames;
}

+ (BOOL)isDocTypeXHTML:(id)arg1;
@property(copy, nonatomic) NSString *docType; // @synthesize docType=_docType;
// - (void).cxx_destruct;
- (void)closeEmptyElementTag;
- (void)startElement:(id)arg1 writeInline:(BOOL)arg2;
- (id)validateAttribute:(id)arg1 value:(id)arg2 ofElement:(id)arg3;
- (BOOL)validateElement:(id)arg1;
- (BOOL)canWriteElementInline:(id)arg1;
- (BOOL)elementCanBeEmpty:(id)arg1;
- (BOOL)topElementIsList;
- (void)startStyleElementWithType:(id)arg1;
- (void)writeStyleElementWithCSSString:(id)arg1;
- (void)writeParamElementWithName:(id)arg1 value:(id)arg2;
- (void)endJavascriptCDATA;
- (void)startJavascriptCDATA;
- (void)startJavascriptElementWithSrc:(id)arg1;
- (void)writeJavascript:(id)arg1 useCDATA:(BOOL)arg2;
- (void)writeJavascriptWithSrc:(id)arg1 charset:(id)arg2;
- (void)writeJavascriptWithSrc:(id)arg1 encoding:(NSUInteger)arg2;
- (void)writeLinkToStylesheet:(id)arg1 title:(id)arg2 media:(id)arg3;
- (void)writeLinkWithHref:(id)arg1 type:(id)arg2 rel:(id)arg3 title:(id)arg4 media:(id)arg5;
- (void)writeImageWithSrc:(id)arg1 alt:(id)arg2 width:(id)arg3 height:(id)arg4;
- (void)startAnchorElementWithHref:(id)arg1 title:(id)arg2 target:(id)arg3 rel:(id)arg4;
- (void)writeLineBreak;
- (BOOL)isIDValid:(id)arg1;
- (void)startElement:(id)arg1 idName:(id)arg2 className:(id)arg3;
- (void)startElement:(id)arg1 className:(id)arg2;
- (void)writeHTMLFormat:(id)arg1;
- (void)writeHTMLString:(id)arg1;
- (BOOL)hasCurrentAttributes;
- (id)currentAttributes;
- (void)pushAttribute:(id)arg1 value:(id)arg2;
- (void)pushClassName:(id)arg1;
- (id)currentElementClassName;
- (BOOL)isXHTML;
- (void)startDocumentWithDocType:(id)arg1 encoding:(NSUInteger)arg2;
- (id)initWithOutputWriter:(id)arg1 docType:(id)arg2 encoding:(NSUInteger)arg3;
- (id)initWithOutputWriter:(id)arg1;

@end

