//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOActiveTileGroupMigrator-Protocol.h>

@class GEOResourceManifestConfiguration;

__attribute__((visibility("hidden")))
@interface GEORegionalResourcesVersionMigrator : NSObject <GEOActiveTileGroupMigrator>
{
    GEOResourceManifestConfiguration *_manifestConfiguration;
}

// - (void).cxx_destruct;
- (id)taskForNewTileGroup:(id)arg1 inResourceManifest:(id)arg2 oldTileGroup:(id)arg3 activeScales:(id)arg4 activeScenarios:(id)arg5 dataSet:(id)arg6 updateType:(long long)arg7;
- (id)initWithManifestConfiguration:(id)arg1 mapLayerDataManager:(id)arg2;

@end

