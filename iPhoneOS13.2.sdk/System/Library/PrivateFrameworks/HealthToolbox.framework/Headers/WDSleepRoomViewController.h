//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKTableViewController.h>

#import <HealthToolbox/HKDisplayTypeContextTableViewCellDelegate-Protocol.h>
#import <HealthToolbox/HKInteractiveChartViewObserver-Protocol.h>
#import <HealthToolbox/HKSwitchTableViewCellDelegate-Protocol.h>
#import <HealthToolbox/WDFavoriteDisplayTypesControllerObserver-Protocol.h>
#import <HealthToolbox/WDUserActivityResponder-Protocol.h>

@class HKDisplayCategory, HKDisplayType, HKDisplayTypeContextTableViewCell, HKSleepChartViewController, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSString, WDProfile, WDSleepRoomDataSource, WDSleepRoomViewControllerState;

__attribute__((visibility("hidden")))
@interface WDSleepRoomViewController : HKTableViewController <HKInteractiveChartViewObserver, HKDisplayTypeContextTableViewCellDelegate, WDFavoriteDisplayTypesControllerObserver, HKSwitchTableViewCellDelegate, WDUserActivityResponder>
{
    WDProfile *_profile;
    HKDisplayType *_displayType;
    NSArray *_tableSections;
    HKSleepChartViewController *_interactiveChartViewController;
    WDSleepRoomDataSource *_sleepRoomDataSource;
    NSMutableDictionary *_rowsForWDHealthRoomSection;
    NSMutableArray *_sectionTypes;
    long long _currentChartTimeScope;
    HKDisplayTypeContextTableViewCell *_contextCell;
    HKDisplayCategory *_category;
    NSString *_categoryImportanceText;
    NSUInteger _selectedContextIndex;
    NSDate *_displayDate;
    WDSleepRoomViewControllerState *_state;
}

@property(retain, nonatomic) WDSleepRoomViewControllerState *state; // @synthesize state=_state;
@property(retain, nonatomic) NSDate *displayDate; // @synthesize displayDate=_displayDate;
@property(nonatomic) NSUInteger selectedContextIndex; // @synthesize selectedContextIndex=_selectedContextIndex;
@property(retain, nonatomic) NSString *categoryImportanceText; // @synthesize categoryImportanceText=_categoryImportanceText;
@property(retain, nonatomic) HKDisplayCategory *category; // @synthesize category=_category;
@property(retain, nonatomic) HKDisplayTypeContextTableViewCell *contextCell; // @synthesize contextCell=_contextCell;
@property(nonatomic) long long currentChartTimeScope; // @synthesize currentChartTimeScope=_currentChartTimeScope;
@property(retain, nonatomic) NSMutableArray *sectionTypes; // @synthesize sectionTypes=_sectionTypes;
@property(retain, nonatomic) NSMutableDictionary *rowsForWDHealthRoomSection; // @synthesize rowsForWDHealthRoomSection=_rowsForWDHealthRoomSection;
@property(retain, nonatomic) WDSleepRoomDataSource *sleepRoomDataSource; // @synthesize sleepRoomDataSource=_sleepRoomDataSource;
@property(retain, nonatomic) HKSleepChartViewController *interactiveChartViewController; // @synthesize interactiveChartViewController=_interactiveChartViewController;
@property(retain, nonatomic) NSArray *tableSections; // @synthesize tableSections=_tableSections;
@property(retain, nonatomic) HKDisplayType *displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
// - (void).cxx_destruct;
- (id)applyTransitionActivity:(id)arg1;
- (void)applyChangeActivity:(id)arg1;
- (void)_addActivityForAction:(long long)arg1 newResponder:(id)arg2;
- (void)_updateActivityForViewDidAppear;
- (void)contextCell:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)favoriteDisplayTypesControllerDidUpdate:(id)arg1;
- (void)switchCellValueChanged:(id)arg1 value:(BOOL)arg2;
- (void)newDataArrivedWithValueRange:(id)arg1;
- (void)didUpdateVisibleValueRange:(id)arg1 changeContext:(long long)arg2;
- (void)didUpdateFromDateZoom:(long long)arg1 toDateZoom:(long long)arg2 newVisibleRange:(id)arg3;
- (void)_updateContextualViews;
- (id)_showAddDataVC:(id)arg1;
- (id)_titleCellWithHeaderType:(long long)arg1;
- (id)_accessCell;
- (id)_favoriteSwitchCell;
- (id)_showAllCell;
- (id)_sleepRoomDescription;
- (id)_descriptionCell;
- (id)_contextCell;
- (id)_chartCell;
- (BOOL)_isDisplayTypeFavorited;
- (id)_showAllDataVC;
- (void)_configureCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)_cellForRowAtIndexPath:(id)arg1;
- (id)_reuseIdentifierForIndexPath:(id)arg1;
- (NSUInteger)_sectionForTableViewIndexPath:(id)arg1;
- (NSUInteger)_sectionForTableViewSection:(long long)arg1;
- (NSUInteger)_rowTypeForIndexPath:(id)arg1;
- (id)_indexPathForRowType:(NSUInteger)arg1;
- (void)_setupRowsInUse;
- (void)setupInteractiveChartController;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)initWithDisplayTypes:(id)arg1 profile:(id)arg2 displayDate:(id)arg3 title:(id)arg4 category:(id)arg5;

@end

