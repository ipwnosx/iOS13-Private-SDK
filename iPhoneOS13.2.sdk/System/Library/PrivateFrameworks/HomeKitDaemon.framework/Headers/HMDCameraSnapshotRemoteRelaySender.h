//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraSnapshotSender.h>

#import <HomeKitDaemon/HMDCameraGetSnapshotProtocol-Protocol.h>
#import <HomeKitDaemon/HMDCameraSnapshotIDSRelayInitiatorDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraSnapshotLocalDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraSnapshotSenderProtocol-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDCameraSnapshotIDSRelayInitiator, HMDCameraSnapshotLocal;
@protocol HMDCameraSnapshotRemoteRelaySenderDelegate;

@interface HMDCameraSnapshotRemoteRelaySender : HMDCameraSnapshotSender <HMDCameraGetSnapshotProtocol, HMDCameraSnapshotSenderProtocol, HMDCameraSnapshotLocalDelegate, HMDCameraSnapshotIDSRelayInitiatorDelegate, HMFLogging>
{
    HMDCameraSnapshotLocal *_snapshotLocal;
    id <HMDCameraSnapshotRemoteRelaySenderDelegate> _delegate;
    HMDCameraSnapshotIDSRelayInitiator *_relayInitiator;
}

+ (id)logCategory;
@property(readonly, nonatomic) HMDCameraSnapshotIDSRelayInitiator *relayInitiator; // @synthesize relayInitiator=_relayInitiator;
@property(readonly, nonatomic) __weak id <HMDCameraSnapshotRemoteRelaySenderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) HMDCameraSnapshotLocal *snapshotLocal; // @synthesize snapshotLocal=_snapshotLocal;
// - (void).cxx_destruct;
- (void)relayInitiator:(id)arg1 didFailToSendFile:(id)arg2;
- (void)snapshotLocal:(id)arg1 didSaveSnapshotFile:(id)arg2 error:(id)arg3 sessionID:(id)arg4;
- (void)_callDidCompleteSendImageDelegate:(id)arg1;
- (void)_callDidStartCaptureImageDelegate:(id)arg1;
- (void)snapShotTransferComplete;
- (void)getSnapshot:(NSUInteger)arg1;
- (id)logIdentifier;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 options:(id)arg3 device:(id)arg4 accessory:(id)arg5 delegate:(id)arg6 delegateQueue:(id)arg7 uniqueIdentifier:(id)arg8 snapshotRequestHandler:(id)arg9;

@end

