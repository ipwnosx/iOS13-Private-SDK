//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView;

@interface CKRegistrationView : UIScrollView
{
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_verbiageLabel;
    UILabel *_signingInLabel;
    UIActivityIndicatorView *_signingInSpinner;
    UIButton *_learnMoreButton;
    UIView *_authKitSignInView;
}

@property(retain, nonatomic) UIView *authKitSignInView; // @synthesize authKitSignInView=_authKitSignInView;
@property(retain, nonatomic) UIButton *learnMoreButton; // @synthesize learnMoreButton=_learnMoreButton;
@property(retain, nonatomic) UIActivityIndicatorView *signingInSpinner; // @synthesize signingInSpinner=_signingInSpinner;
@property(retain, nonatomic) UILabel *signingInLabel; // @synthesize signingInLabel=_signingInLabel;
@property(retain, nonatomic) UILabel *verbiageLabel; // @synthesize verbiageLabel=_verbiageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
// - (void).cxx_destruct;
- (void)_learnMorePressed:(id)arg1;
- (void)layoutSubviews;
- (CGSize)manualSizeToFitForAuthKitSignInView;
- (void)setSigningIn:(BOOL)arg1;

@end

