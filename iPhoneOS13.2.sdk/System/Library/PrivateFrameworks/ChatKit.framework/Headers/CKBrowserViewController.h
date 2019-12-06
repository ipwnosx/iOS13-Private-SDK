//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <ChatKit/CKBrowserViewControllerProtocol-Protocol.h>

@class CKBrowserDragManager, IMBalloonPlugin, IMBalloonPluginDataSource, NSObject, NSString, UIView;
@protocol CKBrowserViewControllerSendDelegate;

@interface CKBrowserViewController : UIViewController <CKBrowserViewControllerProtocol>
{
    long long _previousConsumer;
    BOOL _isiMessage;
    BOOL _isPrimaryViewController;
    BOOL _isTransitioningToExpandedPresentation;
    NSObject<CKBrowserViewControllerSendDelegate> *_sendDelegate;
    IMBalloonPlugin *_balloonPlugin;
    NSString *_conversationID;
    IMBalloonPluginDataSource *_balloonPluginDataSource;
    UIViewController *_presentationViewController;
    long long _currentBrowserConsumer;
    UIView *_dragTargetView;
    CKBrowserDragManager *_browserDragManager;
}

+ (id)currentPPTTestName;
+ (BOOL)supportsMessagesAppExtendedLaunchTest;
@property(nonatomic) BOOL isTransitioningToExpandedPresentation; // @synthesize isTransitioningToExpandedPresentation=_isTransitioningToExpandedPresentation;
@property(retain, nonatomic) CKBrowserDragManager *browserDragManager; // @synthesize browserDragManager=_browserDragManager;
@property(nonatomic) __weak UIView *dragTargetView; // @synthesize dragTargetView=_dragTargetView;
@property(nonatomic) BOOL isPrimaryViewController; // @synthesize isPrimaryViewController=_isPrimaryViewController;
@property(nonatomic) long long currentBrowserConsumer; // @synthesize currentBrowserConsumer=_currentBrowserConsumer;
@property(retain, nonatomic) UIViewController *presentationViewController; // @synthesize presentationViewController=_presentationViewController;
@property(retain, nonatomic) IMBalloonPluginDataSource *balloonPluginDataSource; // @synthesize balloonPluginDataSource=_balloonPluginDataSource;
@property(nonatomic) NSString *conversationID; // @synthesize conversationID=_conversationID;
@property(nonatomic) BOOL isiMessage; // @synthesize isiMessage=_isiMessage;
@property(readonly, nonatomic) IMBalloonPlugin *balloonPlugin; // @synthesize balloonPlugin=_balloonPlugin;
@property(nonatomic) __weak NSObject<CKBrowserViewControllerSendDelegate> *sendDelegate; // @synthesize sendDelegate=_sendDelegate;
// - (void).cxx_destruct;
- (void)endDisablingUserInteraction;
- (void)beginDisablingUserInteraction;
@property(readonly, nonatomic) BOOL mayBeKeptInViewHierarchy;
@property(readonly, nonatomic) BOOL shouldSuppressEntryView;
@property(readonly, nonatomic) BOOL supportsQuickView;
@property(readonly, nonatomic) BOOL shouldShowChatChrome;
@property(readonly, nonatomic, getter=isDismissing) BOOL dismissing;
@property(readonly, nonatomic) BOOL wantsDarkUI;
@property(readonly, nonatomic) BOOL wantsOpaqueUI;
- (void)didTransitionFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
- (void)viewDidTransitionToCompactPresentation;
- (void)viewWillTransitionToCompactPresentation;
- (void)viewDidTransitionToExpandedPresentation;
- (void)viewWillTransitionToExpandedPresentation;
@property(readonly, nonatomic) BOOL wasExpandedPresentation;
@property(readonly, nonatomic) BOOL inFullScreenModalPresentation;
@property(readonly, nonatomic) BOOL inExpandedPresentation;
- (BOOL)inCompactPresentation;
- (BOOL)isLoaded;
- (void)dismiss;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL )arg2;
@property(readonly, nonatomic) long long browserPresentationStyle;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)finishedPPTTestNamed:(id)arg1 isCKLaunchTest:(BOOL)arg2;
- (void)startPPTTestNamed:(id)arg1;
- (void)finishedPPTTestNamed:(id)arg1;
- (id)initWithBalloonPlugin:(id)arg1;
- (id)initWithBalloonPlugin:(id)arg1 dataSource:(id)arg2;
- (id)initWithBalloonPlugin:(id)arg1 pluginPayloads:(id)arg2;
- (void)_updateContentOverlayInsetsForSelfAndChildren;

@end

