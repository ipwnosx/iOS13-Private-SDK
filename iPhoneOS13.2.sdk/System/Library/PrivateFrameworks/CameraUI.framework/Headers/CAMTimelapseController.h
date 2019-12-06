//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CameraUI/CAMNebulaDaemonTimelapseClientProtocol-Protocol.h>
#import <CameraUI/CAMStillImageCaptureRequestDelegate-Protocol.h>

@class CAMCaptureGraphConfiguration, CAMFocusResult, CAMLocationController, CAMMotionController, CAMNebulaDaemonProxyManager, CAMPersistenceController, CAMStorageController, CAMTimelapseState, CUCaptureController, NSCountedSet, NSDate, NSMutableSet;
@protocol CAMTimelapseControllerDelegate, OS_dispatch_source;

@interface CAMTimelapseController : NSObject <CAMStillImageCaptureRequestDelegate, CAMNebulaDaemonTimelapseClientProtocol>
{
    BOOL __ignoringTimerCallbacksForTearDown;
    BOOL __ignoringTimerCallbacksWaitingForCaptureResponse;
    BOOL __shouldUpdateFocusAndExposureWhenContrastDetectionCompletes;
    BOOL __backendRecoveryNeeded;
    BOOL __previewStarted;
    BOOL __focusAndExposureAdjusted;
    CAMCaptureGraphConfiguration *__graphConfigurationForCurrentState;
    id <CAMTimelapseControllerDelegate> _delegate;
    CAMFocusResult *_lastFocusResult;
    CAMTimelapseState *__state;
    NSObject<OS_dispatch_source> *__captureTimer;
    NSCountedSet *__inFlightTimelapseUUIDs;
    NSMutableSet *__pendingCompletedStates;
    CUCaptureController *__captureController;
    CAMLocationController *__locationController;
    CAMMotionController *__motionController;
    CAMPersistenceController *__persistenceController;
    CAMStorageController *__storageController;
    CAMNebulaDaemonProxyManager *__nebulaDaemonProxyManager;
}

