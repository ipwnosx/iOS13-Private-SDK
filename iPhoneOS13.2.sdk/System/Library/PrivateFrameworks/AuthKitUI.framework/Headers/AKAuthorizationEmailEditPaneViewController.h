//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AuthKitUI/AKAuthorizationPaneViewController.h>


@class AKAuthorizationScopeChoices, NSString;

@interface AKAuthorizationEmailEditPaneViewController : AKAuthorizationPaneViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSString *_applicationName;
}

@property(retain, nonatomic) NSString *applicationName; // @synthesize applicationName=_applicationName;
// - (void).cxx_destruct;
- (id)tableView:(id)arg1 anonymousCellForRow:(NSUInteger)arg2;
- (id)tableView:(id)arg1 emailCellForRow:(NSUInteger)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
@property(readonly, nonatomic) AKAuthorizationScopeChoices *editableScopeChoices;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;

@end

