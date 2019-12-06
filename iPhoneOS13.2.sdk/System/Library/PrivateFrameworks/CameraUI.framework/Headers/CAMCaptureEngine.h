//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CameraUI/AVCaptureVideoThumbnailContentsDelegate-Protocol.h>
#import <CameraUI/CAMPanoramaProcessorDelegate-Protocol.h>

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureMetadataOutput, AVCapturePhotoOutput, AVCaptureSession, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, AVCaptureVideoThumbnailOutput, AVSpatialOverCaptureVideoPreviewLayer, CAMCaptureMovieFileOutput, CAMMemoizationCache, CAMPanoramaConfiguration, CAMPanoramaOutput, CAMPanoramaProcessor, CAMPowerController, CIContext, NSHashTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSURL;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface CAMCaptureEngine : NSObject <CAMPanoramaProcessorDelegate, AVCaptureVideoThumbnailContentsDelegate>
{
    AVCaptureDevice *_audioCameraDevice;
    AVCaptureDeviceInput *_audioCaptureDeviceInput;
    CAMPanoramaConfiguration *_panoramaConfiguration;
    AVCapturePhotoOutput *_stillImageOutput;
    CAMCaptureMovieFileOutput *_movieFileOutput;
    CAMPanoramaOutput *_panoramaVideoDataOutput;
    AVCaptureMetadataOutput *_metadataOutput;
    AVCaptureVideoDataOutput *_effectsPreviewVideoDataOutput;
    AVCaptureVideoThumbnailOutput *_videoThumbnailOutput;
    BOOL _interrupted;
    BOOL _managedDevicesLockedForConfiguration;
    BOOL __performingRecovery;
    unsigned int __panoramaAssertionIdentifier;
    CAMMemoizationCache *__captureEngineDeviceCache;
    long long __engineOptions;
    AVCaptureSession *__captureSession;
    NSObject<OS_dispatch_queue> *__captureSessionQueue;
    AVCaptureVideoPreviewLayer *__videoPreviewLayer;
    AVSpatialOverCaptureVideoPreviewLayer *__overCaptureVideoPreviewLayer;
    CAMPowerController *__powerController;
    AVCaptureDevice *_currentCameraDevice;
    AVCapturePhotoOutput *_currentStillImageOutput;
    NSMutableDictionary *__sessionQueueRegisteredStillImageRequests;
    NSMutableSet *__sessionQueueRegisteredStillImageRequestsDispatchedToFilteringQueue;
    NSMutableDictionary *__sessionQueueCachedPhotoInitiationSettings;
    NSMutableDictionary *__sessionQueueRequestsBeingRecorded;
    NSURL *__sessionQueueLastCompletedVideoURL;
    NSObject<OS_dispatch_queue> *__captureServicesQueue;
    NSMutableArray *__servicesQueueCaptureServices;
    NSObject<OS_dispatch_queue> *__metadataObjectsQueue;
    NSObject<OS_dispatch_queue> *__panoramaSampleBufferQueue;
    NSObject<OS_dispatch_queue> *__panoramaSubgraphQueue;
//    struct _CAImageQueue __panoramaImageQueue;
    CAMPanoramaProcessor *__panoramaProcessor;
    NSObject<OS_dispatch_semaphore> *__panoramaFirstImageQueueUpdateSemaphore;
    NSObject<OS_dispatch_queue> *__panoramaFirstImageQueueUpdateSemaphoreQueue;
    NSObject<OS_dispatch_queue> *__effectsPreviewSurfaceFilteringQueue;
    CIContext *__effectsPreviewSurfaceFilteringContext;
    NSObject<OS_dispatch_queue> *__effectsPreviewSampleBufferQueue;
    NSHashTable *__effectsPreviewSampleBufferDelegates;
    NSHashTable *__videoThumbnailContentsDelegates;
    NSObject<OS_dispatch_queue> *__recoveryMutexQueue;
    NSUInteger __numberOfRecoveryAttempts;
}

