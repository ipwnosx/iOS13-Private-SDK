//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/SBHIconImageCacheObserver-Protocol.h>
#import <SpringBoardHome/SBIconObserver-Protocol.h>
#import <SpringBoardHome/SBIconProgressViewDelegate-Protocol.h>
#import <SpringBoardHome/SBReusableView-Protocol.h>

@class NSString, SBHIconImageCache, SBIcon, SBIconProgressView, SBIconView, UIImage, UIImageView;

@interface SBIconImageView : UIView <SBIconObserver, SBIconProgressViewDelegate, SBHIconImageCacheObserver, SBReusableView, BSDescriptionProviding>
{
    UIImageView *_overlayView;
    SBIconProgressView *_progressView;
    BOOL _paused;
    BOOL _showsSquareCorners;
    BOOL _jittering;
    SBIcon *_icon;
    NSString *_location;
    SBIconView *_iconView;
    SBHIconImageCache *_iconImageCache;
    double _brightness;
    double _overlayAlpha;
}

@property(nonatomic) double overlayAlpha; // @synthesize overlayAlpha=_overlayAlpha;
@property(nonatomic, getter=isJittering) BOOL jittering; // @synthesize jittering=_jittering;
@property(nonatomic) BOOL showsSquareCorners; // @synthesize showsSquareCorners=_showsSquareCorners;
@property(nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property(nonatomic) double brightness; // @synthesize brightness=_brightness;
@property(retain, nonatomic) SBHIconImageCache *iconImageCache; // @synthesize iconImageCache=_iconImageCache;
@property(nonatomic) __weak SBIconView *iconView; // @synthesize iconView=_iconView;
@property(copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(readonly, nonatomic) SBIcon *icon; // @synthesize icon=_icon;
// - (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)_iconSquareOverlayImage;
- (id)_iconBasicOverlayImage;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)iconImageCache:(id)arg1 didUpdateImageForIcon:(id)arg2;
- (void)iconImageDidUpdate:(id)arg1;
- (void)iconViewFolderIconImageCacheDidChange;
- (void)iconViewLegibilitySettingsDidChange;
- (CGRect)visibleBounds;
- (CGSize)sizeThatFits:(CGSize)arg1;
@property(readonly, nonatomic) UIImage *displayedImage;
- (id)squareDarkeningOverlayImage;
- (id)darkeningOverlayImage;
- (id)squareContentsImage;
- (id)contentsImage;
- (void)clearCachedImages;
- (id)_generateSquareContentsImage;
- (void)_updateProgressMask;
- (void)_updateOverlayImage;
- (id)_currentOverlayImage;
- (void)updateImageAnimated:(BOOL)arg1;
- (id)snapshot;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setProgressAlpha:(double)arg1;
- (void)_clearProgressView;
- (void)progressViewCanBeRemoved:(id)arg1;
- (void)setProgressState:(long long)arg1 paused:(BOOL)arg2 percent:(double)arg3 animated:(BOOL)arg4;
- (void)_updateOverlayAlpha;
//  (struct SBIconImageInfo)iconImageInfo;
- (void)setIcon:(id)arg1 location:(id)arg2 animated:(BOOL)arg3;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end

