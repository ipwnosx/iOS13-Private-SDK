//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSLayoutConstraint, NSString, UILabel;

__attribute__((visibility("hidden")))
@interface WDMedicalRecordSpacerTextCell : UITableViewCell
{
    BOOL _useTallTopPadding;
    NSString *_title;
    UILabel *_titleLabel;
    NSLayoutConstraint *_topConstraint;
}

+ (id)defaultReuseIdentifier;
@property(retain, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) BOOL useTallTopPadding; // @synthesize useTallTopPadding=_useTallTopPadding;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
- (void)_setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

