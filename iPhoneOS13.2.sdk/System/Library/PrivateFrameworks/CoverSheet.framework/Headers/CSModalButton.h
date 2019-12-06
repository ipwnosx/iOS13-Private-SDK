//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIColor, UIVisualEffect, UIVisualEffectView;

@interface CSModalButton : UIButton
{
    UIColor *_backgroundColor;
    UIVisualEffectView *_effectView;
    BOOL _isPressed;
}

// - (void).cxx_destruct;
- (void)_buttonReleased:(id)arg1;
- (void)_buttonPressed:(id)arg1;
- (void)layoutSubviews;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
@property(retain, nonatomic) UIVisualEffect *visualEffect;
- (id)initWithFrame:(CGRect)arg1;

@end

