//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PlacesKit/PXPlacesMapPipelineComponentProvider-Protocol.h>

@class PXPlacesImageCache;
@protocol PXPlacesGeotaggedItemDataSource, PXPlacesMapLayout, PXPlacesMapRenderer, PXPlacesMapSelectionHandler, PXPlacesMapUpdatePlan;

@interface PXPlacesMapPipeline : NSObject <PXPlacesMapPipelineComponentProvider>
{
    id <PXPlacesMapLayout> _layout;
    id <PXPlacesMapUpdatePlan> _updatePlan;
    id <PXPlacesMapRenderer> _renderer;
    id <PXPlacesMapSelectionHandler> _selectionHandler;
    PXPlacesImageCache *_imageCache;
}

@property(retain) PXPlacesImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(readonly) id <PXPlacesMapSelectionHandler> selectionHandler; // @synthesize selectionHandler=_selectionHandler;
@property(readonly) id <PXPlacesMapRenderer> renderer; // @synthesize renderer=_renderer;
@property(readonly) id <PXPlacesMapUpdatePlan> updatePlan; // @synthesize updatePlan=_updatePlan;
@property(readonly) id <PXPlacesMapLayout> layout; // @synthesize layout=_layout;
// - (void).cxx_destruct;
- (void)cancel;
- (id)executeRemoval;
- (id)executeWithUpdatedViewPort:(id)arg1 andDataSourceChange:(id)arg2;
@property(readonly, nonatomic) id <PXPlacesGeotaggedItemDataSource> dataSource;
- (id)initWithLayout:(id)arg1 updatePlan:(id)arg2 renderer:(id)arg3 selectionHandler:(id)arg4;

@end

