//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSSet;
@protocol PXPlacesGeotaggedItemDataSourceDelegate;

@protocol PXPlacesGeotaggedItemDataSource <NSObject>
@property(readonly, nonatomic) long long numberOfItems;
@property(readonly) NSSet *allItems;
@property __weak id <PXPlacesGeotaggedItemDataSourceDelegate> delegate;
// - (CDStruct_02837cd9)minimalEncompassingMapRect;
// - (NSSet *)findItemsInMapRect:(CDStruct_02837cd9)arg1;
@end

