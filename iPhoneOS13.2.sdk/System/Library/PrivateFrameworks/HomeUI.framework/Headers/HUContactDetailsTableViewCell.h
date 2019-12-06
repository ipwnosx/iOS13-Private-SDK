//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CNAvatarView, CNContact, NSArray, NSString, UIImage, UIImageView, UILabel, UIView;

@interface HUContactDetailsTableViewCell : UITableViewCell
{
    CNAvatarView *_avatarView;
    UIImageView *_photoView;
    UIView *_containerView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    NSArray *_constraints;
}

+ (BOOL)requiresConstraintBasedLayout;
@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(readonly, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) UIImageView *photoView; // @synthesize photoView=_photoView;
@property(readonly, nonatomic) CNAvatarView *avatarView; // @synthesize avatarView=_avatarView;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateConstraints;
@property(retain, nonatomic) UIImage *photo;
@property(retain, nonatomic) CNContact *contact;
@property(retain, nonatomic) NSString *descriptionText;
@property(retain, nonatomic) NSString *titleText;
- (void)prepareForReuse;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

