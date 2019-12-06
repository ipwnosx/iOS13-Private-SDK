//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface IMDCoreSpotlightManager : NSObject
{
    NSMutableSet *_blacklistMessageGUIDs;
}

+ (id)chatStyleCustomKey;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableSet *blacklistMessageGUIDs; // @synthesize blacklistMessageGUIDs=_blacklistMessageGUIDs;
- (NSUInteger)_lastIndexedRowID;
- (NSUInteger)_batchSizeForTargetBatchSize:(NSUInteger)arg1 lastIndexedRowID:(NSUInteger)arg2 lastBatch:(BOOL )arg3;
- (BOOL)_shouldIndexNextBatchForBatchSize:(NSUInteger)arg1;
- (void)_setBypassIndexVersionCheck;
- (void)_setCurrentIndexVersion:(NSUInteger)arg1;
- (BOOL)_bypassIndexVersionCheck;
- (NSUInteger)_currentIndexVersion;
- (NSUInteger)_expectedIndexVersion;
- (void)_setLastIndexedRowID:(NSUInteger)arg1;
- (void)_setMaxIndexRowID:(NSUInteger)arg1;
- (void)_setNeedsDeferredIndexing:(BOOL)arg1;
- (void)_setNeedsIndexing:(BOOL)arg1;
- (BOOL)_shouldBypassForTesting;
- (void)_indexSearchableItems:(id)arg1 lastIndexedRowID:(NSUInteger)arg2 batchSize:(NSUInteger)arg3 lastBatch:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
//  (id)_newLegacySearchableIndexesForMessages:(struct __CFArray )arg1;
//  (id)_newSearchableIndexesForMessages:(struct __CFArray )arg1;
//  (struct __CFArray )_copyMessagesForIndexingWithLastRowID:(NSUInteger)arg1 batchSize:(NSUInteger)arg2;
- (void)indexNextMessageBatchIfNeeded:(NSUInteger)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_indexSearchableChatItems:(id)arg1;
- (id)_chatDictionaryForChatAtIndex:(NSUInteger)arg1 withChats:(id)arg2;
- (long long)_chatCountForChats:(id)arg1;
//  (id)_newSearchableChatItemsForChats:(struct __CFArray )arg1;
- (void)indexChats;
- (void)_sanitizeIndexesForCurrentVersionIfNeeded:(CDUnknownBlockType)arg1;
- (void)setNeedsMessageReindexingWithCompletion:(CDUnknownBlockType)arg1;
- (id)_chatDictionaryForChatGUID:(id)arg1;
- (void)deleteChatSearchableItemForChatGUID:(id)arg1;
- (id)newChatSearchableItemForChatDictionary:(id)arg1 optionalLastMessageDate:(id)arg2;
- (void)_updateItem:(id)arg1 withGeoMapItem:(id)arg2;
- (void)_geocodeItems:(id)arg1;
//  (id)newSearchableItemsForMessage:(struct _IMDMessageRecordStruct )arg1 reindexing:(BOOL)arg2;
- (id)newSearchableItemsForMessageGUID:(id)arg1 reindexing:(BOOL)arg2;
- (void)clearMessageGUIDFromScrutiny:(id)arg1;
- (void)setMessageGUIDUnderScrutiny:(id)arg1;
- (long long)maxRowID;
- (id)searchableIndex;
- (void)dealloc;

@end

