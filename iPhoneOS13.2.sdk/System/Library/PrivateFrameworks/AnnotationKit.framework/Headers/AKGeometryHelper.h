//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AKPageController;

@interface AKGeometryHelper : NSObject
{
    AKPageController *_pageController;
}

+ (CGRect)_rectForRect:(CGRect)arg1 alignToContent:(BOOL)arg2 alignToScreenUsingPageController:(id)arg3 orAlignToBitmapContext:(CGContextRef )arg4 usingAnnotation:(id)arg5 withAlignmentBlock:(CDUnknownBlockType)arg6;
+ (CGPoint)_alignedPointForPoint:(CGPoint)arg1 alignToContent:(BOOL)arg2 alignToScreenUsingPageController:(id)arg3 orAlignToBitmapContext:(CGContextRef )arg4 usingAnnotation:(id)arg5;
+ (CGRect)_strokeAlignedRectForRect:(CGRect)arg1 withStrokeWidth:(double)arg2 shouldAlignStrictlyToScreen:(BOOL)arg3 alignToScreenUsingPageController:(id)arg4 orAlignToBitmapContext:(CGContextRef )arg5 usingAnnotation:(id)arg6;
+ (CGRect)_alignedStableRectForRect:(CGRect)arg1 alignToContent:(BOOL)arg2 alignToScreenUsingPageController:(id)arg3 orAlignToBitmapContext:(CGContextRef )arg4 usingAnnotation:(id)arg5;
+ (CGRect)renderingAlignedTextRectForRect:(CGRect)arg1 alignToScreenUsingPageController:(id)arg2 orAlignToContext:(CGContextRef )arg3 usingAnnotation:(id)arg4;
+ (CGRect)renderingStrokeAlignedRectForRect:(CGRect)arg1 withStrokeWidth:(double)arg2 alignToScreenUsingPageController:(id)arg3 orAlignToContext:(CGContextRef )arg4 usingAnnotation:(id)arg5;
+ (CGRect)convertRect:(CGRect)arg1 fromScreenPointsToView:(id)arg2;
+ (CGRect)convertRect:(CGRect)arg1 fromViewToScreenPixels:(id)arg2 useNativeScale:(BOOL)arg3;
+ (CGRect)boundsOfRotatedRectangle:(CGRect)arg1 angle:(double)arg2;
+ (id)_cornersOfRotatedRectangle:(CGRect)arg1 angle:(double)arg2;
+ (CGAffineTransform)rotationTransformAroundPoint:(CGPoint)arg1 withAngle:(double)arg2;
+ (CGAffineTransform)rotationTransformForRect:(CGRect)arg1 withAngle:(double)arg2;
+ (CGAffineTransform)rotationTransformForRectangularAnnotation:(id)arg1 hasRotation:(BOOL )arg2;
+ (BOOL)annotationHasRotation:(id)arg1 outAngle:(double )arg2;
+ (CGAffineTransform)horizontalFlipTransformForRect:(CGRect)arg1;
+ (CGAffineTransform)verticalFlipTransformForRect:(CGRect)arg1;
+ (CGRect)effectiveDrawingBoundsForAnnotation:(id)arg1 forDisplay:(BOOL)arg2 pageControllerOrNil:(id)arg3 outScaleFactor:(double )arg4;
+ (CGRect)expandCGRect:(CGRect)arg1 toContainPoint:(CGPoint)arg2;
+ (CGPoint)compareVectorDirectionsFirstVector:(CGPoint)arg1 secondVector:(CGPoint)arg2;
+ (CGPoint)pointAtAngle:(double)arg1 inCircleWithCenter:(CGPoint)arg2 andRadius:(double)arg3;
+ (double)distanceBetweenPoints:(CGPoint)arg1 andPoint:(CGPoint)arg2;
+ (double)angleBetweenPoint:(CGPoint)arg1 andPoint:(CGPoint)arg2;
+ (double)angleOfVector:(CGVector)arg1;
+ (double)lengthOfVector:(CGVector)arg1;
+ (CGVector)normalizeVector:(CGVector)arg1;
+ (CGPoint)normalizeVectorPoint:(CGPoint)arg1;
+ (NSUInteger)draggableArea:(NSUInteger)arg1 convertedForExif:(long long)arg2;
+ (BOOL)exifOrientationHasReversedAxes:(long long)arg1;
+ (BOOL)exifOrientationHasFlip:(long long)arg1;
+ (CGRect)convertScreenToModelOrientationForRect:(CGRect)arg1 withPageController:(id)arg2;
+ (CGPoint)convertScreenToModelOrientationForPoint:(CGPoint)arg1 relativeToRect:(CGRect)arg2 withPageController:(id)arg3;
+ (CGRect)convertModelToScreenOrientationForRect:(CGRect)arg1 withPageController:(id)arg2;
+ (CGPoint)convertModelToScreenOrientationForPoint:(CGPoint)arg1 relativeToRect:(CGRect)arg2 withPageController:(id)arg3;
+ (CGPathRef)newPathWithPath:(CGPathRef)arg1 applyingExifOrientation:(long long)arg2 aboutCenter:(CGPoint)arg3;
+ (CGRect)adjustRect:(CGRect)arg1 forExifOrientation:(long long)arg2 aboutCenter:(CGPoint)arg3;
+ (CGPoint)adjustPoint:(CGPoint)arg1 forExifOrientation:(long long)arg2 aboutCenter:(CGPoint)arg3;
+ (void)adjustOriginalExifOrientationOnAnnotation:(id)arg1 flatteningOriginalModelExif:(long long)arg2;
+ (CGAffineTransform)affineTransformForExifOrientation:(long long)arg1 aboutCenter:(CGPoint)arg2;
+ (CGAffineTransform)affineTransformFlatteningOriginalModelExif:(long long)arg1 withOriginalModelSize:(CGSize)arg2;
+ (CGAffineTransform)affineTransformRecenteringAboutOriginForExifOrientation:(long long)arg1 withOriginalSize:(CGSize)arg2;
+ (CGAffineTransform)_rawAffineTransformForExifOrientation:(long long)arg1;
+ (long long)concatExifOrientation:(long long)arg1 withExifOrientation:(long long)arg2;
+ (long long)inverseExifOrientation:(long long)arg1;
+ (long long)exifOrientationWithConversionBlock:(CDUnknownBlockType)arg1;
+ (CGPoint)flipPointVertically:(CGPoint)arg1 inRect:(CGRect)arg2;
+ (id)verticesOfPolygonWithPointCount:(NSUInteger)arg1 inRect:(CGRect)arg2 rotation:(double)arg3 flippedVertically:(BOOL)arg4;
+ (CGPoint)tangentOfEllipse:(CGRect)arg1 throughRayWithFirstPoint:(CGPoint)arg2 goingThrough:(CGPoint)arg3;
+ (void)tangentPointsToEllipse:(CGRect)arg1 fromPoint:(CGPoint)arg2 firstOutPoint:(CGPoint )arg3 secondOutPoint:(CGPoint )arg4;
+ (void)intersectCircleAtPoint:(CGPoint)arg1 withRadius:(double)arg2 withCircleAtPoint:(CGPoint)arg3 withRadius:(double)arg4 firstOutPoint:(CGPoint )arg5 secondOutPoint:(CGPoint )arg6;
+ (BOOL)isPoint:(CGPoint)arg1 onEllipse:(CGRect)arg2;
+ (CGAffineTransform)centeredCircleToEllipseTransform:(CGRect)arg1;
+ (double)radiusOfCenteredCircleFor:(CGRect)arg1;
+ (CGAffineTransform)ellipseToCenteredCircleTransform:(CGRect)arg1;
+ (BOOL)isPointOnLeft:(CGPoint)arg1 ofRayWithFirstPoint:(CGPoint)arg2 andSecondPoint:(CGPoint)arg3;
+ (CGPoint)projectPoint:(CGPoint)arg1 ontoRayWithFirstPoint:(CGPoint)arg2 andSecondPoint:(CGPoint)arg3;
+ (CGPoint)intersectLineSegmentStartingAt:(CGPoint)arg1 ending:(CGPoint)arg2 withRect:(CGRect)arg3 andRoundedCornerRadius:(double)arg4;
+ (CGPoint)_farthestPointFrom:(CGPoint)arg1 inArray:(id)arg2;
+ (void)_collectIntersectionsOfLineSegmentStartingAt:(CGPoint)arg1 endingAt:(CGPoint)arg2 withCornerCirclesOfRoundedRect:(CGRect)arg3 withRadius:(double)arg4 results:(id)arg5;
+ (void)_checkIntersectionOfLineSegmentStartingAt:(CGPoint)arg1 endingAt:(CGPoint)arg2 withCircleAt:(CGPoint)arg3 andRadius:(double)arg4 results:(id)arg5;
+ (CGPoint)intersectLineSegmentStartingAt:(CGPoint)arg1 ending:(CGPoint)arg2 withAnotherSegmentStartingAt:(CGPoint)arg3 ending:(CGPoint)arg4;
+ (CGPoint)intersectLineSegmentStartingAt:(CGPoint)arg1 ending:(CGPoint)arg2 withEllipseOfRect:(CGRect)arg3 farthestResult:(BOOL)arg4;
+ (CGPoint)intersectRayStartingAt:(CGPoint)arg1 ending:(CGPoint)arg2 withEllipseOfRect:(CGRect)arg3 farthestResult:(BOOL)arg4;
+ (CGPoint)intersectLineSegmentStartingAt:(CGPoint)arg1 ending:(CGPoint)arg2 withCircleWithCenter:(CGPoint)arg3 andRadius:(double)arg4 farthestResult:(BOOL)arg5;
+ (CGPoint)intersectRayStartingAt:(CGPoint)arg1 ending:(CGPoint)arg2 withCircleWithCenter:(CGPoint)arg3 andRadius:(double)arg4 farthestResult:(BOOL)arg5;
+ (double)scaleOfTransform:(CGAffineTransform)arg1;
+ (CGPoint)projectVector:(CGPoint)arg1 ontoAspectVector:(CGPoint)arg2;
+ (CGPoint)snapVector:(CGPoint)arg1 toDiagonalForAspectRatio:(double)arg2 ignoreWidth:(BOOL)arg3 ignoreHeight:(BOOL)arg4;
+ (CGPoint)snapVectorTo45Degrees:(CGPoint)arg1;
+ (CGRect)constrainRect:(CGRect)arg1 withinRect:(CGRect)arg2;
+ (CGPoint)centerOfRect:(CGRect)arg1;
+ (CGRect)rectForSize:(CGSize)arg1 inRect:(CGRect)arg2;
+ (CGRect)rectWithSize:(CGSize)arg1 centeredAtPoint:(CGPoint)arg2;
+ (CGRect)stableIntegralRectForRect:(CGRect)arg1;
+ (CGRect)integralRect:(CGRect)arg1 withOptions:(NSUInteger)arg2;
+ (BOOL)isUnpresentablePoint:(CGPoint)arg1;
+ (BOOL)isUnpresentableSize:(CGSize)arg1;
+ (BOOL)rectHasZeroSize:(CGRect)arg1;
+ (BOOL)isUnpresentableRect:(CGRect)arg1;
@property __weak AKPageController *pageController; // @synthesize pageController=_pageController;
// - (void).cxx_destruct;
- (BOOL)_shouldAlignToScreen;
- (BOOL)_shouldAlignToContent;
- (id)_rootLayer;
- (CGRect)screenStrokeAlignedRectForRect:(CGRect)arg1 withStrokeWidth:(double)arg2;
- (CGRect)_smartAlignedRectForRect:(CGRect)arg1;
- (CGRect)screenPixelAlignedRectForRect:(CGRect)arg1;
- (CGPoint)screenPixelAlignedPointForPoint:(CGPoint)arg1;
- (CGRect)contentAlignedRectForRect:(CGRect)arg1;
- (CGPoint)contentAlignedPointForPoint:(CGPoint)arg1;
- (CGRect)convertRect:(CGRect)arg1 fromModelToLayer:(id)arg2;
- (CGPoint)convertPoint:(CGPoint)arg1 fromModelToLayer:(id)arg2;
- (CGRect)adornmentLayerFrameForAnnotation:(id)arg1;
- (CGRect)_clippingFrameForView:(id)arg1;
- (CGRect)annotationLayerFrameForAnnotation:(id)arg1 layerIsClipped:(BOOL )arg2;
- (id)initWithPageController:(id)arg1;

@end

