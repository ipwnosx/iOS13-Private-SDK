//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBWelcomeController.h>

#import <SIMSetupSupport/TSSetupFlowItem-Protocol.h>

@class NSArray, NSDictionary, NSIndexPath, NSString, OBBoldTrayButton, UITableView;
@protocol TSSIMSetupFlowDelegate;

@interface TSTransferItemViewController : OBWelcomeController <UINavigationControllerDelegate, UITableViewDataSource, UITableViewDelegate, TSSetupFlowItem>
{
    OBBoldTrayButton *_continueButton;
    BOOL _isOneClickSupported;
    id <TSSIMSetupFlowDelegate> _delegate;
    NSDictionary *_postdata;
    NSString *_URL;
    UITableView *_tableView;
    NSArray *_transferItems;
    NSIndexPath *_chosenPlanIndexPath;
}

@property(retain) NSIndexPath *chosenPlanIndexPath; // @synthesize chosenPlanIndexPath=_chosenPlanIndexPath;
@property(retain) NSArray *transferItems; // @synthesize transferItems=_transferItems;
@property(retain) UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly) BOOL isOneClickSupported; // @synthesize isOneClickSupported=_isOneClickSupported;
@property(readonly) NSString *URL; // @synthesize URL=_URL;
@property(readonly) NSDictionary *postdata; // @synthesize postdata=_postdata;
@property __weak id <TSSIMSetupFlowDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)canBeShownFromSuspendedState;
- (void)_startPlanTransfer:(id)arg1;
- (void)_continueButtonTapped;
- (void)_cancelButtonTapped;
- (void)_setNavigationItems;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateTableData:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithTransferItems:(id)arg1;

@end

