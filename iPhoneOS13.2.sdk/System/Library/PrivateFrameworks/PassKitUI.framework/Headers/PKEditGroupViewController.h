//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKEditTableViewController.h>

#import <PassKitUI/PKEditPassesDetailsResponder-Protocol.h>
#import <PassKitUI/PKGroupDelegate-Protocol.h>
#import <PassKitUI/_UIContextMenuInteractionDelegate-Protocol.h>

@class PKGroup, PKPass, UIBarButtonItem, UITableView;
@protocol PKEditGroupViewControllerDelegate, PKGroupDelegate;

@interface PKEditGroupViewController : PKEditTableViewController <PKGroupDelegate, _UIContextMenuInteractionDelegate, PKEditPassesDetailsResponder>
{
    PKGroup *_group;
    id <PKGroupDelegate> _savedDelegate;
    UIBarButtonItem *_deleteToolbarItem;
    UIBarButtonItem *_flexibleSpace;
    PKPass *_viewingPass;
    UITableView *_tableView;
    CGSize _imageSizeNeeded;
    id <PKEditGroupViewControllerDelegate> _delegate;
}

// - (void).cxx_destruct;
- (id)pass;
- (id)group;
- (BOOL)passExistsWithUniqueIdentifier:(id)arg1;
- (void)prefetchItemsAtIndexPaths:(id)arg1;
- (id)passAtIndexPath:(id)arg1;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingAtLocation:(CGPoint)arg2;
- (id)contextMenuInteraction:(id)arg1 actionsForMenuAtLocation:(CGPoint)arg2 withSuggestedActions:(id)arg3;
- (BOOL)contextMenuInteractionShouldBegin:(id)arg1;
- (id)viewControllerForRowAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2 withPass:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)group:(id)arg1 didMovePassFromIndex:(NSUInteger)arg2 toIndex:(NSUInteger)arg3;
- (void)group:(id)arg1 didRemovePass:(id)arg2 atIndex:(NSUInteger)arg3;
- (void)group:(id)arg1 didInsertPass:(id)arg2 atIndex:(NSUInteger)arg3;
- (void)group:(id)arg1 didUpdatePass:(id)arg2 atIndex:(NSUInteger)arg3;
- (void)_deleteAllPassesInGroup;
- (void)_deleteButtonPressed;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithGroup:(id)arg1 existingGroupsController:(id)arg2 placeholders:(id)arg3 delegate:(id)arg4;

@end

