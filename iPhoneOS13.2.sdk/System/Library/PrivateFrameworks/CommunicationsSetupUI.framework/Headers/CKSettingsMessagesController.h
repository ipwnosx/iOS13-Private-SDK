//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CommunicationsSetupUI/CNFRegListController.h>

#import <CommunicationsSetupUI/AKAppleIDAuthenticationDelegate-Protocol.h>
#import <CommunicationsSetupUI/CKOnboardingControllerDelegate-Protocol.h>
#import <CommunicationsSetupUI/CNFRegWizardControllerDelegate-Protocol.h>
#import <CommunicationsSetupUI/CNMeCardSharingSettingsViewControllerDelegate-Protocol.h>
#import <CommunicationsSetupUI/IMCloudKitEventHandler-Protocol.h>

@class CKFilteringListController, CKMultipleCTSubscriptionsController, CKNSExtension, CKOnboardingController, IMCTXPCServiceSubscriptionInfo;

@interface CKSettingsMessagesController : CNFRegListController <CNFRegWizardControllerDelegate, AKAppleIDAuthenticationDelegate, IMCloudKitEventHandler, CNMeCardSharingSettingsViewControllerDelegate, CKOnboardingControllerDelegate>
{
    BOOL _showingChildViewController;
    int _profileToken;
    CKFilteringListController *_filteringController;
    id _beginMappingID;
    CKMultipleCTSubscriptionsController *_mmsMessagingController;
    CKMultipleCTSubscriptionsController *_mmsAllowsGroupMessagingController;
    IMCTXPCServiceSubscriptionInfo *_ctSubscriptionInfo;
    CKOnboardingController *_onboardingController;
    CKNSExtension *_ckExtension;
}

