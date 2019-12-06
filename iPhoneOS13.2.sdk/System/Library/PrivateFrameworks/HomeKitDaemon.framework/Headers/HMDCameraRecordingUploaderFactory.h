//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDCameraRecordingUploaderFactory-Protocol.h>

@protocol HMDCameraRecordingUploaderDataSource;

@interface HMDCameraRecordingUploaderFactory : NSObject <HMDCameraRecordingUploaderFactory>
{
    id <HMDCameraRecordingUploaderDataSource> _dataSource;
}

@property(readonly) id <HMDCameraRecordingUploaderDataSource> dataSource; // @synthesize dataSource=_dataSource;
// - (void).cxx_destruct;
- (id)createSignificantEventOperationForModelID:(id)arg1 localZone:(id)arg2 encryptionManager:(id)arg3 dateOfOccurrence:(id)arg4 significantEventReason:(NSUInteger)arg5 confidenceLevel:(NSUInteger)arg6 heroFrameData:(id)arg7 offset:(double)arg8 homePresenceByPairingIdentity:(id)arg9 dataSource:(id)arg10;
- (id)createFinalizeOperationForModelID:(id)arg1 localZone:(id)arg2 encryptionManager:(id)arg3 dataSource:(id)arg4;
- (id)createPosterFrameUploadOperationForModelID:(id)arg1 localZone:(id)arg2 encryptionManager:(id)arg3 segmentData:(id)arg4 segmentMetadata:(id)arg5 dataSource:(id)arg6;
- (id)createVideoSegmentUploadOperationForModelID:(id)arg1 localZone:(id)arg2 encryptionManager:(id)arg3 segmentData:(id)arg4 segmentMetadata:(id)arg5 dataSource:(id)arg6;
- (id)createClipOperationForLocalZone:(id)arg1 targetFragmentDuration:(double)arg2 startDate:(id)arg3 dataSource:(id)arg4;
- (id)init;

@end

