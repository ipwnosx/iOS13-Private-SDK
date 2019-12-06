//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

__attribute__((visibility("hidden")))
@interface PSUICarrierSpaceUsageController : PSListController
{
}

- (id)remainingCreditDescription:(id)arg1;
- (BOOL)shouldShowRemainingCredit:(id)arg1;
- (id)messagesDescription:(id)arg1;
- (BOOL)shouldShowOnlyRemainingMessages:(id)arg1;
- (BOOL)shouldShowMessages:(id)arg1;
- (id)callsDescription:(id)arg1;
- (BOOL)shouldShowOnlyRemainingCalls:(id)arg1;
- (BOOL)shouldShowCalls:(id)arg1;
- (id)dataUsageDescription:(id)arg1;
- (BOOL)shouldShowOnlyRemainingData:(id)arg1;
- (BOOL)shouldShowData:(id)arg1;
- (BOOL)shouldShowPlanSection:(id)arg1;
- (id)usageGraphSpecifierForSection:(id)arg1;
- (id)specifiers;
- (BOOL)hasMultiplePlansOfSameTypeForNetworkUsageLabel:(id)arg1;
- (BOOL)hasMultiplePlansOfTheSameTypeInTheSameSectionCategory;
- (BOOL)hasMultipleDevicesOfTheSameType;
- (id)planCategorySectionLabelForPlanMetrics:(id)arg1;
- (id)deviceTypeSectionLabelForAccountMetrics:(id)arg1;
- (id)usageSections;
- (id)usageCategories;
- (id)barGraphColors;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void)viewDidAppear:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)carrierSpaceChanged;
- (void)simStatusChanged;

@end

