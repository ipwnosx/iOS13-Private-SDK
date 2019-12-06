//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CommunicationsSetupUI/CNFRegSignInController.h>

#import <CommunicationsSetupUI/AKTapToSignInViewControllerDelegate-Protocol.h>

@class AKTapToSignInViewController, CNFRegSigninLearnMoreView;

@interface CNFRegSplashSignInController : CNFRegSignInController <AKTapToSignInViewControllerDelegate>
{
    CNFRegSigninLearnMoreView *_signInView;
    AKTapToSignInViewController *_akSignInVC;
}

// - (void).cxx_destruct;
- (void)tapToSignInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)_existingLearnMoreViewForSection:(long long)arg1;
- (id)_existingLearnMoreViewForSpecifier:(id)arg1;
- (void)_handleTimeout;
- (id)specifierList;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (id)_controllerToPresentOn;

@end

