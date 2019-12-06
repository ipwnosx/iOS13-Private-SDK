//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOTileKeyList, NSMutableArray, NSMutableSet, _GEOTransitPreloadCamera;

__attribute__((visibility("hidden")))
@interface _GEOTransitRoutePreloaderData : NSObject
{
    GEOTileKeyList *_tilesLoadingOrLoaded;
    GEOTileKeyList *_tilesReceived;
    GEOTileKeyList *_tilesMissed;
    NSMutableSet *_placecardsReceived;
    NSMutableSet *_placecardsMissed;
    NSMutableArray *_preloadBatches;
    BOOL _isSufficientlyLoaded;
    NSUInteger _currentBatchGeneration;
    _GEOTransitPreloadCamera *_camera;
}

@property(retain, nonatomic) _GEOTransitPreloadCamera *camera; // @synthesize camera=_camera;
@property(nonatomic) NSUInteger currentBatchGeneration; // @synthesize currentBatchGeneration=_currentBatchGeneration;
@property(nonatomic) BOOL isSufficientlyLoaded; // @synthesize isSufficientlyLoaded=_isSufficientlyLoaded;
@property(retain, nonatomic) NSMutableArray *preloadBatches; // @synthesize preloadBatches=_preloadBatches;
@property(retain, nonatomic) NSMutableSet *placecardsMissed; // @synthesize placecardsMissed=_placecardsMissed;
@property(retain, nonatomic) NSMutableSet *placecardsReceived; // @synthesize placecardsReceived=_placecardsReceived;
@property(retain, nonatomic) GEOTileKeyList *tilesMissed; // @synthesize tilesMissed=_tilesMissed;
@property(retain, nonatomic) GEOTileKeyList *tilesReceived; // @synthesize tilesReceived=_tilesReceived;
@property(retain, nonatomic) GEOTileKeyList *tilesLoadingOrLoaded; // @synthesize tilesLoadingOrLoaded=_tilesLoadingOrLoaded;
// - (void).cxx_destruct;
- (id)init;

@end

