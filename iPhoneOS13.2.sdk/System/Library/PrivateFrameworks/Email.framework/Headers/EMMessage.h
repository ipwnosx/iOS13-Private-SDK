//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/EMRepositoryObject.h>

#import <Email/EFLoggable-Protocol.h>
#import <Email/EMContentItem-Protocol.h>
#import <Email/EMExtendedContentItem-Protocol.h>
#import <Email/EMMessageBuilder-Protocol.h>
#import <Email/EMMessageListItem-Protocol.h>
#import <Email/EMMutableMessageListItem-Protocol.h>

@class ECMessageFlags, ECSubject, EMMailDropMetadata, EMMessageRepository, EMObjectID, NSArray, NSDate, NSIndexSet, NSString, NSUUID;
@protocol ECEmailAddressConvertible, EMCollectionItemID;

@interface EMMessage : EMRepositoryObject <EFLoggable, EMMessageBuilder, EMExtendedContentItem, EMMutableMessageListItem, EMMessageListItem, EMContentItem>
{
    NSUInteger _isEditable;
    NSArray *_mailboxes;
    NSArray *_mailboxObjectIDs;
//    struct os_unfair_lock_s _mailboxesLock;
    BOOL _isVIP;
    BOOL _isBlocked;
    BOOL _hasAttachments;
    BOOL _isToMe;
    BOOL _isCCMe;
    BOOL _isAvailableLocally;
    int _exchangeEventUID;
    NSDate *_date;
    ECSubject *_subject;
    NSString *_summary;
    ECMessageFlags *_flags;
    long long _conversationNotificationLevel;
    long long _conversationID;
    NSArray *_toList;
    NSArray *_ccList;
    long long _dataTransferByteCount;
    long long _storageByteCount;
    EMMailDropMetadata *_mailDropMetadata;
    id /* CDUnknownBlockType */ _loaderBlock;
    long long __internalID;
    id <ECEmailAddressConvertible> _senderAddress;
    NSArray *_bccList;
    NSUUID *_documentID;
}

+ (BOOL)supportsSecureCoding;
+ (id)combinedFlagsForMessageListItemFlags:(id)arg1 forDisplay:(BOOL)arg2;
+ (id)combinedFlagsForMessageListItems:(id)arg1 forDisplay:(BOOL)arg2;
+ (id)combinedFlagsForMessageListItems:(id)arg1;
+ (id)log;
+ (id)externalDataTypeIdentifiers;
+ (id)UTType;
+ (id)predicateForMessageWithMIMEMessageIDHeader:(id)arg1;
+ (id)_predicateForMessagesWithObjectIDConstantValue:(id)arg1 operatorType:(NSUInteger)arg2;
+ (id)predicateForExcludingMessagesWithObjectIDs:(id)arg1;
+ (id)predicateForExcludingMessageWithObjectID:(id)arg1;
+ (id)predicateForMessagesWithObjectIDs:(id)arg1;
+ (id)predicateForMessageWithInternalID:(long long)arg1;
+ (id)predicateForMessageWithObjectID:(id)arg1;
+ (id)predicateForMessageWithItemID:(id)arg1 mailboxPredicate:(id)arg2 mailboxTypeResolver:(id)arg3;
@property(copy, nonatomic) NSUUID *documentID; // @synthesize documentID=_documentID;
@property(copy, nonatomic) NSArray *bccList; // @synthesize bccList=_bccList;
@property(retain, nonatomic) id <ECEmailAddressConvertible> senderAddress; // @synthesize senderAddress=_senderAddress;
@property long long _internalID; // @synthesize _internalID=__internalID;
@property(copy, nonatomic) id /* CDUnknownBlockType */ loaderBlock; // @synthesize loaderBlock=_loaderBlock;
@property(readonly, nonatomic) int exchangeEventUID;
@property(readonly, copy, nonatomic) EMMailDropMetadata *mailDropMetadata;
@property(readonly, nonatomic) long long storageByteCount;
@property(readonly, nonatomic) long long dataTransferByteCount;
@property(readonly, nonatomic) BOOL isAvailableLocally;
@property(readonly) BOOL isCCMe;
@property(readonly) BOOL isToMe;
@property(readonly, copy) NSArray *ccList;
@property(readonly, copy) NSArray *toList;
@property(readonly) long long conversationID;
@property(readonly) long long conversationNotificationLevel;
@property(readonly) BOOL hasAttachments;
@property(readonly) BOOL isBlocked;
@property(readonly) BOOL isVIP;
@property(readonly) ECMessageFlags *flags;
@property(readonly, copy) NSString *summary;
@property(readonly) ECSubject *subject;
@property(readonly) NSDate *date;
// - (void).cxx_destruct;
- (id)requestRepresentationWithOptions:(id)arg1 delegate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)requestRepresentationWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSString *contentID;
@property(readonly, copy, nonatomic) NSString *UTType;
@property(readonly, copy, nonatomic) NSArray *availableRepresentations;
@property(readonly) BOOL isEditable;
@property(readonly) BOOL shouldArchiveByDefault;
@property(readonly) BOOL supportsArchiving;
@property(readonly) BOOL deleteMovesToTrash;
@property(readonly) EMMessage *displayMessage;
@property(readonly) EMObjectID *displayMessageObjectID;
@property(readonly) id <EMCollectionItemID> displayMessageItemID;
@property(readonly, copy) NSArray *senderList;
@property(readonly, copy) NSIndexSet *flagColors;
@property(readonly) BOOL hasUnflagged;
@property(readonly, copy) NSArray *mailboxes;
@property(readonly, copy) NSArray *mailboxObjectIDs;
@property(readonly) NSUInteger count;
@property(readonly, nonatomic) id <EMCollectionItemID> itemID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *ef_publicDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)cachedMetadataOfClass:(Class)arg1 forKey:(id)arg2;
- (void)setCachedMetadata:(id)arg1 forKey:(id)arg2;
- (void)_commonInitWithBuilder:(CDUnknownBlockType)arg1;
- (id)initWithObjectID:(id)arg1 builder:(CDUnknownBlockType)arg2;
- (id)initWithObjectID:(id)arg1;
@property(nonatomic) BOOL isSinglePagePDF; // @dynamic isSinglePagePDF;
@property(readonly, nonatomic) EMMessageRepository *repository;
- (BOOL)isInManagedAccountWithSourceMailboxScope:(id)arg1;

@end

