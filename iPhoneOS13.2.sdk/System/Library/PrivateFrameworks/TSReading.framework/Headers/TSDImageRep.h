//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDMediaRep.h>

#import <TSReading/CALayerDelegate-Protocol.h>
#import <TSReading/TSDMagicMoveMatching-Protocol.h>

@class CALayer, CAShapeLayer, NSCache, NSMutableArray, NSObject, NSRecursiveLock, TSDImageRepSizingState, TSDInstantAlphaTracker, TSDLayoutGeometry;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface TSDImageRep : TSDMediaRep <CALayerDelegate, TSDMagicMoveMatching>
{
    TSDLayoutGeometry *mLastImageGeometryInRoot;
    TSDLayoutGeometry *mLastMaskGeometryInRoot;
    CGAffineTransform mLastLayoutToImageTransform;
    CGRect mFrameInUnscaledCanvasRelativeToSuper;
    BOOL mFrameInUnscaledCanvasIsValid;
    CALayer *mContentsLayer;
    CAShapeLayer *mMaskPathLayer;
    CAShapeLayer *mIAMaskLayer;
    CAShapeLayer *mMaskSublayer;
    CGAffineTransform mLastPictureFrameLayerTransform;
    BOOL mDirectlyManagesLayerContent;
    BOOL mShowImageHighlight;
    BOOL mInInstantAlphaMode;
    TSDInstantAlphaTracker *mInstantAlphaTracker;
    CGImageRef mInstantAlphaImage;
    CGAffineTransform mBaseMaskLayoutTransform;
    NSRecursiveLock *mLayerUpdateAndSizingStateLock;
    TSDImageRepSizingState *mSizingState;
    BOOL mSizingStateReady;
    NSObject<OS_dispatch_queue> *mSizedImageAccessQueue;
    CGImageRef mSizedImage;
    CGSize mSizedImageSize;
    long long mSizedImageOrientation;
    BOOL mSizedImageHasMaskBakedIn;
    BOOL mSizedImageHasAdjustmentsBakedIn;
    CGPathRef mSizedImageMaskPath;
    CGImageRef mCachedSizedImage;
    CGSize mCachedSizedImageSize;
    long long mCachedSizedImageOrientation;
    NSCache *mHitTestCache;
    long long mHitTestCacheOnce;
    NSMutableArray *mUpdateFromLayoutBlocks;
    NSObject<OS_dispatch_semaphore> *mUpdateFromLayoutBlocksLock;
    NSUInteger mImageSizingDisabledCount;
}

