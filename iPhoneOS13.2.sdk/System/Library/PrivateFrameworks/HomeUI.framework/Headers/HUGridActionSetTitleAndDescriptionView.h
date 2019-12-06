//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSLayoutConstraint, UILabel;

@interface HUGridActionSetTitleAndDescriptionView : UIView
{
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    double _titleDescriptionLineSpacing;
    NSArray *_titleAndDescriptionConstraints;
    NSLayoutConstraint *_titleDescriptionSpacingConstraint;
}

+ (BOOL)requiresConstraintBasedLayout;
@property(retain, nonatomic) NSLayoutConstraint *titleDescriptionSpacingConstraint; // @synthesize titleDescriptionSpacingConstraint=_titleDescriptionSpacingConstraint;
@property(retain, nonatomic) NSArray *titleAndDescriptionConstraints; // @synthesize titleAndDescriptionConstraints=_titleAndDescriptionConstraints;
@property(nonatomic) double titleDescriptionLineSpacing; // @synthesize titleDescriptionLineSpacing=_titleDescriptionLineSpacing;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
// - (void).cxx_destruct;
- (void)updateConstraints;
- (void)updateTitleText:(id)arg1 descriptionText:(id)arg2;
- (id)initWithFrame:(CGRect)arg1 titleLabelSuperview:(id)arg2;

@end

