//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBWelcomeController.h>

#import <SIMSetupSupport/TSSetupFlowItem-Protocol.h>

@class NSString;
@protocol TSSIMSetupFlowDelegate;

@interface TSCellularPlanUserConsentViewController : OBWelcomeController <TSSetupFlowItem>
{
    BOOL _didReceiveResponse;
    NSString *_confirmationCode;
    NSUInteger _consentType;
    BOOL _requireAdditionalConsent;
    id <TSSIMSetupFlowDelegate> _delegate;
}

+ (void)calculateTitleAndDetailsWithName:(id)arg1 consentType:(NSUInteger)arg2 title:(id )arg3 details:(id )arg4;
@property __weak id <TSSIMSetupFlowDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSUInteger consentType; // @synthesize consentType=_consentType;
// - (void).cxx_destruct;
- (BOOL)canBeShownFromSuspendedState;
- (void)_cancelButtonTapped;
- (void)_declineButtonTapped;
- (void)_acceptButtonTapped;
- (void)_setNavigationItems;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithConfirmationCode:(id)arg1 consentType:(NSUInteger)arg2 requireAdditionalConsent:(BOOL)arg3 confirmationCode:(id)arg4;
- (id)initWithName:(id)arg1 consentType:(NSUInteger)arg2 requireAdditionalConsent:(BOOL)arg3;

@end

