//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIImage.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIAnimatedImage : UIImage
{
    NSArray *_images;
    double _duration;
}

+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (CGSize)_sizeWithHairlineThickening:(BOOL)arg1 renderingEffects:(NSUInteger)arg2 forTraitCollection:(id)arg3;
- (id)_imageWithStylePresets:(id)arg1 tintColor:(id)arg2 traitCollection:(id)arg3;
- (id)_imageScaledToProportion:(double)arg1 interpolationQuality:(int)arg2;
- (id)_doubleBezeledImageWithExteriorShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 interiorShadowRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 fillRed:(double)arg9 green:(double)arg10 blue:(double)arg11 alpha:(double)arg12;
- (id)_bezeledImageWithShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 fillRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 drawShadow:(BOOL)arg9;
- (UIEdgeInsets)alignmentRectInsets;
- (void)_setAlignmentRectInsets:(UIEdgeInsets)arg1;
- (id)resizableImageWithCapInsets:(UIEdgeInsets)arg1 resizingMode:(long long)arg2;
- (id)resizableImageWithCapInsets:(UIEdgeInsets)arg1;
- (void)_setAlwaysStretches:(BOOL)arg1;
- (BOOL)_isTiledWhenStretchedToSize:(CGSize)arg1;
- (BOOL)_isResizable;
- (CGRect)_contentRectInPixels;
- (CGRect)_contentStretchInPixels;
- (long long)resizingMode;
- (UIEdgeInsets)capInsets;
- (void)_flipImageOrientationHorizontally;
- (double)duration;
- (id)images;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)_isSVGVector;
- (BOOL)_isPDFVector;
- (id)initWithImages:(id)arg1 duration:(double)arg2;
- (id)_initWithOtherImage:(id)arg1;

@end

