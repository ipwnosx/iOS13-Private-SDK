//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMService.h>

@class IMAccount, NSArray, NSData, NSDictionary, NSMutableDictionary, NSString;

@interface IMServiceImpl : IMService
{
    NSString *_name;
    NSString *_localizedName;
    NSString *_localizedShortName;
    NSMutableDictionary *_cardMap;
    NSDictionary *_personToIDMap;
    NSString *_countryCode;
    IMAccount *_bestAccount;
    NSDictionary *_serviceDefaults;
    NSDictionary *_serviceProps;
    NSDictionary *_defaultSettings;
    NSData *_imageData;
    NSArray *_abProperties;
    NSArray *_emailDomains;
    NSArray *_siblingServiceNames;
    unsigned int _screenNameSensitivity;
    BOOL _hasLoadedServiceProperties;
    BOOL _handlesChatInvites;
    BOOL _supportsSMS;
    BOOL _supportsPhoneNumberMapping;
    BOOL _supportsGroupAttachments;
    BOOL _supportsMutatingGroupMembers;
    BOOL _supportsOneSessionForAllAccounts;
    BOOL _supportsAuthorization;
    BOOL _supportsRegistration;
    BOOL _supportsAdding;
    BOOL _supportsPresence;
    BOOL _supportsIDStatusLookup;
    BOOL _supportsDatabaseStorage;
    BOOL _supportsAudioMessages;
    BOOL _shouldInternationalizeNumbers;
    BOOL _supportsOfflineTransfers;
    BOOL _shouldDisableDeactivation;
    BOOL _ignoresNetworkConnectivity;
    BOOL _isPersistent;
    BOOL _isPlugInService;
    BOOL _allowsMultipleConnections;
}

