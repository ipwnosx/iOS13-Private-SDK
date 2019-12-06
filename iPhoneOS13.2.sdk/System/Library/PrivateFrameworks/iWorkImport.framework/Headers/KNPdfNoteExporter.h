//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/KNPdfExporter.h>

@class KNPrintSegment, NSArray;

__attribute__((visibility("hidden")))
@interface KNPdfNoteExporter : KNPdfExporter
{
    BOOL _isPrintingNote;
    NSArray *_segments;
    KNPrintSegment *_currentSegment;
    double _viewScaleForPageCount;
    CGRect _unscaledClipRectForPageCount;
}

@property(nonatomic) double viewScaleForPageCount; // @synthesize viewScaleForPageCount=_viewScaleForPageCount;
@property(nonatomic) CGRect unscaledClipRectForPageCount; // @synthesize unscaledClipRectForPageCount=_unscaledClipRectForPageCount;
// - (void).cxx_destruct;
- (BOOL)drawCurrentPageInContext:(CGContextRef )arg1 viewScale:(double)arg2 unscaledClipRect:(CGRect)arg3 createPage:(BOOL)arg4;
- (CGRect)p_slideRectFromUnscaledClipRect:(CGRect)arg1 viewScale:(double)arg2 outScaledClipRect:(CGRect )arg3;
- (id)p_noteSegmentsForSlideNode:(id)arg1 withScaledClipRect:(CGRect)arg2;
- (id)p_segmentsForSlideNode:(id)arg1 withScaledClipRect:(CGRect)arg2;
- (void)p_segmentSlideNodesWithUnscaledClipRect:(CGRect)arg1 viewScale:(double)arg2;
- (void)p_segmentSlidesIfNecessary;
- (NSUInteger)pageCount;
- (BOOL)incrementPage;
- (id)currentInfos;

@end

