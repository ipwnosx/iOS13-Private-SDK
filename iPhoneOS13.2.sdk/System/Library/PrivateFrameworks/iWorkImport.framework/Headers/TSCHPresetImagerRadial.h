//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHPresetImager.h>

__attribute__((visibility("hidden")))
@interface TSCHPresetImagerRadial : TSCHPresetImager
{
}

- (CGPathRef)newMutablePathWithRadius:(double)arg1 center:(CGPoint)arg2 startAngle:(double)arg3 endAngle:(double)arg4;
- (id)fillFromStyle:(id)arg1;
- (id)strokeFromStyle:(id)arg1;
- (void)p_drawShadowedContentIntoContext:(CGContextRef )arg1 size:(CGSize)arg2 contentsScale:(double)arg3 preset:(id)arg4 shouldCache:(BOOL )arg5;

@end

