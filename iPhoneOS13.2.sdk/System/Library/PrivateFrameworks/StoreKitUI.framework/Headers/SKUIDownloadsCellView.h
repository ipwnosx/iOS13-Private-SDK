//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSAttributedString, NSString, UIButton, UIImage, UIImageView, UILabel, UISlider;

__attribute__((visibility("hidden")))
@interface SKUIDownloadsCellView : UIView
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_imageView;
    UIButton *_button;
    UISlider *_progressSlider;
    NSAttributedString *_attributedTitle;
    NSString *_subtitle;
    long long _buttonType;
    BOOL _isPad;
}

@property(nonatomic) BOOL isPad; // @synthesize isPad=_isPad;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(nonatomic) long long buttonType; // @synthesize buttonType=_buttonType;
@property(readonly, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
@property(nonatomic) double progress;
@property(retain, nonatomic) UIImage *image;
- (id)init;

@end

