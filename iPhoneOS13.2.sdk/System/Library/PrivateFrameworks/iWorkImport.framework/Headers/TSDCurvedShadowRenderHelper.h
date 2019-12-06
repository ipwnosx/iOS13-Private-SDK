//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CIContext;

__attribute__((visibility("hidden")))
@interface TSDCurvedShadowRenderHelper : NSObject
{
    CIContext *mCIContext;
}

- (id)p_blurredImage:(id)arg1 edgeBlurRadius:(double)arg2 middleBlurRadius:(double)arg3 padding:(double)arg4 edgeOpacity:(double)arg5 middleOpacity:(double)arg6;
- (id)p_curvedImageFromImage:(id)arg1 curveAmount:(double)arg2 padding:(double)arg3;
- (id)p_gradientImageWithExtent:(CGRect)arg1 middleWhiteValue:(double)arg2 edgeWhiteValue:(double)arg3 includeAlpha:(BOOL)arg4 padding:(double)arg5;
- (id)p_alphaOnlyImageFromImage:(id)arg1;
- (id)p_debugColorOverlayImageFromImage:(id)arg1;
- (id)p_tintedCIImageFromImage:(id)arg1 withColor:(id)arg2;
- (id)p_imageByMultiplyingImage:(id)arg1 withImage:(id)arg2;
- (BOOL)p_shrinkImageIfNecessary:(CGImageRef)arg1 originalSize:(CGSize)arg2 newImage:(CGImageRef)arg3 newSize:(CGSize )arg4;
- (void)p_setupCIContext;
- (void)drawShadow:(id)arg1 forImage:(CGImageRef)arg2 inContext:(CGContextRef )arg3 forSize:(CGSize)arg4;
- (void)p_debugLogImage:(id)arg1 name:(id)arg2;
- (double)baseBlurRadiusForCurve:(double)arg1 framebufferSize:(CGSize)arg2;
- (void)dealloc;

@end

