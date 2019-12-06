//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <AppPredictionUI/APUIWFLIntentControllerDelegate-Protocol.h>
#import <AppPredictionUI/CRKCardPresentationDelegate-Protocol.h>
#import <AppPredictionUI/CRKCardViewControllerDelegate-Protocol.h>

@class APUIWFLIntentController, ATXAction, CRKCardPresentation, INIntent, UIActivityIndicatorView;
@protocol APUIIntentHandlingViewControllerDelegate, CRKCardViewControllerDelegate, CRKCardViewControlling;

@interface APUIIntentHandlingViewController : UIViewController <CRKCardPresentationDelegate, CRKCardViewControllerDelegate, APUIWFLIntentControllerDelegate>
{
    BOOL _intentIsDirty;
    BOOL _suppressSpinner;
    INIntent *_intent;
    long long _executionContext;
    id <APUIIntentHandlingViewControllerDelegate> _delegate;
    APUIWFLIntentController *_wfIntentController;
    CRKCardPresentation *_cardPresentation;
    UIViewController<CRKCardViewControlling> *_currentCardViewController;
    double _preferredPlatterContentHeight;
    UIActivityIndicatorView *_activityIndicatorView;
    ATXAction *_atxAction;
}

@property(retain, nonatomic) ATXAction *atxAction; // @synthesize atxAction=_atxAction;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(nonatomic) BOOL suppressSpinner; // @synthesize suppressSpinner=_suppressSpinner;
@property(nonatomic) double preferredPlatterContentHeight; // @synthesize preferredPlatterContentHeight=_preferredPlatterContentHeight;
@property(retain, nonatomic) UIViewController<CRKCardViewControlling> *currentCardViewController; // @synthesize currentCardViewController=_currentCardViewController;
@property(retain, nonatomic) CRKCardPresentation *cardPresentation; // @synthesize cardPresentation=_cardPresentation;
@property(nonatomic) BOOL intentIsDirty; // @synthesize intentIsDirty=_intentIsDirty;
@property(retain, nonatomic) APUIWFLIntentController *wfIntentController; // @synthesize wfIntentController=_wfIntentController;
@property(nonatomic) __weak id <APUIIntentHandlingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long executionContext; // @synthesize executionContext=_executionContext;
@property(retain, nonatomic) INIntent *intent; // @synthesize intent=_intent;
// - (void).cxx_destruct;
@property(readonly, nonatomic) id <CRKCardViewControllerDelegate> cardViewControllerDelegate;
- (void)cardViewControllerBoundsDidChange:(id)arg1;
- (void)cardViewControllerDidLoad:(id)arg1;
- (void)intentController:(id)arg1 didHandleInteraction:(id)arg2;
- (void)intentControllerDidFailAuthorizationCheck:(id)arg1;
- (void)intentController:(id)arg1 didFailWithError:(id)arg2 forInteraction:(id)arg3;
- (void)intentController:(id)arg1 requiresContinuingInAppForIntent:(id)arg2 proceedHandler:(CDUnknownBlockType)arg3;
- (void)intentController:(id)arg1 requiresConfirmationForIntent:(id)arg2 intentResponse:(id)arg3;
- (BOOL)intentController:(id)arg1 shouldRequireConfirmationForIntent:(id)arg2 intentResponse:(id)arg3;
- (void)_updateCardViewControllerForInteraction:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_constructCardViewControllerForInteraction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (NSUInteger)_cardFormatForContentRequest:(id)arg1;
- (id)_contentForCardRequestWithInteraction:(id)arg1;
- (void)_createOrUpdateCardViewControllerForInteraction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_installChildViewController:(id)arg1;
- (void)_setupProgressIndicator;
- (void)launchAppWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)titleForConfirmAction;
- (void)confirmationGranted:(BOOL)arg1;
- (void)beginRunningIntent;
- (void)setPreferredPlatterContentHeight:(double)arg1 notifyDelegate:(BOOL)arg2;
- (void)viewDidLoad;
- (id)initWithIntent:(id)arg1;

@end

