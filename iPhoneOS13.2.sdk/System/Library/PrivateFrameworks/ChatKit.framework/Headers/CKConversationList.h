//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKConversation, NSMutableArray;

@interface CKConversationList : NSObject
{
    NSMutableArray *_trackedConversations;
    BOOL _loadingConversations;
    BOOL _loadedConversations;
    BOOL _remergingConversations;
    CKConversation *_pendingConversation;
}

+ (void)_handleRegistryDidLoadNotification:(id)arg1;
+ (void)initialize;
+ (id)sharedConversationList;
@property(nonatomic) BOOL remergingConversations; // @synthesize remergingConversations=_remergingConversations;
@property(readonly, nonatomic) BOOL loadedConversations; // @synthesize loadedConversations=_loadedConversations;
@property(readonly, nonatomic) BOOL loadingConversations; // @synthesize loadingConversations=_loadingConversations;
@property(retain, nonatomic) CKConversation *pendingConversation; // @synthesize pendingConversation=_pendingConversation;
// - (void).cxx_destruct;
- (BOOL)_messageFilteringEnabled;
- (void)_handleMemoryWarning:(id)arg1;
- (id)_testingTrackedConversations;
- (id)pendingConversationCreatingIfNecessary;
- (void)_handleChatsDidRemergeNotification:(id)arg1;
- (void)_handleChatsWillRemergeNotification:(id)arg1;
- (void)_chatPropertiesChanged:(id)arg1;
- (void)_handleEngroupFinishedUpdating:(id)arg1;
- (void)_chatItemsDidChange:(id)arg1;
- (void)_handlePreferredServiceChangedNotification:(id)arg1;
- (void)_handleChatJoinStateDidChange:(id)arg1;
- (void)_handleChatParticipantsDidChange:(id)arg1;
- (void)_abPartialChanged:(id)arg1;
- (void)_abChanged:(id)arg1;
- (void)deleteConversations:(id)arg1;
- (void)deleteConversation:(id)arg1;
- (id)unreadLastMessages;
- (BOOL)_isUnreadChat:(id)arg1 ignoringMessages:(id)arg2;
- (long long)unreadFilteredConversationCountIgnoringMessages:(id)arg1;
- (long long)unreadCount;
- (void)unpendConversation;
- (void)beginTrackingConversation:(id)arg1 forChat:(id)arg2;
- (BOOL)_shouldBailBeginTrackingForCurrentProcess;
- (void)_postConversationListUpdateVisibleConversationsNotificationForUID:(id)arg1;
- (void)_postConversationListChangedNotification;
- (id)topMostConversation;
- (void)resort;
- (id)conversations;
- (BOOL)hasActiveConversations;
- (id)firstUnreadFilteredConversationIgnoringMessages:(id)arg1;
- (BOOL)_shouldFilterForParticipants:(id)arg1;
- (void)setNeedsReload;
- (void)resetCaches;
- (id)conversationForExistingChat:(id)arg1;
- (id)conversationForHandles:(id)arg1 displayName:(id)arg2 lastAddressedHandle:(id)arg3 lastAddressedSIMID:(id)arg4 joinedChatsOnly:(BOOL)arg5 create:(BOOL)arg6;
- (id)conversationForHandles:(id)arg1 displayName:(id)arg2 joinedChatsOnly:(BOOL)arg3 create:(BOOL)arg4;
- (id)_copyEntitiesForAddressStrings:(id)arg1;
- (void)_handleRegistryWillUnregisterChatNotification:(id)arg1;
- (void)_handleRegistryDidRegisterChatNotification:(id)arg1;
- (void)_beginTrackingAllExistingChatsIfNeeded;
- (void)stopTrackingConversation:(id)arg1;
- (id)conversationForExistingChatWithGUID:(id)arg1;
- (id)conversationForExistingChatWithIMChatPersonCentricID:(id)arg1;
- (id)conversationForExistingChatWithIMChatGroupID:(id)arg1;
- (id)conversationForExistingChatWithGroupID:(id)arg1;
- (id)_conversationForChat:(id)arg1;
- (void)_beginTrackingConversationWithChat:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_beginTrackingConversationWithChat:(id)arg1;
- (id)_alreadyTrackedConversationForChat:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

