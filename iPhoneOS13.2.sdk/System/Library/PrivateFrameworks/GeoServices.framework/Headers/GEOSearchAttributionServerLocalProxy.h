//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOResourceManifestTileGroupObserver-Protocol.h>
#import <GeoServices/GEOSearchAttributionServerProxy-Protocol.h>

@class GEOSearchAttributionManifest, NSMapTable, NSMutableArray, geo_isolater;

__attribute__((visibility("hidden")))
@interface GEOSearchAttributionServerLocalProxy : NSObject <GEOResourceManifestTileGroupObserver, GEOSearchAttributionServerProxy>
{
    NSMapTable *_listeners;
//     struct os_unfair_lock_s _listenersLock;
    BOOL _updatingManifest;
    NSMutableArray *_updateManifestCompletionHandlers;
    NSMutableArray *_updateManifestErrorHandlers;
    GEOSearchAttributionManifest *_attributionManifest;
//     struct os_unfair_lock_s _attributionManifestLock;
    geo_isolater *_isolater;
}

// - (void).cxx_destruct;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)loadAttributionInfoForIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_loadAttributionInfoForListener:(id)arg1;
- (void)_sendError:(id)arg1 toListener:(id)arg2;
- (void)_sendInfo:(id)arg1 toListener:(id)arg2;
- (id)_attributionManifest;
- (id)init;

@end

