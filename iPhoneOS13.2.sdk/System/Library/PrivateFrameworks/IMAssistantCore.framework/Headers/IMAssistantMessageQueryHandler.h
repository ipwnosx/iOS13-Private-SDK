//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAssistantCore/IMAssistantMessageHandler.h>

@interface IMAssistantMessageQueryHandler : IMAssistantMessageHandler
{
}

- (void)messagesMatchingMessageIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)searchMessagesWithContents:(id)arg1 messageIdentifiers:(id)arg2 notificationIdentifiers:(id)arg3 chatNames:(id)arg4 conversationIdentifiers:(id)arg5 recipients:(id)arg6 senders:(id)arg7 dateTimeRange:(id)arg8 attributes:(NSUInteger)arg9 completion:(CDUnknownBlockType)arg10;
- (id)chatsForChatNames:(id)arg1;
- (id)chatsWithConversationIdentifiers:(id)arg1;
- (id)chatsContainingRequiredParticipants:(id)arg1;
- (id)unifiedContactIdentifiersForPerson:(id)arg1;
- (id)chatParticipantsForSPIHandles:(id)arg1;
- (id)chatParticipantForSPIHandle:(id)arg1;
- (id)messageContentsPredicate:(id)arg1;
- (id)vocabularyIdentifiersFromSpeakableStrings:(id)arg1;
- (id)spokenPhrasesForSpeakableStrings:(id)arg1;
- (id)sendersPredicate:(id)arg1;
- (id)recipientsPredicate:(id)arg1;
- (void)SPIQueryMessagesWithRowIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)SPIQueryMessagesWithGUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)SPIQueryUnreadMessages:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)SPIQueryMessagesForSenders:(id)arg1 onlyUnread:(BOOL)arg2 limit:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)handlesAndServicesForChatGuids:(id)arg1 handles:(id )arg2 services:(id )arg3;
- (void)handlesAndServicesForPersons:(id)arg1 handles:(id )arg2 services:(id )arg3;
- (void)SPIQueryMessagesForChatsWithIdentifiers:(id)arg1 services:(id)arg2 onlyUnread:(BOOL)arg3 limit:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)SPIQueryMessagesForChats:(id)arg1 onlyUnread:(BOOL)arg2 limit:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)allIMHandlesForHandle:(id)arg1;
- (id)resolveDateTimeRange:(id)arg1;
- (BOOL)resolvePersons:(id)arg1 forIntent:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

