//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIImageView;

@interface SBHomeScreenMaterialView : UIView
{
    UIView *_backgroundView;
    UIView *_whiteTintView;
    UIImageView *_xColorBurnView;
    UIImageView *_xPlusDView;
    UIView *_highlightView;
    CGPoint _wallpaperRelativeCenter;
    BOOL _highlighted;
    UIEdgeInsets _backgroundInsets;
}

+ (id)colorBurnContentImageForImage:(id)arg1;
@property(nonatomic) UIEdgeInsets backgroundInsets; // @synthesize backgroundInsets=_backgroundInsets;
@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
// - (void).cxx_destruct;
- (void)_addHighlightViewIfNecessary;
- (void)layoutSubviews;
@property(nonatomic) double brightness;
- (void)setLegibilityStyle:(long long)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 backgroundView:(id)arg2 foregroundImage:(id)arg3;

@end

