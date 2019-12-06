//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RenderBox/RBDisplayList.h>

__attribute__((visibility("hidden")))
@interface RBXMLRecorder_DisplayList : RBDisplayList
{
//     struct Tree _tree;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
// - (void)addColorMonochromeFilterWithAmount:(float)arg1 color:(CDStruct_0b1c536a)arg2 bias:(float)arg3;
- (void)addGrayscaleFilterWithAmount:(float)arg1;
- (void)addColorInvertFilter;
- (void)addLuminanceToAlphaFilter;
- (void)addContrastFilterWithAmount:(float)arg1;
- (void)addBrightnessFilterWithAmount:(float)arg1;
- (void)addSaturationFilterWithAmount:(float)arg1;
- (void)addHueRotationFilterWithAngle:(double)arg1;
// - (void)addColorMultiplyFilterWithColor:(CDStruct_0b1c536a)arg1;
- (void)addColorMatrixFilterWithArray:(float [20])arg1;
- (void)addBlurFilterWithRadius:(double)arg1 opaque:(BOOL)arg2;
- (void)addProjectionStyleWithArray:(float [9])arg1;
// - (void)addShadowStyleWithRadius:(double)arg1 offset:(CGSize)arg2 color:(CDStruct_0b1c536a)arg3 mode:(int)arg4;
- (void)drawDisplayList:(id)arg1;
- (void)drawShape:(id)arg1 fill:(id)arg2 alpha:(float)arg3 blendMode:(int)arg4;
- (void)clipShape:(id)arg1 mode:(int)arg2;
- (void)concat:(CGAffineTransform)arg1;
- (void)rotateBy:(double)arg1;
- (void)translateByX:(double)arg1 Y:(double)arg2;
- (void)scaleByX:(double)arg1 Y:(double)arg2;
- (void)setCTM:(CGAffineTransform)arg1;
- (void)clipLayerWithAlpha:(float)arg1 mode:(int)arg2;
- (void)drawLayerWithAlpha:(float)arg1 blendMode:(int)arg2;
- (void)beginLayerWithFlags:(unsigned int)arg1;
- (void)restore;
- (void)save;

@end

