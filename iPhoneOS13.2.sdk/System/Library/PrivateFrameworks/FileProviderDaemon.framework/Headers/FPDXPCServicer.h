//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProviderDaemon/FPDDaemon-Protocol.h>

@class FPDServer, NSHashTable, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPDXPCServicer : NSObject <FPDDaemon>
{
    NSHashTable *_providerServicers;
    NSObject<OS_dispatch_queue> *_queue;
    FPDServer *_server;
    NSXPCConnection *_connection;
}

@property(nonatomic) __weak NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak FPDServer *server; // @synthesize server=_server;
// - (void).cxx_destruct;
- (void)_test_simulateUninstallOfBundleID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_test_simulateInstallOfBundleID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_test_callRemoveTrashedItemsOlderThanDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_test_callFileProviderManagerAPIs:(CDUnknownBlockType)arg1;
- (void)_test_retrieveItemWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)ingestFromCacheItemWithID:(id)arg1 requestedFields:(NSUInteger)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)startAccessingServiceForItemURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startAccessingServiceForItemID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startAccessingOperationServiceForProviderDomainID:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)startAccessingExtensionForProviderDomainID:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)currentMaterializedSetSyncAnchorForDomain:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)enumerateMaterializedSetForDomain:(id)arg1 inProvider:(id)arg2 syncAnchor:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)fetchDaemonOperationWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchDaemonOperationIDsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)scheduleActionOperationWithInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reindexAllSearchableItemsForBundleIDs:(id)arg1 acknowledgementHandler:(CDUnknownBlockType)arg2;
- (void)reindexAllSearchableItemsWithAcknowledgementHandler:(CDUnknownBlockType)arg1;
- (void)writeCheckReportTo:(id)arg1 limitNumberOfItems:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dumpStateTo:(id)arg1 limitNumberOfItems:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)didUpdateAlternateContentsDocumentForDocumentAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchAlternateContentsURLForDocumentURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setAlternateContentsURL:(id)arg1 onDocumentURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)reimportItemsBelowItemWithID:(id)arg1 removeCachedItems:(BOOL)arg2 markItemDataless:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setEnabled:(BOOL)arg1 forDomainIdentifier:(id)arg2 providerIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)getDomainsForProviderIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeAllDomainsForProviderIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeDomain:(id)arg1 forProviderIdentifier:(id)arg2 options:(NSUInteger)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)addDomain:(id)arg1 forProviderIdentifier:(id)arg2 byImportingDirectoryAtURL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)restoreUserURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)backUpUserURL:(id)arg1 outputUserURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateBlacklistedProcessNamesForProvider:(id)arg1 processNames:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getURLForContainerWithItemID:(id)arg1 inDataScopeDomainWithIdentifier:(id)arg2 documentsScopeDomainIdentifier:(id)arg3 documentsFolderItemIdentifier:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)makeTopologicallySortedItemsOnDisk:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)writeMetadata:(id)arg1 onURL:(id)arg2 error:(id )arg3;
- (id)stageLocation;
- (void)noteURLBecameFrontmost:(id)arg1 inWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)materializeURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startOperation:(id)arg1 toFetchIconsForAppBundleIDs:(id)arg2 requestedSize:(CGSize)arg3 scale:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)fetchListOfMonitoredApps:(CDUnknownBlockType)arg1;
- (void)valuesForAttributes:(id)arg1 forItemAtURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateLastUsedDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)trashItemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchIndexPropertiesForItemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchFSItemsForItemIdentifiers:(id)arg1 providerIdentifier:(id)arg2 domainIdentifier:(id)arg3 materializingIfNeeded:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)itemForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchAccessServicer:(CDUnknownBlockType)arg1;
- (void)fetchDomainServicerForProviderDomainID:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)bookmarkableStringFromDocumentURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)createItemBasedOnTemplate:(id)arg1 fields:(NSUInteger)arg2 urlWrapper:(id)arg3 options:(NSUInteger)arg4 bounceOnCollision:(BOOL)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)forceIngestionForItemIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)forceIngestionForItemID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_forceIngestionForItemID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)documentURLFromBookmarkableString:(id)arg1 creatingPlaceholderIfMissing:(BOOL)arg2 ignoreAlternateContentsURL:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)providerDomainForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)providerDomainForIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)providerDomainsCompletionHandler:(CDUnknownBlockType)arg1;
- (void)unpinItemWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)pinItemWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setDownloadPolicy:(NSUInteger)arg1 forItemWithID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)evictItemWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)evictItemAtURL:(id)arg1 evenIfEnumeratingFP:(BOOL)arg2 andClearACLForConsumer:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)startProvidingItemAtURL:(id)arg1 fromProviderID:(id)arg2 forConsumerID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)extendSandboxForFileURL:(id)arg1 fromProviderID:(id)arg2 toConsumerID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)extendBookmarkForFileURL:(id)arg1 toConsumerID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)extendBookmarkForItemID:(id)arg1 consumerID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)wakeUpForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startAccessingServiceForItemID:(id)arg1 connection:(id)arg2 enumerateEntitlementRequired:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)createDomainServicerForProviderDomainID:(id)arg1 enumerateEntitlementRequired:(BOOL)arg2 error:(id )arg3;
- (id)providerForIdentifier:(id)arg1 enumerateEntitlementRequired:(BOOL)arg2 error:(id )arg3;
- (id)providerForCurrentConnection;
- (BOOL)clientHasSandboxAccessToFile:(id)arg1;
- (BOOL)_isNonSandboxedConnection;
- (void)invalidate;
- (int)pid;
- (id)init;
- (id)description;

@end

