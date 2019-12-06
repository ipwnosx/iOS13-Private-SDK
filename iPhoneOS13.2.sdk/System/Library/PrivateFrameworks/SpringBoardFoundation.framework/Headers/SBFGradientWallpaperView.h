//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBFWallpaperView.h>

@class SBFGradient;

@interface SBFGradientWallpaperView : SBFWallpaperView
{
    SBFGradient *_wallpaperGradient;
}

+ (Class)layerClass;
@property(readonly, copy, nonatomic) SBFGradient *wallpaperGradient; // @synthesize wallpaperGradient=_wallpaperGradient;
// - (void).cxx_destruct;
- (double)contrastInRect:(CGRect)arg1 contrastWithinBoxes:(double )arg2 contrastBetweenBoxes:(double )arg3;
- (id)averageColorInRect:(CGRect)arg1 withSmudgeRadius:(double)arg2;
- (id)_computeAverageColor;
- (BOOL)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(long long)arg2;
- (long long)wallpaperType;
- (id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 variant:(long long)arg3 cacheGroup:(id)arg4 delegate:(id)arg5 options:(NSUInteger)arg6;

@end

