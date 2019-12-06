//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class IMMessage, IMMessageItem;

@interface NSArray (IMItems)
@property(readonly, nonatomic) IMMessageItem *lastMessageItem;
@property(readonly, nonatomic) IMMessageItem *firstMessageItem;
- (BOOL)equivalentToRecipients:(id)arg1;
- (id)indexesOfPartsOfMessageItem:(id)arg1;
- (id)indexesOfPartsOfMessage:(id)arg1;
- (id)__imItems;
- (void)__enumerateItemsWithOptions:(NSUInteger)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)__itemForChatItemAtIndex:(NSUInteger)arg1;
@property(readonly, nonatomic) IMMessageItem *__imLastMessageItem;
- (id)messages;
- (void)enumerateMessagesWithOptions:(NSUInteger)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)messageForChatItemAtIndex:(NSUInteger)arg1;
@property(readonly, nonatomic) IMMessage *lastIncomingFinishedMessage;
@property(readonly, nonatomic) IMMessage *lastIncomingMessage;
@property(readonly, nonatomic) IMMessage *lastFinishedMessage;
@property(readonly, nonatomic) IMMessage *lastMessage;
@property(readonly, nonatomic) IMMessage *firstMessage;
@end

