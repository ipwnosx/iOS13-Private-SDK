//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <StoreKitUI/SKUIRedeemIdDelegate-Protocol.h>
#import <StoreKitUI/SKUIRedeemStepDelegate-Protocol.h>

@class NSOperationQueue, NSString, SKUIClientContext, SKUIRedeemConfiguration, SKUIRedeemPreflightOperation, SKUIRedeemStepViewController, UIBarButtonItem;
@protocol SKUIRedeemViewCameraOverrideDelegate;

@interface SKUIRedeemViewControllerLegacy : UINavigationController <SKUIRedeemIdDelegate, SKUIRedeemStepDelegate>
{
    BOOL _attempsAutomaticRedeem;
    BOOL _cameraRedeemEnabled;
    long long _category;
    SKUIClientContext *_clientContext;
    NSString *_initialCode;
    NSOperationQueue *_operationQueue;
    SKUIRedeemPreflightOperation *_preflightOperation;
    SKUIRedeemConfiguration *_redeemConfiguration;
    SKUIRedeemStepViewController *_inputViewController;
    long long _initialBarStyle;
    BOOL _cameraRedeemVisible;
    BOOL _shouldPerformInitialOperationOnAppear;
    id <SKUIRedeemViewCameraOverrideDelegate> _cameraDelegate;
    UIBarButtonItem *_cancelButtonItem;
}

+ (BOOL)redeemRequiresNationalId:(id)arg1;
@property(retain, nonatomic) UIBarButtonItem *cancelButtonItem; // @synthesize cancelButtonItem=_cancelButtonItem;
@property(nonatomic) BOOL shouldPerformInitialOperationOnAppear; // @synthesize shouldPerformInitialOperationOnAppear=_shouldPerformInitialOperationOnAppear;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(nonatomic) __weak id <SKUIRedeemViewCameraOverrideDelegate> cameraDelegate; // @synthesize cameraDelegate=_cameraDelegate;
@property(retain, nonatomic) SKUIRedeemConfiguration *redeemConfiguration; // @synthesize redeemConfiguration=_redeemConfiguration;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(copy, nonatomic) NSString *initialCode; // @synthesize initialCode=_initialCode;
@property(readonly, nonatomic) long long category; // @synthesize category=_category;
@property(nonatomic) BOOL cameraRedeemVisible; // @synthesize cameraRedeemVisible=_cameraRedeemVisible;
@property(nonatomic) BOOL attempsAutomaticRedeem; // @synthesize attempsAutomaticRedeem=_attempsAutomaticRedeem;
// - (void).cxx_destruct;
- (void)_showNationalIdLoadingPage;
- (void)_showNationalIdVerificationPage;
- (void)_executeIdValidationOperationWithFields:(id)arg1;
- (void)_executeRequiresIdValidationOperation;
- (void)_showInputViewController;
- (id)_newInputViewController;
- (void)_loadInputViewController;
- (void)_finishPreflightWithResult:(id)arg1;
- (void)_attemptAutomaticRedeemWithMetadata:(id)arg1;
- (void)_executePreflightOperationForcesAuthentication:(BOOL)arg1;
- (void)_performInitialRedeemOperation;
- (void)_cancelButtonAction:(id)arg1;
- (void)redeemAgainAnimated:(BOOL)arg1;
- (void)redeemIdViewController:(id)arg1 submittedWithFields:(id)arg2;
- (void)redeemIdViewControllerDidCancel:(id)arg1;
- (void)redeemStepViewControllerShouldValidateNationalID:(id)arg1;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissAnimated:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (NSUInteger)supportedInterfaceOrientations;
- (CGSize)preferredContentSize;
- (id)initWithRedeemCategory:(long long)arg1;

@end

