//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSARenderingExporter.h>

#import <iWorkImport/TSDCanvasDelegate-Protocol.h>

@class KNOffscreenController, KNPdfHyperlinkController, KNSlideNode, NSArray, NSMutableArray, NSOrderedSet, NSString;

__attribute__((visibility("hidden")))
@interface KNRenderingExporter : TSARenderingExporter <TSDCanvasDelegate>
{
    KNSlideNode *_currentSlideNode;
    NSMutableArray *_currentSlidesOnPage;
    NSUInteger _currentBuildIndex;
    KNOffscreenController *_offscreenController;
    KNPdfHyperlinkController *_hyperlinkController;
    NSUInteger _slidesPerPage;
    NSUInteger _currentPage;
    NSString *_printTitle;
    double _pageMargin;
    NSOrderedSet *_selectedSlideNodes;
    id _printView;
    BOOL _printingBuilds;
    BOOL _printingBackgrounds;
    BOOL _printingSlideBackgroundsWithAlpha;
    BOOL _printingBorders;
    BOOL _printingSlideNumbers;
    BOOL _printingDate;
    BOOL _printingSkippedSlides;
    BOOL _printingSelectedSlides;
    BOOL _printingPageMargins;
    BOOL _printingDraftQuality;
    long long _printLayout;
}

@property(nonatomic) id printView; // @synthesize printView=_printView;
@property(copy, nonatomic) NSString *printTitle; // @synthesize printTitle=_printTitle;
@property(nonatomic) double pageMargin; // @synthesize pageMargin=_pageMargin;
@property(nonatomic, getter=isPrintingDraftQuality) BOOL printingDraftQuality; // @synthesize printingDraftQuality=_printingDraftQuality;
@property(nonatomic, getter=isPrintingPageMargins) BOOL printingPageMargins; // @synthesize printingPageMargins=_printingPageMargins;
@property(nonatomic, getter=isPrintingSelectedSlides) BOOL printingSelectedSlides; // @synthesize printingSelectedSlides=_printingSelectedSlides;
@property(nonatomic, getter=isPrintingSkippedSlides) BOOL printingSkippedSlides; // @synthesize printingSkippedSlides=_printingSkippedSlides;
@property(nonatomic, getter=isPrintingDate) BOOL printingDate; // @synthesize printingDate=_printingDate;
@property(nonatomic, getter=isPrintingSlideNumbers) BOOL printingSlideNumbers; // @synthesize printingSlideNumbers=_printingSlideNumbers;
@property(nonatomic, getter=isPrintingBorders) BOOL printingBorders; // @synthesize printingBorders=_printingBorders;
@property(nonatomic, getter=isPrintingSlideBackgroundsWithAlpha) BOOL printingSlideBackgroundsWithAlpha; // @synthesize printingSlideBackgroundsWithAlpha=_printingSlideBackgroundsWithAlpha;
@property(nonatomic, getter=isPrintingBackgrounds) BOOL printingBackgrounds; // @synthesize printingBackgrounds=_printingBackgrounds;
@property(nonatomic, getter=isPrintingBuilds) BOOL printingBuilds; // @synthesize printingBuilds=_printingBuilds;
@property(nonatomic) long long printLayout; // @synthesize printLayout=_printLayout;
@property(copy, nonatomic) NSOrderedSet *selectedSlideNodes; // @synthesize selectedSlideNodes=_selectedSlideNodes;
@property(readonly, nonatomic) NSUInteger currentBuildIndex; // @synthesize currentBuildIndex=_currentBuildIndex;
@property(retain, nonatomic) KNSlideNode *currentSlideNode; // @synthesize currentSlideNode=_currentSlideNode;
@property(nonatomic) NSUInteger slidesPerPage; // @synthesize slidesPerPage=_slidesPerPage;
@property(retain, nonatomic) KNOffscreenController *offscreenController; // @synthesize offscreenController=_offscreenController;
// - (void).cxx_destruct;
- (BOOL)isCanvasDrawingIntoPDF:(id)arg1;
- (BOOL)shouldSuppressBackgrounds;
- (BOOL)isPrintingCanvas;
- (id)documentRoot;
- (id)p_slideNumberStringForSlideNode:(id)arg1 buildIndex:(NSUInteger)arg2;
- (NSUInteger)p_slideNumberForSlideNode:(id)arg1;
- (id)quickLookSlideNodes;
- (long long)pageIndexFromQuickLookSlideNode:(id)arg1;
- (void)enableRenderAllContent;
- (void)setOptions:(id)arg1;
- (void)drawInView:(id)arg1 rect:(CGRect)arg2;
@property(readonly, nonatomic) BOOL usesViewForDrawing;
@property(readonly, nonatomic) NSUInteger currentSlideNumber;
- (void)addAnchorPointForSlide:(id)arg1 context:(CGContextRef )arg2;
- (BOOL)drawImageForSlideNode:(id)arg1 andEvent:(NSUInteger)arg2 slideSize:(CGSize)arg3 intoRect:(CGRect)arg4 context:(CGContextRef )arg5 createPage:(BOOL)arg6;
- (void)drawSlideNumberForNode:(id)arg1 buildIndex:(NSUInteger)arg2 forRect:(CGRect)arg3 context:(CGContextRef )arg4 position:(long long)arg5;
- (void)drawNSStringDateForRect:(CGRect)arg1 context:(CGContextRef )arg2;
- (void)drawDateForRect:(CGRect)arg1 context:(CGContextRef )arg2;
@property(readonly, nonatomic) double spaceForSlideNumbers;
@property(readonly, nonatomic) double heightOfPrintedText;
- (double)progressForCurrentPage;
- (void)drawBorderForRect:(CGRect)arg1 context:(CGContextRef )arg2;
@property(readonly, nonatomic) NSArray *slidesForPrinting;
- (id)slideIndexesToPrint;
@property(readonly, nonatomic) NSUInteger rangeEnd;
@property(readonly, nonatomic) NSUInteger rangeStart;
- (BOOL)incrementPage;
- (BOOL)preparePage:(NSUInteger)arg1;
- (NSUInteger)pageCount;
- (void)teardown;
- (void)setup;
- (id)currentInfos;
- (CGRect)boundsRect;
- (BOOL)exportToURL:(id)arg1 pageNumber:(NSUInteger)arg2 delegate:(id)arg3 error:(id )arg4;
- (BOOL)exportToURL:(id)arg1 delegate:(id)arg2 error:(id )arg3;
- (id)initWithDocumentRoot:(id)arg1;

@end

