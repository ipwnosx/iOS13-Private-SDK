//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, UIActivityIndicatorView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface WDSpinnerTableViewCell : UITableViewCell
{
    UIView *_contentContainerView;
    UIActivityIndicatorView *_spinner;
    UILabel *_waitingReasonLabel;
}

+ (id)defaultReuseIdentifier;
@property(retain) UILabel *waitingReasonLabel; // @synthesize waitingReasonLabel=_waitingReasonLabel;
@property(retain) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
// - (void).cxx_destruct;
- (void)prepareForReuse;
@property(retain, nonatomic) NSString *waitingReason;
- (void)setupConstraints;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

