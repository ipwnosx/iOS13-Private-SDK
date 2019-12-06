//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIView.h"

@class UIImage, UIImageView, _UILegibilitySettings;

@interface _UILegibilityView : UIView
{
    BOOL _hidesImage;
    _UILegibilitySettings *_settings;
    UIImage *_image;
    UIImage *_shadowImage;
    double _strength;
    UIImageView *_imageView;
    UIImageView *_shadowImageView;
    long long _options;
}

@property(nonatomic) long long options; // @synthesize options=_options;
@property(retain, nonatomic) UIImageView *shadowImageView; // @synthesize shadowImageView=_shadowImageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) BOOL hidesImage; // @synthesize hidesImage=_hidesImage;
@property(nonatomic) double strength; // @synthesize strength=_strength;
@property(retain, nonatomic) UIImage *shadowImage; // @synthesize shadowImage=_shadowImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) _UILegibilitySettings *settings; // @synthesize settings=_settings;
- (void)_updateFilters;
- (id)drawingColor;
- (BOOL)usesSecondaryColor;
@property(readonly, nonatomic) BOOL usesColorFilters;
- (void)layoutSubviews;
- (void)updateImage;
- (void)updateForChangedSettings:(id)arg1;
- (void)setSettings:(id)arg1 image:(id)arg2 shadowImage:(id)arg3;
- (void)setStyle:(long long)arg1 image:(id)arg2 shadowImage:(id)arg3;
- (void)setImage:(id)arg1 shadowImage:(id)arg2;
- (CGSize)sizeThatFits:(CGSize)arg1;
@property(readonly, nonatomic) long long style; // @dynamic style;
- (void)dealloc;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 image:(id)arg3 shadowImage:(id)arg4 options:(long long)arg5;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 image:(id)arg3 shadowImage:(id)arg4;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 image:(id)arg3;
- (id)initWithStyle:(long long)arg1 image:(id)arg2 shadowImage:(id)arg3;
- (id)initWithStyle:(long long)arg1 image:(id)arg2;

@end

