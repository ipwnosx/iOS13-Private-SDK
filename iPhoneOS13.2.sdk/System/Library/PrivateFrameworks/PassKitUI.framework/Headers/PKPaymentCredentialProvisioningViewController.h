//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupProvisioningFieldsViewController.h>

#import <PassKitUI/PKPaymentProvisioningControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentSetupHideSetupLaterButtonProtocol-Protocol.h>
#import <PassKitUI/PKPaymentSetupPresentationProtocol-Protocol.h>
#import <PassKitUI/PKViewControllerPreflightable-Protocol.h>

@class PKPaymentCredential, PKPaymentCredentialMetadataTableController, PKPaymentSetupProduct, UIImage;

@interface PKPaymentCredentialProvisioningViewController : PKPaymentSetupProvisioningFieldsViewController <PKViewControllerPreflightable, PKPaymentProvisioningControllerDelegate, PKPaymentSetupHideSetupLaterButtonProtocol, PKPaymentSetupPresentationProtocol>
{
    UIImage *_passSnapshotPlaceHolder;
    NSUInteger _credentialProvisioningType;
    NSUInteger _displayType;
    PKPaymentCredentialMetadataTableController *_metadataController;
    PKPaymentCredential *_paymentCredential;
    PKPaymentSetupProduct *_setupProduct;
    BOOL _allowsManualEntry;
    BOOL _previouslyAcceptedTerms;
    BOOL _snapshotNeedsCorners;
    UIImage *_passSnapshot;
    BOOL _shouldAutoProvision;
}

@property(nonatomic) BOOL shouldAutoProvision; // @synthesize shouldAutoProvision=_shouldAutoProvision;
// - (void).cxx_destruct;
- (id)onPresentationRemoveViewControllersAfterMarker;
- (void)paymentPassUpdatedOnCredential:(id)arg1;
- (void)_cleanupTransferredCredentialFromSourceDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (id)_defaultHeaderViewSubTitleForLocalCredential;
- (id)_defaultHeaderViewSubTitleForLocalCredentialTransfer;
- (id)_remoteExistingCredentialDefaultHeaderViewSubTitle;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (BOOL)isComplete;
- (id)readonlyFieldIdentifiers;
- (id)visibleFieldIdentifiers;
- (id)defaultFields;
- (void)_performFinishWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performProvisionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performTermsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performEligibilityWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performRequirementsWithCompletion:(CDUnknownBlockType)arg1;
- (void)performNextActionForProvisioningState:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_preflightCredentialFieldsWithCompletion:(CDUnknownBlockType)arg1;
- (void)preflightWithCompletion:(CDUnknownBlockType)arg1;
- (id)newPaymentEligibilityRequest;
- (id)newPaymentRequirementsRequest;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_updatePassSnapshotHeader;
- (void)_createPassSnapshotFromPaymentPass:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_terminateSetupFlow;
- (void)_skipCard;
- (void)addDifferentCard:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)setPassSnapshot:(id)arg1 needsCorners:(BOOL)arg2;
- (void)dealloc;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 paymentCredential:(id)arg4 setupProduct:(id)arg5 allowsManualEntry:(BOOL)arg6 previouslyAcceptedTerms:(BOOL)arg7;

@end

