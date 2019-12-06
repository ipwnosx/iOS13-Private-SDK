//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UILabel, UIStackView, WDBrandLogoView, WDClinicalSourcesDataProvider;
@protocol HKClinicalBrandable;

__attribute__((visibility("hidden")))
@interface WDMedicalRecordBrandView : UIView
{
    UILabel *_brandTitleLabel;
    UILabel *_brandSubtitleLabel;
    UILabel *_brandDetailLabel;
    id <HKClinicalBrandable> _brandable;
    WDClinicalSourcesDataProvider *_dataProvider;
    WDBrandLogoView *_logoView;
    UIStackView *_stackView;
    UIView *_logoAlignedContentView;
    UIStackView *_verticalSpecContainerView;
}

@property(readonly, nonatomic) UIStackView *verticalSpecContainerView; // @synthesize verticalSpecContainerView=_verticalSpecContainerView;
@property(readonly, nonatomic) UIView *logoAlignedContentView; // @synthesize logoAlignedContentView=_logoAlignedContentView;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(readonly, nonatomic) WDBrandLogoView *logoView; // @synthesize logoView=_logoView;
@property(readonly, nonatomic) WDClinicalSourcesDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(readonly, nonatomic) id <HKClinicalBrandable> brandable; // @synthesize brandable=_brandable;
@property(readonly, nonatomic) UILabel *brandDetailLabel; // @synthesize brandDetailLabel=_brandDetailLabel;
@property(readonly, nonatomic) UILabel *brandSubtitleLabel; // @synthesize brandSubtitleLabel=_brandSubtitleLabel;
@property(readonly, nonatomic) UILabel *brandTitleLabel; // @synthesize brandTitleLabel=_brandTitleLabel;
// - (void).cxx_destruct;
- (void)_updateForContentSizeCategory:(id)arg1;
- (void)_updateLabelVisibility;
- (void)_updateForCurrentSizeCategory;
- (void)_updateContentWithBrandable:(id)arg1 dataProvider:(id)arg2;
- (void)_updateBasedOnAccessibilityCategory:(BOOL)arg1;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)setBrandable:(id)arg1 dataProvider:(id)arg2;
@property(nonatomic) double logoSize;
- (id)initWithFrame:(CGRect)arg1;

@end

