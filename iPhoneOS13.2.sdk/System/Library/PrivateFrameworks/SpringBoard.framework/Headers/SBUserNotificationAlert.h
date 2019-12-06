//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/SBAlertItem.h>


@class BKSProcessAssertion, BSAuditToken, NSArray, NSDictionary, NSObject, NSString, NSTimer, NSURL, SBUISound, UIViewController, _SBLegacyRemoteAlertContentHostViewController, _SBSUICFUserNotificationContentHostViewController, _SBUserNotificationImageDescriptor;
@protocol BSInvalidatable, OS_dispatch_source;

@interface SBUserNotificationAlert : SBAlertItem <UITextFieldDelegate>
{
    NSString *_alertSource;
    BSAuditToken *_auditToken;
    unsigned int _replyPort;
    NSObject<OS_dispatch_source> *_portWatcher;
    NSObject<OS_dispatch_source> *_expirationTimer;
    BOOL _sentResponse;
    BOOL _cleanedUp;
    int _token;
    int _timeout;
    NSUInteger _requestFlags;
    NSString *_alertHeader;
    id _alertMessage;
    NSString *_alertMessageDelimiter;
    NSString *_lockScreenAlertHeader;
    id _lockScreenAlertMessage;
    NSString *_lockScreenAlertMessageDelimiter;
    NSString *_defaultButtonTitle;
    NSString *_alternateButtonTitle;
    NSString *_otherButtonTitle;
    NSString *_soundPath;
    unsigned int _soundID;
    unsigned int _soundIDBehavior;
    NSDictionary *_vibrationPattern;
    long long _soundAlertType;
    NSString *_soundAlertTopic;
    double _soundRepeatDuration;
    NSTimer *_soundStopTimer;
    id _keyboardTypes;
    id _autocapitalizationTypes;
    id _autocorrectionTypes;
    id _textFieldTitles;
    id _textFieldValues;
    double _creationTime;
    int _defaultButtonTag;
    int _unlockActionButtonTag;
    unsigned int _replyFlags;
    NSString *_defaultResponseLaunchBundleID;
    NSURL *_defaultResponseLaunchURL;
    NSString *_remoteViewControllerClassName;
    NSString *_remoteServiceBundleIdentifier;
    _SBSUICFUserNotificationContentHostViewController *_extensionContentViewController;
    _SBLegacyRemoteAlertContentHostViewController *_viewServiceContentViewController;
    NSArray *_textFieldDefinitions;
    NSArray *_customButtonDefinitions;
    long long _defaultButtonActionStyle;
    long long _alternateButtonActionStyle;
    long long _otherButtonActionStyle;
    unsigned int _allowedInLoginWindow:1;
    unsigned int _canceled:1;
    unsigned int _isActivated:1;
    unsigned int _aboveLock:1;
    unsigned int _displayActionButtonOnLockScreen:1;
    unsigned int _dismissOnLock:1;
    unsigned int _dontDismissOnUnlock:1;
    unsigned int _behavesSuperModally:1;
    unsigned int _allowMenuButtonDismissal:1;
    unsigned int _wakeDisplay:1;
    unsigned int _forcesModalAlertAppearance:1;
    unsigned int _dismissesOverlaysOnLockScreen:1;
    unsigned int _disableIdleSleepWhileVisible:1;
    unsigned int _hideOnClonedDisplay:1;
    unsigned int _configuredLocked:1;
    unsigned int _configuredNeedsPasscode:1;
    unsigned int _defaultResponseAppLaunchWaitingForPasscode:1;
    unsigned int _deactivatingForPresentationUpdate:1;
    SBUISound *_sound;
    BKSProcessAssertion *_processAssertion;
    unsigned int _allowLockscreenDismissal:1;
    id <BSInvalidatable> _idleTimerDisableAssertion;
    _SBUserNotificationImageDescriptor *_headerImageDescriptor;
    _SBUserNotificationImageDescriptor *_iconImageDescriptor;
    _SBUserNotificationImageDescriptor *_attachmentImageDescriptor;
    NSString *_extensionIdentifier;
    UIViewController *_contentViewControllerForAlertController;
}

