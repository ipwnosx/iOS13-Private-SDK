//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIColor, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIProductPagePlaceholderView : UIView
{
    UIImageView *_imageView;
    UILabel *_label;
    UIColor *_textColor;
}

@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
// - (void).cxx_destruct;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithPlaceholderString:(id)arg1 isPad:(BOOL)arg2;

@end

