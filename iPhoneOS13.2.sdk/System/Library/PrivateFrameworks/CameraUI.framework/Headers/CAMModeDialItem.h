//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CAShapeLayer, NSString, UIFont;

@interface CAMModeDialItem : UIView
{
    BOOL _selected;
    BOOL _shouldShadowTitleText;
    NSString *_title;
    UIFont *_font;
    CAShapeLayer *__scalableTextLayer;
    CGSize __textFrameSize;
}

@property(nonatomic, setter=_setTextFrameSize:) CGSize _textFrameSize; // @synthesize _textFrameSize=__textFrameSize;
@property(readonly, nonatomic) CAShapeLayer *_scalableTextLayer; // @synthesize _scalableTextLayer=__scalableTextLayer;
@property(nonatomic) BOOL shouldShadowTitleText; // @synthesize shouldShadowTitleText=_shouldShadowTitleText;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
// - (void).cxx_destruct;
//  (CGPathRef)_pathForAttributedString:(struct __CFAttributedString )arg1;
- (void)_updateScalableTextPathFromAttributedTitle;
- (CGColorRef)_textColor;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
// property(readonly, nonatomic) struct __CFAttributedString _attributedTitle;
- (void)tintColorDidChange;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)_commonCAMModeDialItemInitialization;

@end

