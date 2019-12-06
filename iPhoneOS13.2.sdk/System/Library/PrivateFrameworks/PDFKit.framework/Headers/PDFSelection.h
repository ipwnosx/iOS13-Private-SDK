//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSAttributedString, NSString, PDFSelectionPrivate, UIColor;

@interface PDFSelection : NSObject <NSCopying>
{
    PDFSelectionPrivate *_private;
}

+ (id)defaultInactiveColor;
+ (id)defaultActiveColor;
// - (void).cxx_destruct;
- (NSRange *)previewRangeAtIndex:(NSUInteger)arg1 onPage:(id)arg2;
- (id)description;
- (BOOL)isStandaloneGraphic;
- (void)normalize;
- (void)drawForPage:(id)arg1 withBox:(int)arg2 active:(BOOL)arg3 inContext:(CGContextRef )arg4;
- (void)setForceBreaks:(BOOL)arg1;
- (BOOL)forceBreaks;
- (id)rtfdData;
- (id)webArchive;
- (id)html;
- (id)attributedStringScaled:(double)arg1;
- (id)createAttributedStringForCGSelection:(CGPDFSelection )arg1 scaled:(double)arg2;
- (NSUInteger)pdfKitIndexOfLastCharacterOnPage:(id)arg1;
- (NSUInteger)pdfKitIndexOfFirstCharacterOnPage:(id)arg1;
- (NSUInteger)indexOfLastCharacterOnPage:(id)arg1;
- (NSUInteger)indexOfFirstCharacterOnPage:(id)arg1;
- (id)lastPage;
- (id)firstPage;
- (CGPoint)rightMostCharCenter;
- (CGPoint)leftMostCharCenter;
- (CGPoint)firstCharCenter;
- (void)addSelectionRange:(NSRange *)arg1 page:(id)arg2 normalize:(BOOL)arg3;
- (void)addSelectionCore:(id)arg1 normalize:(BOOL)arg2;
- (void)addSelectionNoNormalize:(id)arg1;
- (CGPDFSelection )cgSelectionForPage:(id)arg1;
- (id)cgSelectionPages;
// - (const struct __CFArray )cgSelections;
- (void)addCGSelection:(CGPDFSelection )arg1 forPage:(id)arg2;
- (id)boundsArrayForPage:(id)arg1;
- (long long)compare:(id)arg1;
- (BOOL)isEmpty;
- (id)asDestination;
- (id)document;
- (void)dealloc;
- (void)drawForPage:(id)arg1 withBox:(long long)arg2 active:(BOOL)arg3;
- (void)drawForPage:(id)arg1 active:(BOOL)arg2;
- (void)extendSelectionForLineBoundaries;
- (void)extendSelectionAtStart:(long long)arg1;
- (void)extendSelectionAtEnd:(long long)arg1;
- (void)addSelections:(id)arg1;
- (void)addSelection:(id)arg1;
- (id)selectionsByLine;
- (NSRange *)rangeAtIndex:(NSUInteger)arg1 onPage:(id)arg2;
- (NSUInteger)numberOfTextRangesOnPage:(id)arg1;
- (id)pdfSelectionUUID;
- (CGRect)lastSpanBoundsForPage:(id)arg1;
- (CGRect)firstSpanBoundsForPage:(id)arg1;
- (CGRect)spanBoundsForPage:(id)arg1 atPoint:(CGPoint)arg2;
- (BOOL)containsPoint:(CGPoint)arg1 onPage:(id)arg2;
- (CGRect)boundsForPage:(id)arg1;
@property(readonly, nonatomic) NSAttributedString *attributedString;
@property(readonly, nonatomic) NSString *string;
@property(copy, nonatomic) UIColor *color;
@property(readonly, nonatomic) NSArray *pages;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithPage:(id)arg1;
- (id)initWithDocument:(id)arg1;

@end

