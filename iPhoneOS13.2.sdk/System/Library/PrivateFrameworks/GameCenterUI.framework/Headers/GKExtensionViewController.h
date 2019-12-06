//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <GameCenterUI/GKDaemonProxyDataUpdateDelegate-Protocol.h>
#import <GameCenterUI/GKDashboardServiceInterface-Protocol.h>
#import <GameCenterUI/GKExtensionHostProtocol-Protocol.h>
#import <GameCenterUI/GKExtensionProtocol-Protocol.h>

@class GKGame, NSLayoutConstraint, UIViewController, UIVisualEffectView;

@interface GKExtensionViewController : UINavigationController <GKDaemonProxyDataUpdateDelegate, GKExtensionProtocol, GKExtensionHostProtocol, GKDashboardServiceInterface>
{
    BOOL _alwaysShowDoneButton;
    BOOL _adjustTopConstraint;
    BOOL _hasInitialData;
    int _hostPID;
    double _statusBarHeight;
    UIViewController *_contentViewController;
    GKGame *_game;
    UIVisualEffectView *_effectView;
    NSLayoutConstraint *_effectBottomConstraint;
    NSLayoutConstraint *_effectTopConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *effectTopConstraint; // @synthesize effectTopConstraint=_effectTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *effectBottomConstraint; // @synthesize effectBottomConstraint=_effectBottomConstraint;
@property(nonatomic) BOOL hasInitialData; // @synthesize hasInitialData=_hasInitialData;
@property(nonatomic) BOOL adjustTopConstraint; // @synthesize adjustTopConstraint=_adjustTopConstraint;
@property(nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(nonatomic) int hostPID; // @synthesize hostPID=_hostPID;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic) double statusBarHeight; // @synthesize statusBarHeight=_statusBarHeight;
@property(nonatomic) BOOL alwaysShowDoneButton; // @synthesize alwaysShowDoneButton=_alwaysShowDoneButton;
- (void)setToDarkBackground;
- (void)setToLightBackground;
- (void)finish;
- (void)messageFromClient:(id)arg1;
- (void)extensionIsFinishing;
- (void)extensionIsCanceling;
- (void)messageFromExtension:(id)arg1;
- (void)sendMessageToClient:(id)arg1;
- (id)hostObjectProxy;
- (void)didShowViewController:(id)arg1 animated:(BOOL)arg2;
- (void)clientWillTerminate;
- (void)clientDidFinish;
- (void)clientDidCancel;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (double)_statusBarHeightForCurrentInterfaceOrientation;
- (void)donePressed:(id)arg1;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)addDoneButtonToViewController:(id)arg1;
- (void)configureContentViewController;
- (void)constructContentViewController;
- (void)setInitialState:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (BOOL)_useBackdropViewForWindowBackground;
- (id)blurEffectForTraitCollection:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)didBecomeActive:(id)arg1;
- (void)willResignActive:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

