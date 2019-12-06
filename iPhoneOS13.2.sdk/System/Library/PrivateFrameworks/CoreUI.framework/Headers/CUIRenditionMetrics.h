//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CUIRenditionMetrics : NSObject
{
    CGSize _imageSize;
    CGSize _edgeBottomLeftMargin;
    CGSize _edgeTopRightMargin;
    CGSize _contentBottomLeftMargin;
    CGSize _contentTopRightMargin;
    double _baseline;
    CGSize _auxiliary1BottomLeftMargin;
    CGSize _auxiliary1TopRightMargin;
    CGSize _auxiliary2BottomLeftMargin;
    CGSize _auxiliary2TopRightMargin;
    double _scale;
//     struct crmFlags _crmFlags;
}

- (BOOL)hasAlignmentEdgeMargins;
- (BOOL)hasOpaqueContentBounds;
- (CGRect)insetContentRectWithMetrics:(CGRect)arg1;
- (CGRect)insetRectWithMetrics:(CGRect)arg1;
- (CGRect)contentRect;
- (CGRect)edgeRect;
- (BOOL)scalesHorizontally;
- (BOOL)scalesVertically;
- (double)scale;
- (CGSize)auxiliary2TopRightMargin;
- (CGSize)auxiliary2BottomLeftMargin;
- (CGSize)auxiliary1TopRightMargin;
- (CGSize)auxiliary1BottomLeftMargin;
- (double)baseline;
- (CGSize)contentTopRightMargin;
- (CGSize)contentBottomLeftMargin;
- (CGSize)edgeTopRightMargin;
- (CGSize)edgeBottomLeftMargin;
- (CGSize)imageSize;
- (id)initWithImageSize:(CGSize)arg1 edgeBottomLeft:(CGSize)arg2 edgeTopRight:(CGSize)arg3 contentBottomLeft:(CGSize)arg4 contentTopRight:(CGSize)arg5 baseline:(double)arg6 auxiliary1BottomLeft:(CGSize)arg7 auxiliary1TopRight:(CGSize)arg8 auxiliary2BottomLeft:(CGSize)arg9 auxiliary2TopRight:(CGSize)arg10 scalesVertically:(BOOL)arg11 scalesHorizontally:(BOOL)arg12 scale:(double)arg13;
- (id)initwithImageSize:(CGSize)arg1 scale:(double)arg2;

@end

