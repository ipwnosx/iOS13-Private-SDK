//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, UIButton, UIControl, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIRedeemITunesPassLearnMoreView : UIView
{
    UIButton *_button;
    UILabel *_explanationLabel;
    UIImageView *_headerImageView;
}

// - (void).cxx_destruct;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UIImage *headerImage;
@property(copy, nonatomic) NSString *explanationString;
@property(copy, nonatomic) NSString *buttonTitle;
@property(readonly, nonatomic) UIControl *button;

@end

