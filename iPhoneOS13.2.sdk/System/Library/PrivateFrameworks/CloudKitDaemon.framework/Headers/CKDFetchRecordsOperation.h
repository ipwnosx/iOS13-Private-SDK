//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDDecryptRecordsOperation, CKDRecordCache, NSArray, NSDictionary, NSMapTable, NSMutableArray, NSMutableDictionary, NSObject, NSSet;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKDFetchRecordsOperation : CKDDatabaseOperation
{
    CKDDecryptRecordsOperation *_decryptOperation;
    BOOL _useCachedEtags;
    BOOL _useRecordCache;
    BOOL _forcePCSDecrypt;
    BOOL _skipDecryption;
    BOOL _shouldFetchAssetContent;
    BOOL _shouldFetchAssetContentInMemory;
    NSArray *_fullRecordsToFetch;
    id /* CDUnknownBlockType */ _recordFetchProgressBlock;
    id /* CDUnknownBlockType */ _recordFetchCommandBlock;
    id /* CDUnknownBlockType */ _recordFetchCompletionBlock;
    NSArray *_recordIDsToFetch;
    NSMutableDictionary *_cachedRecords;
    NSSet *_desiredKeySet;
    NSDictionary *_recordIDsToETags;
    NSDictionary *_recordIDsToVersionETags;
    NSDictionary *_desiredPackageFileIndices;
    NSObject<OS_dispatch_group> *_fetchRecordsGroup;
    NSMutableDictionary *_errorsByRecordID;
    NSMapTable *_downloadTasksByRecordID;
    NSDictionary *_assetTransferOptionsByRecordTypeAndKey;
    NSSet *_assetFieldNamesToPublishURLs;
    NSUInteger _requestedTTL;
    NSUInteger _URLOptions;
    CKDRecordCache *_cache;
    NSMutableArray *_recordIDsToRefetch;
    NSMutableDictionary *_keyOrErrorForHostname;
    NSMutableArray *_shareRecordsToUpdate;
    NSDictionary *_webSharingIdentityDataByRecordID;
}

@property(retain, nonatomic) NSDictionary *webSharingIdentityDataByRecordID; // @synthesize webSharingIdentityDataByRecordID=_webSharingIdentityDataByRecordID;
@property(retain, nonatomic) NSMutableArray *shareRecordsToUpdate; // @synthesize shareRecordsToUpdate=_shareRecordsToUpdate;
@property(retain, nonatomic) NSMutableDictionary *keyOrErrorForHostname; // @synthesize keyOrErrorForHostname=_keyOrErrorForHostname;
@property(retain, nonatomic) NSMutableArray *recordIDsToRefetch; // @synthesize recordIDsToRefetch=_recordIDsToRefetch;
@property(retain, nonatomic) CKDRecordCache *cache; // @synthesize cache=_cache;
@property(nonatomic) NSUInteger URLOptions; // @synthesize URLOptions=_URLOptions;
@property(nonatomic) NSUInteger requestedTTL; // @synthesize requestedTTL=_requestedTTL;
@property(retain, nonatomic) NSSet *assetFieldNamesToPublishURLs; // @synthesize assetFieldNamesToPublishURLs=_assetFieldNamesToPublishURLs;
@property(nonatomic) BOOL shouldFetchAssetContentInMemory; // @synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory;
@property(nonatomic) BOOL shouldFetchAssetContent; // @synthesize shouldFetchAssetContent=_shouldFetchAssetContent;
@property(retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey; // @synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey;
@property(retain, nonatomic) NSMapTable *downloadTasksByRecordID; // @synthesize downloadTasksByRecordID=_downloadTasksByRecordID;
@property(retain, nonatomic) NSMutableDictionary *errorsByRecordID; // @synthesize errorsByRecordID=_errorsByRecordID;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *fetchRecordsGroup; // @synthesize fetchRecordsGroup=_fetchRecordsGroup;
@property(retain, nonatomic) NSDictionary *desiredPackageFileIndices; // @synthesize desiredPackageFileIndices=_desiredPackageFileIndices;
@property(retain, nonatomic) NSDictionary *recordIDsToVersionETags; // @synthesize recordIDsToVersionETags=_recordIDsToVersionETags;
@property(retain, nonatomic) NSDictionary *recordIDsToETags; // @synthesize recordIDsToETags=_recordIDsToETags;
@property(retain, nonatomic) NSSet *desiredKeySet; // @synthesize desiredKeySet=_desiredKeySet;
@property(retain, nonatomic) NSMutableDictionary *cachedRecords; // @synthesize cachedRecords=_cachedRecords;
@property(retain, nonatomic) NSArray *recordIDsToFetch; // @synthesize recordIDsToFetch=_recordIDsToFetch;
@property(copy, nonatomic) id /* CDUnknownBlockType */ recordFetchCompletionBlock; // @synthesize recordFetchCompletionBlock=_recordFetchCompletionBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ recordFetchCommandBlock; // @synthesize recordFetchCommandBlock=_recordFetchCommandBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ recordFetchProgressBlock; // @synthesize recordFetchProgressBlock=_recordFetchProgressBlock;
@property(retain, nonatomic) NSArray *fullRecordsToFetch; // @synthesize fullRecordsToFetch=_fullRecordsToFetch;
@property(nonatomic) BOOL skipDecryption; // @synthesize skipDecryption=_skipDecryption;
@property(nonatomic) BOOL forcePCSDecrypt; // @synthesize forcePCSDecrypt=_forcePCSDecrypt;
@property(nonatomic) BOOL useRecordCache; // @synthesize useRecordCache=_useRecordCache;
@property(nonatomic) BOOL useCachedEtags; // @synthesize useCachedEtags=_useCachedEtags;
// - (void).cxx_destruct;
- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)finishWithError:(id)arg1;
- (void)_downloadAssets;
- (void)_fetchCloudCerts;
- (void)_didDownloadAssetsWithError:(id)arg1;
- (void)_finishAllDownloadTasksWithError:(id)arg1;
- (void)_addDownloadTaskForRecord:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (int)_prepareAsset:(id)arg1 record:(id)arg2 recordKey:(id)arg3 assetTransferOptions:(id)arg4;
- (void)_decryptPropertiesIfNeededForRecord:(id)arg1 record:(id)arg2;
- (void)_handleSharePCSPrepForShare:(id)arg1 recordID:(id)arg2;
- (void)_handleRecordFetch:(id)arg1 recordID:(id)arg2 etagMatched:(BOOL)arg3 responseCode:(id)arg4;
- (void)_decryptPropertiesOnRecord:(id)arg1 recordID:(id)arg2;
@property(readonly, nonatomic) BOOL hasRecordDecryptOperation;
@property(readonly, nonatomic) CKDDecryptRecordsOperation *recordDecryptOperation;
- (void)_continueHandleFetchedRecord:(id)arg1 recordID:(id)arg2;
- (void)setError:(id)arg1 forRecordID:(id)arg2;
- (id)errorForRecordID:(id)arg1;
- (void)fetchRecordsWithIDs:(id)arg1 andFullRecords:(id)arg2;
- (void)_findSpecialParticipantsOnShare:(id)arg1 identityDelegate:(id)arg2;
- (void)_saveUpdatedShareRecords;
- (id)desiredIndexedListKeys;
- (id)nameForState:(NSUInteger)arg1;
- (BOOL)makeStateTransition;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

