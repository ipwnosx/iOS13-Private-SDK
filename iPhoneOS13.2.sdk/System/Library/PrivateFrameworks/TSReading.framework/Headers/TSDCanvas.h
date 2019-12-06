//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, TSDInteractiveCanvasController, TSDLayoutController, TSKAccessController, TSKChangeNotifier, TSKDocumentRoot, TSPObjectContext;
@protocol TSDCanvasDelegate;

@interface TSDCanvas : NSObject
{
    id <TSDCanvasDelegate> mDelegate;
    TSDInteractiveCanvasController *mCanvasController;
    NSArray *mInfos;
    NSArray *mTopLevelReps;
    NSSet *mAllReps;
//     struct __CFDictionary mRepsByLayout;
    TSDLayoutController *mLayoutController;
    BOOL mIsTemporaryForLayout;
    CGSize mUnscaledSize;
    double mViewScale;
    double mContentsScale;
    BOOL mWideGamut;
    struct {
        unsigned int layout:1;
        unsigned int reps:1;
        unsigned int visibleBounds:1;
        unsigned int layers:1;
    } mInvalidFlags;
    BOOL mInLayout;
    NSArray *mPreviouslyVisibleLayouts;
    CGColorRef mBackgroundColor;
    UIEdgeInsets mContentInset;
    BOOL mClipToCanvas;
    BOOL mAllowsFontSubpixelQuantization;
    BOOL pInTearDown;
}

@property(readonly, nonatomic) BOOL isTemporaryForLayout; // @synthesize isTemporaryForLayout=mIsTemporaryForLayout;
@property(nonatomic) double viewScale; // @synthesize viewScale=mViewScale;
@property(nonatomic) CGSize unscaledSize; // @synthesize unscaledSize=mUnscaledSize;
@property(nonatomic) BOOL allowsFontSubpixelQuantization; // @synthesize allowsFontSubpixelQuantization=mAllowsFontSubpixelQuantization;
@property(nonatomic) UIEdgeInsets contentInset; // @synthesize contentInset=mContentInset;
@property(nonatomic) CGColorRef backgroundColor; // @synthesize backgroundColor=mBackgroundColor;
@property(readonly, nonatomic) TSDLayoutController *layoutController; // @synthesize layoutController=mLayoutController;
@property(copy, nonatomic) NSArray *infosToDisplay; // @synthesize infosToDisplay=mInfos;
@property(nonatomic) id <TSDCanvasDelegate> delegate; // @synthesize delegate=mDelegate;
@property(nonatomic) BOOL pInTearDown; // @synthesize pInTearDown;
- (void)p_removeAllReps;
- (BOOL)p_updateRepsFromLayouts;
- (void)p_layoutWithReadLock;
- (CGRect)p_bounds;
- (CGImageRef)i_newImageInContext:(CGContextRef )arg1 bounds:(CGRect)arg2 integralBounds:(CGRect)arg3 distortedToMatch:(BOOL)arg4;
- (CGContextRef )i_createContextToDrawImageInScaledRect:(CGRect)arg1 withTargetIntegralSize:(CGSize)arg2 returningBounds:(CGRect )arg3 integralBounds:(CGRect )arg4;
- (CGImageRef)i_imageInScaledRect:(CGRect)arg1 withTargetIntegralSize:(CGSize)arg2 distortedToMatch:(BOOL)arg3;
- (CGImageRef)i_imageInScaledRect:(CGRect)arg1;
- (CGImageRef)i_image;
- (void)i_clipsImagesToBounds:(BOOL)arg1;
- (void)i_drawRepsInContext:(CGContextRef )arg1;
- (void)i_drawRepsInContext:(CGContextRef )arg1 distort:(CGAffineTransform)arg2;
- (void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(CGContextRef )arg2;
- (void)i_drawBackgroundInContext:(CGContextRef )arg1 bounds:(CGRect)arg2;
- (void)i_drawBackgroundInContext:(CGContextRef )arg1;
- (CGRect)i_clipRectForCreatingRepsFromLayouts;
- (CGRect)i_unscaledRectOfLayouts;
- (CGRect)i_approximateScaledFrameOfEditingMenuAtPoint:(CGPoint)arg1;
- (void)i_unregisterRep:(id)arg1;
- (void)i_registerRep:(id)arg1;
- (BOOL)p_expandHitRegionOfPoint:(CGPoint)arg1 forRep:(id)arg2 smallRepOutset:(double)arg3 forShortestDistance:(double )arg4;
- (BOOL)p_shouldRep:(id)arg1 countAsClosestSmallRepForSizeLimit:(double)arg2;
- (id)hitRep:(CGPoint)arg1 inTopLevelReps:(id)arg2 smallRepOutset:(double)arg3 withGesture:(id)arg4 passingTest:(CDUnknownBlockType)arg5;
- (CGRect)visibleUnscaledRectForClippingReps;
- (CGSize)convertBoundsToUnscaledSize:(CGSize)arg1;
- (CGSize)convertUnscaledToBoundsSize:(CGSize)arg1;
- (CGPoint)convertBoundsToUnscaledPoint:(CGPoint)arg1;
- (CGPoint)convertUnscaledToBoundsPoint:(CGPoint)arg1;
- (CGRect)convertBoundsToUnscaledRect:(CGRect)arg1;
- (CGRect)convertUnscaledToBoundsRect:(CGRect)arg1;
@property(readonly, nonatomic) BOOL canvasIsWideGamut;
- (void)i_setCanvasIsWideGamut:(BOOL)arg1;
@property(readonly, nonatomic) double contentsScale;
- (void)i_setContentsScale:(double)arg1;
- (BOOL)isDrawingIntoPDF;
- (BOOL)shouldSuppressBackgrounds;
- (BOOL)shouldShowInstructionalText;
- (BOOL)shouldShowTextOverflowGlyphs;
- (BOOL)isPrinting;
@property(readonly, nonatomic) BOOL isCanvasInteractive;
- (BOOL)spellCheckingSuppressed;
- (BOOL)spellCheckingSupported;
- (id)layoutGeometryProviderForLayout:(id)arg1;
@property(readonly, nonatomic) BOOL supportsAdaptiveLayout;
- (BOOL)i_needsLayout;
- (void)layoutIfNeeded;
- (void)invalidateLayers;
- (void)invalidateVisibleBounds;
- (void)invalidateReps;
- (void)layoutInvalidated;
- (void)recreateAllLayoutsAndReps;
- (id)allReps;
- (id)topLevelReps;
- (id)repForLayout:(id)arg1;
- (void)i_updateInfosInLayoutController;
- (void)i_setInfosToDisplay:(id)arg1 updatingLayoutController:(BOOL)arg2;
@property(readonly, nonatomic) TSDInteractiveCanvasController *canvasController;
- (void)i_setCanvasController:(id)arg1;
@property(readonly, nonatomic) TSKAccessController *accessController;
@property(readonly, nonatomic) TSKChangeNotifier *changeNotifier;
@property(readonly, nonatomic) TSPObjectContext *objectContext;
@property(readonly, nonatomic) TSKDocumentRoot *documentRoot;
- (void)dealloc;
- (void)teardown;
- (id)initForTemporaryLayout;
- (id)init;
- (id)textRendererForLayer:(id)arg1 context:(CGContextRef )arg2;

@end

