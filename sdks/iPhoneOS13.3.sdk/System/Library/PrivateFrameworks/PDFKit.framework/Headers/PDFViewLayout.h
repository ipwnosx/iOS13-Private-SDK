//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PDFDocument, PDFViewLayoutPrivate;

@interface PDFViewLayout : NSObject
{
    PDFViewLayoutPrivate *_private;
}

// - (void).cxx_destruct;
- (CGRect)normalizedPageBounds:(id)arg1;
- (void)generateInternalDocumentGeometry;
- (id)facingPageForPage:(id)arg1;
- (void)invalidateInternalDocumentGeometry;
- (long long)functionalDisplayMode;
- (CGPoint)convertPoint:(CGPoint)arg1 fromPage:(id)arg2;
- (CGRect)convertRect:(CGRect)arg1 fromPage:(id)arg2 forScaleFactor:(double)arg3;
- (CGPoint)convertPoint:(CGPoint)arg1 fromPage:(id)arg2 forScaleFactor:(double)arg3;
- (CGPoint)convertPoint:(CGPoint)arg1 toPage:(id)arg2;
- (CGPoint)convertPoint:(CGPoint)arg1 toPage:(id)arg2 forScaleFactor:(double)arg3;
- (id)pageNearestPoint:(CGPoint)arg1 currentPage:(id)arg2;
- (CGRect)boundsForPage:(id)arg1;
- (id)visiblePagesInBounds:(CGRect)arg1 currentPage:(id)arg2;
- (NSRange)visiblePageRangeInBounds:(CGRect)arg1 currentPage:(id)arg2;
- (CGSize)contentSizeWithCurrentPage:(id)arg1;
@property(nonatomic) __weak PDFDocument *document;
@property(nonatomic) __weak id delegate;
- (void)dealloc;
- (id)init;

@end

