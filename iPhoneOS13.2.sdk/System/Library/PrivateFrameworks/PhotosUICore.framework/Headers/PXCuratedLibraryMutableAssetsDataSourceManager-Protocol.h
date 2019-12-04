//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSIndexSet, NSPredicate;
@protocol PXDisplayAsset, PXDisplayAssetCollection;

@protocol PXCuratedLibraryMutableAssetsDataSourceManager
@property(copy, nonatomic) NSPredicate *allPhotosFilterPredicate;
@property(nonatomic) long long zoomLevel;
- (void)resumeChangeDelivery:(id)arg1;
- (id)pauseChangeDeliveryWithTimeout:(double)arg1;
- (void)setTransientKeyAsset:(id <PXDisplayAsset>)arg1 forAssetCollection:(id <PXDisplayAssetCollection>)arg2 zoomLevel:(long long)arg3;
- (_Bool)forceAccurateAllSectionsIfNeeded;
- (_Bool)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2;
- (_Bool)forceAccurateSectionsIfNeeded:(NSIndexSet *)arg1 inZoomLevel:(long long)arg2;
- (_Bool)forceAccurateSectionsIfNeeded:(NSIndexSet *)arg1;
- (void)loadIfNeeded;
@end