+ (id)_cacheKeyForDeviceType:(id)arg1 position:(long long)arg2;
+ (void)preheatCaptureResources;
@property(nonatomic, setter=_setNumberOfRecoveryAttempts:) NSUInteger _numberOfRecoveryAttempts; // @synthesize _numberOfRecoveryAttempts=__numberOfRecoveryAttempts;
@property(nonatomic, getter=_isPerformingRecovery, setter=_setPerformingRecovery:) BOOL _performingRecovery; // @synthesize _performingRecovery=__performingRecovery;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_recoveryMutexQueue; // @synthesize _recoveryMutexQueue=__recoveryMutexQueue;
@property(readonly, nonatomic) NSHashTable *_videoThumbnailContentsDelegates; // @synthesize _videoThumbnailContentsDelegates=__videoThumbnailContentsDelegates;
@property(readonly, nonatomic) NSHashTable *_effectsPreviewSampleBufferDelegates; // @synthesize _effectsPreviewSampleBufferDelegates=__effectsPreviewSampleBufferDelegates;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_effectsPreviewSampleBufferQueue; // @synthesize _effectsPreviewSampleBufferQueue=__effectsPreviewSampleBufferQueue;
@property(readonly, nonatomic) CIContext *_effectsPreviewSurfaceFilteringContext; // @synthesize _effectsPreviewSurfaceFilteringContext=__effectsPreviewSurfaceFilteringContext;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_effectsPreviewSurfaceFilteringQueue; // @synthesize _effectsPreviewSurfaceFilteringQueue=__effectsPreviewSurfaceFilteringQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_panoramaFirstImageQueueUpdateSemaphoreQueue; // @synthesize _panoramaFirstImageQueueUpdateSemaphoreQueue=__panoramaFirstImageQueueUpdateSemaphoreQueue;
@property(retain, nonatomic, setter=_setPanoramaFirstImageQueueUpdateSemaphore:) NSObject<OS_dispatch_semaphore> *_panoramaFirstImageQueueUpdateSemaphore; // @synthesize _panoramaFirstImageQueueUpdateSemaphore=__panoramaFirstImageQueueUpdateSemaphore;
@property(retain, nonatomic, setter=_setPanoramaProcessor:) CAMPanoramaProcessor *_panoramaProcessor; // @synthesize _panoramaProcessor=__panoramaProcessor;
// property(nonatomic, setter=_setPanoramaImageQueue:) struct _CAImageQueue _panoramaImageQueue; // @synthesize _panoramaImageQueue=__panoramaImageQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_panoramaSubgraphQueue; // @synthesize _panoramaSubgraphQueue=__panoramaSubgraphQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_panoramaSampleBufferQueue; // @synthesize _panoramaSampleBufferQueue=__panoramaSampleBufferQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_metadataObjectsQueue; // @synthesize _metadataObjectsQueue=__metadataObjectsQueue;
@property(readonly, nonatomic) NSMutableArray *_servicesQueueCaptureServices; // @synthesize _servicesQueueCaptureServices=__servicesQueueCaptureServices;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_captureServicesQueue; // @synthesize _captureServicesQueue=__captureServicesQueue;
@property(retain, nonatomic, setter=_setSessionQueueLastCompletedVideoURL:) NSURL *_sessionQueueLastCompletedVideoURL; // @synthesize _sessionQueueLastCompletedVideoURL=__sessionQueueLastCompletedVideoURL;
@property(readonly, nonatomic) NSMutableDictionary *_sessionQueueRequestsBeingRecorded; // @synthesize _sessionQueueRequestsBeingRecorded=__sessionQueueRequestsBeingRecorded;
@property(readonly, nonatomic) NSMutableDictionary *_sessionQueueCachedPhotoInitiationSettings; // @synthesize _sessionQueueCachedPhotoInitiationSettings=__sessionQueueCachedPhotoInitiationSettings;
@property(readonly, nonatomic) NSMutableSet *_sessionQueueRegisteredStillImageRequestsDispatchedToFilteringQueue; // @synthesize _sessionQueueRegisteredStillImageRequestsDispatchedToFilteringQueue=__sessionQueueRegisteredStillImageRequestsDispatchedToFilteringQueue;
@property(readonly, nonatomic) NSMutableDictionary *_sessionQueueRegisteredStillImageRequests; // @synthesize _sessionQueueRegisteredStillImageRequests=__sessionQueueRegisteredStillImageRequests;
@property(nonatomic, getter=areManagedDevicesLockedForConfiguration) BOOL managedDevicesLockedForConfiguration; // @synthesize managedDevicesLockedForConfiguration=_managedDevicesLockedForConfiguration;
@property(retain, nonatomic) AVCapturePhotoOutput *currentStillImageOutput; // @synthesize currentStillImageOutput=_currentStillImageOutput;
@property(retain, nonatomic) AVCaptureDevice *currentCameraDevice; // @synthesize currentCameraDevice=_currentCameraDevice;
@property(nonatomic, setter=_setPanoramaAssertionIdentifier:) unsigned int _panoramaAssertionIdentifier; // @synthesize _panoramaAssertionIdentifier=__panoramaAssertionIdentifier;
@property(readonly, nonatomic) CAMPowerController *_powerController; // @synthesize _powerController=__powerController;
@property(readonly, nonatomic) AVSpatialOverCaptureVideoPreviewLayer *_overCaptureVideoPreviewLayer; // @synthesize _overCaptureVideoPreviewLayer=__overCaptureVideoPreviewLayer;
@property(readonly, nonatomic) AVCaptureVideoPreviewLayer *_videoPreviewLayer; // @synthesize _videoPreviewLayer=__videoPreviewLayer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_captureSessionQueue; // @synthesize _captureSessionQueue=__captureSessionQueue;
@property(readonly, nonatomic) AVCaptureSession *_captureSession; // @synthesize _captureSession=__captureSession;
@property(readonly, nonatomic) long long _engineOptions; // @synthesize _engineOptions=__engineOptions;
@property(readonly, nonatomic) CAMMemoizationCache *_captureEngineDeviceCache; // @synthesize _captureEngineDeviceCache=__captureEngineDeviceCache;
@property(nonatomic, getter=isInterrupted, setter=_setInterrupted:) BOOL interrupted; // @synthesize interrupted=_interrupted;
// - (void).cxx_destruct;
- (id)videoThumbnailOutput;
- (id)effectsPreviewVideoDataOutput;
- (id)metadataOutput;
- (id)panoramaVideoDataOutput;
- (id)movieFileOutput;
- (id)stillImageOutput;
- (id)audioCaptureDeviceInput;
- (id)audioCaptureDevice;
- (id)_captureEngineDeviceForDeviceType:(id)arg1 position:(long long)arg2;
- (id)backTripleCameraDevice;
- (id)backWideDualCameraDevice;
- (id)backSuperWideCameraDevice;
- (id)backDualCameraDevice;
- (id)backTelephotoCameraDevice;
- (id)backCameraDevice;
- (id)frontPearlCameraDevice;
- (id)frontCameraDevice;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 forMetadataObjectTypes:(id)arg3 fromConnection:(id)arg4;
//  (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer )arg2 fromConnection:(id)arg3;
//  (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer )arg2 fromConnection:(id)arg3;
- (void)videoThumbnailOutputWillEndRenderingThumbnails:(id)arg1;
- (void)videoThumbnailOutput:(id)arg1 willBeginRenderingThumbnailsWithContents:(id)arg2;
- (void)unregisterVideoThumbnailContentsDelegate:(id)arg1;
- (void)registerVideoThumbnailContentsDelegate:(id)arg1;
- (void)_updateVideoThumbnailSubgraph;
- (void)unregisterEffectsPreviewSampleBufferDelegate:(id)arg1;
- (void)registerEffectsPreviewSampleBufferDelegate:(id)arg1;
- (void)_updateEffectsSubgraph;
//  (void)panoramaProcessor:(id)arg1 didProcessSampleBuffer:(struct opaqueCMSampleBuffer )arg2 withStatus:(int)arg3 forRequest:(id)arg4;
- (void)_panoramaSampleBufferQueue_stopPanoramaCaptureIfNecessaryInterrupted:(BOOL)arg1;
- (void)stopPanoramaCaptureInterrupted:(BOOL)arg1;
- (void)startPanoramaCaptureWithRequest:(id)arg1;
- (void)changePanoramaEncodingBehaviorIfNeeded:(long long)arg1;
- (void)changeToPanoramaDirection:(long long)arg1;
- (void)_subgraphQueueCreatePanoramaImageQueueIfNecessary;
- (void)_subgraphQueueCreatePanoramaProcessorIfNecessaryWithEncodingBehavior:(long long)arg1;
//  (void)_notifyServicesOfPanoramaConfigurationChangeWithImageQueue:(struct _CAImageQueue )arg1 direction:(long long)arg2;
- (void)_sessionQueuePanoramaTeardown;
- (void)_sessionQueuePanoramaSetup;
- (BOOL)_updatePanoramaSubgraphForEnteringBackground:(BOOL)arg1;
- (void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;
// - (id)_validateVideoAtURL:(id)arg1 withCaptureID:(long long)arg2 withCaptureError:(id)arg3 isVideoComplement:(BOOL)arg4 stillImageDisplayTime:(CDStruct_1b6d18a9)arg5 reportedDuration:(CDStruct_1b6d18a9)arg6 outActualDuration:(CDStruct_1b6d18a9 )arg7 outVideoRecordingStoppedReason:(long long )arg8;
- (void)_captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 forVideoCaptureRequest:(id)arg4 videoZoomFactor:(double)arg5 error:(id)arg6;
- (void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
- (void)stopRecording;
- (void)registerVideoCaptureRequest:(id)arg1;
- (id)_previewFiltersForFilterType:(long long)arg1 previewCrop:(long long)arg2 inPreviewSize:(CGSize)arg3;
- (void)captureOutput:(id)arg1 didFinishMovieCaptureForResolvedSettings:(id)arg2 error:(id)arg3;
- (void)captureOutput:(id)arg1 didFinishWritingMovie:(id)arg2 error:(id)arg3;
- (void)captureOutput:(id)arg1 didFinishRecordingMovie:(id)arg2;
- (void)captureOutput:(id)arg1 didBeginMovieCaptureForResolvedSettings:(id)arg2;
- (void)_didFinishStillImageCaptureForUniqueID:(long long)arg1 error:(id)arg2;
- (void)captureOutput:(id)arg1 didFinishCaptureForResolvedSettings:(id)arg2 error:(id)arg3;
// - (void)captureOutput:(id)arg1 didFinishProcessingLivePhotoToMovieFileAtURL:(id)arg2 duration:(CDStruct_1b6d18a9)arg3 photoDisplayTime:(CDStruct_1b6d18a9)arg4 resolvedSettings:(id)arg5 error:(id)arg6;
- (void)captureOutput:(id)arg1 didFinishRecordingLivePhotoMovieForEventualFileAtURL:(id)arg2 resolvedSettings:(id)arg3;
- (id)_expectedResultSpecifiersForResolvedMomentCaptureMovieSettings:(id)arg1;
- (id)_coordinationInfoForCTMVideoRequest:(id)arg1 videoOutputURL:(id)arg2 resolvedMomentCaptureMovieSettings:(id)arg3;
- (id)_coordinationInfoForRequest:(id)arg1 resolvedSettings:(id)arg2 videoComplementURL:(id)arg3 isFiltered:(BOOL)arg4;
- (id)_coordinationInfoForRequest:(id)arg1 photo:(id)arg2;
- (id)_expectedResultSpecifiersForResolvedPhotoSettings:(id)arg1;
- (void)captureOutput:(id)arg1 didCapturePhotoForResolvedSettings:(id)arg2;
- (void)captureOutput:(id)arg1 willCapturePhotoForResolvedSettings:(id)arg2;
- (void)captureOutput:(id)arg1 willBeginCaptureForResolvedSettings:(id)arg2;
- (void)clearCachedMomentCaptureSettingsForIdentifier:(id)arg1;
- (id)cachedMomentCaptureSettingsForIdentifier:(id)arg1;
- (void)cacheMomentCaptureSettings:(id)arg1 forIdentifier:(id)arg2;
- (void)registerStillImageCaptureRequest:(id)arg1 withSettings:(id)arg2;
@property(readonly, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer;
- (id)overCaptureVideoPreviewLayer;
- (void)_enumerateCaptureServicesUsingBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_enumerateCaptureServicesUsingBlock:(CDUnknownBlockType)arg1;
- (void)unregisterCaptureService:(id)arg1;
- (void)registerCaptureService:(id)arg1;
- (void)enqueueCommand:(id)arg1;
- (void)_executeCommand:(id)arg1 withContext:(id)arg2;
- (void)_updateCurrentlyConfiguredObjects;
- (void)_unlockAllEngineManagedDevices;
- (void)_unlockManagedCaptureDevice:(id)arg1;
- (BOOL)_lockAllEngineManagedDevices;
- (BOOL)_lockManagedCapturedDevice:(id)arg1;
- (void)_commitSessionConfigurationIfNecessaryWithLogReason:(id)arg1;
- (void)_beginSessionConfigurationIfRequiredByCommand:(id)arg1 withContext:(id)arg2 logReason:(out id )arg3;
- (id)_accumulatedUserInfoFromCommand:(id)arg1;
- (BOOL)_isSessionModificationRequiredByCommand:(id)arg1 logReason:(out id )arg2;
- (void)_updateContext:(id)arg1;
- (id)_photoOutputFromSession:(id)arg1;
- (id)_videoDeviceInputFromSession:(id)arg1;
- (void)_handleApplicationDidEnterBackground:(id)arg1;
- (void)_handleApplicationWillEnterForeground:(id)arg1;
- (void)_scheduleDelayedRecoveryCheckIfNecessary;
- (void)_scheduleDelayedSessionNonstartRecovery;
- (void)_cancelDelayedSessionNonstartRecovery;
- (void)_validateSessionRecovery;
- (void)_handleFailedSessionRecoveryAttemptAfterDelay:(BOOL)arg1;
- (void)_resetPerformingRecoveryState;
- (void)_recoverFromSessionRuntimeError;
- (double)_delayForRecoveryAttempt:(NSUInteger)arg1;
- (void)_handleSessionInterruptionEnded:(id)arg1;
- (void)_handleSessionInterruption:(id)arg1;
- (void)_performSessionRuntimeRecovery:(id)arg1;
- (void)_performSessionNonstartRecoveryIfNeeded;
- (void)_handleSessionRuntimeError:(id)arg1;
- (void)_handleSessionDidStopRunning:(id)arg1;
- (void)_handleSessionDidStartRunning:(id)arg1;
- (void)stopWithCompletion:(CDUnknownBlockType)arg1;
- (void)_sessionQueue_startWithRetryCount:(NSUInteger)arg1 retryInterval:(double)arg2 logReason:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)startWithRetryCount:(NSUInteger)arg1 retryInterval:(double)arg2 logReason:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)_shouldStartSessionOnConfigurationChanges;
- (void)dealloc;
- (id)initWithPowerController:(id)arg1 options:(long long)arg2;
- (id)prewarmedAudioDeviceInput:(id)arg1 device:(id)arg2;
- (id)prewarmedVideoDeviceInput:(id)arg1 position:(long long)arg2 device:(id)arg3;
- (id)prewarmedCaptureSession;

@end

