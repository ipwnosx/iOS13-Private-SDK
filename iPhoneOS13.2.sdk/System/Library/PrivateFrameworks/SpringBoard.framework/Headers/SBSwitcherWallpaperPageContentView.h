//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <SpringBoard/SBAppSwitcherPageContentView-Protocol.h>

@class SBOrientationTransformWrapperView, SBWallpaperEffectView;

@interface SBSwitcherWallpaperPageContentView : UIView <SBAppSwitcherPageContentView>
{
    SBOrientationTransformWrapperView *_wallpaperWrapperView;
    BOOL _active;
    BOOL _visible;
    double _cornerRadius;
    long long _orientation;
    long long _desiredWallpaperOrientation;
    long long _wallpaperStyle;
    SBWallpaperEffectView *_wallpaperEffectView;
}

@property(nonatomic, getter=isVisible) BOOL visible; // @synthesize visible=_visible;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property(readonly, nonatomic) SBWallpaperEffectView *wallpaperEffectView; // @synthesize wallpaperEffectView=_wallpaperEffectView;
@property(nonatomic) long long wallpaperStyle; // @synthesize wallpaperStyle=_wallpaperStyle;
@property(nonatomic) long long desiredWallpaperOrientation; // @synthesize desiredWallpaperOrientation=_desiredWallpaperOrientation;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
// - (void).cxx_destruct;
- (void)_updateWallpaperOrientation;
- (void)_updateCornerRadius;
- (id)_viewForWallpaperWrapper;
- (BOOL)_deviceSupportsEdgeAntiAliasing;
@property(readonly, nonatomic) BOOL contentRequiresGroupOpacity;
- (CGRect)_wallpaperFrame;
- (void)layoutSubviews;
- (void)invalidate;
- (id)initWithFrame:(CGRect)arg1;

@end

