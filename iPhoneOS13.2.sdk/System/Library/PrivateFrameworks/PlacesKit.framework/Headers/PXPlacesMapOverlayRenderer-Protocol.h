//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PlacesKit/PXPlacesMapRenderer-Protocol.h>

@class MKOverlayRenderer, PXPlacesMapView;
@protocol MKOverlay, PXPlacesGeotaggedItemDataSource, PXPlacesMapLayoutItem;

@protocol PXPlacesMapOverlayRenderer <PXPlacesMapRenderer>
@property __weak id <PXPlacesGeotaggedItemDataSource> dataSource;
- (id <MKOverlay>)overlayForLayoutItem:(id <PXPlacesMapLayoutItem>)arg1;
- (MKOverlayRenderer *)rendererForOverlay:(id <MKOverlay>)arg1 andMapView:(PXPlacesMapView *)arg2;
@end

