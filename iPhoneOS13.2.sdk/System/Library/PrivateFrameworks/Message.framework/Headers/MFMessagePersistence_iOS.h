//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailDaemon/EDMessagePersistence.h>

#import <Message/EFLoggable-Protocol.h>

@class EDMailDropMetadataGeneratorFactory, MFMailMessageLibrary, MFMailMessageLibraryQueryTransformer, MFMessageTransformer, NSMutableDictionary, NSObject;
@protocol EFScheduler, MFMessageSummaryLoaderProvider, OS_dispatch_queue;

@interface MFMessagePersistence_iOS : EDMessagePersistence <EFLoggable>
{
//    struct os_unfair_lock_s _summaryLock;
    NSMutableDictionary *_summaryLoaders;
    EDMailDropMetadataGeneratorFactory *_maildropContentItemGeneratorFactory;
    id <MFMessageSummaryLoaderProvider> _summaryLoaderProvider;
    MFMailMessageLibrary *_library;
    MFMailMessageLibraryQueryTransformer *_queryTransformer;
    MFMessageTransformer *_libraryMessageTransformer;
    id <EFScheduler> _networkContentLoadScheduler;
    id <EFScheduler> _offlineContentLoadScheduler;
    NSObject<OS_dispatch_queue> *_requestSummaryQueue;
}

+ (id)log;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *requestSummaryQueue; // @synthesize requestSummaryQueue=_requestSummaryQueue;
@property(retain, nonatomic) id <EFScheduler> offlineContentLoadScheduler; // @synthesize offlineContentLoadScheduler=_offlineContentLoadScheduler;
@property(retain, nonatomic) id <EFScheduler> networkContentLoadScheduler; // @synthesize networkContentLoadScheduler=_networkContentLoadScheduler;
@property(retain, nonatomic) MFMessageTransformer *libraryMessageTransformer; // @synthesize libraryMessageTransformer=_libraryMessageTransformer;
@property(retain, nonatomic) MFMailMessageLibraryQueryTransformer *queryTransformer; // @synthesize queryTransformer=_queryTransformer;
@property(nonatomic) __weak MFMailMessageLibrary *library; // @synthesize library=_library;
@property(retain, nonatomic) id <MFMessageSummaryLoaderProvider> summaryLoaderProvider; // @synthesize summaryLoaderProvider=_summaryLoaderProvider;
@property(retain, nonatomic) EDMailDropMetadataGeneratorFactory *maildropContentItemGeneratorFactory; // @synthesize maildropContentItemGeneratorFactory=_maildropContentItemGeneratorFactory;
// - (void).cxx_destruct;
- (id)enabledAccountMailboxesExpression;
- (id)libraryMessageForMessageObjectID:(id)arg1;
- (id)_requestSummaryForLibraryMessage:(id)arg1;
- (id)requestSummaryForMessageObjectID:(id)arg1;
- (id)requestContentForMessageObjectID:(id)arg1 requestID:(NSUInteger)arg2 options:(id)arg3 delegate:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)groupedMessagesCountByMailboxMatchingQuery:(NSUInteger)arg1 variable:(id)arg2;
- (id)persistedMessageForOutgoingMessage:(id)arg1 isDraft:(BOOL)arg2;
- (id)persistedMessagesForDatabaseIDs:(id)arg1 requireProtectedData:(BOOL)arg2 temporarilyUnavailableDatabaseIDs:(id )arg3;
- (id)messagesForPersistedMessages:(id)arg1 mailboxScope:(id)arg2;
- (void)_iterateMessagesMatchingQuery:(id)arg1 cancelationToken:(id)arg2 resultHandler:(id)arg3 monitor:(id)arg4;
- (void)iteratePersistedMessagesMatchingQuery:(id)arg1 limit:(long long)arg2 cancelationToken:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)iterateMessagesMatchingQuery:(id)arg1 batchSize:(long long)arg2 firstBatchSize:(long long)arg3 limit:(long long)arg4 cancelationToken:(id)arg5 handler:(CDUnknownBlockType)arg6;
- (NSUInteger)_countOfMessagesMatchingCriteria:(id)arg1 includingDuplicates:(BOOL)arg2;
- (long long)countOfMessagesMatchingQuery:(id)arg1;
- (long long)countOfMessagesWithMessageIDHeaderHash:(id)arg1 matchingQuery:(id)arg2;
- (id)initWithMailboxPersistence:(id)arg1 database:(id)arg2 library:(id)arg3;

@end

