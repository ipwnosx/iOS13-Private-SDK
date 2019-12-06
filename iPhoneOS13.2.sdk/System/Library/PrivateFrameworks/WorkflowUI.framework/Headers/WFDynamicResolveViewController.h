//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class NSArray, WFDebouncer, WFDynamicResolveParameter;
@protocol WFDynamicResolveViewControllerDelegate;

@interface WFDynamicResolveViewController : UITableViewController <UISearchResultsUpdating, UISearchControllerDelegate>
{
    WFDynamicResolveParameter *_parameter;
    id <WFDynamicResolveViewControllerDelegate> _delegate;
    NSArray *_results;
    WFDebouncer *_inputDebouncer;
}

@property(retain, nonatomic) WFDebouncer *inputDebouncer; // @synthesize inputDebouncer=_inputDebouncer;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property(nonatomic) __weak id <WFDynamicResolveViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) WFDynamicResolveParameter *parameter; // @synthesize parameter=_parameter;
// - (void).cxx_destruct;
- (void)willDismissSearchController:(id)arg1;
- (void)didPresentSearchController:(id)arg1;
- (void)failWithError:(id)arg1;
- (void)succeedWithResolvedObject:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (void)updateSearchResultsFromCurrentUserInput;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithParameter:(id)arg1 delegate:(id)arg2;

@end

