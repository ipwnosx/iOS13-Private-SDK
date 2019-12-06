//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupTableViewController.h>

#import <PassKitUI/PKPaymentVerificationControllerDelegate-Protocol.h>

@class PKPass, PKPassView, PKPaymentProvisioningController, PKPaymentVerificationController, PKPaymentWebService, PKTableHeaderView, UIImage;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPassSetupAutomaticPresentationController : PKPaymentSetupTableViewController <PKPaymentVerificationControllerDelegate>
{
    PKPaymentWebService *_webService;
    NSUInteger _selectedIndex;
    PKTableHeaderView *_headerView;
    PKPassView *_passView;
    UIImage *_passSnapshot;
    PKPaymentVerificationController *_verificationController;
    PKPaymentProvisioningController *_provisioningController;
    PKPass *_pass;
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;
}

+ (BOOL)passNeedsAutomaticPresentationSetup:(id)arg1;
@property(nonatomic) __weak id <PKPaymentSetupViewControllerDelegate> setupDelegate; // @synthesize setupDelegate=_setupDelegate;
@property(readonly, nonatomic) PKPass *pass; // @synthesize pass=_pass;
// - (void).cxx_destruct;
- (void)logAggDContextSpecificCheckpointForKey:(id)arg1;
- (id)_contextSpecificStringForAggDKey:(id)arg1;
- (void)_showAddToWatchOfferForPass:(id)arg1;
- (void)_presentMakeDefaultViewControllerForPass:(id)arg1;
- (BOOL)_shouldShowMakeDefaultViewControllerForPass:(id)arg1;
- (void)presentVerificationViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_showVerificationForPass:(id)arg1;
- (long long)_paymentPassState;
- (id)_buttonTitleForPaymentPassState:(long long)arg1;
- (void)_terminateSetupFlow;
- (void)_presentNextCredentialWithCompletion:(CDUnknownBlockType)arg1;
- (void)_dismissView;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;
- (void)_saveSettings;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithPaymentWebService:(id)arg1 pass:(id)arg2 context:(long long)arg3 provisioningController:(id)arg4;
- (id)initWithPass:(id)arg1;

@end