+ (id)createPlaceholderResultForTimelapseState:(id)arg1;
@property(readonly, nonatomic) CAMNebulaDaemonProxyManager *_nebulaDaemonProxyManager; // @synthesize _nebulaDaemonProxyManager=__nebulaDaemonProxyManager;
@property(readonly, nonatomic) CAMStorageController *_storageController; // @synthesize _storageController=__storageController;
@property(readonly, nonatomic) CAMPersistenceController *_persistenceController; // @synthesize _persistenceController=__persistenceController;
@property(readonly, nonatomic) CAMMotionController *_motionController; // @synthesize _motionController=__motionController;
@property(readonly, nonatomic) CAMLocationController *_locationController; // @synthesize _locationController=__locationController;
@property(readonly, nonatomic) CUCaptureController *_captureController; // @synthesize _captureController=__captureController;
@property(nonatomic, getter=_isFocusAndExposureAdjusted, setter=_setFocusAndExposureAdjusted:) BOOL _focusAndExposureAdjusted; // @synthesize _focusAndExposureAdjusted=__focusAndExposureAdjusted;
@property(nonatomic, setter=_setPreviewStarted:) BOOL _previewStarted; // @synthesize _previewStarted=__previewStarted;
@property(nonatomic, setter=_setBackendRecoveryNeeded:) BOOL _backendRecoveryNeeded; // @synthesize _backendRecoveryNeeded=__backendRecoveryNeeded;
@property(nonatomic, setter=_setShouldUpdateFocusAndExposureWhenContrastDetectionCompletes:) BOOL _shouldUpdateFocusAndExposureWhenContrastDetectionCompletes; // @synthesize _shouldUpdateFocusAndExposureWhenContrastDetectionCompletes=__shouldUpdateFocusAndExposureWhenContrastDetectionCompletes;
@property(readonly, nonatomic) NSMutableSet *_pendingCompletedStates; // @synthesize _pendingCompletedStates=__pendingCompletedStates;
@property(readonly, nonatomic) NSCountedSet *_inFlightTimelapseUUIDs; // @synthesize _inFlightTimelapseUUIDs=__inFlightTimelapseUUIDs;
@property(readonly, nonatomic) BOOL _ignoringTimerCallbacksWaitingForCaptureResponse; // @synthesize _ignoringTimerCallbacksWaitingForCaptureResponse=__ignoringTimerCallbacksWaitingForCaptureResponse;
@property(readonly, nonatomic) BOOL _ignoringTimerCallbacksForTearDown; // @synthesize _ignoringTimerCallbacksForTearDown=__ignoringTimerCallbacksForTearDown;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *_captureTimer; // @synthesize _captureTimer=__captureTimer;
@property(readonly, nonatomic) CAMTimelapseState *_state; // @synthesize _state=__state;
@property(nonatomic) CAMFocusResult *lastFocusResult; // @synthesize lastFocusResult=_lastFocusResult;
@property(nonatomic) __weak id <CAMTimelapseControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_notifyAGGDForDidStopCapturingWithState:(id)arg1;
- (void)forceStopTimelapseCaptureWithReasons:(long long)arg1;
- (void)_updateLocationIfNecessary;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_notifyInsufficientDiskSpaceForContinuingCapture;
- (void)_notifyInsufficientDiskSpaceForStartingCaptureWithNeededBytes:(long long)arg1 availableBytes:(long long)arg2;
- (void)_previewStarted:(id)arg1;
- (void)_sessionRuntimeErrored:(id)arg1;
- (void)_sessionStarted:(id)arg1;
- (void)_deviceStarted:(id)arg1;
- (void)_resetIgnoringTimerCallbacksWaitingForCaptureResponse;
- (id)_createThumbnailImageFromPlaceholderResult:(id)arg1;
- (void)stillImageRequestDidCompleteStillImageLocalPersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
- (void)stillImageRequestDidCompleteStillImageCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
- (void)_saveStateToDisk:(id)arg1;
- (void)_updateFocusLensPosition:(float)arg1 forTimelapseUUID:(id)arg2 forceUpdate:(BOOL)arg3;
- (void)_updateFocusAndExposureForStartCapturing;
- (id)_stillImageCaptureRequestWithCurrentSettings;
- (BOOL)_enqueueCaptureRequest;
- (BOOL)_canCapturePhoto;
- (void)_captureTimerFired;
- (void)_teardownCaptureTimer;
- (void)_startCaptureTimer;
@property(readonly, nonatomic) NSDate *captureStartTime;
- (void)_reserveDiskSpaceForTimelapseUUID:(id)arg1 preferHEVC:(BOOL)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)_restoreCaptureStateFromDisk;
- (void)_invalidateCachedGraphConfiguration;
@property(readonly, nonatomic, getter=_graphConfigurationForCurrentState) CAMCaptureGraphConfiguration *_graphConfigurationForCurrentState; // @synthesize _graphConfigurationForCurrentState=__graphConfigurationForCurrentState;
- (void)_setNewCaptureStateForCaptureDevice:(long long)arg1 captureSession:(unsigned short)arg2;
- (void)_stopCapturingWithReasons:(long long)arg1;
- (void)_startCapturingWithCaptureDevice:(long long)arg1 captureSession:(unsigned short)arg2;
- (BOOL)stopCapturingWithReasons:(long long)arg1;
- (BOOL)startCapturingWithCaptureDevice:(long long)arg1 captureSession:(unsigned short)arg2;
@property(readonly, nonatomic, getter=isCapturing) BOOL capturing;
- (void)_prepareForTimelapseCaptureSetModeAndDevice:(BOOL)arg1;
- (void)_triggerBackendCrashRecoveryIfNeeded;
- (void)restoreConfiguration;
- (void)dealloc;
- (id)init;
- (id)initWithCaptureController:(id)arg1 locationController:(id)arg2 motionController:(id)arg3 persistenceController:(id)arg4 storageController:(id)arg5 nebulaDaemonProxyManager:(id)arg6;

@end

