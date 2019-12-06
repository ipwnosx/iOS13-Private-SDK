//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <ChatKit/CKBrowserViewControllerProtocol-Protocol.h>
#import <ChatKit/CKFullScreenAppViewControllerProtocol-Protocol.h>

@class CKConversation, CKDismissView, IMBalloonPlugin, IMBalloonPluginDataSource, NSObject, NSString, UIView;
@protocol CKBrowserViewControllerProtocol, CKBrowserViewControllerSendDelegate, CKFullScreenAppViewControllerDelegate, UIViewControllerTransitioningDelegate;

@interface CKFullScreenCardAppViewController : UIViewController <CKBrowserViewControllerProtocol, UIGestureRecognizerDelegate, UIAdaptivePresentationControllerDelegate, CKFullScreenAppViewControllerProtocol>
{
    BOOL _inTransition;
    UIViewController<CKBrowserViewControllerProtocol> *_contentViewController;
    id <CKFullScreenAppViewControllerDelegate> _delegate;
    id <UIViewControllerTransitioningDelegate> _parentTransitioningDelegate;
    UIView *_contentView;
    CKDismissView *_dismissView;
    CKConversation *_conversation;
    long long _lastKnownDeviceOrientation;
}

@property(nonatomic) long long lastKnownDeviceOrientation; // @synthesize lastKnownDeviceOrientation=_lastKnownDeviceOrientation;
@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
@property(nonatomic) BOOL inTransition; // @synthesize inTransition=_inTransition;
@property(retain, nonatomic) CKDismissView *dismissView; // @synthesize dismissView=_dismissView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) __weak id <UIViewControllerTransitioningDelegate> parentTransitioningDelegate; // @synthesize parentTransitioningDelegate=_parentTransitioningDelegate;
@property(nonatomic) __weak id <CKFullScreenAppViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *contentViewController; // @synthesize contentViewController=_contentViewController;
// - (void).cxx_destruct;
- (BOOL)_shouldShowDimmingView;
- (void)_updateDimmingViewAlpha;
- (BOOL)_currentPluginIsJellyfish;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (BOOL)canBecomeFirstResponder;
- (id)inputAccessoryView;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (long long)preferredStatusBarStyle;
- (BOOL)shouldAutorotate;
- (NSUInteger)supportedInterfaceOrientations;
- (void)willMoveToParentViewController:(id)arg1;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (CGRect)finalContentViewFrame;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)animateBrowserViewToTargetRect:(CGRect)arg1 grabberView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)animateBrowserViewFromSourceRect:(CGRect)arg1 interactive:(BOOL)arg2 grabberView:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithConversation:(id)arg1 plugin:(id)arg2;
- (void)_handleRemoteConnectionInterrupted:(id)arg1;
@property(readonly, nonatomic) BOOL inFullScreenModalPresentation;
@property(readonly, nonatomic) BOOL inExpandedPresentation;
- (BOOL)isLoaded;
- (void)dismiss;
- (id)initWithBalloonPlugin:(id)arg1;
- (id)initWithBalloonPlugin:(id)arg1 dataSource:(id)arg2;
@property(readonly, nonatomic) long long browserPresentationStyle;
@property(nonatomic) NSString *conversationID;
@property(nonatomic) BOOL isiMessage;
@property(readonly, nonatomic) BOOL shouldShowChatChrome;
@property(retain, nonatomic) IMBalloonPluginDataSource *balloonPluginDataSource;
@property(readonly, nonatomic) IMBalloonPlugin *balloonPlugin;
@property(nonatomic) __weak NSObject<CKBrowserViewControllerSendDelegate> *sendDelegate;
@property(retain, nonatomic) UIViewController *presentationViewController;
@property(nonatomic) BOOL isPrimaryViewController;
@property(readonly, nonatomic, getter=isDismissing) BOOL dismissing;
@property(readonly, nonatomic) BOOL shouldSuppressEntryView;
@property(readonly, nonatomic) BOOL mayBeKeptInViewHierarchy;
@property(readonly, nonatomic) BOOL supportsQuickView;
@property(readonly, nonatomic) BOOL wantsOpaqueUI;
@property(readonly, nonatomic) BOOL wantsDarkUI;

@end

