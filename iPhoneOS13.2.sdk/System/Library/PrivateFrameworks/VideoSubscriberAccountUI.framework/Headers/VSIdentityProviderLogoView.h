//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderLogoView : UIView
{
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
// - (void).cxx_destruct;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (CGSize)intrinsicContentSize;
@property(readonly, nonatomic) CGSize preferredImageSize;
@property(readonly, nonatomic) double marginLength;
@property(retain, nonatomic) UIImage *logo;
- (double)_height;
- (CGRect)_imageViewFrame;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

