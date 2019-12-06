//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <PassKitUI/PKPaymentAuthorizationCoordinatorDelegate-Protocol.h>
#import <PassKitUI/PKPaymentAuthorizationCoordinatorPrivateDelegate-Protocol.h>
#import <PassKitUI/PKPaymentSetupDelegate-Protocol.h>
#import <PassKitUI/PKPaymentSetupPurchaseAmountViewDelegate-Protocol.h>
#import <PassKitUI/PKPaymentSetupViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKViewControllerPreflightable-Protocol.h>
#import <PassKitUI/RemoteUIControllerDelegate-Protocol.h>

@class NSDecimalNumber, PKPaymentAuthorizationCoordinator, PKPaymentProvisioningController, PKPaymentProvisioningMethodMetadata, PKPaymentSetupProduct, PKPaymentSetupPurchaseAmountView, PKPaymentSetupPurchaseController, PKServiceProviderPurchase, RemoteUIController, UIActivityIndicatorView, UIImage, UIImageView, UILabel;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupPurchaseViewController : UIViewController <PKPaymentSetupPurchaseAmountViewDelegate, PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPaymentSetupViewControllerDelegate, RemoteUIControllerDelegate, PKPaymentSetupDelegate, PKViewControllerPreflightable>
{
    BOOL _snapshotNeedsCorners;
    unsigned char _visibility;
    BOOL _fieldsVerified;
    BOOL _acceptedTerms;
    PKPaymentSetupProduct *_product;
    PKPaymentSetupPurchaseController *_purchaseController;
    PKPaymentProvisioningController *_provisioningController;
    long long _setupContext;
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;
    PKPaymentProvisioningMethodMetadata *_provisioningMethodMetadata;
    UIImageView *_passView;
    UILabel *_titleLabel;
    PKPaymentSetupPurchaseAmountView *_amountView;
    NSDecimalNumber *_currentAmount;
    PKPaymentAuthorizationCoordinator *_authorizationCoordinator;
    PKServiceProviderPurchase *_purchase;
    RemoteUIController *_termsController;
    UIImage *_cardImage;
    UIActivityIndicatorView *_activityIndicator;
}

@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UIImage *cardImage; // @synthesize cardImage=_cardImage;
@property(nonatomic) BOOL acceptedTerms; // @synthesize acceptedTerms=_acceptedTerms;
@property(retain, nonatomic) RemoteUIController *termsController; // @synthesize termsController=_termsController;
@property(nonatomic) BOOL fieldsVerified; // @synthesize fieldsVerified=_fieldsVerified;
@property(retain, nonatomic) PKServiceProviderPurchase *purchase; // @synthesize purchase=_purchase;
@property(retain, nonatomic) PKPaymentAuthorizationCoordinator *authorizationCoordinator; // @synthesize authorizationCoordinator=_authorizationCoordinator;
@property(copy, nonatomic) NSDecimalNumber *currentAmount; // @synthesize currentAmount=_currentAmount;
@property(retain, nonatomic) PKPaymentSetupPurchaseAmountView *amountView; // @synthesize amountView=_amountView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *passView; // @synthesize passView=_passView;
@property(retain, nonatomic) PKPaymentProvisioningMethodMetadata *provisioningMethodMetadata; // @synthesize provisioningMethodMetadata=_provisioningMethodMetadata;
@property(nonatomic) __weak id <PKPaymentSetupViewControllerDelegate> setupDelegate; // @synthesize setupDelegate=_setupDelegate;
@property(nonatomic) long long setupContext; // @synthesize setupContext=_setupContext;
@property(retain, nonatomic) PKPaymentProvisioningController *provisioningController; // @synthesize provisioningController=_provisioningController;
@property(readonly, nonatomic) PKPaymentSetupPurchaseController *purchaseController; // @synthesize purchaseController=_purchaseController;
@property(readonly, nonatomic) PKPaymentSetupProduct *product; // @synthesize product=_product;
// - (void).cxx_destruct;
- (CGSize)_imageSizeForScreenType:(NSUInteger)arg1 showingTransferButton:(BOOL)arg2;
- (void)_presentTermsAndConditionsWithCompletion:(CDUnknownBlockType)arg1;
- (id)_paymentRequestForAmount:(id)arg1;
- (void)_presetPaymentRequest:(id)arg1 forResultType:(long long)arg2;
- (void)_presentAddCardAlert:(id)arg1;
- (void)_rightBarButtonPressed:(id)arg1;
- (void)_showSpinner:(BOOL)arg1;
- (id)_spinnerBarButton;
- (id)_rightBarButton;
- (void)_createConstraints;
- (void)_createSubviews;
- (BOOL)_shouldHideImage;
- (BOOL)_readerModeIsSupported;
- (void)paymentSetupDidFinish:(id)arg1;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(NSUInteger )arg3;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePurchase:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)arg1;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)transferBalanceFromExistingCard;
- (void)didUpdateAmount:(id)arg1 isValid:(BOOL)arg2;
- (void)shakeCard;
- (void)preflightWithCompletion:(CDUnknownBlockType)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 product:(id)arg4;

@end

