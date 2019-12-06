//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDCameraGetSnapshotProtocol-Protocol.h>
#import <HomeKitDaemon/HMDCameraStreamSnapshotCaptureDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDCameraStreamSnapshotHandler : HMFObject <HMFLogging, HMDCameraStreamSnapshotCaptureDelegate, HMDCameraGetSnapshotProtocol>
{
    BOOL _streamAvailable;
    BOOL _streamSetupInProgress;
    NSMutableSet *_streamSnapshotCaptures;
    NSMutableSet *_retiredStreamSnapshotCaptures;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSString *_logID;
    NSMutableDictionary *_serviceInstanceStreamStatus;
    NSMapTable *_delegateTable;
}

+ (id)logCategory;
@property(readonly, nonatomic) NSMapTable *delegateTable; // @synthesize delegateTable=_delegateTable;
@property(readonly, nonatomic) NSMutableDictionary *serviceInstanceStreamStatus; // @synthesize serviceInstanceStreamStatus=_serviceInstanceStreamStatus;
@property(readonly, nonatomic) NSString *logID; // @synthesize logID=_logID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSMutableSet *retiredStreamSnapshotCaptures; // @synthesize retiredStreamSnapshotCaptures=_retiredStreamSnapshotCaptures;
@property(readonly, nonatomic) NSMutableSet *streamSnapshotCaptures; // @synthesize streamSnapshotCaptures=_streamSnapshotCaptures;
// - (void).cxx_destruct;
- (void)_callStreamSetupInProgress:(BOOL)arg1;
- (void)callStreamSetupInProgress:(BOOL)arg1;
- (void)_callDidGetLastSnapshot:(id)arg1;
- (void)streamSnapshotCapture:(id)arg1 didGetLastSnapshot:(id)arg2;
- (void)_callDidGetNewSnapshot:(id)arg1;
- (void)streamSnapshotCapture:(id)arg1 didGetNewSnapshot:(id)arg2;
- (void)getSnapshot:(NSUInteger)arg1;
- (void)removeVideoStreamInterface:(id)arg1;
- (void)addVideoStreamInterface:(id)arg1;
- (void)setStreamSetupStatusForService:(id)arg1 inProgress:(BOOL)arg2;
@property(readonly, nonatomic, getter=isStreamSetupInProgress) BOOL streamSetupInProgress; // @synthesize streamSetupInProgress=_streamSetupInProgress;
@property(readonly, nonatomic, getter=isStreamAvailable) BOOL streamAvailable; // @synthesize streamAvailable=_streamAvailable;
- (id)logIdentifier;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 delegateQueue:(id)arg2;
- (id)initWithWorkQueue:(id)arg1 services:(id)arg2 logID:(id)arg3;

@end

