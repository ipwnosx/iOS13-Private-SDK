//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDStroke.h>

@class NSString, TSDFrameSpec;

@interface TSDFrame : TSDStroke
{
    TSDFrameSpec *mSpec;
    NSString *mFrameName;
    double mAssetScale;
    BOOL mScaledSizesValid;
    double mLeftWidth;
    double mRightWidth;
    double mTopHeight;
    double mBottomHeight;
    CGSize mAdornmentSize;
}

+ (Class)mutableClass;
@property(readonly, nonatomic) TSDFrameSpec *frameSpec; // @synthesize frameSpec=mSpec;
@property(readonly, nonatomic) double assetScale; // @synthesize assetScale=mAssetScale;
- (CGSize)p_minimumRenderedSize;
- (void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef )arg2;
- (void)paintPath:(CGPathRef)arg1 wantsInteriorStroke:(BOOL)arg2 inContext:(CGContextRef )arg3 useFastDrawing:(BOOL)arg4;
- (BOOL)drawsInOneStep;
- (BOOL)prefersToApplyToCAShapeLayerDuringManipulation;
- (BOOL)canApplyToCAShapeLayer;
- (BOOL)canApplyDirectlyToRepCALayer;
- (BOOL)isNullStroke;
// - (struct _TSDStrokeOutsets)outsets;
- (BOOL)shouldRenderForSizeIncludingCoverage:(CGSize)arg1;
- (BOOL)shouldRender;
- (BOOL)supportsLineOptions;
- (BOOL)supportsColor;
- (BOOL)supportsPattern;
- (BOOL)isFrame;
- (CGRect)coverageRectWithoutAdornment:(CGRect)arg1;
- (CGRect)coverageRect:(CGRect)arg1;
- (CGRect)p_coverageRectWithAdornment:(CGRect)arg1;
- (CGRect)p_coverageRectWithoutAdornment:(CGRect)arg1;
- (BOOL)hasMask;
- (double)minimumAssetScale;
- (id)archivableFrameName;
- (id)frameName;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)initWithFrameName:(id)arg1;
- (id)initWithFrameSpec:(id)arg1;
- (id)initWithFrameSpec:(id)arg1 assetScale:(double)arg2;
- (id)initWithFrameSpec:(id)arg1 assetScale:(double)arg2 archivableFrameName:(id)arg3;
- (id)strokeByTransformingByTransform:(CGAffineTransform)arg1;
- (BOOL)i_willRenderForRect:(CGRect)arg1;
- (CGRect)i_adornmentRectForRect:(CGRect)arg1;
- (double)i_bottomHeight;
- (double)i_topHeight;
- (double)i_rightWidth;
- (double)i_leftWidth;

@end

