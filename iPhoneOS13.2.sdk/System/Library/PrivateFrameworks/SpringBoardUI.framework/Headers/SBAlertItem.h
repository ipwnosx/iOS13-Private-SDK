//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardUI/BSDescriptionProviding-Protocol.h>

@class NSArray, NSString, UIImage, _SBAlertController;

@interface SBAlertItem : NSObject <BSDescriptionProviding>
{
    _SBAlertController *_alertController;
    NSArray *_allowedBundleIDs;
    NSString *_iconImagePath;
    UIImage *_iconImage;
    BOOL _didEverActivate;
    BOOL _didEverDeactivate;
    BOOL _ignoreIfAlreadyDisplaying;
    BOOL _didPlayPresentationSound;
    BOOL _allowInSetup;
    BOOL _pendInSetupIfNotAllowed;
    BOOL _pendWhileKeyBagLocked;
    BOOL _allowInCar;
    BOOL _allowMessageInCar;
    BOOL _presented;
    BOOL _ignoresQuietMode;
    BOOL _suppressForKeynote;
    NSUInteger _presentationState;
    UIImage *_headerImage;
    UIImage *_attachmentImage;
}

+ (void)activateAlertItem:(id)arg1;
+ (id)_alertItemsController;
@property(retain, nonatomic, setter=_setAttachmentImage:) UIImage *_attachmentImage; // @synthesize _attachmentImage;
@property(retain, nonatomic, setter=_setHeaderImage:) UIImage *_headerImage; // @synthesize _headerImage;
@property(nonatomic, getter=_isPresented, setter=_setPresented:) BOOL presented; // @synthesize presented=_presented;
@property(nonatomic, setter=_setPresentationState:) NSUInteger _presentationState; // @synthesize _presentationState;
@property(retain, nonatomic, getter=_iconImagePath) NSString *iconImagePath; // @synthesize iconImagePath=_iconImagePath;
@property(retain, nonatomic, setter=setIconImage:) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(nonatomic, setter=_setIgnoresQuietMode:) BOOL _ignoresQuietMode; // @synthesize _ignoresQuietMode;
@property(nonatomic) BOOL allowMessageInCar; // @synthesize allowMessageInCar=_allowMessageInCar;
@property(nonatomic) BOOL allowInCar; // @synthesize allowInCar=_allowInCar;
@property(retain, nonatomic) NSArray *allowedBundleIDs; // @synthesize allowedBundleIDs=_allowedBundleIDs;
@property(nonatomic) BOOL pendWhileKeyBagLocked; // @synthesize pendWhileKeyBagLocked=_pendWhileKeyBagLocked;
@property(nonatomic) BOOL pendInSetupIfNotAllowed; // @synthesize pendInSetupIfNotAllowed=_pendInSetupIfNotAllowed;
@property(nonatomic) BOOL suppressForKeynote; // @synthesize suppressForKeynote=_suppressForKeynote;
@property(nonatomic) BOOL allowInSetup; // @synthesize allowInSetup=_allowInSetup;
@property(nonatomic) BOOL ignoreIfAlreadyDisplaying; // @synthesize ignoreIfAlreadyDisplaying=_ignoreIfAlreadyDisplaying;
// - (void).cxx_destruct;
- (BOOL)unlocksScreen;
- (BOOL)undimsScreen;
- (BOOL)dismissOnLock;
- (void)buttonDismissed;
- (void)dismiss:(int)arg1;
- (void)dismiss;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)_publicDescription;
- (BOOL)_displayActionButtonOnLockScreen;
- (BOOL)_didEverActivate;
- (BOOL)_hasActiveKeyboardOnScreen;
- (void)_noteVolumeOrLockPressed;
- (id)_prepareNewAlertControllerWithLockedState:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (void)_clearAlertController;
- (id)_alertController;
- (void)_deactivationCompleted;
- (void)presentationStateDidChangeFromState:(NSUInteger)arg1 toState:(NSUInteger)arg2;
- (void)doCleanupAfterDeactivationAnimation;
- (BOOL)hideOnClonedDisplay;
- (BOOL)dismissesOverlaysOnLockScreen;
- (int)alertPriority;
- (BOOL)allowInLoginWindow;
- (BOOL)behavesSuperModally;
- (BOOL)forcesModalAlertAppearance;
- (void)didDeactivateForReason:(int)arg1;
- (void)willDeactivateForReason:(int)arg1;
- (void)deactivateForReason:(int)arg1;
- (void)deactivateForButton;
- (void)deactivate;
- (void)willRelockForButtonPress:(BOOL)arg1;
- (void)alertItemDidDisappear;
- (void)alertItemDidAppear;
- (void)didActivate;
- (void)willActivate;
- (void)didFailToActivate;
- (id)sound;
- (void)playPresentationSound;
- (BOOL)didPlayPresentationSound;
- (BOOL)reappearsAfterUnlock;
- (BOOL)reappearsAfterLock;
- (BOOL)wakeDisplay;
- (BOOL)shouldShowInEmergencyCall;
- (BOOL)shouldShowInLockScreen;
- (BOOL)allowLockScreenDismissal;
- (BOOL)allowMenuButtonDismissal;
- (void)performUnlockAction;
- (id)shortLockLabel;
- (id)lockLabel;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (id)alertController;
- (id)init;

@end

