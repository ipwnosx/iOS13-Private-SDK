//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <TSReading/TSKKeyboardObserver-Protocol.h>

@class TSWPHyperlinkField, UITableViewCell;

@interface TSWPHyperlinkSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, TSKKeyboardObserver>
{
    TSWPHyperlinkField *_hyperlink;
    UITableViewCell *_editingCell;
    BOOL _readOnly;
}

@property(retain, nonatomic) TSWPHyperlinkField *hyperlink; // @synthesize hyperlink=_hyperlink;
- (void)keyboardDidHideOrUndock:(id)arg1;
- (void)keyboardDidShowOrDock:(id)arg1;
- (NSUInteger)supportedInterfaceOrientations;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithHyperlink:(id)arg1 readOnly:(BOOL)arg2;

@end

