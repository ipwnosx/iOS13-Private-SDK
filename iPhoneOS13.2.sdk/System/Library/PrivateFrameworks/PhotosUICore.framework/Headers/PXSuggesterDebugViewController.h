//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <PhotosUICore/PXOneUpPresentationDelegate-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSString, PHSuggestion, UIActivityIndicatorView, UIBarButtonItem, UILabel;

@interface PXSuggesterDebugViewController : UITableViewController <PXOneUpPresentationDelegate>
{
    NSArray *_heuristicallySortedItems;
    NSArray *_sortedItems;
    NSString *_name;
    NSDictionary *_options;
    PHSuggestion *_currentSuggestion;
    BOOL _fullLibraryIsEnabled;
    NSDate *_date;
    NSUInteger _currentSortCriteria;
    BOOL _showsInvalidItems;
    UIActivityIndicatorView *_spinnerView;
    UILabel *_noResultLabel;
    UIBarButtonItem *_fullLibraryButton;
    UIBarButtonItem *_dateButton;
    UIBarButtonItem *_showInvalidItemsButton;
    UIBarButtonItem *_sortButton;
}

// - (void).cxx_destruct;
- (id)_stringWithSortCriteria:(NSUInteger)arg1;
- (void)_sortItems;
- (void)didSelectSortButton:(id)arg1;
- (void)updateShowInvalidItemsButton;
- (void)didSelectShowInvalidItemsButton:(id)arg1;
- (void)didSelectDateButton:(id)arg1;
- (void)didSelectFullLibraryButton:(id)arg1;
- (void)_updateToolbarItems;
- (id)sortButton;
- (id)showInvalidItemsButton;
- (id)dateButton;
- (id)fullLibraryButton;
- (void)_fetchSuggestions;
- (void)configureCell:(id)arg1 withItem:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)assetsDataSourceManagerForSuggestion:(id)arg1;
- (void)refresh;
- (void)didStopProcessing;
- (void)willStartProcessing;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithName:(id)arg1 options:(id)arg2;

@end

