//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSLayoutConstraint, UIActivityIndicatorView, UIButton, UILabel, UIStackView;

@interface PXPeopleStatusView : UIView
{
    UILabel *_titleLabel;
    UILabel *_countLabel;
    UILabel *_descriptionLabel;
    UIButton *_continueButton;
    NSUInteger _viewState;
    UIStackView *_stackView;
    NSArray *_constraints;
    NSLayoutConstraint *_stackViewY;
    NSLayoutConstraint *_continueButtonBottom;
    UIActivityIndicatorView *_activityIndicator;
    UIEdgeInsets _contentInsets;
}

@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) NSLayoutConstraint *continueButtonBottom; // @synthesize continueButtonBottom=_continueButtonBottom;
@property(retain, nonatomic) NSLayoutConstraint *stackViewY; // @synthesize stackViewY=_stackViewY;
@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) NSUInteger viewState; // @synthesize viewState=_viewState;
@property(retain, nonatomic) UIButton *continueButton; // @synthesize continueButton=_continueButton;
@property(readonly, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
// - (void).cxx_destruct;
- (id)_goButtonBackgroundImageWithColor:(id)arg1;
- (void)_createViews;
- (void)updateConstraints;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

