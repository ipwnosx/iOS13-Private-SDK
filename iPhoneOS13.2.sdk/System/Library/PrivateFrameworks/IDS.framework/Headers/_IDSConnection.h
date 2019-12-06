//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDS/IDSAccountDelegate-Protocol.h>
#import <IDS/IDSDaemonListenerProtocol-Protocol.h>

@class IDSAccount, IMOrderedMutableDictionary, NSMapTable, NSSet, NSString;

@interface _IDSConnection : NSObject <IDSDaemonListenerProtocol, IDSAccountDelegate>
{
    id _messageContext;
    id _delegateContext;
    unsigned char _incomingMessageLoggingSequence;
    unsigned char _outgoingMessageLoggingSequence;
    NSMapTable *_delegateToInfo;
    IDSAccount *_account;
    NSSet *_commands;
    NSString *_serviceToken;
    IMOrderedMutableDictionary *_pendingSends;
    unsigned int _delegateCapabilities;
    BOOL _indirectDelegateCallouts;
}

// - (void).cxx_destruct;
- (void)_sendMissingMessageMetric:(id)arg1;
- (void)checkTransportLogWithReason:(long long)arg1;
- (void)updateDeviceIdentity:(id)arg1 error:(id)arg2;
- (void)groupShareReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)receivedGroupSessionParticipantDataUpdate:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 fromID:(id)arg4;
- (void)receivedGroupSessionParticipantUpdate:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 fromID:(id)arg4;
- (void)sessionInvitationReceivedWithPayload:(id)arg1 forTopic:(id)arg2 sessionID:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 transportType:(id)arg6;
- (void)pendingIncomingMessageWithGUID:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)didFlushCacheForService:(id)arg1 remoteURI:(id)arg2 fromURI:(id)arg3 guid:(id)arg4;
- (void)protobufReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)accessoryReportMessageReceived:(id)arg1 accessoryID:(id)arg2 controllerID:(id)arg3 withGUID:(id)arg4 forTopic:(id)arg5 toIdentifier:(id)arg6 fromID:(id)arg7 context:(id)arg8;
- (void)accessoryDataReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)engramDataReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)dataReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)messageReceived:(id)arg1 withGUID:(id)arg2 withPayload:(id)arg3 forTopic:(id)arg4 toIdentifier:(id)arg5 fromID:(id)arg6 context:(id)arg7;
- (void)opportunisticDataReceived:(id)arg1 withIdentifier:(id)arg2 fromID:(id)arg3 context:(id)arg4;
- (BOOL)_canServiceNameAcceptMessagesInTransientRegistrationState:(id)arg1;
- (BOOL)_isAccountInValidRegistrationStateToAcceptMessages;
- (BOOL)_shouldAcceptIncomingType:(id)arg1 forTopic:(id)arg2 localURI:(id)arg3 remoteURI:(id)arg4 validateAliases:(BOOL)arg5 guid:(id)arg6;
- (void)_setTemporaryMessageContext:(id)arg1;
- (void)didSendOpportunisticDataWithIdentifier:(id)arg1 onAccount:(id)arg2 toIDs:(id)arg3;
- (void)messageIdentifier:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 hasBeenDeliveredWithContext:(id)arg5;
- (void)messageIdentifier:(id)arg1 alternateCallbackID:(id)arg2 forAccount:(id)arg3 willSendToDestinations:(id)arg4 skippedDestinations:(id)arg5 registrationPropertyToDestinations:(id)arg6;
- (void)messageIdentifier:(id)arg1 alternateCallbackID:(id)arg2 forAccount:(id)arg3 updatedWithResponseCode:(long long)arg4 error:(id)arg5 lastCall:(BOOL)arg6 context:(id)arg7;
- (void)daemonConnected;
- (void)_resendPendingSends;
- (void)_handleLastCallForPendingIdentifier:(id)arg1 callbackID:(id)arg2;
- (void)_connect;
- (void)account:(id)arg1 connectedDevicesChanged:(id)arg2;
- (void)account:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)account:(id)arg1 devicesChanged:(id)arg2;
- (void)account:(id)arg1 isActiveChanged:(BOOL)arg2;
- (BOOL)sendServerMessage:(id)arg1 command:(id)arg2;
- (BOOL)sendData:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id )arg5 error:(id )arg6;
- (BOOL)sendMessage:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id )arg5 error:(id )arg6;
- (BOOL)sendProtobuf:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id )arg5 error:(id )arg6;
- (void)_replaceSentinelInSendParameters:(id)arg1 withCurrentActiveDevice:(id)arg2;
- (BOOL)_isDestinationSingleLocalAddress:(id)arg1;
- (id)_sendWithParameters:(id)arg1 options:(id)arg2 loggingType:(id)arg3 loggingDataSize:(NSUInteger)arg4;
- (void)setDelegateCapabilities:(unsigned int)arg1;
- (void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(CDUnknownBlockType)arg2 callbackBlock:(CDUnknownBlockType)arg3 postCallbacksBlock:(CDUnknownBlockType)arg4 group:(id)arg5;
- (void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(CDUnknownBlockType)arg2 callbackBlock:(CDUnknownBlockType)arg3 postCallbacksBlock:(CDUnknownBlockType)arg4;
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1 group:(id)arg2;
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)_activeDevice;
@property(readonly, nonatomic) BOOL isActive;
@property(readonly, nonatomic) IDSAccount *account;
- (id)daemonListener;
- (id)daemonController;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 commands:(id)arg2 indirectDelegateCallouts:(BOOL)arg3 delegateContext:(id)arg4;
- (id)_init;

@end

