//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKTableViewController.h>

#import <HealthToolbox/HKSourceListDataSourceObserver-Protocol.h>
#import <HealthToolbox/HKSwitchTableViewCellDelegate-Protocol.h>

@class HKCharacteristicType, HKDisplayType, HKHealthStore, HKSourceListDataSource, NSDictionary, WDDisplayTypeDescriptionTableFooterView, WDProfile;

__attribute__((visibility("hidden")))
@interface WDProfileSharingTableViewController : HKTableViewController <HKSwitchTableViewCellDelegate, HKSourceListDataSourceObserver>
{
    WDProfile *_profile;
    HKHealthStore *_healthStore;
    HKCharacteristicType *_characteristicType;
    NSDictionary *_characteristicAuthorizationRecordsBySource;
    WDDisplayTypeDescriptionTableFooterView *_footerView;
    HKDisplayType *_displayType;
    BOOL _isLoaded;
    HKSourceListDataSource *_sourceListDataSource;
    NSDictionary *_sourceToAuthRecord;
}

@property(copy, nonatomic) NSDictionary *sourceToAuthRecord; // @synthesize sourceToAuthRecord=_sourceToAuthRecord;
@property(retain, nonatomic) HKSourceListDataSource *sourceListDataSource; // @synthesize sourceListDataSource=_sourceListDataSource;
// - (void).cxx_destruct;
- (void)sourceListDataSourceDidUpdate:(id)arg1;
- (void)switchCellValueChanged:(id)arg1 value:(BOOL)arg2;
- (id)_sourceForIndexPath:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_fetchAuthorizationRecordsBySourceForCharacteristic:(id)arg1;
- (void)_gatherDataAndRefreshUI;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_adjustFooterHeight;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)initWithProfile:(id)arg1 characteristicType:(id)arg2;

@end

