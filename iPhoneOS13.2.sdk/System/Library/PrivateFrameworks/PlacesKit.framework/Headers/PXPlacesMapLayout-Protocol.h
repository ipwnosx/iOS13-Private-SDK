//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PlacesKit/PXPlacesMapPipelineComponent-Protocol.h>

@class PXPlacesMapViewPort;
@protocol PXPlacesGeotaggable, PXPlacesGeotaggedItemDataSource, PXPlacesGeotaggedItemDataSourceChange, PXPlacesMapLayoutItem, PXPlacesMapLayoutResult;

@protocol PXPlacesMapLayout <PXPlacesMapPipelineComponent>
@property(readonly) id <PXPlacesGeotaggedItemDataSource> dataSource;
- (id <PXPlacesMapLayoutItem>)layoutItemForGeotaggable:(id <PXPlacesGeotaggable>)arg1;
- (id <PXPlacesMapLayoutResult>)layoutForViewPort:(PXPlacesMapViewPort *)arg1 andDataSourceChange:(id <PXPlacesGeotaggedItemDataSourceChange>)arg2;
@end

