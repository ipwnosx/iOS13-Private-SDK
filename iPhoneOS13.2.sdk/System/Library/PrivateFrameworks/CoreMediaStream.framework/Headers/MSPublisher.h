//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMediaStream/MSCupidStateMachine.h>

#import <CoreMediaStream/MSPublishStorageProtocolDelegate-Protocol.h>
#import <CoreMediaStream/MSPublishStreamsProtocolDelegate-Protocol.h>
#import <CoreMediaStream/MSPublisher-Protocol.h>

@class MSMediaStreamDaemon, MSObjectQueue, MSPublishStreamsProtocol, NSArray, NSMutableArray, NSMutableDictionary, NSURL;
@protocol MSPublishStorageProtocol, MSPublisherDelegate;

@interface MSPublisher : MSCupidStateMachine <MSPublisher, MSPublishStreamsProtocolDelegate, MSPublishStorageProtocolDelegate>
{
    id <MSPublisherDelegate> _delegate;
    MSMediaStreamDaemon *_daemon;
    int _state;
    MSObjectQueue *_uploadQueue;
    MSObjectQueue *_derivativesQueue;
    MSObjectQueue *_quarantinedQueue;
    NSArray *_pendingDerivativesQueue;
    NSMutableArray *_requestAuthQueue;
    NSUInteger _sendingQueueCount;
    NSMutableArray *_sendingQueue;
    NSMutableDictionary *_fileHashToAssetMap;
    MSPublishStreamsProtocol *_protocol;
    id <MSPublishStorageProtocol> _storageProtocol;
    NSURL *_storageProtocolURL;
    NSMutableArray *_tempFiles;
    NSMutableDictionary *_maxSizeByUTI;
    long long _publishTargetByteCount;
    int _publishBatchSize;
    int _maxErrorCount;
}

+ (BOOL)isInRetryState;
+ (void)stopAllActivities;
+ (id)personIDsWithOutstandingActivities;
+ (id)nextActivityDateForPersonID:(id)arg1;
+ (id)nextActivityDate;
+ (void)_setMasterNextActivityDate:(id)arg1 forPersonID:(id)arg2;
+ (void)forgetPersonID:(id)arg1;
+ (id)_clearInstantiatedPublishersByPersonID;
+ (id)existingPublisherForPersonID:(id)arg1;
+ (id)publisherForPersonID:(id)arg1;
@property(nonatomic) int publishBatchSize; // @synthesize publishBatchSize=_publishBatchSize;
@property(nonatomic) long long publishTargetByteCount; // @synthesize publishTargetByteCount=_publishTargetByteCount;
@property(retain, nonatomic) NSURL *storageProtocolURL; // @synthesize storageProtocolURL=_storageProtocolURL;
@property(nonatomic) MSMediaStreamDaemon *daemon; // @synthesize daemon=_daemon;
@property(nonatomic) id <MSPublisherDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)_isInRetryState;
- (void)stop;
- (void)abort;
- (void)_forget;
- (void)_abort;
- (id)_abortedError;
- (int)_stop;
- (void)publishStreamsProtocol:(id)arg1 didFinishSendingUploadCompleteError:(id)arg2;
- (void)_sendUploadComplete;
- (void)publishStorageProtocolDidFinishPublishingAllAssets:(id)arg1;
- (void)_categorizeError:(id)arg1 setOutIsIgnorable:(BOOL )arg2 setOutIsCounted:(BOOL )arg3 setOutIsFatal:(BOOL )arg4 setOutNeedsBackoff:(BOOL )arg5 setOutIsTemporary:(BOOL )arg6 setOutIsTokenAuth:(BOOL )arg7 setOutIsAuthError:(BOOL )arg8;
- (void)publishStorageProtocol:(id)arg1 didFinishUsingFD:(int)arg2 forAsset:(id)arg3;
- (int)publishStorageProtocol:(id)arg1 didRequestFDForAsset:(id)arg2;
- (void)publishStorageProtocol:(id)arg1 didFinishUploadingAsset:(id)arg2 error:(id)arg3;
- (void)_sendFilesToMMCS;
- (void)publishStreamsProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;
- (void)publishStreamsProtocol:(id)arg1 didFinishUploadingMetadataResponse:(id)arg2 error:(id)arg3;
- (id)_invalidStreamsResponseErrorUnderlyingError:(id)arg1;
- (void)_sendMetadataToStreams;
- (void)submitAssetCollectionsForPublication:(id)arg1 skipAssetCollections:(id)arg2;
- (void)_didFinishUsingAssetCollections:(id)arg1;
- (void)_removeAssetsInAssetCollectionWrappersFromAssetMap:(id)arg1;
- (void)_removeAssetFromFileHashMap:(id)arg1;
- (void)_addAssetToFileHashMap:(id)arg1;
- (void)_requestDerivatives;
- (void)publish;
- (BOOL)_isAllowedToUpload;
- (void)reenqueueQuarantinedAssetCollections;
- (id)_checkObjectWrappers:(id)arg1;
- (id)_checkAssetCollectionFiles:(id)arg1;
- (id)_collectionWithNoDerivatives:(id)arg1;
- (BOOL)_verifyAssetFile:(id)arg1;
- (void)_quarantineOrDiscardWrappers:(id)arg1 withError:(id)arg2;
- (void)_registerAllAssetsForWrapper:(id)arg1;
- (void)_registerAsset:(id)arg1;
- (void)_serverSideConfigurationDidChange:(id)arg1;
- (void)_refreshServerSideConfiguredParameters;
- (void)computeHashForAsset:(id)arg1;
- (BOOL)dequeueAssetCollectionWithGUIDs:(id)arg1 outError:(id )arg2;
- (BOOL)enqueueAssetCollections:(id)arg1 outError:(id )arg2;
- (void)_updateMasterManifest;
- (void)dealloc;
- (void)deactivate;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;

@end

