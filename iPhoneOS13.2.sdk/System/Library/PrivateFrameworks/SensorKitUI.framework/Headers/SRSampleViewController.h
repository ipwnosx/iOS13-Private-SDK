//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSString;

@interface SRSampleViewController : UITableViewController
{
    NSArray *_items;
    NSString *_note;
}

@property(retain, nonatomic) NSString *note; // @synthesize note=_note;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (id)sortedKeysForDictionary:(id)arg1;
- (id)prepareExtendedRowWithText:(id)arg1;
- (id)prepareEndRowWithText:(id)arg1 detailText:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)dealloc;
- (id)init;

@end

