//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDS/IDSDaemonListenerProtocol-Protocol.h>

@class CUTWeakReference;
@protocol OS_dispatch_queue;

@interface _IDSContinuity : NSObject <IDSDaemonListenerProtocol>
{
    id _delegateContext;
    CUTWeakReference *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    long long _state;
}

@property(readonly) long long state; // @synthesize state=_state;
// - (void).cxx_destruct;
- (void)continuityDidStopTrackingPeer:(id)arg1 forType:(long long)arg2;
- (void)continuityDidStopTrackingPeer:(id)arg1;
- (void)continuityDidStartTrackingPeer:(id)arg1 forType:(long long)arg2 error:(id)arg3;
- (void)continuityDidStartTrackingPeer:(id)arg1 error:(id)arg2;
- (void)continuityDidLosePeer:(id)arg1 forType:(long long)arg2;
- (void)continuityDidLosePeer:(id)arg1;
- (void)continuityDidDiscoverType:(long long)arg1 withData:(id)arg2 fromPeer:(id)arg3;
- (void)continuityDidFailToStartScanningForType:(long long)arg1 withError:(id)arg2;
- (void)continuityDidStopScanningForType:(long long)arg1;
- (void)continuityDidStartScanningForType:(long long)arg1;
- (void)continuityDidFailToStartAdvertisingOfType:(long long)arg1 withError:(id)arg2;
- (void)continuityDidStopAdvertisingOfType:(long long)arg1 withError:(id)arg2;
- (void)continuityDidStopAdvertisingOfType:(long long)arg1;
- (void)continuityDidStartAdvertisingOfType:(long long)arg1;
- (void)continuityDidUpdateStateToState:(long long)arg1;
- (void)_callDelegateWithBlock:(CDUnknownBlockType)arg1;
- (void)_daemonDied:(id)arg1;
- (void)_handleReconnect;
- (void)stopTrackingPeer:(id)arg1 forType:(long long)arg2;
- (void)startTrackingPeer:(id)arg1 forType:(long long)arg2;
- (void)stopScanningForType:(long long)arg1;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 boostedScan:(BOOL)arg4 duplicates:(BOOL)arg5;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 boostedScan:(BOOL)arg5 duplicates:(BOOL)arg6;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4;
- (void)stopAdvertisingOfType:(long long)arg1;
- (void)startAdvertisingOfType:(long long)arg1 withData:(id)arg2 withOptions:(id)arg3;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 delegateContext:(id)arg3;

@end

