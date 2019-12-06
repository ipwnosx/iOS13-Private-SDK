//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <PhotosUICore/CNContactPickerDelegate-Protocol.h>
#import <PhotosUICore/MKMapViewDelegate-Protocol.h>

@class PXContextualMemoriesSettings, UIView;

@interface PXContextualMemoriesSettingsTableViewController : UITableViewController <MKMapViewDelegate, CNContactPickerDelegate>
{
    BOOL _showsDatePicker;
    BOOL _showsLocationPicker;
    PXContextualMemoriesSettings *_settings;
    UIView *_progressIndicatorView;
}

+ (id)title;
@property(retain, nonatomic) UIView *progressIndicatorView; // @synthesize progressIndicatorView=_progressIndicatorView;
@property(nonatomic) BOOL showsLocationPicker; // @synthesize showsLocationPicker=_showsLocationPicker;
@property(nonatomic) BOOL showsDatePicker; // @synthesize showsDatePicker=_showsDatePicker;
@property(retain, nonatomic) PXContextualMemoriesSettings *settings; // @synthesize settings=_settings;
// - (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)contactPicker:(id)arg1 didSelectContacts:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)_showContactsPicker;
- (void)_didPressResetAll:(id)arg1;
- (void)_handleLongPress:(id)arg1;
- (void)_didChangeDatePicker:(id)arg1;
// - (CDStruct_26e8d939)_regionForLocationCoordinate:(struct CLLocationCoordinate2D)arg1;
- (BOOL)_isPeopleValueCellAtIndexPath:(id)arg1;
- (BOOL)_isLocationPickerCellAtIndexPath:(id)arg1;
- (BOOL)_isDatePickerCellAtIndexPath:(id)arg1;
- (id)_indexPathForLocationPicker;
- (id)_indexPathForDatePicker;
- (id)_indexPathForPeopleValue;
- (id)_indexPathForLocationValue;
- (id)_indexPathForDateValue;
- (long long)_sectionForPeople;
- (long long)_sectionForLocation;
- (long long)_sectionForDate;
- (void)_reloadRowAndRestoreSelectionIfNeededAtIndexPath:(id)arg1;
- (long long)_sectionForSettingOfClass:(Class)arg1;
- (void)_updateLocationPickerHidden;
- (void)_updateDatePickerHidden;
- (void)_tableView:(id)arg1 selectionDidUpdateForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)_installProgressIndicatorView;
- (void)dealloc;
- (id)init;

@end

