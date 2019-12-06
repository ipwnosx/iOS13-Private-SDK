//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKViewController.h>

#import <GameCenterUI/AKAppleIDAuthenticationDelegate-Protocol.h>
#import <GameCenterUI/AKInlineSignInViewControllerDelegate-Protocol.h>
#import <GameCenterUI/GKAuthenticateViewController-Protocol.h>
#import <GameCenterUI/RemoteUIControllerDelegate-Protocol.h>

@class AKAppleIDAuthenticationInAppContext, AKInlineSignInViewController, GKAccountRemoteUIController, GKBubbleFlowContainerView, GKDispatchGroup, GKGame, GKLabel, GKSignInInputView, NSMutableArray, NSString, OBPrivacyLinkController, RemoteUIController, UIActivityIndicatorView, UINavigationController, UIScrollView, UIViewController;

@interface GKSignInViewController : GKViewController <AKInlineSignInViewControllerDelegate, AKAppleIDAuthenticationDelegate, RemoteUIControllerDelegate, GKAuthenticateViewController, UIScrollViewDelegate>
{
    BOOL _disablesSignIn;
    BOOL _loadingRemoteUI;
    BOOL _constraintsCreated;
    BOOL _userShouldSkipCreateAppleID;
    NSString *_appleID;
    id /* CDUnknownBlockType */ _completionHandler;
    UIViewController *_remoteUIPresentingViewController;
    UIActivityIndicatorView *_progressIndicator;
    GKLabel *_signInLabel;
    GKLabel *_loginPromptLabel;
    GKSignInInputView *_signInInputView;
    OBPrivacyLinkController *_privacyLinkController;
    GKBubbleFlowContainerView *_bubbleContainerView;
    AKInlineSignInViewController *_inlineSignInViewController;
    AKAppleIDAuthenticationInAppContext *_authContext;
    double _fullWidthContentWidthConstraintConstant;
    double _horizontalPaddingConstraintConstant;
    double _labelWidthConstraintConstant;
    NSMutableArray *_fullWidthViewConstraints;
    RemoteUIController *_remoteU13Controller;
    UINavigationController *_u13NavigationController;
    NSMutableArray *_u13ObjectModels;
    GKDispatchGroup *_u13Group;
    UIScrollView *_scrollView;
    GKGame *_game;
    GKAccountRemoteUIController *_accountController;
    UIEdgeInsets _currentContentInsets;
    UIEdgeInsets _contentInsetsBeforeKeyboard;
    UIEdgeInsets _scrollIndicatorInsetsBeforeKeyboard;
}

