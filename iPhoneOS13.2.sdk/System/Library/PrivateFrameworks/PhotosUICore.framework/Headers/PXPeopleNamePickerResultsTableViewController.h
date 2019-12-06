//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSMutableArray, NSString;

@interface PXPeopleNamePickerResultsTableViewController : UITableViewController
{
    NSString *_personLocalIdentifier;
    NSMutableArray *_items;
    NSArray *_suggestedContacts;
}

@property(retain) NSArray *suggestedContacts; // @synthesize suggestedContacts=_suggestedContacts;
@property(retain) NSMutableArray *items; // @synthesize items=_items;
@property(retain) NSString *personLocalIdentifier; // @synthesize personLocalIdentifier=_personLocalIdentifier;
// - (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)personAtIndexPath:(id)arg1;
- (id)contactAtIndexPath:(id)arg1;
@property(readonly, nonatomic) BOOL hasResults;
- (void)updateItemsForSearchString:(id)arg1;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1 personLocalIdentifier:(id)arg2 suggestedContacts:(id)arg3;
- (id)initWithStyle:(long long)arg1;

@end

