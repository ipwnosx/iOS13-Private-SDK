//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSLayoutConstraint, NSMutableArray, UIButton;

@interface PKPaymentAuthorizationPasswordButtonView : UIView
{
    UIView *_separatorView;
    NSMutableArray *_hiddenConstraints;
    NSLayoutConstraint *_buttonTopPaddingConstraint;
    NSLayoutConstraint *_buttonBottomPaddingConstraint;
    NSLayoutConstraint *_seperatorHeightConstraint;
    UIButton *_passwordButton;
}

@property(readonly, nonatomic) UIButton *passwordButton; // @synthesize passwordButton=_passwordButton;
// - (void).cxx_destruct;
- (void)_setupConstraints;
- (void)setHidden:(BOOL)arg1;
- (void)updateConstraints;
- (id)initWithFrame:(CGRect)arg1;

@end

