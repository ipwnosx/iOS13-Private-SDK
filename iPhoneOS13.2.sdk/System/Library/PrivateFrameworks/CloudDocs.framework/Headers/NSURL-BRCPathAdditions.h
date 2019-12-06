//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSPersonNameComponents, NSString;

@interface NSURL (BRCPathAdditions)
+ (id)brc_fileURLWithVolumeDeviceID:(id)arg1 fileID:(id)arg2 isDirectory:(BOOL)arg3;
+ (id)brc_fileURLWithFileDescriptor:(int)arg1;
+ (void)br_containerIDsWithExternalReferencesTo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)br_documentURLFromBookmarkableString:(id)arg1 error:(id )arg2;
+ (void)br_documentURLFromBookmarkableString:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)br_documentURLFromFileObjectID:(id)arg1 error:(id )arg2;
- (id)brc_issueSandboxExtensionOfClass:(const char )arg1 error:(id )arg2;
- (BOOL)br_setTagNames:(id)arg1 error:(id )arg2;
- (BOOL)br_getTagNames:(id )arg1 error:(id )arg2;
- (id)br_addFakeConflictLoserFromItemAtURL:(id)arg1 lastEditorDeviceName:(id)arg2 error:(id )arg3;
- (id)br_addFakeConflictLoserFromItemAtURL:(id)arg1 lastEditorDeviceName:(id)arg2 lastEditorUserName:(id)arg3 error:(id )arg4;
@property(readonly, nonatomic) NSPersonNameComponents *br_lastEditorNameComponents;
@property(readonly, nonatomic) NSString *br_lastEditorName;
@property(readonly, nonatomic) NSString *br_lastEditorDeviceName;
- (unsigned short)br_capabilityToMoveToURL:(id)arg1 error:(id )arg2;
- (BOOL)br_isPCSChained;
- (BOOL)br_isSymLink;
- (BOOL)br_wouldBeExcludedFromSync;
- (id)br_typeIdentifierWithError:(id )arg1;
- (BOOL)br_setAccessTime:(NSUInteger)arg1 error:(id )arg2;
- (void)br_addPhysicalProperty;
- (BOOL)br_isPromiseURL;
- (id)br_logicalURL;
- (id)br_physicalURL;
- (id)icd_documentRecordIDWithError:(id )arg1;
- (id)br_documentRecordIDWithError:(id )arg1;
- (id)icd_itemID;
- (id)br_itemID;
- (id)br_URLByResolvingExternalDocumentReferenceWithError:(id )arg1;
- (id)br_URLByResolvingInProcessExternalDocumentReferenceWithProperties:(id)arg1;
- (id)br_externalDocumentPropertiesWithError:(id )arg1;
- (BOOL)br_isExternalDocumentReference;
- (id)br_cloudDocsContainer;
- (BOOL)br_mightBeBRAlias;
- (BOOL)br_isDocumentsContainer;
- (id)br_containerIDIfIsDesktopOrDocumentsURL;
- (id)br_containerIDIfIsDocumentsContainerURL;
- (id)br_containerID;
- (BOOL)br_isInSharedDocsContainer;
- (void)br_isConflictedWithHandler:(CDUnknownBlockType)arg1;
- (BOOL)br_isInCloudDocsPrivateStoragesForRemoteDocumentVersions;
- (BOOL)br_isInCloudDocsPrivateStorages;
- (BOOL)_br_isInSyncedLocationStrictly:(BOOL)arg1;
- (BOOL)br_isStrictlyInSyncedLocation;
- (BOOL)br_isInSyncedLocation;
- (BOOL)br_isInSyncedDocuments;
- (BOOL)br_isInSyncedDesktop;
- (BOOL)br_isInMobileDocuments;
- (BOOL)br_isInTrash;
- (id)br_debugDescription;
- (id)br_pathRelativeToMobileDocuments;
- (id)br_pathRelativeToSyncedRootURL:(id)arg1;
- (id)br_pathRelativeToSyncedRootURLForContainerID:(id)arg1;
- (void)br_containerIDsWithExternalReferencesWithHandler:(CDUnknownBlockType)arg1;
- (void)br_bookmarkableStringForRemoteOpeningAppWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)br_bookmarkableStringWithEtag:(BOOL)arg1 onlyAllowItemKnowByServer:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)br_bookmarkableStringWithEtag:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (id)br_cachedBookmarkData;
- (void)br_preCacheBookmarkData:(id)arg1 versionEtag:(id)arg2;
- (BOOL)br_isParentOfURL:(id)arg1;
- (BOOL)br_isParentOfURL:(id)arg1 strictly:(BOOL)arg2;
- (BOOL)br_isInLocalHomeDirectory;
- (id)br_realpathURL;
@end

