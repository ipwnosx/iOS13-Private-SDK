//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <TestFlightCore/TFBetaAppLaunchPresenterView-Protocol.h>
#import <TestFlightCore/TFHostedBetaAppLaunchScreenView-Protocol.h>

@class TFBetaAppLaunchPresenter, TFBetaAppLaunchScreenView, UIBarButtonItem;
@protocol TFBetaAppLaunchScreenHost;

__attribute__((visibility("hidden")))
@interface TFBetaAppLaunchScreenViewController : UIViewController <TFBetaAppLaunchPresenterView, TFHostedBetaAppLaunchScreenView>
{
    id <TFBetaAppLaunchScreenHost> _launchScreenHost;
    TFBetaAppLaunchPresenter *_presenter;
    TFBetaAppLaunchScreenView *_launchScreenView;
    UIBarButtonItem *_cancelBarButtonItem;
}

@property(readonly, nonatomic) UIBarButtonItem *cancelBarButtonItem; // @synthesize cancelBarButtonItem=_cancelBarButtonItem;
@property(retain, nonatomic) TFBetaAppLaunchScreenView *launchScreenView; // @synthesize launchScreenView=_launchScreenView;
@property(readonly, nonatomic) TFBetaAppLaunchPresenter *presenter; // @synthesize presenter=_presenter;
@property(nonatomic) __weak id <TFBetaAppLaunchScreenHost> launchScreenHost; // @synthesize launchScreenHost=_launchScreenHost;
// - (void).cxx_destruct;
- (void)_didPressNavigationItemCancel;
- (void)_didPressExitLaunchScreenButton;
- (void)_didPressOpenHowToSupportLinkButton;
- (void)_didPressShowHowToButton;
- (SEL)_selectorForPresentorViewEvent:(NSUInteger)arg1;
- (void)_updateNavigationBarForHostTraitCollection:(id)arg1;
- (id)_pushTransition;
- (id)_fadeTransition;
- (void)_animateLaunchScreenViewWithUpdateBlock:(CDUnknownBlockType)arg1 transition:(id)arg2;
- (void)dismissAnimated:(BOOL)arg1;
- (void)showHowToWithTitle:(id)arg1 subtitle:(id)arg2 imageIdentifier:(id)arg3 primaryButtonTitle:(id)arg4 primaryButtonEvent:(NSUInteger)arg5 secondaryButtonTitle:(id)arg6 secondaryButtonEvent:(NSUInteger)arg7 animated:(BOOL)arg8;
- (void)showTestNotesWithTitle:(id)arg1 lockup:(id)arg2 testNotesTitle:(id)arg3 testNotesText:(id)arg4 primaryButtonTitle:(id)arg5 primaryButtonEvent:(NSUInteger)arg6 animated:(BOOL)arg7 fetchingOnImageFetcher:(id)arg8;
- (void)showLoadingAnimated:(BOOL)arg1;
- (void)_updateForContainmentInHostEnvironment:(id)arg1;
- (void)launchScreenHost:(id)arg1 traitCollectionDidChange:(id)arg2;
- (long long)_currentInterfaceOrientation;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithPresenter:(id)arg1;

@end

