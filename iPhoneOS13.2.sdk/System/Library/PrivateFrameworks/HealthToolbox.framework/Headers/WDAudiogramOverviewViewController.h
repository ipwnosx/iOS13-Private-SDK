//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKTableViewController.h>

#import <HealthToolbox/HKSwitchTableViewCellDelegate-Protocol.h>
#import <HealthToolbox/SKStoreProductViewControllerDelegate-Protocol.h>
#import <HealthToolbox/WDAppSwooshTableViewCellDelegate-Protocol.h>
#import <HealthToolbox/WDUserActivityResponder-Protocol.h>

@class HKAudiogramChartViewController, HKDisplayType, NSArray, WDProfile;

__attribute__((visibility("hidden")))
@interface WDAudiogramOverviewViewController : HKTableViewController <HKSwitchTableViewCellDelegate, WDAppSwooshTableViewCellDelegate, SKStoreProductViewControllerDelegate, WDUserActivityResponder>
{
    HKDisplayType *_displayType;
    WDProfile *_profile;
    HKAudiogramChartViewController *_audiogramChartViewController;
    NSArray *_sectionToRows;
}

@property(retain, nonatomic) NSArray *sectionToRows; // @synthesize sectionToRows=_sectionToRows;
@property(readonly, nonatomic) HKAudiogramChartViewController *audiogramChartViewController; // @synthesize audiogramChartViewController=_audiogramChartViewController;
@property(readonly, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) HKDisplayType *displayType; // @synthesize displayType=_displayType;
// - (void).cxx_destruct;
- (BOOL)_shouldShowAppsRow;
- (void)_pushSourcesAndAccessViewController;
- (void)_pushShowAllDataViewController;
- (void)_updateAudiogramSamples:(id)arg1 error:(id)arg2;
- (void)_queryForAudiogramChartSamples;
- (id)_recommendedAppsCell;
- (id)_sourcesAndAccessCell;
- (id)_showAllDataCell;
- (BOOL)_isDisplayTypeFavorited;
- (id)_addToFavoritesCell;
- (id)_descriptionCell;
- (id)_audiogramChartCell;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)appsCell:(id)arg1 showStorePageWithStoreID:(id)arg2;
- (void)_displayAppWithStoreID:(id)arg1;
- (void)switchCellValueChanged:(id)arg1 value:(BOOL)arg2;
- (id)applyTransitionActivity:(id)arg1;
- (void)applyChangeActivity:(id)arg1;
- (void)_updateActivityForViewDidAppear;
- (long long)_rowTypeForIndexPath:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (BOOL)_sectionNumber:(long long)arg1 containsRowType:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_rebuildSections;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2;

@end

