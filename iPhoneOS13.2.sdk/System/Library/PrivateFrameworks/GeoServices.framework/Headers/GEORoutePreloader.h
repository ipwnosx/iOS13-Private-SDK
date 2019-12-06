//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOResourceManifestTileGroupObserver-Protocol.h>
#import <GeoServices/GEORoutePreloadSession-Protocol.h>

@class GEOApplicationAuditToken, GEOComposedRoute, NSMutableDictionary;
@protocol GEORoutePreloadSessionDelegate, OS_os_log;

@interface GEORoutePreloader : NSObject <GEOResourceManifestTileGroupObserver, GEORoutePreloadSession>
{
    GEOComposedRoute *_route;
    NSMutableDictionary *_tileSetStyles;
    BOOL _loggingEnabled;
    BOOL _minimalDebuggingEnabled;
    BOOL _fullDebuggingEnabled;
    BOOL _enabled;
    BOOL _paused;
    double _currentRoutePosition;
    int _downloadState;
    id /* CDUnknownBlockType */ _batteryHandler;
    NSUInteger _networkQuality;
    id <GEORoutePreloadSessionDelegate> _delegate;
    id /* CDUnknownBlockType */ _tileKeyIsDownloadedPredicate;
    double _stepSizeInMeters;
//     struct GEOOnce_s _didTearDown;
    GEOApplicationAuditToken *_auditToken;
}

+ (id)preloaderForRoute:(id)arg1 auditToken:(id)arg2;
+ (id)preloaderForRoute:(id)arg1;
@property(readonly, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ tileKeyIsDownloadedPredicate; // @synthesize tileKeyIsDownloadedPredicate=_tileKeyIsDownloadedPredicate;
@property(copy, nonatomic) id /* CDUnknownBlockType */ batteryHandler; // @synthesize batteryHandler=_batteryHandler;
@property(nonatomic) NSUInteger networkQuality; // @synthesize networkQuality=_networkQuality;
@property(readonly, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
@property(nonatomic) __weak id <GEORoutePreloadSessionDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)tilesChanged;
- (void)reachabilityChanged:(id)arg1;
- (void)_cancelPreloadTasks;
- (void)_retryFailuresWithErrorsReset:(BOOL)arg1;
- (void)setTraits:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_os_log> *preloaderLog;
- (void)updateWithRouteMatch:(id)arg1;
// - (void)getPreloadSetCoordinates:(CDStruct_c3b9c2ee )arg1 maxLength:(NSUInteger)arg2 actualLength:(NSUInteger )arg3;
// - (int)preloadStateForTile:(const struct _GEOTileKey )arg1;
- (void)addTileSetStyle:(int)arg1 betweenZoom:(unsigned int)arg2 andZoom:(unsigned int)arg3;
- (void)_start;
- (void)start;
- (void)stop;
- (void)stopLoading;
- (void)beginLoading;
- (BOOL)loggingEnabled;
- (BOOL)fullDebuggingEnabled;
- (BOOL)minimalDebuggingEnabled;
- (BOOL)isSufficientlyLoaded;
- (void)performTearDown;
- (void)dealloc;
- (void)tearDown;
- (id)initWithRoute:(id)arg1 auditToken:(id)arg2 loggingEnabled:(BOOL)arg3 minimalDebugging:(BOOL)arg4 fullDebugging:(BOOL)arg5 batteryHandler:(CDUnknownBlockType)arg6;
- (id)initWithRoute:(id)arg1 loggingEnabled:(BOOL)arg2 minimalDebugging:(BOOL)arg3 fullDebugging:(BOOL)arg4 batteryHandler:(CDUnknownBlockType)arg5;
- (id)init;

@end