+ (id)currentKeepMessages;
+ (id)removeFirstPartyExtensionFromArray:(id)arg1;
+ (int)currentMessageAutoKeepOptionForType:(int)arg1;
+ (BOOL)currentMessageAutoKeepForType:(int)arg1;
@property(retain, nonatomic) CKNSExtension *ckExtension; // @synthesize ckExtension=_ckExtension;
@property(retain, nonatomic) CKOnboardingController *onboardingController; // @synthesize onboardingController=_onboardingController;
@property(retain, nonatomic) IMCTXPCServiceSubscriptionInfo *ctSubscriptionInfo; // @synthesize ctSubscriptionInfo=_ctSubscriptionInfo;
@property(retain, nonatomic) CKMultipleCTSubscriptionsController *mmsAllowsGroupMessagingController; // @synthesize mmsAllowsGroupMessagingController=_mmsAllowsGroupMessagingController;
@property(retain, nonatomic) CKMultipleCTSubscriptionsController *mmsMessagingController; // @synthesize mmsMessagingController=_mmsMessagingController;
@property(retain) id beginMappingID; // @synthesize beginMappingID=_beginMappingID;
@property(retain, nonatomic) CKFilteringListController *filteringController; // @synthesize filteringController=_filteringController;
// - (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)controllerForSpecifier:(id)arg1;
- (id)_smsRelayDevicesController;
- (id)_madridSettingsController;
- (void)_clearMessagesAppExtensionSalt;
- (void)_setupAccountHandlersForDisabling;
- (BOOL)_allAccountsAreDeactivated;
- (void)_setupAccountHandlers;
- (void)_updateUIWithError:(id)arg1;
- (void)firstRunControllerDidFinish:(id)arg1 finished:(BOOL)arg2;
- (void)_showMadridSetupIfNecessary;
- (void)_showMadridSetupIfNecessary:(BOOL)arg1;
- (void)_showSignInController;
- (BOOL)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4;
- (void)_showAuthKitSignInIfNecessary;
- (void)setKeepMessages:(id)arg1 specifier:(id)arg2;
- (id)getKeepMessages:(id)arg1;
- (id)getSMSRelayDevicesSummary:(id)arg1;
- (void)setPreviewTranscodingEnabled:(id)arg1 specifier:(id)arg2;
- (id)getPreviewTranscodingEnabled:(id)arg1;
- (id)madridSigninButtonTextForSpecifier:(id)arg1;
- (void)madridSigninTappedWithSpecifier:(id)arg1;
- (id)madridSigninSpecifiers;
- (BOOL)shouldShowMadridSignin;
- (id)getAccountSummaryForSpecifier:(id)arg1;
- (id)madridAccountsSpecifierIdentifiers;
- (BOOL)shouldShowMadridAccounts;
- (id)sendAsSMSIdentifiers;
- (BOOL)shouldShowSendAsSMS;
- (void)setReadReceiptsEnabled:(id)arg1 specifier:(id)arg2;
- (id)areReadReceiptsEnabled:(id)arg1;
- (id)readReceiptSpecifierIdentifiers;
- (BOOL)shouldShowReadReceipts;
- (id)smsRelaySettingsSpecifierIdentifiers;
- (BOOL)shouldShowSMSRelaySettings;
- (void)_setUpBusinessChatGroupSpecifiers:(id)arg1;
- (void)sharingSettingsViewController:(id)arg1 didUpdateWithSharingResult:(id)arg2;
- (void)sharingSettingsViewController:(id)arg1 didSelectSharingAudience:(NSUInteger)arg2;
- (void)sharingSettingsViewController:(id)arg1 didUpdateSharingState:(BOOL)arg2;
- (void)sharingSettingsViewControllerDidUpdateContact:(id)arg1;
- (BOOL)_imageForkedFromMeCard;
- (NSUInteger)_meCardSharingAudience;
- (BOOL)_meCardSharingEnabled;
- (void)_showSetupMeCardAlert;
- (id)getNameAndPhotoSharingFooterText;
- (id)getNameAndPhotoSharingSpecifierSummary:(id)arg1;
- (void)showMeCardViewControllerWithNickname:(id)arg1;
- (void)onboardingControllerDidFinish:(id)arg1;
- (id)presentingViewControllerForOnboardingController:(id)arg1;
- (void)showNicknameOnboardingController;
- (void)nameAndPhotoSharingForSpecifier:(id)arg1;
- (void)showMultiplePhoneNumbersAlerForNicknames;
- (void)showAccountsMismatchedAlertForNicknames;
- (BOOL)shouldShowNicknames;
- (id)nameAndPhotoSharingSpecifiers;
- (id)contactPhotoSettingsSpecifierIdentifiers;
- (BOOL)shouldShowContactPhotoSettings;
- (id)audioMessageSettingsSpecifierIdentifiers;
- (BOOL)shouldShowAudioMessageSettings;
- (void)setSiriToneNotificationEnabled:(id)arg1 specifier:(id)arg2;
- (id)isSiriToneNotificationEnabled:(id)arg1;
- (id)siriSettingsIdentifiers;
- (BOOL)isPersonalCompanionEnabled;
- (BOOL)shouldShowSiriSettings;
- (BOOL)shouldShowJunkConversationsRow;
- (void)setConversationListFilteringEnabled:(id)arg1 specifier:(id)arg2;
- (id)isConversationListFilteringEnabled:(id)arg1;
- (id)junkConversationsRowIdentifier;
- (id)spamFilteringSpecifierIdentifiers;
- (id)iMessageFilteringSpecifierIdentifiers;
- (BOOL)shouldShowiMessageFilteringSettings:(id)arg1;
- (void)messageFilteringTapped:(id)arg1;
- (void)findSpamExtensions;
- (void)endMatchingExtensions;
- (void)notifyThatConversationFilteringChanged;
- (id)raiseToListenSpecifierIdentifiers;
- (BOOL)shouldShowRaiseToListenSwitch;
- (BOOL)_isRaiseGestureSupported;
- (id)blacklistSettingsSpecifierIdentifiers;
- (BOOL)shouldShowBlacklistSettings;
- (id)characterCountSpecifierIdentifiers;
- (BOOL)shouldShowCharacterCount;
- (id)genericSettingsSpecifierIdentifiers;
- (BOOL)shouldShowGenericSettings;
- (void)_updateSwitchDelayed;
- (void)_updateSwitch;
- (id)_switchFooterText:(BOOL )arg1;
- (void)setMadridEnabled:(id)arg1 specifier:(id)arg2;
- (id)isMadridEnabled:(id)arg1;
- (id)madridSwitchSpecifierIdentifiers;
- (BOOL)shouldShowMadridSwitch;
- (BOOL)_isMadridSwitchOn;
- (BOOL)_isMadridAccountOperational;
- (BOOL)_isSMSDevice;
- (id)_syncManager;
- (void)setAudioMessageAutoKeep:(id)arg1 specifier:(id)arg2;
- (id)getAudioMessageAutoKeep:(id)arg1;
- (void)setRaiseToListenEnabled:(id)arg1 specifier:(id)arg2;
- (id)getRaiseToListenEnabled:(id)arg1;
- (void)setWillSendGroupMMS:(id)arg1 specifier:(id)arg2;
- (id)willSendGroupMMS:(id)arg1;
- (void)setMMSEnabled:(id)arg1 specifier:(id)arg2;
- (id)isMMSEnabled:(id)arg1;
- (void)setDeliveryReportsEnabled:(id)arg1 specifier:(id)arg2;
- (id)isDeliveryReportsEnabled:(id)arg1;
- (id)deliveryReceiptSpecifierIdentifiers;
- (BOOL)shouldShowDeliveryReceipts;
- (void)setSpecifierLoading:(id)arg1 loading:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_setupMultipleSubscriptionsMMSGroupSpecifiers:(id)arg1 wantsMMSBasicGroup:(BOOL)arg2;
- (void)_setupMMSGroupSpecifiers:(id)arg1 wantsMMSBasicGroup:(BOOL)arg2;
- (id)specifiers;
- (void)_showPrivacySheetForBusinessChat:(id)arg1;
- (void)_showPrivacySheetForiMessageFaceTime:(id)arg1;
- (void)newCarrierNotification;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationWillEnterForeground;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)wantsWiFiChooser;
- (void)_stopListeningForProfileChanges;
- (void)_startListeningForProfileChanges;
- (id)logName;
- (void)dealloc;
- (id)bundle;
- (id)init;

@end