@property(retain, nonatomic) GKAccountRemoteUIController *accountController; // @synthesize accountController=_accountController;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) BOOL userShouldSkipCreateAppleID; // @synthesize userShouldSkipCreateAppleID=_userShouldSkipCreateAppleID;
@property(retain, nonatomic) GKDispatchGroup *u13Group; // @synthesize u13Group=_u13Group;
@property(retain, nonatomic) NSMutableArray *u13ObjectModels; // @synthesize u13ObjectModels=_u13ObjectModels;
@property(retain, nonatomic) UINavigationController *u13NavigationController; // @synthesize u13NavigationController=_u13NavigationController;
@property(retain, nonatomic) RemoteUIController *remoteU13Controller; // @synthesize remoteU13Controller=_remoteU13Controller;
@property(retain, nonatomic) NSMutableArray *fullWidthViewConstraints; // @synthesize fullWidthViewConstraints=_fullWidthViewConstraints;
@property(nonatomic) double labelWidthConstraintConstant; // @synthesize labelWidthConstraintConstant=_labelWidthConstraintConstant;
@property(nonatomic) double horizontalPaddingConstraintConstant; // @synthesize horizontalPaddingConstraintConstant=_horizontalPaddingConstraintConstant;
@property(nonatomic) double fullWidthContentWidthConstraintConstant; // @synthesize fullWidthContentWidthConstraintConstant=_fullWidthContentWidthConstraintConstant;
@property(retain, nonatomic) AKAppleIDAuthenticationInAppContext *authContext; // @synthesize authContext=_authContext;
@property(retain, nonatomic) AKInlineSignInViewController *inlineSignInViewController; // @synthesize inlineSignInViewController=_inlineSignInViewController;
@property(retain, nonatomic) GKBubbleFlowContainerView *bubbleContainerView; // @synthesize bubbleContainerView=_bubbleContainerView;
@property(nonatomic) UIEdgeInsets scrollIndicatorInsetsBeforeKeyboard; // @synthesize scrollIndicatorInsetsBeforeKeyboard=_scrollIndicatorInsetsBeforeKeyboard;
@property(nonatomic) UIEdgeInsets contentInsetsBeforeKeyboard; // @synthesize contentInsetsBeforeKeyboard=_contentInsetsBeforeKeyboard;
@property(nonatomic) UIEdgeInsets currentContentInsets; // @synthesize currentContentInsets=_currentContentInsets;
@property(nonatomic) BOOL constraintsCreated; // @synthesize constraintsCreated=_constraintsCreated;
@property(retain, nonatomic) OBPrivacyLinkController *privacyLinkController; // @synthesize privacyLinkController=_privacyLinkController;
@property(retain, nonatomic) GKSignInInputView *signInInputView; // @synthesize signInInputView=_signInInputView;
@property(retain, nonatomic) GKLabel *loginPromptLabel; // @synthesize loginPromptLabel=_loginPromptLabel;
@property(retain, nonatomic) GKLabel *signInLabel; // @synthesize signInLabel=_signInLabel;
@property(retain, nonatomic) UIActivityIndicatorView *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(nonatomic, getter=isLoadingRemoteUI) BOOL loadingRemoteUI; // @synthesize loadingRemoteUI=_loadingRemoteUI;
@property(retain, nonatomic) UIViewController *remoteUIPresentingViewController; // @synthesize remoteUIPresentingViewController=_remoteUIPresentingViewController;
@property(nonatomic) BOOL disablesSignIn; // @synthesize disablesSignIn=_disablesSignIn;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
// - (void).cxx_destruct;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)iForgotTapped;
- (void)createAppleID;
- (id)viewsToAnimateOutWhileDisappearingWithBubbleFlow;
- (id)viewsToAnimateInWhileAppearingWithBubbleFlow;
- (id)bubbleAnimatorForTransitionFromViewController:(id)arg1;
- (double)bubbleFlowAnimateInDuration;
- (double)bubbleFlowAnimateOutDuration;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppearAnimated:(BOOL)arg1 bubbleFlow:(BOOL)arg2;
- (double)bubbleFlowSubviewFadeOutDelay;
- (double)bubbleFlowSubviewFadeOutDuration;
- (BOOL)_gkUsesBubbleFlowModalPresentation;
- (void)showConnectionFailedAlert;
- (void)showAccountDisabledAlert;
- (void)showForgotPasswordAlert;
- (void)showLoginFailedAlert;
- (void)showPasswordAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)showPasswordResetAlertWithTitle:(id)arg1 message:(id)arg2;
- (BOOL)handleUnderlyingAuthenticationError:(id)arg1 accountName:(id)arg2;
- (void)finishAuthenticationWithError:(id)arg1;
- (void)showViewController:(id)arg1;
- (void)showAuthKitAlertFromGreenBuddyWithAuthInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showAccountRemoteUIForAccountName:(id)arg1 mode:(long long)arg2 url:(id)arg3 postBody:(id)arg4;
- (void)showAccountRemoteUIForAccountName:(id)arg1 mode:(long long)arg2;
- (void)presentAccountRemoteUIControllerAnimated:(BOOL)arg1;
- (void)loadAccountRemoteUIForPlayer:(id)arg1 mode:(long long)arg2 url:(id)arg3 postBody:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)loadAccountRemoteUIForPlayer:(id)arg1 mode:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)accountRemoteUIController:(id)arg1 finishedWithError:(id)arg2;
- (void)presentError:(id)arg1 forAccountRemoteUIController:(id)arg2;
- (void)createNewAccount;
- (void)authenticateRequestCompletedWithErrorResponse:(id)arg1 error:(id)arg2;
- (void)showPasswordChangeAlertWithURL:(id)arg1;
- (void)cancelSignIn;
- (void)signIn;
- (void)stopLoadingIndicator;
- (void)startLoadingIndicator;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)createConstraints;
- (void)updateConstraintConstantsForTraitCollection:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_systemContentSizeSettingDidChange:(id)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)addGDPRPrivacyLink;
- (void)createSubviews;
- (void)_updateBubbleRectsForOrientation:(long long)arg1;
- (BOOL)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(NSUInteger )arg3;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (BOOL)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)signInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3;
- (void)setupAuthKitInlineViewController;
- (void)traitCollectionDidChange:(id)arg1;
- (id)barBackgroundImage;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)addCancelButtonToNavigationItem:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (id)init;

@end

