//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/EDMailboxProvider-Protocol.h>
#import <Message/EFLoggable-Protocol.h>

@class MFMailboxUidTransformer, NSArray, NSMapTable;
@protocol EDAccountsProvider, EDMailboxProviderDelegate, EFScheduler, OS_dispatch_queue;

@interface MFMailboxProvider : NSObject <EFLoggable, EDMailboxProvider>
{
    _Atomic int _deferringInvalidationCount;
    BOOL _needsToInvalidate;
    id <EDMailboxProviderDelegate> delegate;
    id <EDAccountsProvider> _accountsProvider;
    MFMailboxUidTransformer *_mailboxUidTransformer;
    NSMapTable *_uidToMailboxMap;
    NSMapTable *_objectIDToUidMap;
    NSArray *_allMailboxCache;
    NSObject<OS_dispatch_queue> *_mailboxCacheQueue;
    id <EFScheduler> _observerScheduler;
}

+ (id)log;
@property(retain, nonatomic) id <EFScheduler> observerScheduler; // @synthesize observerScheduler=_observerScheduler;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *mailboxCacheQueue; // @synthesize mailboxCacheQueue=_mailboxCacheQueue;
@property(retain) NSArray *allMailboxCache; // @synthesize allMailboxCache=_allMailboxCache;
@property(retain) NSMapTable *objectIDToUidMap; // @synthesize objectIDToUidMap=_objectIDToUidMap;
@property(retain) NSMapTable *uidToMailboxMap; // @synthesize uidToMailboxMap=_uidToMailboxMap;
@property(retain, nonatomic) MFMailboxUidTransformer *mailboxUidTransformer; // @synthesize mailboxUidTransformer=_mailboxUidTransformer;
@property(nonatomic) __weak id <EDAccountsProvider> accountsProvider; // @synthesize accountsProvider=_accountsProvider;
@property(nonatomic) __weak id <EDMailboxProviderDelegate> delegate; // @synthesize delegate;
// - (void).cxx_destruct;
- (long long)mailboxTypeForMailboxObjectID:(id)arg1;
- (id)mailboxObjectIDsForMailboxType:(long long)arg1;
- (void)invalidateMailboxes;
- (void)_invalidateCache;
- (void)_mailboxInvalidated:(id)arg1;
- (void)_didFetchMailboxList:(id)arg1;
- (void)_willFetchMailboxList:(id)arg1;
- (void)_didChangeMailboxList:(id)arg1;
- (void)_didReloadMailboxList:(id)arg1;
- (void)_willReloadMailboxList:(id)arg1;
- (BOOL)_isDeferringInvalidation;
- (void)_endDeferringInvalidation;
- (void)_beginDeferringInvalidation;
- (id)legacyMailboxesForObjectIDs:(id)arg1;
- (id)legacyMailboxForObjectID:(id)arg1;
- (id)mailboxForObjectID:(id)arg1;
- (id)mailboxesFromLegacyMailboxes:(id)arg1;
- (id)mailboxFromLegacyMailbox:(id)arg1;
- (void)fetchMailboxes;
- (id)allMailboxes;
- (void)_populateCache;
- (void)enumerateAccountsWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithAccountsProvider:(id)arg1;

@end

