//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray;

__attribute__((visibility("hidden")))
@interface WFContentItemsViewController : UITableViewController
{
    BOOL _allowsCoercion;
    NSArray *_contentItems;
}

@property(nonatomic) BOOL allowsCoercion; // @synthesize allowsCoercion=_allowsCoercion;
@property(retain, nonatomic) NSArray *contentItems; // @synthesize contentItems=_contentItems;
// - (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

