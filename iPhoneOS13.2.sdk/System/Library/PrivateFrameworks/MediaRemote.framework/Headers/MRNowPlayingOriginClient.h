//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaRemote/MRNowPlayingClientState-Protocol.h>

@class MRApplicationActivity, NSArray, NSMutableArray, _MRDeviceInfoMessageProtobuf, _MRNowPlayingClientProtobuf, _MROriginProtobuf;
@protocol OS_dispatch_queue;

@interface MRNowPlayingOriginClient : NSObject <MRNowPlayingClientState>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    BOOL _canBeNowPlayingApp;
    double _canBeNowPlayingAppTimestamp;
    BOOL _isOverrideApp;
    unsigned int _routeDiscoveryMode;
    NSMutableArray *_applicationPickedRoutes;
    unsigned int _inputMode;
    float _volume;
    unsigned int _volumeCapabilities;
    MRApplicationActivity *_activity;
    _MRDeviceInfoMessageProtobuf *_deviceInfo;
    id /* CDUnknownBlockType */ _playbackQueueCallback;
    id /* CDUnknownBlockType */ _playbackQueueTransactionCallback;
    id /* CDUnknownBlockType */ _capabilitiesCallback;
    id /* CDUnknownBlockType */ _commandCallback;
    id /* CDUnknownBlockType */ _beginLyricsEventCallback;
    id /* CDUnknownBlockType */ _endLyricsEventCallback;
    id /* CDUnknownBlockType */ _playbackSessionCallback;
    id /* CDUnknownBlockType */ _playbackSessionMigrateBeginCallback;
    id /* CDUnknownBlockType */ _playbackSessionMigrateEndCallback;
    id /* CDUnknownBlockType */ _playbackSessionMigrateRequestCallback;
    NSMutableArray *_nowPlayingClients;
    unsigned int _hardwareRemoteBehavior;
    _MRNowPlayingClientProtobuf *_activeNowPlayingClient;
    _MROriginProtobuf *_origin;
}

@property(nonatomic) unsigned int hardwareRemoteBehavior; // @synthesize hardwareRemoteBehavior=_hardwareRemoteBehavior;
@property(readonly, nonatomic) _MROriginProtobuf *origin; // @synthesize origin=_origin;
// - (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (void)restoreNowPlayingClientState;
- (void)_unregisterMediaServerNotifications;
- (void)_registerMediaServerNotifications;
- (void)_avSessionMediaServicesResetNotification:(id)arg1;
- (void)removeClient:(id)arg1;
- (id)nowPlayingClientForPlayerPath:(id)arg1;
- (id)existingNowPlayingClientForPlayerPath:(id)arg1;
@property(retain, nonatomic) MRApplicationActivity *activity;
@property(retain, nonatomic) _MRNowPlayingClientProtobuf *activeNowPlayingClient; // @synthesize activeNowPlayingClient=_activeNowPlayingClient;
@property(nonatomic) BOOL canBeNowPlayingApp;
@property(nonatomic) unsigned int inputMode;
@property(nonatomic) unsigned int routeDiscoveryMode;
@property(nonatomic) BOOL isOverrideApp;
@property(retain, nonatomic) _MRDeviceInfoMessageProtobuf *deviceInfo;
@property(copy, nonatomic) NSArray *applicationPickedRoutes;
@property(copy, nonatomic) id /* CDUnknownBlockType */ endLyricsEventCallback;
@property(copy, nonatomic) id /* CDUnknownBlockType */ beginLyricsEventCallback;
@property(copy, nonatomic) id /* CDUnknownBlockType */ playbackSessionMigrateRequestCallback;
@property(copy, nonatomic) id /* CDUnknownBlockType */ playbackSessionMigrateEndCallback;
@property(copy, nonatomic) id /* CDUnknownBlockType */ playbackSessionMigrateBeginCallback;
@property(copy, nonatomic) id /* CDUnknownBlockType */ playbackSessionCallback;
@property(copy, nonatomic) id /* CDUnknownBlockType */ commandCallback;
@property(copy, nonatomic) id /* CDUnknownBlockType */ playbackQueueTransactionCallback;
@property(copy, nonatomic) id /* CDUnknownBlockType */ playbackQueueCallback;
@property(readonly, nonatomic) NSArray *nowPlayingClients;
@property(nonatomic) unsigned int volumeCapabilities;
@property(nonatomic) float volume;
- (void)dealloc;
- (id)initWithOrigin:(id)arg1;

@end

