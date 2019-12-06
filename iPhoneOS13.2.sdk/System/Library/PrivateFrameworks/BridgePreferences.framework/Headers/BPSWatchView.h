//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class BPSRemoteImageView, NSString, UIImageView;

@interface BPSWatchView : UIView
{
    BOOL _wantsLightenBlendedScreen;
    NSString *_screenImageSearchBundleIdentifier;
    NSString *_screenImageName;
    NSUInteger _style;
    NSUInteger _sizeOverride;
    BPSRemoteImageView *_watchImageView;
    NSString *_styleVersionSuffix;
    UIImageView *_watchScreenImageView;
}

@property(nonatomic) BOOL wantsLightenBlendedScreen; // @synthesize wantsLightenBlendedScreen=_wantsLightenBlendedScreen;
@property(readonly, nonatomic) UIImageView *watchScreenImageView; // @synthesize watchScreenImageView=_watchScreenImageView;
@property(copy, nonatomic) NSString *styleVersionSuffix; // @synthesize styleVersionSuffix=_styleVersionSuffix;
@property(retain, nonatomic) BPSRemoteImageView *watchImageView; // @synthesize watchImageView=_watchImageView;
@property(nonatomic) NSUInteger sizeOverride; // @synthesize sizeOverride=_sizeOverride;
@property(nonatomic) NSUInteger style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *screenImageName; // @synthesize screenImageName=_screenImageName;
@property(retain, nonatomic) NSString *screenImageSearchBundleIdentifier; // @synthesize screenImageSearchBundleIdentifier=_screenImageSearchBundleIdentifier;
// - (void).cxx_destruct;
- (id)image;
- (CGSize)screenImageSize;
- (NSUInteger)deviceSize;
- (void)overrideMaterial:(NSUInteger)arg1 size:(NSUInteger)arg2;
- (void)_cleanedImageName:(id )arg1 withFallbackImage:(id )arg2;
- (void)layoutSubviews;
- (CGSize)intrinsicContentSize;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)applyScreenStyle;
- (id)screenBackground:(CGSize)arg1;
- (id)watchAssetBundle;
- (id)initWithStyle:(NSUInteger)arg1 versionModifier:(id)arg2 allowsMaterialFallback:(BOOL)arg3;
- (id)initWithStyle:(NSUInteger)arg1 allowsMaterialFallback:(BOOL)arg2;
- (id)initWithStyle:(NSUInteger)arg1 andVersionModifier:(id)arg2;
- (id)initWithStyle:(NSUInteger)arg1;

@end

