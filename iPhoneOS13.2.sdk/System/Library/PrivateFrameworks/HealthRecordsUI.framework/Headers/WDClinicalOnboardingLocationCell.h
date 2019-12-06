//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthRecordsUI/WDClinicalLocationCell.h>

@class HKClinicalProvider;

__attribute__((visibility("hidden")))
@interface WDClinicalOnboardingLocationCell : WDClinicalLocationCell
{
    HKClinicalProvider *_provider;
}

@property(readonly, copy, nonatomic) HKClinicalProvider *provider; // @synthesize provider=_provider;
// - (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_updateForContentSizeCategory:(id)arg1;
- (void)_updateContentWithBrandable:(id)arg1 dataProvider:(id)arg2;
- (void)setProvider:(id)arg1 dataProvider:(id)arg2;
- (void)_setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

