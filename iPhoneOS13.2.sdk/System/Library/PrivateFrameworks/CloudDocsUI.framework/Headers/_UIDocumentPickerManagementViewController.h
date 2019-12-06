//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsUI/_UIContainerHuggingTableViewController.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerManagementViewController : _UIContainerHuggingTableViewController
{
    NSArray *_allPickers;
    NSArray *_fileTypes;
    NSUInteger _mode;
}

@property(nonatomic) NSUInteger mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSArray *fileTypes; // @synthesize fileTypes=_fileTypes;
@property(retain, nonatomic) NSArray *allPickers; // @synthesize allPickers=_allPickers;
// - (void).cxx_destruct;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)switchToggled:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_doneButtonPressed;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)_updateContentSize;
- (id)initWithFileTypes:(id)arg1 mode:(NSUInteger)arg2;

@end

