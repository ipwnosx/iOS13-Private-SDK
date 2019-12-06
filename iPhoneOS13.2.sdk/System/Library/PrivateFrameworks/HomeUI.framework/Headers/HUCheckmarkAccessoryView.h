//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIImageView;

@interface HUCheckmarkAccessoryView : UIView
{
    BOOL _checked;
    BOOL _disabled;
    UIImageView *_checkmarkImageView;
}

+ (id)grayBorderColor;
+ (double)borderWidth;
@property(retain, nonatomic) UIImageView *checkmarkImageView; // @synthesize checkmarkImageView=_checkmarkImageView;
@property(nonatomic) BOOL disabled; // @synthesize disabled=_disabled;
@property(nonatomic) BOOL checked; // @synthesize checked=_checked;
// - (void).cxx_destruct;
- (void)_updateColors;
- (void)tintColorDidChange;
- (CGSize)intrinsicContentSize;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

