//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIImage, UIImageView;

@interface AVTUIAnimatingImageView : UIView
{
    UIImage *_image;
    UIImageView *_imageView;
    UIImageView *_fadeInImageView;
}

@property(readonly, nonatomic) UIImageView *fadeInImageView; // @synthesize fadeInImageView=_fadeInImageView;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
// - (void).cxx_destruct;
- (void)setContinuousCornerRadius:(double)arg1;
- (void)setContentMode:(long long)arg1;
- (void)setImage:(id)arg1 animated:(BOOL)arg2;
- (id)initWithFrame:(CGRect)arg1;

@end

