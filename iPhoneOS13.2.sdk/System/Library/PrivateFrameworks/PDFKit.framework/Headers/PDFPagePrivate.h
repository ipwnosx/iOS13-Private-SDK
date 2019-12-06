//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, PDFAKPageAdaptor, PDFDocument, PDFView, UIImage;

__attribute__((visibility("hidden")))
@interface PDFPagePrivate : NSObject
{
    PDFDocument *document;
    CGPDFPage page;
    CGColorRef pageBackgroundColorHint;
    PDFView *view;
    NSString *label;
    UIImage *image;
    CGImageRef cgImage;
    CGImageSource cgImageSource;
    unsigned int cgImageOrientation;
//     struct os_unfair_lock_s layoutLock;
    CGPDFLayout layout;
//     struct os_unfair_lock_s dataDetectorsLock;
    BOOL ranDataDetectors;
    NSString *text;
    NSAttributedString *attributedString;
    BOOL displaysAnnotations;
    BOOL displaysMarkups;
    NSMutableArray *annotations;
    NSLock *lock_getAnnotations;
    NSLock *lock_accessAnnotations;
    NSMutableArray *scannedAnnotations;
    long long rotation;
    CGRect mediaBox;
    CGRect cropBox;
    CGRect bleedBox;
    CGRect trimBox;
    CGRect artBox;
    BOOL bookmarked;
    BOOL isFullyConstructed;
    BOOL colorWidgetBackgrounds;
    PDFAKPageAdaptor *akPageAdaptor;
    BOOL akDidSetupRealPageModelController;
    NSMutableArray *annotationChanges;
    NSMutableSet *changedAnnotations;
    NSMutableDictionary *widgetAnnotationLookup;
    NSMutableArray *scannerResults;
    BOOL didChangeBounds;
}

// - (void).cxx_destruct;

@end

