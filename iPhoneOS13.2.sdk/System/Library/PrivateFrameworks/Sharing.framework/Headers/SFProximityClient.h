//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SFProximityClient : NSObject <NSSecureCoding>
{
    BOOL _activateCalled;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
    BOOL _shouldAdvertise;
    BOOL _wantsUpdates;
    id /* CDUnknownBlockType */ _interruptionHandler;
    id /* CDUnknownBlockType */ _invalidationHandler;
    id /* CDUnknownBlockType */ _deviceEnteredImmediateHandler;
    id /* CDUnknownBlockType */ _deviceExitedImmediateHandler;
    id /* CDUnknownBlockType */ _deviceEnteredNearbyHandler;
    id /* CDUnknownBlockType */ _deviceExitedNearbyHandler;
    id /* CDUnknownBlockType */ _deviceWasSelectedHandler;
    id /* CDUnknownBlockType */ _deviceWillTriggerHandler;
    id /* CDUnknownBlockType */ _deviceDidUntriggerHandler;
    id /* CDUnknownBlockType */ _deviceWasDismissedHandlerEx;
    id /* CDUnknownBlockType */ _deviceWasDismissedHandler;
    id /* CDUnknownBlockType */ _deviceUpdateHandler;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL wantsUpdates; // @synthesize wantsUpdates=_wantsUpdates;
@property(copy, nonatomic) id /* CDUnknownBlockType */ deviceUpdateHandler; // @synthesize deviceUpdateHandler=_deviceUpdateHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ deviceWasDismissedHandler; // @synthesize deviceWasDismissedHandler=_deviceWasDismissedHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ deviceWasDismissedHandlerEx; // @synthesize deviceWasDismissedHandlerEx=_deviceWasDismissedHandlerEx;
@property(copy, nonatomic) id /* CDUnknownBlockType */ deviceDidUntriggerHandler; // @synthesize deviceDidUntriggerHandler=_deviceDidUntriggerHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ deviceWillTriggerHandler; // @synthesize deviceWillTriggerHandler=_deviceWillTriggerHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ deviceWasSelectedHandler; // @synthesize deviceWasSelectedHandler=_deviceWasSelectedHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ deviceExitedNearbyHandler; // @synthesize deviceExitedNearbyHandler=_deviceExitedNearbyHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ deviceEnteredNearbyHandler; // @synthesize deviceEnteredNearbyHandler=_deviceEnteredNearbyHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ deviceExitedImmediateHandler; // @synthesize deviceExitedImmediateHandler=_deviceExitedImmediateHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ deviceEnteredImmediateHandler; // @synthesize deviceEnteredImmediateHandler=_deviceEnteredImmediateHandler;
@property(nonatomic) BOOL shouldAdvertise; // @synthesize shouldAdvertise=_shouldAdvertise;
@property(copy, nonatomic) id /* CDUnknownBlockType */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
// - (void).cxx_destruct;
- (void)proximityClientDeviceUpdated:(id)arg1 rssi:(long long)arg2 state:(long long)arg3;
- (void)proximityClientDeviceWillTriggerHandler:(id)arg1;
- (void)proximityClientDeviceDidUntriggerHandler:(id)arg1;
- (void)proximityClientDeviceWasSelectedHandler:(id)arg1;
- (void)proximityClientDeviceWasDismissedHandler:(id)arg1 reason:(long long)arg2;
- (void)proximityClientDeviceExitedNearby:(id)arg1;
- (void)proximityClientDeviceEnteredNearby:(id)arg1;
- (void)proximityClientDeviceExitedImmediate:(id)arg1;
- (void)proximityClientDeviceEnteredImmediate:(id)arg1;
- (void)requestScannerTimerReset;
- (void)_updateContent:(id)arg1 forDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateContent:(id)arg1 forDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_provideContent:(id)arg1 forDevice:(id)arg2 force:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)provideContent:(id)arg1 forDevice:(id)arg2 force:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_dismissContentForDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissContentForDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_invokeBlockActivateSafe:(CDUnknownBlockType)arg1;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

