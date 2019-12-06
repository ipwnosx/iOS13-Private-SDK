//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFActionDrawerCompositeResultsViewController.h>

#import <WorkflowUI/WFActionDrawerActionTableViewCellDelegate-Protocol.h>
#import <WorkflowUI/WFActionDrawerAppsTableViewCellDelegate-Protocol.h>
#import <WorkflowUI/WFActionDrawerSiriSuggestionsTableViewCellDelegate-Protocol.h>
#import <WorkflowUI/WFActionDrawerStateConfigurable-Protocol.h>
#import <WorkflowUI/WFActionDrawerStateRepresentable-Protocol.h>

@class NSArray, WFActionDrawerState;
@protocol WFActionDrawerSearchResultsViewControllerDelegate;

@interface WFActionDrawerSearchResultsViewController : WFActionDrawerCompositeResultsViewController <WFActionDrawerSiriSuggestionsTableViewCellDelegate, WFActionDrawerAppsTableViewCellDelegate, WFActionDrawerActionTableViewCellDelegate, UITableViewDelegate, UITableViewDataSource, WFActionDrawerStateRepresentable, WFActionDrawerStateConfigurable>
{
    id <WFActionDrawerSearchResultsViewControllerDelegate> _delegate;
    NSArray *_combinedActionActivitySections;
}

@property(retain, nonatomic) NSArray *combinedActionActivitySections; // @synthesize combinedActionActivitySections=_combinedActionActivitySections;
@property(nonatomic) __weak id <WFActionDrawerSearchResultsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)appsTableViewCell:(id)arg1 didSelectAppWithBundleIdentifier:(id)arg2;
- (BOOL)moveToState:(id)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) WFActionDrawerState *state;
- (void)siriSuggestionsTableViewCell:(id)arg1 infoButtonTappedForSuggestion:(id)arg2;
- (void)siriSuggestionsTableViewCell:(id)arg1 didSelectAction:(id)arg2;
- (void)actionCell:(id)arg1 infoButtonTappedForAction:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadViews;
- (void)viewDidLoad;
- (void)loadView;

@end

