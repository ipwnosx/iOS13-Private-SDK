//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MISSING_TYPE, NSTimer, TUCall;
@protocol CNKFaceTimeMultiwayConversationViewControllerDelegate;

@interface CNKFaceTimeMultiwayConversationViewController : UIViewController
{
    MISSING_TYPE *conversationController;
    MISSING_TYPE *mostActiveParticipantsController;
    MISSING_TYPE *avcEffects;
    MISSING_TYPE *effectsCaptureInfo;
    MISSING_TYPE *viewContent;
    MISSING_TYPE *inCallControlsDismissTimer;
    MISSING_TYPE *hideInactiveParticipantsTimer;
    MISSING_TYPE *effectsLayoutController;
    MISSING_TYPE *pipZoomControl;
    MISSING_TYPE *shouldShowZoomControls;
    MISSING_TYPE *deviceOrientation;
    MISSING_TYPE *delegate;
    MISSING_TYPE *effectsEnabled;
    MISSING_TYPE *isPipped;
}

// - (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)accessibilityConstraintController;
- (void)setControllerIsPipped:(BOOL)arg1;
- (void)hideEffectsBrowser;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)openMessagesConversation;
- (void)muteVideo;
- (void)toggleVideoMute;
- (void)toggleAudioMute;
- (void)restartAutoHideInCallControlsDrawerTimer;
- (void)updateViewConstraints;
- (BOOL)_canShowWhileLocked;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithActiveCall:(id)arg1;
- (id)initWithActiveCall:(id)arg1 stagingAreaViewController:(id)arg2;
@property(nonatomic, readonly) UIViewController *pipViewController;
@property(nonatomic) BOOL effectsEnabled; // @synthesize effectsEnabled;
@property(nonatomic) __weak id <CNKFaceTimeMultiwayConversationViewControllerDelegate> delegate; // @synthesize delegate;
@property(nonatomic) long long deviceOrientation; // @synthesize deviceOrientation;
@property(nonatomic, readonly) BOOL wantsApplicationDismissalStyle;
@property(nonatomic, readonly) TUCall *call;
@property(nonatomic, retain) NSTimer *inCallControlsDismissTimer; // @synthesize inCallControlsDismissTimer;

@end

