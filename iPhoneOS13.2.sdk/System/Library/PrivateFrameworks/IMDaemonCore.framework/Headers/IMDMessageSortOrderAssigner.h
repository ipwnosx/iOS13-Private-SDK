//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMDMessageSortOrderAssigner : NSObject
{
}

- (void)assignAndPersistSortIDForIncomingMessage:(id)arg1 onChat:(id)arg2;
- (void)assignSortIDToIncomingMessage:(id)arg1 onChat:(id)arg2;
- (void)persistMessage:(id)arg1;
- (void)assignSortIDToIncomingMessageWithNoExistingMessagesWithSameReplyToGUID:(id)arg1 onChat:(id)arg2;
- (void)compareMessageToOtherMessagesWithSameReplyToGUIDAndAssignSortID:(id)arg1 existingMessagesWithSameReplyToGUID:(id)arg2;
- (id)copyOfMessagesWithReplyToGUID:(id)arg1;
- (id)messageWithGUID:(id)arg1;

@end

