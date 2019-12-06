//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupTableViewController.h>

#import <PassKitUI/PKLinkedApplicationObserver-Protocol.h>
#import <PassKitUI/PKPaymentSetupActivitySpinnerProtocol-Protocol.h>

@class PKLinkedApplication, PKPaymentProvisioningController, PKPaymentSetupBrowseProductsModel, PKPaymentSetupProduct, PKSearchableTableHeaderView;
@protocol PKPaymentSetupActivitySpinnerProtocol, PKPaymentSetupBrowseProductsViewControllerDelegate, PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupBrowseProductsViewController : PKPaymentSetupTableViewController <UITableViewDelegate, UITextFieldDelegate, PKLinkedApplicationObserver, PKPaymentSetupActivitySpinnerProtocol>
{
    PKPaymentSetupBrowseProductsModel *_model;
    PKLinkedApplication *_loadingLinkedApplication;
    id <PKPaymentSetupActivitySpinnerProtocol> _loadingLinkedApplicationSpinner;
    PKSearchableTableHeaderView *_headerView;
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;
    PKPaymentProvisioningController *_provisioningController;
    BOOL _isBridgeContext;
    double _previousHeaderHeight;
    BOOL _showScanCardButton;
    id <PKPaymentSetupBrowseProductsViewControllerDelegate> _delegate;
    PKPaymentSetupProduct *_selectedProduct;
}

@property(readonly, nonatomic) PKPaymentSetupProduct *selectedProduct; // @synthesize selectedProduct=_selectedProduct;
@property(nonatomic) __weak id <PKPaymentSetupBrowseProductsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PKPaymentSetupBrowseProductsModel *model; // @synthesize model=_model;
@property(nonatomic) BOOL showScanCardButton; // @synthesize showScanCardButton=_showScanCardButton;
// - (void).cxx_destruct;
- (void)_setNavigationBarEnabled:(BOOL)arg1;
- (void)hideActivitySpinner;
- (void)showActivitySpinner;
- (void)linkedApplicationDidChangeState:(id)arg1;
- (void)_showCameraCapture;
- (void)_showAppRequiredForProduct:(id)arg1 withSpinner:(id)arg2;
- (void)_pushAppRequiredViewControllerForProduct:(id)arg1 linkedApplication:(id)arg2;
- (id)_cardTypeFlowPickerForProduct:(id)arg1;
- (void)_updateFilterString:(id)arg1 userInteraction:(BOOL)arg2;
- (void)_nextStepInSetupFlowWithProduct:(id)arg1;
- (void)_notifyDelegateDidSelectProduct:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_nextTapped:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange *)arg2 replacementString:(id)arg3;
- (void)clearSelectedProduct;
- (void)clearSearchField;
- (BOOL)_searchUIEnabled;
- (void)_updateSelectedProduct:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)_productAtIndexPath:(id)arg1;
- (BOOL)_isUnlikelySection:(long long)arg1;
- (BOOL)_isLikelySection:(long long)arg1;
- (BOOL)_showLikelySection;
- (id)defaultSearchPrompt;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)dealloc;
- (id)initWithModel:(id)arg1 context:(long long)arg2;
- (id)initWithProducts:(id)arg1 context:(long long)arg2 provisioningController:(id)arg3 setupDelegate:(id)arg4;
- (id)initWithProducts:(id)arg1 likelyProductIdentifiers:(id)arg2 context:(long long)arg3;
- (id)initWithProducts:(id)arg1 context:(long long)arg2;

@end

