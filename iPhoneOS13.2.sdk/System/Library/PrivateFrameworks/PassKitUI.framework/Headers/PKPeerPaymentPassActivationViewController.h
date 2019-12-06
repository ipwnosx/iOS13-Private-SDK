//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKExplanationViewController.h>

#import <PassKitUI/PKExplanationViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKExplanationViewDelegate-Protocol.h>
#import <PassKitUI/PKPaymentSetupViewControllerDelegate-Protocol.h>

@class PKPaymentProvisioningController, PKPeerPaymentCredential, PKPeerPaymentSetupFlowHeroView, PKPeerPaymentTermsController, PKPeerPaymentWebService, UIImage;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPeerPaymentPassActivationViewController : PKExplanationViewController <PKPaymentSetupViewControllerDelegate, PKExplanationViewControllerDelegate, PKExplanationViewDelegate>
{
    PKPaymentProvisioningController *_provisioningController;
    PKPeerPaymentCredential *_credential;
    id <PKPaymentSetupViewControllerDelegate> _delegate;
    NSUInteger _state;
    PKPeerPaymentWebService *_peerPaymentWebService;
    PKPeerPaymentTermsController *_termsController;
    UIImage *_passSnapShot;
    BOOL _shouldShowAddDebitCardViewController;
    PKPeerPaymentSetupFlowHeroView *_heroView;
    BOOL _presentedDeviceToDeviceEncryptionFlow;
}

@property(nonatomic) BOOL presentedDeviceToDeviceEncryptionFlow; // @synthesize presentedDeviceToDeviceEncryptionFlow=_presentedDeviceToDeviceEncryptionFlow;
// - (void).cxx_destruct;
- (void)_terminateSetupFlow;
- (void)_handleNextStep;
- (void)_handleError:(id)arg1;
- (void)_presentSetupWillCompleteLaterAlertController;
- (void)_presentAlertControllerForError:(id)arg1;
- (void)_presentDeviceToDeviceEncryptionFlow;
- (void)_presentIdentityVerificationWithError:(id)arg1;
- (void)_presentTermsAndConditionsWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_bodyStringForState;
- (id)_titleStringForState;
- (void)_handleActivatedState;
- (void)_setState:(NSUInteger)arg1;
- (void)_presentActivationFailedErrorAlert;
- (void)_setShowSpinner:(BOOL)arg1;
- (void)_provisionPeerPaymentPass;
- (void)_resetApplyPayManateeView;
- (void)_presentMissingTLKsAlert;
- (void)_checkCloudStoreState;
- (void)_beginSetup;
- (BOOL)_shouldShowAddDebitCardViewController;
- (void)_presentAddDebitCardViewController;
- (CGSize)_snapshotSize;
- (void)_processCloudStorePCSError;
- (void)_initalizeCloudStoreWithTargetDevice:(id)arg1 ifNecessaryWithCompletion:(CDUnknownBlockType)arg2;
- (void)explanationViewControllerDidSelectCancel:(id)arg1;
- (void)viewControllerDidCancelSetupFlow:(id)arg1;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)viewDidLoad;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 credential:(id)arg4 passSnapShot:(id)arg5;

@end

