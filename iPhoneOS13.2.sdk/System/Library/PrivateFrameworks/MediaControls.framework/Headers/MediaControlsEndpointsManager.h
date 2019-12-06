//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaControls/MPAVOutputDevicePlaybackDataSource-Protocol.h>
#import <MediaControls/MPAVRoutingControllerDelegate-Protocol.h>
#import <MediaControls/MediaControlsHomeObserverDelegate-Protocol.h>

@class MPAVEndpointRoute, MPAVRoutingController, MPMediaControlsConfiguration, MediaControlsHomeObserver, NSArray, NSMutableDictionary, NSString;
@protocol MediaControlsEndpointsManagerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MediaControlsEndpointsManager : NSObject <MPAVRoutingControllerDelegate, MediaControlsHomeObserverDelegate, MPAVOutputDevicePlaybackDataSource>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_endpointControllersMap;
    BOOL _didLoadHomeUIDsOnce;
    BOOL _isRequestingActiveRoute;
    BOOL _isUpdatingRoutes;
    NSArray *_pendingRoutesToUpdate;
    MPAVEndpointRoute *_resolvedActiveSystemRoute;
    MPMediaControlsConfiguration *_configuration;
    long long _discoveryMode;
    NSArray *_routes;
    id <MediaControlsEndpointsManagerDelegate> _delegate;
    MediaControlsHomeObserver *_homeObserver;
    MPAVRoutingController *_routingController;
    NSString *_activeSystemRouteUID;
    NSString *_pendingActiveSystemRouteUID;
}

@property(readonly, copy, nonatomic) NSString *pendingActiveSystemRouteUID; // @synthesize pendingActiveSystemRouteUID=_pendingActiveSystemRouteUID;
@property(readonly, copy, nonatomic) NSString *activeSystemRouteUID; // @synthesize activeSystemRouteUID=_activeSystemRouteUID;
@property(readonly, nonatomic) MPAVRoutingController *routingController; // @synthesize routingController=_routingController;
@property(readonly, nonatomic) MediaControlsHomeObserver *homeObserver; // @synthesize homeObserver=_homeObserver;
@property(nonatomic) __weak id <MediaControlsEndpointsManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSArray *routes; // @synthesize routes=_routes;
@property(nonatomic) long long discoveryMode; // @synthesize discoveryMode=_discoveryMode;
@property(readonly, copy, nonatomic) MPMediaControlsConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) MPAVEndpointRoute *resolvedActiveSystemRoute; // @synthesize resolvedActiveSystemRoute=_resolvedActiveSystemRoute;
// - (void).cxx_destruct;
- (id)_createSectionedCollectionFromRoutes:(id)arg1;
- (void)_updateWithRoutes:(id)arg1;
- (void)_updateActiveRoute;
- (void)_setRoutes:(id)arg1 withChangeDetails:(id)arg2;
- (BOOL)_homeHasRoute:(id)arg1;
- (id)_endpointControllerContainingOutputDevice:(id)arg1 endpointWrapper:(id )arg2;
- (long long)_indexOfRouteWithUID:(id)arg1;
- (void)_activeSystemRouteDidChange:(id)arg1;
- (void)homeObserverDidUpdateKnownUIDs:(id)arg1;
- (void)getOutputDeviceIsPlaying:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
@property(readonly, nonatomic) BOOL isActiveSystemEndpointEqualToLocalEndpoint;
- (id)endpointControllerForRoute:(id)arg1;
@property(retain, nonatomic) MPAVEndpointRoute *activeSystemRoute;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;

@end

