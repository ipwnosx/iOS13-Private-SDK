//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/REMExternalSyncMetadataWritableProviding-Protocol.h>
#import <ReminderKit/REMObjectIDProviding-Protocol.h>

@class NSArray, NSData, NSDate, NSDictionary, NSSet, NSString, REMColor, REMObjectID, REMResolutionTokenMap;

@interface REMListStorage : NSObject <NSCopying, NSSecureCoding, REMObjectIDProviding, REMExternalSyncMetadataWritableProviding>
{
    BOOL _hasDeserializedReminderIDsMergeableOrdering;
    NSUInteger _storeGeneration;
    NSUInteger _copyGeneration;
    BOOL _isGroup;
    BOOL _showingLargeAttachments;
    BOOL _remindersICSDisplayOrderChanged;
    BOOL _daIsEventOnlyContainer;
    BOOL _daIsReadOnly;
    BOOL _daIsImmutable;
    BOOL _daIsNotificationsCollection;
    BOOL _isPlaceholder;
    NSString *externalIdentifier;
    NSString *externalModificationTag;
    NSString *daSyncToken;
    NSString *daPushKey;
    REMObjectID *_accountID;
    REMObjectID *_objectID;
    NSString *_name;
    REMColor *_color;
    NSString *_badgeEmblem;
    REMObjectID *_parentAccountID;
    REMObjectID *_parentListID;
    NSData *_reminderIDsMergeableOrderingData;
    REMResolutionTokenMap *_resolutionTokenMap;
    NSSet *_reminderIDsToUndelete;
    NSString *_sharedOwnerName;
    NSString *_sharedOwnerAddress;
    long long _sharingStatus;
    NSArray *_sharees;
    REMObjectID *_sharedOwnerID;
    NSDate *_lastUserAccessDate;
    NSArray *_calDAVNotifications;
    NSString *_daExternalIdentificationTag;
    NSDictionary *_daBulkRequests;
    long long _daDisplayOrder;
}

+ (id)reminderIDsMergeableOrderingFromReminderIDUUIDStringsJSONData:(id)arg1 error:(id )arg2;
+ (id)reminderIDUUIDStringsJSONDataFromReminderIDsMergeableOrdering:(id)arg1 error:(id )arg2;
+ (id)cdEntityName;
+ (id)objectIDWithUUID:(id)arg1;
+ (id)newObjectID;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL isPlaceholder; // @synthesize isPlaceholder=_isPlaceholder;
@property(nonatomic) BOOL daIsNotificationsCollection; // @synthesize daIsNotificationsCollection=_daIsNotificationsCollection;
@property(nonatomic) BOOL daIsImmutable; // @synthesize daIsImmutable=_daIsImmutable;
@property(nonatomic) BOOL daIsReadOnly; // @synthesize daIsReadOnly=_daIsReadOnly;
@property(nonatomic) BOOL daIsEventOnlyContainer; // @synthesize daIsEventOnlyContainer=_daIsEventOnlyContainer;
@property(nonatomic) long long daDisplayOrder; // @synthesize daDisplayOrder=_daDisplayOrder;
@property(retain, nonatomic) NSDictionary *daBulkRequests; // @synthesize daBulkRequests=_daBulkRequests;
@property(retain, nonatomic) NSString *daExternalIdentificationTag; // @synthesize daExternalIdentificationTag=_daExternalIdentificationTag;
@property(retain, nonatomic) NSArray *calDAVNotifications; // @synthesize calDAVNotifications=_calDAVNotifications;
@property(copy, nonatomic) NSDate *lastUserAccessDate; // @synthesize lastUserAccessDate=_lastUserAccessDate;
@property(retain, nonatomic) REMObjectID *sharedOwnerID; // @synthesize sharedOwnerID=_sharedOwnerID;
@property(retain, nonatomic) NSArray *sharees; // @synthesize sharees=_sharees;
@property(nonatomic) long long sharingStatus; // @synthesize sharingStatus=_sharingStatus;
@property(copy, nonatomic) NSString *sharedOwnerAddress; // @synthesize sharedOwnerAddress=_sharedOwnerAddress;
@property(copy, nonatomic) NSString *sharedOwnerName; // @synthesize sharedOwnerName=_sharedOwnerName;
@property(nonatomic) BOOL remindersICSDisplayOrderChanged; // @synthesize remindersICSDisplayOrderChanged=_remindersICSDisplayOrderChanged;
@property(retain, nonatomic) NSSet *reminderIDsToUndelete; // @synthesize reminderIDsToUndelete=_reminderIDsToUndelete;
@property(retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap; // @synthesize resolutionTokenMap=_resolutionTokenMap;
@property(retain, nonatomic) NSData *reminderIDsMergeableOrderingData; // @synthesize reminderIDsMergeableOrderingData=_reminderIDsMergeableOrderingData;
@property(retain, nonatomic) REMObjectID *parentListID; // @synthesize parentListID=_parentListID;
@property(retain, nonatomic) REMObjectID *parentAccountID; // @synthesize parentAccountID=_parentAccountID;
@property(nonatomic) BOOL showingLargeAttachments; // @synthesize showingLargeAttachments=_showingLargeAttachments;
@property(retain, nonatomic) NSString *badgeEmblem; // @synthesize badgeEmblem=_badgeEmblem;
@property(retain, nonatomic) REMColor *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) BOOL isGroup; // @synthesize isGroup=_isGroup;
@property(retain, nonatomic) REMObjectID *objectID; // @synthesize objectID=_objectID;
@property(retain, nonatomic) REMObjectID *accountID; // @synthesize accountID=_accountID;
@property(copy, nonatomic) NSString *daPushKey; // @synthesize daPushKey;
@property(copy, nonatomic) NSString *daSyncToken; // @synthesize daSyncToken;
@property(copy, nonatomic) NSString *externalModificationTag; // @synthesize externalModificationTag;
@property(copy, nonatomic) NSString *externalIdentifier; // @synthesize externalIdentifier;
// - (void).cxx_destruct;
@property(readonly, nonatomic) REMObjectID *remObjectID;
@property(readonly, nonatomic) NSString *displayName;
- (id)reminderIDsMergeableOrdering;
- (id)ekColor;
- (id)debugDescription;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setStoreGenerationIfNeeded:(NSUInteger)arg1;
- (NSUInteger)storeGeneration;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithObjectID:(id)arg1 accountID:(id)arg2 name:(id)arg3 isGroup:(BOOL)arg4 reminderIDsMergeableOrderingData:(id)arg5;
- (id)initWithObjectID:(id)arg1 accountID:(id)arg2 name:(id)arg3 isGroup:(BOOL)arg4 reminderIDsMergeableOrdering:(id)arg5;
- (id)initWithObjectID:(id)arg1 accountID:(id)arg2 name:(id)arg3;

@end

