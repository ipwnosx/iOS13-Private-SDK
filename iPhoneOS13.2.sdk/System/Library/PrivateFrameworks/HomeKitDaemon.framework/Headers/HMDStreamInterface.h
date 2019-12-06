//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDCameraNetworkConfig, HMDCameraStreamSessionID, NSObject;
@protocol HMDCameraRemoteStreamProtocol, OS_dispatch_queue;

@interface HMDStreamInterface : HMFObject <HMFLogging>
{
    int _localRTPSocket;
    NSUInteger _streamInterfaceState;
    HMDCameraNetworkConfig *_localNetworkConfig;
    HMDCameraStreamSessionID *_sessionID;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id <HMDCameraRemoteStreamProtocol> _sessionHandler;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

+ (id)logCategory;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(nonatomic) int localRTPSocket; // @synthesize localRTPSocket=_localRTPSocket;
@property(readonly, nonatomic) id <HMDCameraRemoteStreamProtocol> sessionHandler; // @synthesize sessionHandler=_sessionHandler;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) HMDCameraStreamSessionID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) HMDCameraNetworkConfig *localNetworkConfig; // @synthesize localNetworkConfig=_localNetworkConfig;
// - (void).cxx_destruct;
- (BOOL)loadMiscFields:(id)arg1;
- (id)extractNetworkConfig:(int)arg1 peerNameExtractor:(/* void * CDUnknownFunctionPointerType */)arg2;
- (int)openSocket;
@property(nonatomic) NSUInteger streamInterfaceState; // @synthesize streamInterfaceState=_streamInterfaceState;
- (void)dealloc;
- (id)logIdentifier;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 delegateQueue:(id)arg3 localNetworkConfig:(id)arg4 sessionHandler:(id)arg5;

@end

