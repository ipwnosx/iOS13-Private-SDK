//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

#import <PassKitUI/PKPaymentSetupDelegate-Protocol.h>

@interface PKPeerPaymentRegistrationRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKPaymentSetupDelegate>
{
}

+ (BOOL)_isSecureForRemoteViewService;
- (void)_dismiss;
- (void)paymentSetupDidFinish:(id)arg1;
- (void)handleButtonActions:(id)arg1;
- (BOOL)shouldAutorotate;
- (id)_peerPaymentAccountFromData:(id)arg1;
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)preferredStatusBarStyle;
- (NSUInteger)supportedInterfaceOrientations;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;

@end

