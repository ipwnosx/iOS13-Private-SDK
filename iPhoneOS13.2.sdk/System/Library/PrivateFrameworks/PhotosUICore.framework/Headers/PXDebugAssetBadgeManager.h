//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXAssetBadgeManager.h>

#import <PhotosUICore/PXPhotosDataSourceChangeObserver-Protocol.h>

@class NSSet, PHFetchResult, PXMiroMovieProvider, PXPhotosDataSource;

@interface PXDebugAssetBadgeManager : PXAssetBadgeManager <PXPhotosDataSourceChangeObserver>
{
    PXPhotosDataSource *_curatedPhotosDataSource;
    PXMiroMovieProvider *_miroMovieProvider;
    PXPhotosDataSource *_photosDataSource;
    PHFetchResult *__photosGraphCurationAssets;
    NSSet *__miroCurationAssets;
}

@property(retain, nonatomic, setter=_setMiroCurationAssets:) NSSet *_miroCurationAssets; // @synthesize _miroCurationAssets=__miroCurationAssets;
@property(retain, nonatomic, setter=_setPhotosGraphCurationAssets:) PHFetchResult *_photosGraphCurationAssets; // @synthesize _photosGraphCurationAssets=__photosGraphCurationAssets;
@property(retain, nonatomic) PXPhotosDataSource *photosDataSource; // @synthesize photosDataSource=_photosDataSource;
// - (void).cxx_destruct;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (BOOL)_isAssetContainedInPhotosGraphCuration:(id)arg1;
- (BOOL)_isAssetContainedInMiroCuration:(id)arg1;
- (void)_updateAssets;
//  (struct PXAssetBadgeInfo)badgeInfoForAsset:(id)arg1 inCollection:(id)arg2 options:(NSUInteger)arg3;
- (void)dealloc;

@end