+ (BOOL)systemSupportsSendingAttachmentsOfTypes:(id)arg1 error:(long long )arg2;
+ (BOOL)systemSupportsSMSSending;
+ (id)supportedCountryCodes;
+ (BOOL)iMessageEnabled;
+ (BOOL)mmsEnabled;
+ (BOOL)_readMMSUserOverride;
+ (BOOL)smsEnabled;
+ (BOOL)iMessageEnabledForSenderLastAddressedHandle:(id)arg1 simID:(id)arg2 previousService:(id)arg3;
+ (BOOL)_iMessageEnabledForMultipleSubscriptionsForSenderLastAddressedHandle:(id)arg1 simID:(id)arg2 previousService:(id)arg3;
+ (BOOL)_shouldCheckIfLastAddressedHandleIsInSubscriptionsAnymoreButiMessageIsEnabledForAlias:(id)arg1 previousService:(id)arg2;
+ (BOOL)_isiMessageEnabledIfLastAddressedHandleIsNotActiveAnymore:(id)arg1;
+ (BOOL)_isSIMIdIDSRegisteredSIM:(id)arg1;
+ (id)_phoneNumberOnSubscriptionWithSIMID:(id)arg1;
+ (BOOL)iMessageEnabledForSenderLastAddressedHandle:(id)arg1 simID:(id)arg2;
+ (BOOL)hasAlias:(id)arg1 onAccountForService:(id)arg2;
+ (BOOL)mmsEnabledforPhoneNumber:(id)arg1 simID:(id)arg2;
+ (id)operationalServicesWithCapability:(NSUInteger)arg1;
+ (id)connectedServicesWithCapability:(NSUInteger)arg1;
+ (id)servicesWithCapability:(NSUInteger)arg1;
+ (id)connectedServices;
+ (id)activeServices;
+ (id)serviceWithInternalName:(id)arg1;
+ (id)serviceWithName:(id)arg1;
+ (id)allServicesNonBlocking;
+ (id)allServices;
+ (void)setServiceClass:(Class)arg1;
+ (Class)serviceClass;
@property(readonly, nonatomic) NSString *shortName; // @synthesize shortName=_localizedShortName;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSArray *emailDomains; // @synthesize emailDomains=_emailDomains;
@property(readonly, nonatomic) NSArray *addressBookProperties; // @synthesize addressBookProperties=_abProperties;
@property(readonly, nonatomic) unsigned int IDSensitivity; // @synthesize IDSensitivity=_screenNameSensitivity;
@property(readonly, nonatomic) BOOL shouldDisableDeactivation; // @synthesize shouldDisableDeactivation=_shouldDisableDeactivation;
@property(readonly, nonatomic) BOOL allowsMultipleConnections; // @synthesize allowsMultipleConnections=_allowsMultipleConnections;
@property(readonly, nonatomic) BOOL isPlugInService; // @synthesize isPlugInService=_isPlugInService;
@property(readonly, nonatomic) BOOL supportsAdding; // @synthesize supportsAdding=_supportsAdding;
@property(readonly, nonatomic) BOOL supportsGroupAttachments; // @synthesize supportsGroupAttachments=_supportsGroupAttachments;
@property(readonly, nonatomic) BOOL supportsOneSessionForAllAccounts; // @synthesize supportsOneSessionForAllAccounts=_supportsOneSessionForAllAccounts;
@property(readonly, nonatomic) BOOL supportsMutatingGroupMembers; // @synthesize supportsMutatingGroupMembers=_supportsMutatingGroupMembers;
@property(readonly, nonatomic) BOOL supportsPresence; // @synthesize supportsPresence=_supportsPresence;
@property(readonly, nonatomic) BOOL supportsOfflineTransfers; // @synthesize supportsOfflineTransfers=_supportsOfflineTransfers;
@property(readonly, nonatomic) BOOL ignoresNetworkConnectivity; // @synthesize ignoresNetworkConnectivity=_ignoresNetworkConnectivity;
@property(readonly, nonatomic) BOOL supportsRegistration; // @synthesize supportsRegistration=_supportsRegistration;
@property(readonly, nonatomic) BOOL handlesChatInvites; // @synthesize handlesChatInvites=_handlesChatInvites;
@property(readonly, nonatomic) BOOL isPersistent; // @synthesize isPersistent=_isPersistent;
@property(readonly, nonatomic) BOOL supportsAuthorization; // @synthesize supportsAuthorization=_supportsAuthorization;
@property(readonly, nonatomic) BOOL supportsPhoneNumberMapping; // @synthesize supportsPhoneNumberMapping=_supportsPhoneNumberMapping;
@property(readonly, nonatomic) BOOL supportsAudioMessages; // @synthesize supportsAudioMessages=_supportsAudioMessages;
@property(readonly, nonatomic) BOOL supportsIDStatusLookup; // @synthesize supportsIDStatusLookup=_supportsIDStatusLookup;
@property(retain, nonatomic) NSDictionary *defaultAccountSettings; // @synthesize defaultAccountSettings=_defaultSettings;
@property(retain, nonatomic) NSDictionary *serviceDefaults; // @synthesize serviceDefaults=_serviceDefaults;
// - (void).cxx_destruct;
@property(readonly, nonatomic) Class accountClass;
- (void)activeAccountsChanged:(id)arg1;
- (void)defaultsChanged:(id)arg1;
- (id)screenNamesForPerson:(id)arg1;
- (id)screenNamesForIMPerson:(id)arg1;
- (id)_personToIDMap;
- (id)peopleWithScreenName:(id)arg1;
- (id)imABPeopleWithScreenName:(id)arg1 options:(NSUInteger)arg2;
- (id)imABPeopleWithScreenName:(id)arg1;
- (id)imABPeopleWithScreenName:(id)arg1 identifier:(int )arg2;
- (id)imABPeopleWithScreenName:(id)arg1 countryCode:(id)arg2 identifier:(int )arg3;
@property(readonly, nonatomic) NSDictionary *cardMap;
- (void)clearIDToCardMap;
@property(retain, nonatomic) NSString *countryCode;
- (void)updateIDToCardMapWithNotification:(id)arg1;
- (id)_newIDToCardMap;
- (void)_dumpCardMap;
- (void)_addAddressBookCards:(id)arg1 toMap:(id)arg2;
- (id)_IDsToMapForIMPerson:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NSArray *accountIDs;
@property(readonly, nonatomic) long long buddyNotesMaxByteLength;
@property(readonly, nonatomic) NSString *internalName;
@property(readonly, nonatomic) NSArray *siblingServices;
@property(readonly, nonatomic) NSString *addressBookProperty;
- (id)localizedShortName;
- (id)localizedName;
@property(readonly, nonatomic) BOOL _wantsInternationizedNumbers;
@property(readonly, nonatomic) BOOL _supportsDatabaseStorage;
- (BOOL)isEnabled;
@property(readonly, nonatomic) long long maxAttachmentSize;
- (long long)maxChatParticipantsForHandle:(id)arg1 simID:(id)arg2;
@property(readonly, nonatomic) NSData *serviceImageData;
- (id)subtypeInformationForAccount:(id)arg1;
@property(retain, nonatomic) NSDictionary *serviceProperties;
- (void)_loadPropertiesIfNeeded;
- (id)_abPropertiesBySanitizingABProperties:(id)arg1;
- (id)myScreenNames;
- (id)infoForPreferredScreenNames;
- (id)infoForAllScreenNames;
- (id)infoForScreenName:(id)arg1;
- (NSUInteger)status;
- (void)_blockUntilInitialSyncPerformed;
- (long long)compareNames:(id)arg1;
- (id)canonicalFormOfID:(id)arg1;
- (id)normalizedFormOfID:(id)arg1;
- (BOOL)equalID:(id)arg1 andID:(id)arg2;
- (void)statusChangedForAccount:(id)arg1 from:(NSUInteger)arg2 to:(NSUInteger)arg3;
- (void)disconnect;
- (void)doneSetup;
- (BOOL)initialSyncPerformed;
- (void)_calculateBestAccount;
- (void)_syncWithRemoteBuddies;
- (void)dealloc;
- (id)initWithName:(id)arg1;
@property(readonly, nonatomic, getter=isDiscontinued) BOOL discontinued;

@end

