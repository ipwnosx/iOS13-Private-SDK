//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <PassKitUI/PKPaymentAuthorizationCoordinatorDelegate-Protocol.h>
#import <PassKitUI/PKPaymentAuthorizationCoordinatorPrivateDelegate-Protocol.h>
#import <PassKitUI/PKPerformActionViewDelegate-Protocol.h>

@class PKPaymentPass, PKPaymentPassAction, PKPaymentWebService, PKPerformActionLoadingView, PKPerformActionPassView, PKServiceProviderPurchase, UIBarButtonItem, UIView;
@protocol PKPaymentDataProvider, PKPerformActionView, PKPerformActionViewControllerDelegate;

@interface PKPerformActionViewController : UIViewController <PKPerformActionViewDelegate, PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate>
{
    PKPerformActionPassView *_passView;
    PKPerformActionLoadingView *_loadingView;
    id <PKPaymentDataProvider> _paymentDataProvider;
    BOOL _remoteContentFetched;
    BOOL _fieldsVerified;
    PKServiceProviderPurchase *_completedPurchase;
    UIBarButtonItem *_button;
    UIBarButtonItem *_spinner;
    PKPaymentPass *_pass;
    PKPaymentPassAction *_action;
    UIView<PKPerformActionView> *_actionView;
    PKPaymentWebService *_webService;
    id <PKPerformActionViewControllerDelegate> _delegate;
}

+ (id)alertControllerForUnableReason:(NSUInteger)arg1 action:(id)arg2 displayableError:(id)arg3 addCardActionHandler:(CDUnknownBlockType)arg4;
@property(nonatomic) __weak id <PKPerformActionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PKPaymentWebService *webService; // @synthesize webService=_webService;
@property(readonly, nonatomic) UIView<PKPerformActionView> *actionView; // @synthesize actionView=_actionView;
@property(readonly, nonatomic) PKPaymentPassAction *action; // @synthesize action=_action;
@property(readonly, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
// - (void).cxx_destruct;
- (void)_cancelButtonPressed:(id)arg1;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePurchase:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)arg1;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (BOOL)_shouldPresentPaymentRequest:(long long)arg1;
- (void)_presentPaymentSetupControllerWithAllowedPaymentNetworks:(id)arg1;
- (void)_showGenericErrorAlert:(CDUnknownBlockType)arg1;
- (void)_canPerformPaymentWithCompletion:(CDUnknownBlockType)arg1;
- (void)_rightBarButtonPressed:(id)arg1;
- (void)_reloadActionView;
- (void)_showLoadingView:(BOOL)arg1;
- (void)_fetchRemoteContentIfNeeded;
- (void)_showSpinner:(BOOL)arg1;
- (void)setRightBarButtonEnabled:(BOOL)arg1;
- (void)shakeCard;
- (BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (void)viewWillLayoutSubviews;
- (void)updateFirstResponder;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)_actionViewForPass:(id)arg1 action:(id)arg2;
- (id)initWithPass:(id)arg1 action:(id)arg2 paymentDataProvider:(id)arg3;
- (id)initWithPass:(id)arg1 action:(id)arg2;
- (id)init;

@end

