//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, UIImage, UIImageView, UILabel;

@interface PKAlertHeaderView : UIView
{
    UIImageView *_imageView;
    UILabel *_messageLabel;
    UILabel *_titleLabel;
}

// - (void).cxx_destruct;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *title;
- (void)shakeTitleView;
@property(copy, nonatomic) NSString *message;
@property(retain, nonatomic) UIImage *image;
- (void)dealloc;

@end

