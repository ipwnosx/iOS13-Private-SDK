//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IMAVHandler : NSObject
{
    NSMutableArray *_pendingChats;
    NSMutableArray *_pendingLookups;
}

+ (void)ensureHandlerSetup;
+ (void)initialize;
// - (void).cxx_destruct;
- (void)account:(id)arg1 conference:(id)arg2 invitationSentSuccessfully:(BOOL)arg3;
- (void)account:(id)arg1 relay:(id)arg2 handleCancel:(id)arg3 fromPerson:(id)arg4;
- (void)account:(id)arg1 relay:(id)arg2 handleUpdate:(id)arg3 fromPerson:(id)arg4;
- (void)account:(id)arg1 relay:(id)arg2 handleInitate:(id)arg3 fromPerson:(id)arg4;
- (void)account:(id)arg1 postedError:(id)arg2;
- (void)persistentProperty:(id)arg1 changedTo:(id)arg2 from:(id)arg3;
- (void)property:(id)arg1 changedTo:(id)arg2 from:(id)arg3;
- (void)account:(id)arg1 conference:(id)arg2 peerID:(id)arg3 propertiesUpdated:(id)arg4;
- (void)setupComplete;
- (void)pendingACRequestComplete;
- (void)pendingVCRequestComplete;
- (void)vcCapabilitiesChanged:(NSUInteger)arg1;
- (void)account:(id)arg1 avAction:(unsigned int)arg2 withArguments:(id)arg3 toAVChat:(id)arg4 isVideo:(BOOL)arg5;
- (void)_handleIncomingAVChatForNotification:(id)arg1;
- (void)_enqueueIMAVChatForNetworkActivation:(id)arg1;
- (void)_notifyOfIncomingInvitationFor:(id)arg1 notifyInvitationListeners:(BOOL)arg2;
- (void)account:(id)arg1 conference:(id)arg2 changedToNewConferenceID:(id)arg3;
- (void)account:(id)arg1 conference:(id)arg2 peerIDChangedFromID:(id)arg3 toID:(id)arg4;
- (void)account:(id)arg1 conference:(id)arg2 receivedAVMessage:(unsigned int)arg3 from:(id)arg4 sessionID:(unsigned int)arg5 userInfo:(id)arg6;
- (void)account:(id)arg1 conference:(id)arg2 receivedCancelInvitationFrom:(id)arg3 properties:(id)arg4;
- (void)account:(id)arg1 conference:(id)arg2 receivedResponseToInvitationFrom:(id)arg3 properties:(id)arg4;
- (void)account:(id)arg1 conference:(id)arg2 receivedInvitationFrom:(id)arg3 properties:(id)arg4;
- (void)_handleIncomingWithAccount:(id)arg1 fromHandle:(id)arg2 conference:(id)arg3 properites:(id)arg4;

@end

