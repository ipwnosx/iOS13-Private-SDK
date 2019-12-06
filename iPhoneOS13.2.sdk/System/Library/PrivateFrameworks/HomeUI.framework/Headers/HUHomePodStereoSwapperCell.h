//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HUHomePodDetailView, UIButton;
@protocol HUHomePodStereoSwapperCellDelegate;

@interface HUHomePodStereoSwapperCell : UITableViewCell
{
    UIButton *_swapButton;
    HUHomePodDetailView *_leftHomePod;
    HUHomePodDetailView *_rightHomePod;
    id <HUHomePodStereoSwapperCellDelegate> _delegate;
}

@property(nonatomic) __weak id <HUHomePodStereoSwapperCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) HUHomePodDetailView *rightHomePod; // @synthesize rightHomePod=_rightHomePod;
@property(readonly, nonatomic) HUHomePodDetailView *leftHomePod; // @synthesize leftHomePod=_leftHomePod;
@property(readonly, nonatomic) UIButton *swapButton; // @synthesize swapButton=_swapButton;
// - (void).cxx_destruct;
- (void)_swap;
- (void)_setupConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

