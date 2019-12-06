//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSIndexSet, NSLayoutManager, NSLock, NSMutableDictionary, NSString, NSTextStorage, NSUUID, PDFAKAnnotationAdaptor, PDFAccessibilityNode, PDFAnnotation, PDFPage, UIColor;
@protocol NSCopying;

__attribute__((visibility("hidden")))
@interface PDFAnnotationPrivateVars : NSObject
{
    BOOL loggingEnabled;
    BOOL shouldExport;
    PDFPage *page;
    CGPDFDictionary sourceDictionary;
//     struct __CFDictionary dictionaryRef;
    NSUUID *pdfAnnotationUUID;
    CGPDFAnnotation cgAnnotation;
    NSMutableDictionary *PDFAnnotationDictionary;
    NSDictionary *PDFAnnotationKeyMapping;
    NSMutableDictionary *internalPDFAnnotationDictionary;
    CGPDFForm normalAppearance;
    CGPDFForm rolloverAppearance;
    CGPDFForm downAppearance;
    CGPDFForm normalOffAppearance;
    CGPDFForm rolloverOffAppearance;
    CGPDFForm downOffAppearance;
    BOOL saveAppearance;
    BOOL isSelected;
    BOOL isHighlighted;
    NSIndexSet *quadPointsIndexSet;
    PDFAnnotation *parent;
    PDFAnnotation *popup;
    CGPDFDictionary popupDictionary;
    BOOL popupDrawCloseWidget;
    BOOL popupDrawText;
    CGPathRef cgPaths;
    NSLock *pathLock;
    BOOL isSignature;
    BOOL shouldBurnIn;
    NSString *widgetOnStateString;
    id control;
    UIColor *mouseHoverBackgroundColor;
    NSLayoutManager *layoutManager;
    NSTextStorage *textStorage;
    UIEdgeInsets textInsets;
    BOOL restoreLinePoints;
    BOOL restoreQuadPoints;
    CGPoint startPoint;
    CGPoint endPoint;
    NSArray *quadPoints;
    PDFAccessibilityNode *accessibilityNode;
    double scaleFactor;
    BOOL isFullyConstructed;
    BOOL constructingDictionaryRef;
    PDFAKAnnotationAdaptor *akAnnotationAdaptor;
    id <NSCopying> akAnnotationForCopying;
}

// - (void).cxx_destruct;

@end

