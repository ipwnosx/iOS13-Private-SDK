//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRAVRoutingDiscoverySession.h>

#import <MediaRemote/MRAVDistantRoutingDiscoveryClientProtocol-Protocol.h>

@class NSArray, NSMutableDictionary, NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface MRAVDistantRoutingDiscoverySession : MRAVRoutingDiscoverySession <MRAVDistantRoutingDiscoveryClientProtocol>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    unsigned int _endpointFeatures;
    unsigned int _discoveryMode;
    BOOL _enableThrottling;
    NSArray *_distantEndpoints;
    NSArray *_distantOutputDevices;
    NSString *_routingContextUID;
    int _serviceResetNotifyToken;
    BOOL _hostedRoutingConnectionDidInitialize;
    NSXPCConnection *_hostedRoutingSessionConnection;
    NSMutableDictionary *_distantExternalDevices;
}

+ (id)clientInterface;
+ (id)serviceInterface;
@property(retain, nonatomic) NSMutableDictionary *distantExternalDevices; // @synthesize distantExternalDevices=_distantExternalDevices;
@property(retain, nonatomic) NSXPCConnection *hostedRoutingSessionConnection; // @synthesize hostedRoutingSessionConnection=_hostedRoutingSessionConnection;
// - (void).cxx_destruct;
- (void)_reloadAvailableDistantOutputDevices;
- (void)_reloadAvailableDistantOutputDevicesWithOutputDevices:(id)arg1;
- (void)_reloadAvailableDistantEndpoints;
- (void)_reloadAvailableDistantEndpointsWithEndpoints:(id)arg1;
- (void)_reloadHostedRoutingServiceDiscoveryMode;
- (id)_hostedRoutingConnection;
- (void)_initializeHostedRoutingConnectionWithCompletion:(CDUnknownBlockType)arg1;
- (void)availableOutputDevicesDidChange:(id)arg1;
- (void)availableEndpointsDidChange:(id)arg1;
@property(retain, nonatomic) NSArray *distantOutputDevices;
@property(retain, nonatomic) NSArray *distantEndpoints;
- (void)setRoutingContextUID:(id)arg1;
- (id)routingContextUID;
- (id)availableOutputDevices;
- (id)availableEndpoints;
- (BOOL)devicePresenceDetected;
- (void)setDiscoveryMode:(unsigned int)arg1;
- (unsigned int)discoveryMode;
- (unsigned int)endpointFeatures;
- (void)dealloc;
- (id)initWithEndpointFeatures:(unsigned int)arg1 enableThrottling:(BOOL)arg2;

@end

