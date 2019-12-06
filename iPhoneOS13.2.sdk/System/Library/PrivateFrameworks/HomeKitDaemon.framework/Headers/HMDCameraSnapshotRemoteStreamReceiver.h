//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraSnapshotReceiver.h>

#import <HomeKitDaemon/HMDCameraGetSnapshotProtocol-Protocol.h>
#import <HomeKitDaemon/HMDCameraSnapshotIDSStreamReceiverDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraSnapshotReceiverProtocol-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDCameraSnapshotIDSStreamReceiver;
@protocol HMDCameraSnapshotRemoteStreamReceiverDelegate;

@interface HMDCameraSnapshotRemoteStreamReceiver : HMDCameraSnapshotReceiver <HMDCameraGetSnapshotProtocol, HMDCameraSnapshotReceiverProtocol, HMDCameraSnapshotIDSStreamReceiverDelegate, HMFLogging>
{
    id <HMDCameraSnapshotRemoteStreamReceiverDelegate> _delegate;
    HMDCameraSnapshotIDSStreamReceiver *_relayReceiver;
}

+ (id)logCategory;
@property(retain, nonatomic) HMDCameraSnapshotIDSStreamReceiver *relayReceiver; // @synthesize relayReceiver=_relayReceiver;
@property(readonly, nonatomic) __weak id <HMDCameraSnapshotRemoteStreamReceiverDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)relayReceiver:(id)arg1 didReceiveFile:(id)arg2;
- (void)_callDidSaveImageDelegateWithError:(id)arg1;
- (void)_callGettingImageDelegate:(id)arg1;
- (void)snapShotSendFailed:(id)arg1;
- (void)_getSnapshot:(NSUInteger)arg1;
- (void)getSnapshot:(NSUInteger)arg1;
- (id)logIdentifier;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 options:(id)arg3 accessory:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 uniqueIdentifier:(id)arg7 snapshotRequestHandler:(id)arg8 residentMessageHandler:(id)arg9;

@end

