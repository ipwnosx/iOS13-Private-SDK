//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PBBridgeSupport/PBBridgeIDSServiceDelegate.h>

#import <PBBridgeSupport/IDSServiceDelegate-Protocol.h>
#import <PBBridgeSupport/PBBridgeGizmoProtocol-Protocol.h>

@class NSString, NSTimer;
@protocol PBBridgeConnectionDelegate;

@interface PBBridgeGizmoController : PBBridgeIDSServiceDelegate <IDSServiceDelegate, PBBridgeGizmoProtocol>
{
    _Bool _canBeginActivation;
    _Bool _readyToCreatePasscode;
    unsigned short _activationState;
    id <PBBridgeConnectionDelegate> _delegate;
    NSString *_languageIdentifer;
    NSString *_regionIdentifer;
    NSTimer *_activationTimeout;
    NSString *_internalLastSendMessageID;
    id /* block */ _updateLanguageCompletion;
    id /* block */ _updateRegionCompletion;
    id /* block */ _sessionCompletion;
    id /* block */ _activationCompletion;
    id /* block */ _siriStateCompletion;
    id /* block */ _enableSiriCompletion;
}

+ (id)prepareOfflineTermsResponse:(id)arg1;
+ (id)warrantyFilePathForLanguageCode:(id)arg1 countryCode:(id)arg2;
@property(copy, nonatomic) id /* block */ enableSiriCompletion; // @synthesize enableSiriCompletion=_enableSiriCompletion;
@property(copy, nonatomic) id /* block */ siriStateCompletion; // @synthesize siriStateCompletion=_siriStateCompletion;
@property(copy, nonatomic) id /* block */ activationCompletion; // @synthesize activationCompletion=_activationCompletion;
@property(copy, nonatomic) id /* block */ sessionCompletion; // @synthesize sessionCompletion=_sessionCompletion;
@property(copy, nonatomic) id /* block */ updateRegionCompletion; // @synthesize updateRegionCompletion=_updateRegionCompletion;
@property(copy, nonatomic) id /* block */ updateLanguageCompletion; // @synthesize updateLanguageCompletion=_updateLanguageCompletion;
@property(retain, nonatomic) NSString *internalLastSendMessageID; // @synthesize internalLastSendMessageID=_internalLastSendMessageID;
@property(retain, nonatomic) NSTimer *activationTimeout; // @synthesize activationTimeout=_activationTimeout;
@property(nonatomic) unsigned short activationState; // @synthesize activationState=_activationState;
@property(readonly, nonatomic) _Bool readyToCreatePasscode; // @synthesize readyToCreatePasscode=_readyToCreatePasscode;
@property(readonly, nonatomic) _Bool canBeginActivation; // @synthesize canBeginActivation=_canBeginActivation;
@property(readonly, nonatomic) NSString *regionIdentifer; // @synthesize regionIdentifer=_regionIdentifer;
@property(readonly, nonatomic) NSString *languageIdentifer; // @synthesize languageIdentifer=_languageIdentifer;
@property(nonatomic) __weak id <PBBridgeConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleBuysOnWatchIngestion:(id)arg1;
- (void)companionTermsResponse:(id)arg1;
- (void)fetchTermsAndConditions:(id)arg1;
- (void)prepareForForcedWatchSU:(id)arg1;
- (_Bool)sendCompanionPerformanceResults;
- (void)transportBecameUnreachable;
- (void)transportBecameReachable;
- (void)setDeviceName:(id)arg1;
- (void)handleRenameDeviceRequest:(id)arg1;
- (void)handleOfflineTermsRequest:(id)arg1;
- (void)handleWarrantySentinelRequest:(id)arg1;
- (void)doInitialSyncPrep:(id)arg1;
- (void)updateSynchProgress:(id)arg1;
- (void)setCrownOrientationRight:(id)arg1;
- (void)setPasscodeRestrictions:(id)arg1;
- (void)showLockedOnAnimation:(id)arg1;
- (void)popToControllerType:(id)arg1;
- (void)pushControllerType:(id)arg1;
- (void)remoteRequestToKeepAlive:(id)arg1;
- (void)activationTimeout:(id)arg1;
- (void)refreshTimeoutTimer;
- (void)invalidateTimeoutTimer;
- (void)beganAwaitingAbilityToActivate;
- (void)retryActivation:(id)arg1;
- (void)waitForUserResponseToDynamicEventPresentation:(id)arg1;
- (void)waitForDynamicActivationEventPresentation:(id)arg1;
- (void)setCanBeginActivating:(id)arg1;
- (void)tellCompanionThatGizmoFinishedUnlockPairing:(_Bool)arg1;
- (void)tellCompanionThatGizmoStartedUnlockPairing;
- (void)tellCompanionThatGizmoFinishedChangingPasscode:(_Bool)arg1 isLong:(_Bool)arg2;
- (void)tellCompanionThatGizmoFailedToCreatePasscode:(int)arg1;
- (void)tellCompanionThatGizmoFinishedSettingPasscode:(_Bool)arg1 isLong:(_Bool)arg2;
- (id)customDescriptionOfMessageType:(unsigned short)arg1;
- (_Bool)tellCompanionThatLanguageAndLanguageCompletedWithStatus:(unsigned short)arg1;
- (void)companionDidSendWirelessCredentials:(id)arg1;
- (void)companionDidSendLanguageAndLocale:(id)arg1;
- (void)setSiriEnabled:(id)arg1;
- (void)setLocationEnabled:(id)arg1;
- (void)setDiagnosticsEnabled:(id)arg1;
- (void)handleActivationData:(id)arg1;
- (_Bool)reportRemoteActivationFailureError:(id)arg1;
- (_Bool)getActivationDataForRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (_Bool)getSessionDataForRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (_Bool)getActivationDataAndHeadersForRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (_Bool)_getActivationData:(_Bool)arg1 forRequest:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)companionBecameAvailableWantsConfirmation:(id)arg1;
- (void)enabledSiri:(id)arg1;
- (void)gotSiriState:(id)arg1;
- (void)enableSiriForGizmoWithCompletion:(id /* block */)arg1;
- (void)getSiriStateWithCompletion:(id /* block */)arg1;
- (void)setCompanionRegion:(id)arg1;
- (void)setCompanionLanguage:(id)arg1;
- (_Bool)tellCompanionGizmoFailedActivating:(id)arg1;
- (_Bool)tellCompanionGizmoFinishedActivatingAsDeKOTA;
- (_Bool)tellCompanionGizmoFinishedActivating;
- (void)_recordThatWatchFinishedActivating;
- (_Bool)tellCompanionGizmoBeganActivating;
- (_Bool)updateRegionIdentifierWithCompletion:(id /* block */)arg1;
- (_Bool)updateLanguageIdentifierWithCompletion:(id /* block */)arg1;
- (_Bool)_sendResponseToMessage:(id)arg1 withResponseMessageID:(unsigned short)arg2 withArguments:(id)arg3;
- (_Bool)_sendRemoteCommandWithMessageID:(unsigned short)arg1 withArguments:(id)arg2;
- (id)serviceIdentifier;
- (void)endSetupTransaction;
- (void)setupServiceMessageSelectorMappings;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