@property(retain) UIViewController *contentViewControllerForAlertController; // @synthesize contentViewControllerForAlertController=_contentViewControllerForAlertController;
@property(retain) NSString *extensionIdentifier; // @synthesize extensionIdentifier=_extensionIdentifier;
@property(retain) NSString *remoteServiceBundleIdentifier; // @synthesize remoteServiceBundleIdentifier=_remoteServiceBundleIdentifier;
@property(retain) NSString *remoteViewControllerClassName; // @synthesize remoteViewControllerClassName=_remoteViewControllerClassName;
@property(retain) NSURL *defaultResponseLaunchURL; // @synthesize defaultResponseLaunchURL=_defaultResponseLaunchURL;
@property(retain) NSString *defaultResponseLaunchBundleID; // @synthesize defaultResponseLaunchBundleID=_defaultResponseLaunchBundleID;
@property(retain) NSString *otherButtonTitle; // @synthesize otherButtonTitle=_otherButtonTitle;
@property(retain) NSString *alternateButtonTitle; // @synthesize alternateButtonTitle=_alternateButtonTitle;
@property(retain) NSString *defaultButtonTitle; // @synthesize defaultButtonTitle=_defaultButtonTitle;
@property(retain) NSString *lockScreenAlertMessageDelimiter; // @synthesize lockScreenAlertMessageDelimiter=_lockScreenAlertMessageDelimiter;
@property(retain) NSString *lockScreenAlertMessage; // @synthesize lockScreenAlertMessage=_lockScreenAlertMessage;
@property(retain) NSString *lockScreenAlertHeader; // @synthesize lockScreenAlertHeader=_lockScreenAlertHeader;
@property(retain) NSString *alertMessageDelimiter; // @synthesize alertMessageDelimiter=_alertMessageDelimiter;
@property(retain) NSString *alertMessage; // @synthesize alertMessage=_alertMessage;
@property(retain) NSString *alertHeader; // @synthesize alertHeader=_alertHeader;
@property(retain) NSString *soundAlertTopic; // @synthesize soundAlertTopic=_soundAlertTopic;
@property long long soundAlertType; // @synthesize soundAlertType=_soundAlertType;
@property(retain) NSDictionary *vibrationPattern; // @synthesize vibrationPattern=_vibrationPattern;
@property unsigned int soundIDBehavior; // @synthesize soundIDBehavior=_soundIDBehavior;
@property unsigned int soundID; // @synthesize soundID=_soundID;
@property(retain) NSString *soundPath; // @synthesize soundPath=_soundPath;
@property(retain) id textFieldValues; // @synthesize textFieldValues=_textFieldValues;
@property(retain) id textFieldTitles; // @synthesize textFieldTitles=_textFieldTitles;
@property(retain) id autocorrectionTypes; // @synthesize autocorrectionTypes=_autocorrectionTypes;
@property(retain) id autocapitalizationTypes; // @synthesize autocapitalizationTypes=_autocapitalizationTypes;
@property(retain) id keyboardTypes; // @synthesize keyboardTypes=_keyboardTypes;
// - (void).cxx_destruct;
- (id)_imageDescriptorForPath:(id)arg1 catalogPath:(id)arg2 catalogImageKey:(id)arg3;
- (long long)_uiAlertActionStyleFromSBUserNotificationButtonPresentationStyle:(int)arg1;
- (id)_parseCustomButtonDefinitions:(id)arg1 locBundle:(id)arg2;
- (id)_parseTextFieldDefinitions:(id)arg1 locBundle:(id)arg2;
- (id)_parseLegacyTextFieldDefinitions:(id)arg1 locBundle:(id)arg2;
- (void)_cleanupCustomContentViewControllers;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange *)arg2 replacementString:(id)arg3;
- (void)presentationStateDidChangeFromState:(NSUInteger)arg1 toState:(NSUInteger)arg2;
- (void)didFailToActivate;
- (void)didDeactivateForReason:(int)arg1;
- (void)willDeactivateForReason:(int)arg1;
- (void)_noteVolumeOrLockPressed;
- (BOOL)reappearsAfterUnlock;
- (BOOL)reappearsAfterLock;
- (BOOL)hideOnClonedDisplay;
- (BOOL)dismissesOverlaysOnLockScreen;
- (BOOL)forcesModalAlertAppearance;
- (BOOL)behavesSuperModally;
- (BOOL)allowInLoginWindow;
- (BOOL)allowLockScreenDismissal;
- (void)_activateApplication:(id)arg1 withURL:(id)arg2;
- (void)dismissIfNecessaryWithResponse:(int)arg1 customButtonResponse:(int)arg2;
- (void)dismissIfNecessaryWithResponse:(int)arg1;
- (void)performUnlockAction;
- (void)_sendResponseAndCleanUp:(int)arg1 customButtonResponse:(int)arg2;
- (void)_sendResponseAndCleanUp:(int)arg1;
- (void)cancel;
- (void)_cleanup;
- (void)_setActivated:(BOOL)arg1;
- (void)doCleanupAfterDeactivationAnimation;
- (void)_clearRemoteViewControllerIfPresent;
- (id)_prepareNewAlertControllerWithLockedState:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (id)sound;
- (void)willActivate;
- (BOOL)_displayActionButtonOnLockScreen;
- (BOOL)wakeDisplay;
- (BOOL)allowMenuButtonDismissal;
- (BOOL)dismissOnLock;
- (BOOL)shouldShowInLockScreen;
- (int)token;
- (id)_publicDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)updateWithMessage:(id)arg1 requestFlags:(int)arg2;
// - (id)initWithMessage:(id)arg1 replyPort:(unsigned int)arg2 requestFlags:(int)arg3 auditToken:(CDStruct_6ad76789)arg4;
- (id)_safeLocalizedValue:(id)arg1 withBundle:(id)arg2;
- (id)iconImage;
- (id)_attachmentImage;
- (id)_headerImage;

@end

