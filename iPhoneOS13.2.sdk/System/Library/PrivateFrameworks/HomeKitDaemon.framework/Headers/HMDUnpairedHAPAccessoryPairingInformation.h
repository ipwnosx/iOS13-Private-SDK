//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HAPAccessoryConfiguration, HMFTimer, NSData, NSString, NSUUID;

@interface HMDUnpairedHAPAccessoryPairingInformation : HMFObject
{
    BOOL _allowAddUnauthenticatedAccessory;
    BOOL _provideNetworkCredentialsToAccessory;
    BOOL _setupCodeProvided;
    BOOL _needsUserConsent;
    long long _linkType;
    HMFTimer *_pairingInterruptionTimer;
    id /* CDUnknownBlockType */ _addAccessoryCompletionHandler;
    id /* CDUnknownBlockType */ _addAccessoryProgressHandler;
    id /* CDUnknownBlockType */ _setupCodeProviderCompletionHandler;
    HMFTimer *_pairingRetryTimer;
    HMFTimer *_reconfirmTimer;
    HAPAccessoryConfiguration *_hapAccessoryConfiguration;
    NSString *_accessoryName;
    NSUUID *_accessoryUUID;
    NSString *_accessoryServerIdentifier;
    NSString *_homeName;
    NSString *_setupCode;
    NSString *_setupID;
    NSData *_ownershipToken;
}

@property(retain, nonatomic) NSData *ownershipToken; // @synthesize ownershipToken=_ownershipToken;
@property(retain, nonatomic) NSString *setupID; // @synthesize setupID=_setupID;
@property(retain, nonatomic) NSString *setupCode; // @synthesize setupCode=_setupCode;
@property(retain, nonatomic) NSString *homeName; // @synthesize homeName=_homeName;
@property(retain, nonatomic) NSString *accessoryServerIdentifier; // @synthesize accessoryServerIdentifier=_accessoryServerIdentifier;
@property(retain, nonatomic) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
@property(retain, nonatomic) NSString *accessoryName; // @synthesize accessoryName=_accessoryName;
@property(readonly, nonatomic) HAPAccessoryConfiguration *hapAccessoryConfiguration; // @synthesize hapAccessoryConfiguration=_hapAccessoryConfiguration;
@property(nonatomic) BOOL needsUserConsent; // @synthesize needsUserConsent=_needsUserConsent;
@property(nonatomic) BOOL setupCodeProvided; // @synthesize setupCodeProvided=_setupCodeProvided;
@property(nonatomic) BOOL provideNetworkCredentialsToAccessory; // @synthesize provideNetworkCredentialsToAccessory=_provideNetworkCredentialsToAccessory;
@property(nonatomic) BOOL allowAddUnauthenticatedAccessory; // @synthesize allowAddUnauthenticatedAccessory=_allowAddUnauthenticatedAccessory;
@property(retain, nonatomic) HMFTimer *reconfirmTimer; // @synthesize reconfirmTimer=_reconfirmTimer;
@property(retain, nonatomic) HMFTimer *pairingRetryTimer; // @synthesize pairingRetryTimer=_pairingRetryTimer;
@property(copy, nonatomic) id /* CDUnknownBlockType */ setupCodeProviderCompletionHandler; // @synthesize setupCodeProviderCompletionHandler=_setupCodeProviderCompletionHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ addAccessoryProgressHandler; // @synthesize addAccessoryProgressHandler=_addAccessoryProgressHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ addAccessoryCompletionHandler; // @synthesize addAccessoryCompletionHandler=_addAccessoryCompletionHandler;
@property(retain, nonatomic) HMFTimer *pairingInterruptionTimer; // @synthesize pairingInterruptionTimer=_pairingInterruptionTimer;
@property(nonatomic) long long linkType; // @synthesize linkType=_linkType;
// - (void).cxx_destruct;
- (BOOL)matchesAccessoryServer:(id)arg1;
- (BOOL)matchesUnpairedAccessory:(id)arg1;
- (id)description;
- (id)initWithAccessoryDescription:(id)arg1 linkType:(long long)arg2 needsUserConsent:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4 progressHandler:(CDUnknownBlockType)arg5 wiFiPSK:(id)arg6 country:(id)arg7;
- (id)initWithAccessoryUUID:(id)arg1 accessoryName:(id)arg2 linkType:(long long)arg3 homeName:(id)arg4 setupCode:(id)arg5 completionHandler:(CDUnknownBlockType)arg6 setupCodeProvider:(CDUnknownBlockType)arg7 wiFiPSK:(id)arg8 country:(id)arg9;

@end