+ (CGPathRef)p_newPathToBakeIntoSizedImageForSize:(CGSize)arg1 withImageLayout:(id)arg2 orientation:(long long)arg3;
+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2;
- (void)p_popoverViewPresented:(id)arg1;
- (void)p_hitCacheSetCachedValue:(BOOL)arg1 forPoint:(CGPoint)arg2;
- (BOOL)p_hitCacheGetCachedValue:(BOOL )arg1 forPoint:(CGPoint)arg2;
- (void)p_invalidateHitTestCache;
- (BOOL)shouldShowMediaReplaceUI;
- (double)additionalRotationForKnobOrientation;
- (void)addKnobsToArray:(id)arg1;
- (void)updatePositionsOfKnobs:(id)arg1;
- (BOOL)shouldCreateSelectionKnobs;
- (BOOL)shouldShowSmartMaskKnobs;
- (void)generateSizedImageOnBackgroundThread;
- (void)useCachedSizedImage:(id)arg1;
- (id)newCachedSizedImageWithNaturalSize;
- (id)newCachedSizedImage;
- (void)cacheImageAtCurrentSize;
- (void)p_takeSizedImageFromCache;
- (BOOL)p_shouldRenderWithMaskToBounds;
- (BOOL)p_shouldBakeMaskIntoSizedImage;
- (void)p_invalidateSizedImageFromQueue;
- (void)p_invalidateSizedImage;
- (void)p_takeSizedImageFromState;
- (BOOL)p_takeSizedImageFromState:(id)arg1;
- (void)p_takeSizedImageFromStateIfReady;
- (void)i_willEnterForeground;
- (void)p_generateSizedImage:(id)arg1;
- (void)p_startSizing;
- (void)wideGamutValueDidChange;
- (void)p_generateSizedImageIfNecessary;
- (void)popDisableImageSizing;
- (void)pushDisableImageSizing;
- (BOOL)p_okayToGenerateSizedImage;
- (CGSize)p_desiredSizedImageSize;
- (BOOL)shouldShowShadow;
- (BOOL)canDrawShadowInOneStepWithChildren:(BOOL)arg1;
- (BOOL)p_drawsInOneStep;
- (void)p_updateMaskSublayersForMaskEditMode;
- (void)p_createMaskLayerForLayer:(id)arg1;
- (void)p_disposeMaskLayer;
- (void)p_disposeStrokeLayer;
- (id)p_validatedThumbnailImageProvider;
- (id)p_validatedBitmapImageProvider;
- (id)p_validatedImageProvider;
- (id)p_imageProvider;
- (id)p_imageData;
- (id)textureForContext:(id)arg1;
- (void)viewScaleDidChange;
- (id)additionalLayersOverLayer;
- (void)p_updateStrokeLayerForStroke:(id)arg1 repLayer:(id)arg2;
- (void)p_updateMaskLayer:(id)arg1 forRepLayer:(id)arg2 shouldIncludeMask:(BOOL)arg3 shouldIncludeInstantAlpha:(BOOL)arg4;
- (BOOL)p_shouldMaskWithFrameLayers;
- (void)didUpdateLayer:(id)arg1;
- (void)willUpdateLayer:(id)arg1;
- (void)updateLayerGeometryFromLayout:(id)arg1;
- (void)p_getAliasedValuesForMaskToBoundsDirectLayerFrame:(out CGRect )arg1 transform:(out CGAffineTransform )arg2;
- (CGRect)frameInUnscaledCanvas;
- (CGImageRef)p_newImageByApplyingAdjustmentsToImage:(CGImageRef)arg1 alreadyEnhanced:(BOOL)arg2;
- (BOOL)p_directlyManagesContentForLayer:(id)arg1;
- (long long)p_orientationForDirectlyManagedLayer;
- (CGImageRef)p_imageForDirectlyManagedLayer:(id)arg1;
- (void)p_updateDirectlyManagesLayerContentForLayer:(id)arg1;
- (BOOL)directlyManagesLayerContent;
- (void)didCreateLayer:(id)arg1;
- (void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(CGContextRef )arg2;
- (void)p_drawInContext:(CGContextRef )arg1 withContent:(BOOL)arg2 withStroke:(BOOL)arg3 withOpacity:(double)arg4 withMask:(BOOL)arg5 withIAMask:(BOOL)arg6 forLayer:(BOOL)arg7 forShadow:(BOOL)arg8 forHitTest:(BOOL)arg9;
- (BOOL)canDrawInParallel;
- (id)imageOfStroke:(CGRect )arg1;
- (void)drawInContextWithoutEffects:(CGContextRef )arg1 withContent:(BOOL)arg2 withStroke:(BOOL)arg3 withOpacity:(BOOL)arg4 forAlphaOnly:(BOOL)arg5 drawChildren:(BOOL)arg6;
- (void)drawInLayerContext:(CGContextRef )arg1;
- (id)contentsLayer;
- (CGPoint)centerForRotation;
- (BOOL)shouldShowDragHUD;
- (BOOL)isDraggable;
- (BOOL)shouldAllowReplacementFromPaste;
- (CGAffineTransform)transformForHighlightLayer;
- (CGRect)boundsForHighlightLayer;
- (CGPoint)positionOfStandardKnob:(id)arg1 forBounds:(CGRect)arg2;
- (CGRect)boundsForStandardKnobs;
- (CGRect)targetRectForEditMenu;
- (BOOL)wantsToDistortWithImagerContext;
- (id)hitRepChrome:(CGPoint)arg1;
- (id)overlayLayers;
- (void)willBeginReadMode;
- (void)layoutInRootChangedFrom:(id)arg1 to:(id)arg2 translatedOnly:(BOOL)arg3;
- (void)updateFromLayout;
- (void)processChangedProperty:(int)arg1;
- (void)processChanges:(id)arg1;
- (id)pathSourceForSelectionHighlightBehavior;
- (BOOL)shouldShowSelectionHighlight;
- (BOOL)shouldIgnoreEditMenuTapAtPoint:(CGPoint)arg1 withRecognizer:(id)arg2;
- (BOOL)handleDoubleTapAtPoint:(CGPoint)arg1;
- (int)dragTypeAtCanvasPoint:(CGPoint)arg1;
- (BOOL)containsPoint:(CGPoint)arg1;
- (void)becameNotSelected;
- (void)willBeRemoved;
- (void)p_canvasSelectionDidChange:(id)arg1;
- (void)unhighlightImage;
- (void)highlightImage;
- (id)maskLayout;
- (id)maskInfo;
- (id)imageLayout;
- (id)imageInfo;
@property(readonly, nonatomic) CGImageRef imageRef;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

@end

