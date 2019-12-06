//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSLayoutConstraint, NSString, PXAnimatedCounter, UIFont, UILabel;

@interface PXAnimatedLabel : UIView
{
    UIFont *_font;
    NSString *_text;
    PXAnimatedCounter *_counter;
    UILabel *_label;
    NSLayoutConstraint *_counterWidthConstraint;
}

@property(readonly) NSLayoutConstraint *counterWidthConstraint; // @synthesize counterWidthConstraint=_counterWidthConstraint;
@property(retain) UILabel *label; // @synthesize label=_label;
@property(retain) PXAnimatedCounter *counter; // @synthesize counter=_counter;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
// - (void).cxx_destruct;
- (void)_updateConstraintsForText;
- (void)setText:(id)arg1 withAnimationStyle:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)commonInit;

@end

