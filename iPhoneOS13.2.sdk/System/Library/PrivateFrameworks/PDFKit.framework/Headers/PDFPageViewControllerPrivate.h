//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PDFPage, PDFPageView, PDFRenderingProperties, PDFTextInputView, PDFView, UIImage, UIScrollView;

__attribute__((visibility("hidden")))
@interface PDFPageViewControllerPrivate : NSObject
{
    PDFRenderingProperties *renderingProperties;
    PDFView *pdfView;
    UIEdgeInsets pageMargins;
    PDFPage *page;
    UIScrollView *scrollView;
    PDFTextInputView *pageViewContainerView;
    PDFPageView *pageView;
    double minScale;
    double maxScale;
    UIImage *backgroundImage;
    int backgroundQuality;
}

// - (void).cxx_destruct;

@end

