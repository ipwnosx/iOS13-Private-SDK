//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMSharedUtilities/IMAssociatedMessageItem.h>

@interface IMAssociatedMessageItem (IMTranscriptChatItemRules)
- (BOOL)shouldGenerateTopLevelChatItem;
- (id)_newChatItemsWithFilteredChat:(BOOL)arg1 isBusiness:(BOOL)arg2 parentChatIsSpam:(BOOL)arg3 hasKnownParticipants:(BOOL)arg4;
- (id)_newChatItems;
- (BOOL)isIncomingTypingOrCancelTypingMessage;
- (BOOL)isTypingOrCancelTypingMessage;
- (BOOL)isCancelTypingMessage;
- (BOOL)isIncomingTypingMessage;
@end

