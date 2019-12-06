//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <PhotosUICore/MFMailComposeViewControllerDelegate-Protocol.h>

@class NSArray, NSDictionary, PHMemory, UISegmentedControl, UITableView;

@interface PXDebugMemoriesViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, MFMailComposeViewControllerDelegate>
{
    UISegmentedControl *_segmentedControl;
    UITableView *_tableView;
    NSArray *_sectionTitles;
    NSDictionary *_tableContent;
    NSDictionary *_sourceDictionary;
    PHMemory *_sourceMemory;
}

// - (void).cxx_destruct;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)_closeAction:(id)arg1;
- (void)_sendByEmailAction:(id)arg1;
- (void)_switchLogsAction:(id)arg1;
- (void)viewDidLoad;
- (void)_setupWithDictionary:(id)arg1;
- (id)initWithMemory:(id)arg1 memoryInfo:(id)arg2;
- (id)_debugDictionary;

@end

