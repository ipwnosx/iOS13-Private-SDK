//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UILabel;

__attribute__((visibility("hidden")))
@interface _SKUICounterTimeFieldView : UIView
{
    UILabel *_labelLabel;
    UILabel *_valueLabel;
    NSUInteger _visibilityField;
}

@property(nonatomic) NSUInteger visibilityField; // @synthesize visibilityField=_visibilityField;
@property(readonly, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(readonly, nonatomic) UILabel *labelLabel; // @synthesize labelLabel=_labelLabel;
// - (void).cxx_destruct;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

