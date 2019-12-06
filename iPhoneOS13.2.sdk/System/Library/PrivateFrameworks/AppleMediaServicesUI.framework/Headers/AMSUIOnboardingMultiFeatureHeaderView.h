//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, UILabel;

__attribute__((visibility("hidden")))
@interface AMSUIOnboardingMultiFeatureHeaderView : UIScrollView
{
    BOOL _isPresentedInFormSheet;
    UILabel *_titleLabel;
    double _containerHeight;
    NSArray *_featureViews;
}

@property(retain, nonatomic) NSArray *featureViews; // @synthesize featureViews=_featureViews;
@property(nonatomic) BOOL isPresentedInFormSheet; // @synthesize isPresentedInFormSheet=_isPresentedInFormSheet;
@property(nonatomic) double containerHeight; // @synthesize containerHeight=_containerHeight;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
// - (void).cxx_destruct;
- (void)updateContentSize;
- (void)setFrame:(CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)adjustedContentInsetDidChange;
- (void)layoutSubviews;
- (id)initWithFeatures:(id)arg1;

@end

