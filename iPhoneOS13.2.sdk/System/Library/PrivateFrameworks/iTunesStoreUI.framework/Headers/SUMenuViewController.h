//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUViewController.h>


@class UITableView;
@protocol SUMenuViewControllerDelegate;

@interface SUMenuViewController : SUViewController <UITableViewDataSource, UITableViewDelegate>
{
    id <SUMenuViewControllerDelegate> _delegate;
    long long _selectedIndex;
    UITableView *_tableView;
}

@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) id <SUMenuViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_tableView;
- (BOOL)_sendDidCancel;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)reload;
- (CGSize)minimumViewSize;
- (CGSize)maximumViewSize;
- (void)loadView;
- (id)titleOfMenuItemAtIndex:(long long)arg1;
- (void)performActionForMenuItemAtIndex:(long long)arg1;
- (long long)numberOfMenuItems;
- (BOOL)isMenuItemEnabledAtIndex:(long long)arg1;
- (void)dealloc;
- (id)init;

@end

