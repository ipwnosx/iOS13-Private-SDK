//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HUQuickControlSummaryView, NSArray;

@interface HUQuickControlSummaryNavigationBarTitleView : _UINavigationBarTitleView
{
    HUQuickControlSummaryView *_summaryView;
    NSArray *_contentConstraints;
}

@property(retain, nonatomic) NSArray *contentConstraints; // @synthesize contentConstraints=_contentConstraints;
@property(retain, nonatomic) HUQuickControlSummaryView *summaryView; // @synthesize summaryView=_summaryView;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateConstraints;
- (id)initWithFrame:(CGRect)arg1;

@end

