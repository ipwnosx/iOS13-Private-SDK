//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class TUConversation, TUConversationManager;

@protocol TUConversationManagerDelegate <NSObject>

@optional
- (void)serverDisconnectedForConversationManager:(TUConversationManager *)arg1;
- (void)conversationManager:(TUConversationManager *)arg1 removedActiveConversation:(TUConversation *)arg2;
- (void)conversationManager:(TUConversationManager *)arg1 activeRemoteParticipantsChangedForConversation:(TUConversation *)arg2;
- (void)conversationManager:(TUConversationManager *)arg1 remoteMembersChangedForConversation:(TUConversation *)arg2;
- (void)conversationManager:(TUConversationManager *)arg1 localVideoToggledForConversation:(TUConversation *)arg2;
- (void)conversationManager:(TUConversationManager *)arg1 stateChangedForConversation:(TUConversation *)arg2;
- (void)conversationsChangedForConversationManager:(TUConversationManager *)arg1;
@end

