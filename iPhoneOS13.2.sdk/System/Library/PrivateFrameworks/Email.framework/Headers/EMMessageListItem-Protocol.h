//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/EMCollectionItem-Protocol.h>
#import <Email/EMObject-Protocol.h>

@class ECMessageFlags, ECSubject, EMMessage, EMObjectID, NSArray, NSDate, NSIndexSet, NSString;
@protocol EMCollectionItemID;

@protocol EMMessageListItem <EMCollectionItem, EMObject>
@property(readonly) BOOL isEditable;
@property(readonly) BOOL shouldArchiveByDefault;
@property(readonly) BOOL supportsArchiving;
@property(readonly) BOOL deleteMovesToTrash;
@property(readonly) EMMessage *displayMessage;
@property(readonly) EMObjectID *displayMessageObjectID;
@property(readonly) id <EMCollectionItemID> displayMessageItemID;
@property(readonly, copy) NSArray *mailboxes;
@property(readonly, copy) NSArray *mailboxObjectIDs;
@property(readonly) long long conversationID;
@property(readonly) NSUInteger count;
@property(readonly) long long conversationNotificationLevel;
@property(readonly) BOOL hasAttachments;
@property(readonly) BOOL isCCMe;
@property(readonly) BOOL isToMe;
@property(readonly) BOOL isBlocked;
@property(readonly) BOOL isVIP;
@property(readonly, copy) NSIndexSet *flagColors;
@property(readonly) BOOL hasUnflagged;
@property(readonly) ECMessageFlags *flags;
@property(readonly, copy) NSArray *ccList;
@property(readonly, copy) NSArray *toList;
@property(readonly, copy) NSArray *senderList;
@property(readonly, copy) NSString *summary;
@property(readonly) ECSubject *subject;
@property(readonly) NSDate *date;
@end

