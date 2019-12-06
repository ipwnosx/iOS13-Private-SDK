//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class GEOTileData, GEOTileKeyList, GEOTileServerProxy, NSDictionary, NSError;

@protocol GEOTileServerProxyDelegate <NSObject>
- (void)proxy:(GEOTileServerProxy *)arg1 didShrinkDiskCacheByAmount:(NSUInteger)arg2;
- (void)proxy:(GEOTileServerProxy *)arg1 canShrinkDiskCacheByAmount:(NSUInteger)arg2;
- (void)proxy:(GEOTileServerProxy *)arg1 willGoToNetworkForTiles:(GEOTileKeyList *)arg2;
- (void)proxy:(GEOTileServerProxy *)arg1 failedToLoadAllPendingTilesWithError:(NSError *)arg2;
- (void)proxy:(GEOTileServerProxy *)arg1 failedToLoadTiles:(GEOTileKeyList *)arg2 error:(NSError *)arg3;
// - (void)proxy:(GEOTileServerProxy *)arg1 loadedTile:(GEOTileData *)arg2 forKey:(const struct _GEOTileKey )arg3 info:(NSDictionary *)arg4;

@optional
- (void)proxyDidDownloadRegionalResources:(GEOTileServerProxy *)arg1;
@end

