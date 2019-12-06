//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSAttributedString, NSString, UIButton, UILabel;
@protocol SKUIMessageBannerDelegate;

@interface SKUIMessageBanner : UIView
{
    id <SKUIMessageBannerDelegate> _delegate;
    UILabel *_label;
    UIButton *_button;
    UIView *_borderView;
    UIButton *_clearButton;
    NSAttributedString *_attributedMessage;
}

@property(retain, nonatomic) NSAttributedString *attributedMessage; // @synthesize attributedMessage=_attributedMessage;
@property(nonatomic) __weak id <SKUIMessageBannerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_clearButtonAction:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (id)value;
@property(retain, nonatomic) NSString *message;
@property(nonatomic) BOOL showsClearButton;
- (id)initWithFrame:(CGRect)arg1;

@end

