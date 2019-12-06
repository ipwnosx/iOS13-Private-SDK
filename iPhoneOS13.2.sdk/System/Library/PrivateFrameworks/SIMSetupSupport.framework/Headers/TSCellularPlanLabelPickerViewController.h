//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITableViewController.h>


@class CTCellularPlanItem, CTUserLabel, NSArray, NSIndexPath;

@interface TSCellularPlanLabelPickerViewController : UITableViewController <UITextFieldDelegate>
{
    CTCellularPlanItem *_associatedPlanItem;
    CTUserLabel *_initialLabel;
    NSArray *_predefinedUserLabels;
    NSIndexPath *_chosenLabelIndexPath;
    CTUserLabel *_customLabel;
}

@property(retain) CTUserLabel *customLabel; // @synthesize customLabel=_customLabel;
@property(retain) NSIndexPath *chosenLabelIndexPath; // @synthesize chosenLabelIndexPath=_chosenLabelIndexPath;
@property(retain) NSArray *predefinedUserLabels; // @synthesize predefinedUserLabels=_predefinedUserLabels;
@property(retain) CTUserLabel *initialLabel; // @synthesize initialLabel=_initialLabel;
@property(retain) CTCellularPlanItem *associatedPlanItem; // @synthesize associatedPlanItem=_associatedPlanItem;
// - (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_doneButtonTapped;
- (id)customLabelRowValue;
- (id)customLabelIndexPath;
@property(readonly) CTUserLabel *chosenLabel;
- (void)viewWillAppear:(BOOL)arg1;
- (id)init;

@end

