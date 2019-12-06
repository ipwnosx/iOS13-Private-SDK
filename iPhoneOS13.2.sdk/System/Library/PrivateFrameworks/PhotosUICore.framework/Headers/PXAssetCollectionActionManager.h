//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXActionManager.h>

@class PHFetchResult, PXDisplayTitleInfo;
@protocol PXDisplayAssetCollection;

@interface PXAssetCollectionActionManager : PXActionManager
{
    id <PXDisplayAssetCollection> _assetCollection;
    PXDisplayTitleInfo *_displayTitleInfo;
    PHFetchResult *_people;
}

@property(retain, nonatomic) PHFetchResult *people; // @synthesize people=_people;
@property(readonly, nonatomic) PXDisplayTitleInfo *displayTitleInfo; // @synthesize displayTitleInfo=_displayTitleInfo;
@property(readonly, nonatomic) id <PXDisplayAssetCollection> assetCollection; // @synthesize assetCollection=_assetCollection;
// - (void).cxx_destruct;
- (id)initWithAssetCollection:(id)arg1 displayTitleInfo:(id)arg2;
- (id)init;

@end

