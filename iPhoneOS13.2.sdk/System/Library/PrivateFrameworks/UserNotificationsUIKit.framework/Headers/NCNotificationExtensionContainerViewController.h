//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <UserNotificationsUIKit/NCNotificationCustomContent-Protocol.h>
#import <UserNotificationsUIKit/_UNNotificationExtensionHostDelegate-Protocol.h>

@class NCMediaPlayPauseButton, NCNotificationRequest, NSMutableArray, NSString, UIView, _UNNotificationExtensionHostViewController;
@protocol NCNotificationCustomContentDelegate;

@interface NCNotificationExtensionContainerViewController : UIViewController <_UNNotificationExtensionHostDelegate, NCNotificationCustomContent>
{
    BOOL _allowManualDismiss;
    BOOL _defaultContentHidden;
    BOOL _overridesDefaultTitle;
    BOOL _userInteractionEnabled;
    BOOL _shouldPlayMediaAfterExpanded;
    id <NCNotificationCustomContentDelegate> _delegate;
    NSString *_extensionIdentifier;
    double _contentSizeRatio;
    NCNotificationRequest *_notificationRequest;
    _UNNotificationExtensionHostViewController *_extensionViewController;
    UIView *_blockingView;
    NCMediaPlayPauseButton *_mediaPlayPauseButton;
    NSMutableArray *_queuedRequests;
    NSMutableArray *_updatedActions;
}

@property(retain, nonatomic) NSMutableArray *updatedActions; // @synthesize updatedActions=_updatedActions;
@property(nonatomic) BOOL shouldPlayMediaAfterExpanded; // @synthesize shouldPlayMediaAfterExpanded=_shouldPlayMediaAfterExpanded;
@property(retain, nonatomic) NSMutableArray *queuedRequests; // @synthesize queuedRequests=_queuedRequests;
@property(nonatomic) BOOL userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property(nonatomic) BOOL overridesDefaultTitle; // @synthesize overridesDefaultTitle=_overridesDefaultTitle;
@property(nonatomic) BOOL defaultContentHidden; // @synthesize defaultContentHidden=_defaultContentHidden;
@property(nonatomic) BOOL allowManualDismiss; // @synthesize allowManualDismiss=_allowManualDismiss;
@property(retain, nonatomic) NCMediaPlayPauseButton *mediaPlayPauseButton; // @synthesize mediaPlayPauseButton=_mediaPlayPauseButton;
@property(retain, nonatomic) UIView *blockingView; // @synthesize blockingView=_blockingView;
@property(retain, nonatomic) _UNNotificationExtensionHostViewController *extensionViewController; // @synthesize extensionViewController=_extensionViewController;
@property(retain, nonatomic) NCNotificationRequest *notificationRequest; // @synthesize notificationRequest=_notificationRequest;
@property(nonatomic) double contentSizeRatio; // @synthesize contentSizeRatio=_contentSizeRatio;
@property(retain, nonatomic) NSString *extensionIdentifier; // @synthesize extensionIdentifier=_extensionIdentifier;
@property(nonatomic) __weak id <NCNotificationCustomContentDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (double)_contentHeightForWidth:(double)arg1;
- (void)_loadExtensionViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (id)remoteService;
- (void)_setupRemoteServiceInterface:(id)arg1;
- (void)_addExtensionViewFromViewController:(id)arg1;
- (id)_responseForAction:(id)arg1 notification:(id)arg2 response:(id)arg3;
- (void)_teardownExtension;
- (void)_setupExtensionViewController:(id)arg1;
- (void)_mediaPlayPauseButtonTapped:(id)arg1;
- (void)_setupMediaButton;
- (void)_flushQueuedRequests;
- (void)_playMediaAfterExpanded;
- (id)_requestActionForActionIdentifier:(id)arg1;
- (void)notificationHostExtension:(id)arg1 setUserNotificationActions:(id)arg2;
- (void)notificationHostExtensionRequestsDismiss:(id)arg1;
- (void)notificationHostExtensionRequestsDefaultAction:(id)arg1;
- (void)notificationHostExtensionMediaPlayingDidPause:(id)arg1;
- (void)notificationHostExtensionMediaPlayingDidStart:(id)arg1;
- (void)notificationHost:(id)arg1 extensionDidCompleteResponse:(id)arg2 withOption:(NSUInteger)arg3;
- (void)notificationHostExtension:(id)arg1 setTitle:(id)arg2;
- (void)notificationHostExtensionDidUpdateControls:(id)arg1;
- (id)cancelTouches;
- (void)playMedia;
@property(readonly, nonatomic) NSString *contentExtensionIdentifier;
- (BOOL)restoreInputViews;
- (void)preserveInputViews;
- (NSUInteger)customContentLocation;
- (BOOL)performAction:(id)arg1 forNotification:(id)arg2;
- (BOOL)performAction:(id)arg1 forNotification:(id)arg2 withUserInfo:(id)arg3;
- (BOOL)didReceiveNotificationRequest:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (BOOL)_canShowWhileLocked;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithExtension:(id)arg1 forNotificationRequest:(id)arg2;

@end

