//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKTableViewController.h>

@class HKDisplayType, HKUnitPreferenceController, NSArray, NSSet, UIBarButtonItem, UIFont;

__attribute__((visibility("hidden")))
@interface WDUnitPreferenceViewController : HKTableViewController
{
    NSSet *_units;
    HKDisplayType *_displayType;
    HKUnitPreferenceController *_unitController;
    NSArray *_rows;
    long long _selectedRowIndex;
    long long _originalSelectedRowIndex;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_cancelButton;
    BOOL _requiresChangeConfirmation;
    UIFont *_bodyFont;
}

@property(retain, nonatomic) UIFont *bodyFont; // @synthesize bodyFont=_bodyFont;
@property(nonatomic) BOOL requiresChangeConfirmation; // @synthesize requiresChangeConfirmation=_requiresChangeConfirmation;
// - (void).cxx_destruct;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_updateCurrentUnit:(id)arg1;
- (void)_doneButtonTapped:(id)arg1;
- (void)_cancelButtonTapped:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)_sortedUnitPreferenceRows;
- (id)initWithUnits:(id)arg1 displayType:(id)arg2 unitController:(id)arg3;

@end

