//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMCore/TUCallProviderManagerDelegate-Protocol.h>

@class DMFApplicationPolicyMonitor, NSMutableDictionary, NSSet, TUCallProviderManager;
@protocol OS_dispatch_queue;

@interface IMWhitelistController : NSObject <TUCallProviderManagerDelegate>
{
    TUCallProviderManager *_callProviderManager;
    NSObject<OS_dispatch_queue> *_screenTimeDispatchQueue;
    NSSet *_emergencyNumbersSet;
    NSMutableDictionary *_participantIDsHashToConversationContext;
    NSMutableDictionary *_conversationContextToParticipantIDsHash;
    NSMutableDictionary *_participantIDsHashToChat;
    NSMutableDictionary *_bundleIDPolicyMap;
    DMFApplicationPolicyMonitor *_appPolicyMonitor;
}

+ (id)STConversation;
+ (id)sharedInstance;
+ (BOOL)isContactLimitsFeatureEnabled;
@property(retain, nonatomic) DMFApplicationPolicyMonitor *appPolicyMonitor; // @synthesize appPolicyMonitor=_appPolicyMonitor;
@property(retain, nonatomic) NSMutableDictionary *bundleIDPolicyMap; // @synthesize bundleIDPolicyMap=_bundleIDPolicyMap;
@property(retain, nonatomic) NSMutableDictionary *participantIDsHashToChat; // @synthesize participantIDsHashToChat=_participantIDsHashToChat;
@property(retain, nonatomic) NSMutableDictionary *conversationContextToParticipantIDsHash; // @synthesize conversationContextToParticipantIDsHash=_conversationContextToParticipantIDsHash;
@property(retain, nonatomic) NSMutableDictionary *participantIDsHashToConversationContext; // @synthesize participantIDsHashToConversationContext=_participantIDsHashToConversationContext;
@property(retain, nonatomic) NSSet *emergencyNumbersSet; // @synthesize emergencyNumbersSet=_emergencyNumbersSet;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *screenTimeDispatchQueue; // @synthesize screenTimeDispatchQueue=_screenTimeDispatchQueue;
@property(retain, nonatomic) TUCallProviderManager *callProviderManager; // @synthesize callProviderManager=_callProviderManager;
// - (void).cxx_destruct;
- (void)fetchScreenTimeAppPolicy;
- (BOOL)allowedToShowAppExtensionWithBundleIdentifier:(id)arg1;
- (id)conversationContextForChat:(id)arg1;
- (void)providersChangedForProviderManager:(id)arg1;
- (void)registerForScreenTimeNotifications;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)refetchScreenTimePolicyForChat:(id)arg1;
- (void)_participantStateForChatChanged:(id)arg1;
- (void)_participantsForChatChanged:(id)arg1;
- (BOOL)isFetchingScreenTimeContextForParticipantIDsHash:(id)arg1;
- (void)_addObserversToChat:(id)arg1;
- (BOOL)allowedToShowConversationForChat:(id)arg1 sync:(BOOL)arg2;
- (BOOL)allowedToShowConversationWithHandleIDs:(id)arg1 sync:(BOOL)arg2 context:(id )arg3;
- (void)initializeContext:(id)arg1 participantIDsHash:(id)arg2;
- (void)reloadEmergencyNumbersSet;
- (id)init;

@end

