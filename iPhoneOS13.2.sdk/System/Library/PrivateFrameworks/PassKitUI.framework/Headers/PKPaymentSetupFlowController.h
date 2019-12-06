//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKSetupFlowControllerProtocol-Protocol.h>

@class PKPasscodeUpgradeFlowController, PKPaymentProvisioningController;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupFlowController : NSObject <PKSetupFlowControllerProtocol>
{
    PKPasscodeUpgradeFlowController *_passcodeUpgradeFlowController;
    PKPaymentProvisioningController *_provisioningController;
    long long _setupContext;
    id <PKPaymentSetupViewControllerDelegate> _delegate;
}

@property(readonly, nonatomic) id <PKPaymentSetupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long setupContext; // @synthesize setupContext=_setupContext;
@property(readonly, nonatomic) PKPaymentProvisioningController *provisioningController; // @synthesize provisioningController=_provisioningController;
// - (void).cxx_destruct;
- (id)_educationViewControllerShouldShow;
- (id)_offerMakeDefaultViewController;
- (id)_nextPaymentCredentialControllerWithSetupProduct:(id)arg1 allowsManualEntry:(BOOL)arg2;
- (id)nextQueuedCredentialViewControllerWithSetupProduct:(id)arg1 state:(long long)arg2 allowsManualEntry:(BOOL)arg3;
- (id)nextQueuedCredentialViewControllerWithSetupProduct:(id)arg1 allowsManualEntry:(BOOL)arg2;
- (void)nextViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentPasscodeUpgradeOnViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)manualEntryPaymentSetupViewControllerForProduct:(id)arg1 allowsSelectingBank:(BOOL)arg2;
- (id)_paymentSetupViewControllerForAssociatedCredential:(id)arg1 product:(id)arg2 allowsManualEntry:(BOOL)arg3;
- (id)paymentSetupViewControllerForAssociatedCredentials:(id)arg1 product:(id)arg2 allowsManualEntry:(BOOL)arg3;
- (id)_defaultPaymentSetupViewControllerAllowingManualEntry:(BOOL)arg1;
- (id)intialPaymentSetupViewControllerForMode:(long long)arg1 allowsManualEntry:(BOOL)arg2;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 delegate:(id)arg3;

@end

